/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b51cfb8; end: 10b51d063;  */

long * FUN_10b51cfb8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = param_1;
  if ((int)param_1[2] != 0) {
    plVar1 = param_1;
    func_0x00010b51d124();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar1);
    func_0x00010b51d130();
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b51d124();
    param_2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b51d130();
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



/* Entry: 10b51d064; end: 10b51d0d3;  */

ulong FUN_10b51d064(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  uVar2 = (ulong)uVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x18) = (int)uVar2;
  return uVar2;
}



/* Entry: 10b51d0d4; end: 10b51d11b;  */

void FUN_10b51d0d4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfb850;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b51d11c; end: 10b51d13b;  */

void FUN_10b51d11c(void)

{
  return;
}



/* Entry: 10b51d13c; end: 10b51d173;  */

long FUN_10b51d13c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b51d174; end: 10b51d177;  */

long FUN_10b51d174(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b51d178; end: 10b51d18b;  */

void FUN_10b51d178(void)

{
  FUN_10b51d13c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51d18c; end: 10b51d197;  */

undefined ** FUN_10b51d18c(void)

{
  return &PTR_DAT_110cfb938;
}



/* Entry: 10b51d198; end: 10b51d1df;  */

void FUN_10b51d198(long param_1)

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



/* Entry: 10b51d1e0; end: 10b51d30b;  */

long * FUN_10b51d1e0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x20);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280b8(param_2,uVar2);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_10b51d258;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_10b51d258:
    func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f776bb1);
    param_2 = param_3;
    FUN_10b51d4c4(param_3,2);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b51d2c0;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b51d2c0;
  func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f776bd3);
  param_2 = param_3;
  FUN_10b51d4c4(param_3,3);
LAB_10b51d2c0:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
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
      iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar8;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar4);
}



/* Entry: 10b51d30c; end: 10b51d46b;  */

long FUN_10b51d30c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b51d344;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b51d344:
    lVar3 = 0;
    goto LAB_10b51d348;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b51d348:
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



/* Entry: 10b51d46c; end: 10b51d473;  */

void FUN_10b51d46c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cfb8f8;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b51d474; end: 10b51d4c3;  */

void FUN_10b51d474(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfb8f8;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b51d4c4; end: 10b51d4d7;  */

long * FUN_10b51d4c4(long *param_1,undefined8 param_2)

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



/* Entry: 10b51d4d8; end: 10b51d50b;  */

long FUN_10b51d4d8(long param_1)

{
  func_0x000107c39dbc();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b51d50c; end: 10b51d50f;  */

long FUN_10b51d50c(long param_1)

{
  func_0x000107c39dbc();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b51d510; end: 10b51d523;  */

void FUN_10b51d510(void)

{
  FUN_10b51d4d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51d524; end: 10b51d52f;  */

undefined ** FUN_10b51d524(void)

{
  return &PTR_DAT_110cfbac8;
}



/* Entry: 10b51d530; end: 10b51d56b;  */

void FUN_10b51d530(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
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



/* Entry: 10b51d56c; end: 10b51d647;  */

long * FUN_10b51d56c(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar3 + 0x17);
  plVar4 = param_3;
  if (lVar1 < 0) {
    lVar1 = puVar3[1];
    if (lVar1 != 0) {
      puVar3 = (undefined8 *)*puVar3;
      goto LAB_10b51d5b0;
    }
  }
  else if (*(char *)((long)puVar3 + 0x17) != '\0') {
LAB_10b51d5b0:
    func_0x00010b51e3cc(puVar3,lVar1,param_3,&UNK_10f776bf9);
    param_2 = param_3;
    func_0x00010b51e3c0(param_3,1);
  }
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar3 + 0x17) < '\0') {
    if (puVar3[1] == 0) goto LAB_10b51d610;
    puVar3 = (undefined8 *)*puVar3;
  }
  else if (*(char *)((long)puVar3 + 0x17) == '\0') goto LAB_10b51d610;
  func_0x00010b51e3cc(puVar3);
  param_2 = param_3;
  func_0x00010b51e3c0(param_3,2);
LAB_10b51d610:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b51e400();
  if ((long)plVar4 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar2 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar2 - iVar5);
      if (iVar2 - iVar5 == 0 || iVar2 < iVar5) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar2);
  }
  _memcpy(param_2,lVar1,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 10b51d648; end: 10b51d75f;  */

long FUN_10b51d648(long param_1)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b51d680;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b51d680:
    lVar3 = 0;
    goto LAB_10b51d684;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b51d684:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b51e3e8();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b51d760; end: 10b51d7bb;  */

undefined8 * FUN_10b51d760(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cfba38;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b51e374();
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  FUN_10b51d9c8(param_1 + 2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b51d7bc; end: 10b51d7f3;  */

long FUN_10b51d7bc(long param_1)

{
  func_0x000107c39dbc();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b51d7f4; end: 10b51d7f7;  */

long FUN_10b51d7f4(long param_1)

{
  func_0x000107c39dbc();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b51d7f8; end: 10b51d80b;  */

void FUN_10b51d7f8(void)

{
  FUN_10b51d7bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51d80c; end: 10b51d817;  */

undefined ** FUN_10b51d80c(void)

{
  return &PTR_DAT_110cfbb08;
}



/* Entry: 10b51d818; end: 10b51d857;  */

void FUN_10b51d818(long param_1)

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



/* Entry: 10b51d858; end: 10b51d8ff;  */

long * FUN_10b51d858(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long extraout_x8;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x18);
  plVar3 = param_3;
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar5 * 8 + 7);
    }
    plVar3 = (long *)(ulong)*(uint *)(*puVar1 + 0x20);
    param_2 = (long *)0x1;
    func_0x000107c303cc();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b51e400();
    if ((long)plVar3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      plVar3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar3) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)plVar3;
        plVar3 = (long *)(ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar6;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar2,(ulong)plVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar3);
  }
  return param_2;
}



/* Entry: 10b51d900; end: 10b51d973;  */

long FUN_10b51d900(long param_1)

{
  ulong *puVar1;
  long extraout_x8;
  ulong uVar2;
  long extraout_x9;
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
    FUN_10b51d974();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b51e3e8();
    lVar4 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b51d974; end: 10b51d98b;  */

void FUN_10b51d974(void)

{
  FUN_10b51d648();
  FUN_10b51e340();
  return;
}



/* Entry: 10b51d98c; end: 10b51d98f;  */

void FUN_10b51d98c(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x000107c39dc0();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_10b51d9c8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b51e3b0();
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



/* Entry: 10b51d990; end: 10b51d9c7;  */

void FUN_10b51d990(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x000107c39dc0();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_10b51d9c8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b51e3b0();
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



/* Entry: 10b51d9c8; end: 10b51d9d7;  */

void FUN_10b51d9c8(long *param_1,long param_2)

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



/* Entry: 10b51d9d8; end: 10b51da03;  */

long FUN_10b51d9d8(long param_1)

{
  func_0x000107c39dbc();
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b51da04; end: 10b51da07;  */

long FUN_10b51da04(long param_1)

{
  func_0x000107c39dbc();
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b51da08; end: 10b51da1b;  */

void FUN_10b51da08(void)

{
  FUN_10b51d9d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51da1c; end: 10b51da27;  */

undefined ** FUN_10b51da1c(void)

{
  return &PTR_DAT_110cfbb48;
}



/* Entry: 10b51da28; end: 10b51da5b;  */

void FUN_10b51da28(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
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



/* Entry: 10b51da5c; end: 10b51dbbb;  */

long * FUN_10b51da5c(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  int iVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  lVar11 = 8;
  plVar6 = param_3;
  for (uVar10 = (ulong)(*(uint *)(param_1 + 0x18) &
                       ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar2 = (ulong *)(uVar4 + lVar11 + -1);
    }
    plVar6 = (long *)*puVar2;
    lVar3 = (long)*(char *)((long)plVar6 + 0x17);
    plVar9 = plVar6;
    if (lVar3 < 0) {
      lVar3 = plVar6[1];
      plVar9 = (long *)*plVar6;
    }
    func_0x000107c303d4(plVar9,lVar3,1,&UNK_10f776c37);
    plVar9 = (long *)(long)*(char *)((long)plVar6 + 0x17);
    if ((((long)plVar9 < 0) && (plVar9 = (long *)plVar6[1], 0x7f < (long)plVar9)) ||
       ((*param_3 - (long)param_2) + 0xe < (long)plVar9)) {
      plVar9 = param_3;
      func_0x00010b4d5120(param_3,1,plVar6,param_2);
    }
    else {
      *(undefined1 *)param_2 = 10;
      *(char *)((long)param_2 + 1) = (char)plVar9;
      plVar7 = plVar6;
      if (*(char *)((long)plVar6 + 0x17) < '\0') {
        plVar7 = (long *)*plVar6;
      }
      plVar6 = plVar9;
      _memcpy((undefined1 *)((long)param_2 + 2),plVar7);
      plVar9 = (long *)((undefined1 *)((long)param_2 + 2) + (long)plVar9);
    }
    lVar11 = lVar11 + 8;
    param_2 = plVar9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b51e400();
  if ((long)plVar6 < 0) {
    lVar11 = *(long *)(extraout_x8 + 8);
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar11 = extraout_x8 + 8;
  }
  if ((long)(int)plVar6 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar11,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar6);
  }
  while( true ) {
    iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar5 = (int)plVar6;
    plVar6 = (long *)(ulong)(uint)(iVar5 - iVar8);
    if (iVar5 - iVar8 == 0 || iVar5 < iVar8) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar8);
    param_2 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar5);
}



/* Entry: 10b51dbbc; end: 10b51dc3f;  */

ulong FUN_10b51dbbc(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = (ulong)uVar2;
  lVar6 = 8;
  for (uVar5 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar6 + -1);
    }
    uVar3 = *puVar1;
    func_0x000107c282a0();
    uVar4 = uVar3 + uVar4;
    lVar6 = lVar6 + 8;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b51e3e8();
    lVar6 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar6 = *(long *)(extraout_x9 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x28) = (int)uVar4;
  return uVar4;
}



/* Entry: 10b51dc40; end: 10b51dc43;  */

void FUN_10b51dc40(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x000107c39dc0();
  puVar1 = (ulong *)(param_1 + 0x10);
  func_0x00010598fce8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b51e3b0();
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



/* Entry: 10b51dc44; end: 10b51dc7b;  */

void FUN_10b51dc44(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x000107c39dc0();
  puVar1 = (ulong *)(param_1 + 0x10);
  func_0x00010598fce8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b51e3b0();
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



/* Entry: 10b51dc7c; end: 10b51dc7f;  */

undefined8 FUN_10b51dc7c(undefined8 param_1)

{
  func_0x0001002a1be0();
  func_0x0001002a1c14(param_1);
  return param_1;
}



/* Entry: 10b51dc80; end: 10b51dc93;  */

void FUN_10b51dc80(void)

{
  func_0x000107c30570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51dc94; end: 10b51dc9f;  */

undefined ** FUN_10b51dc94(void)

{
  return &PTR_DAT_110cfbb88;
}



/* Entry: 10b51dca0; end: 10b51dccf;  */

void FUN_10b51dca0(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3056c();
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



/* Entry: 10b51dcd0; end: 10b51dea7;  */

long * FUN_10b51dcd0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  long extraout_x8;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  
  plVar8 = param_3;
  plVar1 = param_2;
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x10));
    plVar8 = param_2;
    break;
  case 2:
    plVar1 = param_3;
    func_0x000107c282cc(param_3,*(undefined8 *)(param_1 + 0x10));
    plVar8 = param_2;
    break;
  case 3:
    func_0x00010b51e35c();
    func_0x00010b51e3f4();
    if (extraout_w8 == 3) {
      uVar6 = *(undefined4 *)(param_1 + 0x10);
    }
    else {
      uVar6 = 0;
    }
    puVar2 = (undefined4 *)0x1d;
    func_0x000107c280a8();
    plVar1 = (long *)(puVar2 + 1);
    *puVar2 = uVar6;
    break;
  case 4:
    func_0x00010b51e35c();
    func_0x00010b51e3f4();
    if (extraout_w8_00 == 4) {
      plVar1 = (long *)(ulong)*(byte *)(param_1 + 0x10);
    }
    else {
      plVar1 = (long *)0x0;
    }
    uVar7 = 0x20;
    func_0x000107c280a8(0x20);
    func_0x000107c280a8(plVar1,uVar7);
    break;
  case 5:
    plVar8 = (long *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
    lVar4 = (long)*(char *)((long)plVar8 + 0x17);
    plVar1 = plVar8;
    if (lVar4 < 0) {
      lVar4 = plVar8[1];
      plVar1 = (long *)*plVar8;
    }
    func_0x00010b51e3cc(plVar1,lVar4,param_3,&UNK_10f776c59);
    plVar1 = param_3;
    func_0x000107c280a0(param_3,5,plVar8,param_2);
    break;
  case 6:
    plVar8 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x20);
    plVar1 = (long *)0x6;
    goto code_r0x00010b51ddc8;
  case 7:
    plVar8 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x28);
    plVar1 = (long *)0x7;
    goto code_r0x00010b51ddc8;
  case 8:
    func_0x00010b51e35c();
    func_0x00010b51e3f4();
    if (extraout_w8_01 == 8) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      uVar7 = 0;
    }
    puVar3 = (undefined8 *)0x41;
    goto code_r0x00010b51de38;
  case 9:
    func_0x00010b51e35c();
    func_0x00010b51e3f4();
    if (extraout_w8_02 == 9) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      uVar7 = 0;
    }
    puVar3 = (undefined8 *)0x49;
code_r0x00010b51de38:
    func_0x000107c280a8();
    plVar1 = puVar3 + 1;
    *puVar3 = uVar7;
    break;
  case 10:
    plVar8 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x28);
    plVar1 = (long *)0xa;
code_r0x00010b51ddc8:
    func_0x000107c303cc();
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  func_0x00010b51e400();
  if ((long)plVar8 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    plVar8 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)plVar8) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar5 = (int)plVar8;
      plVar8 = (long *)(ulong)(uint)(iVar5 - iVar9);
      if (iVar5 - iVar9 == 0 || iVar5 < iVar9) break;
      func_0x00010b4d5738();
      lVar4 = (long)plVar1 + (long)iVar9;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar5);
  }
  _memcpy(plVar1,lVar4,(ulong)plVar8 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)plVar8);
}



/* Entry: 10b51dea8; end: 10b51df7f;  */

void FUN_10b51dea8(long param_1)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    lVar2 = (long)*(int *)(param_1 + 0x10);
    goto code_r0x00010b51df20;
  case 2:
    lVar2 = *(long *)(param_1 + 0x10);
code_r0x00010b51df20:
    uVar1 = (int)LZCOUNT(lVar2) * -9 + 0x2c0U >> 6;
    break;
  case 3:
    uVar1 = 5;
    break;
  case 4:
    uVar1 = 2;
    break;
  case 5:
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10) & 0xfffffffc;
    func_0x000107c282a0();
    goto code_r0x00010b51df4c;
  case 6:
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    func_0x00010b51df80();
    goto code_r0x00010b51df4c;
  case 7:
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    func_0x00010b51df98();
    goto code_r0x00010b51df4c;
  case 8:
  case 9:
    uVar1 = 9;
    break;
  case 10:
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    func_0x00010b51dfb0();
code_r0x00010b51df4c:
    uVar1 = uVar1 + 1;
    break;
  default:
    uVar1 = 0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b51e3e8();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    uVar1 = (int)lVar2 + uVar1;
  }
  *(uint *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 10b51df80; end: 10b51dfc7;  */

void FUN_10b51df80(void)

{
  func_0x00010bceb05c();
  FUN_10b51e340();
  return;
}



/* Entry: 10b51dfc8; end: 10b51dfcb;  */

void FUN_10b51dfc8(long param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 == 0) goto LAB_10b51e158;
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      func_0x000107c3056c(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar3;
  }
  if (9 < iVar3 - 1U) goto LAB_10b51e158;
  puVar1 = (ulong *)(param_1 + 0x10);
  switch(iVar3) {
  case 1:
    *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 0x10);
    break;
  default:
    *puVar1 = *(ulong *)(param_2 + 0x10);
    break;
  case 3:
    *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 0x10);
    break;
  case 4:
    *(undefined1 *)puVar1 = *(undefined1 *)(param_2 + 0x10);
    break;
  case 5:
    if (iVar4 != iVar3) {
      *puVar1 = (ulong)&DAT_11383d918;
    }
    puVar2 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
    if (*(int *)(param_2 + 0x1c) != 5) {
      puVar2 = &DAT_11383d918;
    }
    func_0x000107c30248(puVar1,puVar2,uVar5);
    break;
  case 6:
    if (iVar4 == iVar3) {
      func_0x00010b51e3a0();
      func_0x00010bceaeac();
      break;
    }
    func_0x000107c2ac78(uVar5,*(undefined8 *)(param_2 + 0x10));
    goto code_r0x00010b51e154;
  case 7:
    if (iVar4 == iVar3) {
      func_0x00010b51e3a0();
      FUN_10b51d990();
      break;
    }
    func_0x00010b51e29c(uVar5,*(undefined8 *)(param_2 + 0x10));
    goto code_r0x00010b51e154;
  case 9:
    *puVar1 = *(ulong *)(param_2 + 0x10);
    break;
  case 10:
    if (iVar4 == iVar3) {
      func_0x00010b51e3a0();
      FUN_10b51dc44();
      break;
    }
    FUN_10b51e2dc(uVar5,*(undefined8 *)(param_2 + 0x10));
code_r0x00010b51e154:
    *puVar1 = uVar5;
  }
LAB_10b51e158:
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



/* Entry: 10b51dfcc; end: 10b51e193;  */

void FUN_10b51dfcc(long param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 == 0) goto LAB_10b51e158;
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      func_0x000107c3056c(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar3;
  }
  if (9 < iVar3 - 1U) goto LAB_10b51e158;
  puVar1 = (ulong *)(param_1 + 0x10);
  switch(iVar3) {
  case 1:
    *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 0x10);
    break;
  default:
    *puVar1 = *(ulong *)(param_2 + 0x10);
    break;
  case 3:
    *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 0x10);
    break;
  case 4:
    *(undefined1 *)puVar1 = *(undefined1 *)(param_2 + 0x10);
    break;
  case 5:
    if (iVar4 != iVar3) {
      *puVar1 = (ulong)&DAT_11383d918;
    }
    puVar2 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
    if (*(int *)(param_2 + 0x1c) != 5) {
      puVar2 = &DAT_11383d918;
    }
    func_0x000107c30248(puVar1,puVar2,uVar5);
    break;
  case 6:
    if (iVar4 == iVar3) {
      func_0x00010b51e3a0();
      func_0x00010bceaeac();
      break;
    }
    func_0x000107c2ac78(uVar5,*(undefined8 *)(param_2 + 0x10));
    goto code_r0x00010b51e154;
  case 7:
    if (iVar4 == iVar3) {
      func_0x00010b51e3a0();
      FUN_10b51d990();
      break;
    }
    func_0x00010b51e29c(uVar5,*(undefined8 *)(param_2 + 0x10));
    goto code_r0x00010b51e154;
  case 9:
    *puVar1 = *(ulong *)(param_2 + 0x10);
    break;
  case 10:
    if (iVar4 == iVar3) {
      func_0x00010b51e3a0();
      FUN_10b51dc44();
      break;
    }
    FUN_10b51e2dc(uVar5,*(undefined8 *)(param_2 + 0x10));
code_r0x00010b51e154:
    *puVar1 = uVar5;
  }
LAB_10b51e158:
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



/* Entry: 10b51e194; end: 10b51e1cb;  */

void FUN_10b51e194(long param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b51dca0();
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 == 0) goto LAB_10b51e158;
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      func_0x000107c3056c(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar3;
  }
  if (9 < iVar3 - 1U) goto LAB_10b51e158;
  puVar1 = (ulong *)(param_1 + 0x10);
  switch(iVar3) {
  case 1:
    *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 0x10);
    break;
  default:
    *puVar1 = *(ulong *)(param_2 + 0x10);
    break;
  case 3:
    *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 0x10);
    break;
  case 4:
    *(undefined1 *)puVar1 = *(undefined1 *)(param_2 + 0x10);
    break;
  case 5:
    if (iVar4 != iVar3) {
      *puVar1 = (ulong)&DAT_11383d918;
    }
    puVar2 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
    if (*(int *)(param_2 + 0x1c) != 5) {
      puVar2 = &DAT_11383d918;
    }
    func_0x000107c30248(puVar1,puVar2,uVar5);
    break;
  case 6:
    if (iVar4 == iVar3) {
      func_0x00010b51e3a0();
      func_0x00010bceaeac();
      break;
    }
    func_0x000107c2ac78(uVar5,*(undefined8 *)(param_2 + 0x10));
    goto code_r0x00010b51e154;
  case 7:
    if (iVar4 == iVar3) {
      func_0x00010b51e3a0();
      FUN_10b51d990();
      break;
    }
    func_0x00010b51e29c(uVar5,*(undefined8 *)(param_2 + 0x10));
    goto code_r0x00010b51e154;
  case 9:
    *puVar1 = *(ulong *)(param_2 + 0x10);
    break;
  case 10:
    if (iVar4 == iVar3) {
      func_0x00010b51e3a0();
      FUN_10b51dc44();
      break;
    }
    FUN_10b51e2dc(uVar5,*(undefined8 *)(param_2 + 0x10));
code_r0x00010b51e154:
    *puVar1 = uVar5;
  }
LAB_10b51e158:
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



/* Entry: 10b51e1cc; end: 10b51e1e3;  */

void FUN_10b51e1cc(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x00010b51e390();
  }
  else {
    func_0x00010b51e368();
  }
  func_0x00010b51e40c(&PTR_FUN_110cfb998);
  return;
}



/* Entry: 10b51e1e4; end: 10b51e2db;  */

void FUN_10b51e1e4(long param_1)

{
  if (param_1 == 0) {
    func_0x00010b51e390();
  }
  else {
    func_0x00010b51e368();
  }
  func_0x00010b51e40c(&PTR_FUN_110cfb998);
  return;
}



/* Entry: 10b51e2dc; end: 10b51e33f;  */

undefined8 * FUN_10b51e2dc(undefined8 *param_1)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x000107c39dc0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b51e390();
  }
  else {
    func_0x00010b51e368();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_FUN_110cfb998;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b51e374();
  }
  func_0x00010598fd00(param_1 + 2);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b51e340; end: 10b51e447;  */

long FUN_10b51e340(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b51e448; end: 10b51e46b;  */

undefined8 FUN_10b51e448(undefined8 param_1)

{
  func_0x00010b51f128();
  return param_1;
}



/* Entry: 10b51e46c; end: 10b51e46f;  */

undefined8 FUN_10b51e46c(undefined8 param_1)

{
  func_0x00010b51f128();
  return param_1;
}



/* Entry: 10b51e470; end: 10b51e483;  */

void FUN_10b51e470(void)

{
  FUN_10b51e448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51e484; end: 10b51e4a3;  */

undefined ** FUN_10b51e484(void)

{
  return &PTR_DAT_110cfbd10;
}



/* Entry: 10b51e4a4; end: 10b51e51b;  */

long * FUN_10b51e4a4(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = param_1;
    func_0x00010b51f09c();
    param_2 = (long *)0x8;
    func_0x000107c280a8(8,lVar1);
    func_0x00010b51f0a8();
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
  if ((long)uVar2 < 0) {
    lVar1 = *(long *)(uVar3 + 8);
    uVar2 = *(ulong *)(uVar3 + 0x10);
  }
  else {
    lVar1 = uVar3 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar2) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)uVar2;
      uVar2 = (ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar1,uVar2 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar2);
}



/* Entry: 10b51e51c; end: 10b51e56b;  */

ulong FUN_10b51e51c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  uVar2 = (ulong)uVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x14) = (int)uVar2;
  return uVar2;
}



/* Entry: 10b51e56c; end: 10b51e5ff;  */

undefined8 * FUN_10b51e56c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cfbc80;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b51f130();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10b51efe0(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b51efe0(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_3 + 0x30);
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 10b51e600; end: 10b51e62b;  */

undefined8 FUN_10b51e600(undefined8 param_1)

{
  func_0x00010b51f128();
  FUN_10b51e62c(param_1);
  return param_1;
}



/* Entry: 10b51e62c; end: 10b51e663;  */

void FUN_10b51e62c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b51e448();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b51e448();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51e664; end: 10b51e667;  */

undefined8 FUN_10b51e664(undefined8 param_1)

{
  func_0x00010b51f128();
  FUN_10b51e62c(param_1);
  return param_1;
}



/* Entry: 10b51e668; end: 10b51e67b;  */

void FUN_10b51e668(void)

{
  FUN_10b51e600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51e67c; end: 10b51e687;  */

undefined ** FUN_10b51e67c(void)

{
  return &PTR_DAT_110cfbd60;
}



/* Entry: 10b51e688; end: 10b51e6eb;  */

void FUN_10b51e688(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b51e490(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b51e490(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
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
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b51e6ec; end: 10b51e8c3;  */

long * FUN_10b51e6ec(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  plVar2 = param_1;
  if ((int)param_1[5] != 0) {
    plVar3 = param_1;
    func_0x00010b51f09c();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar3);
    func_0x00010b51f0a8();
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    func_0x00010b51f09c();
    plVar3 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b51f0a8();
    param_2 = plVar3;
  }
  if ((int)param_1[6] != 0) {
    func_0x00010b51f09c();
    param_2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar3);
    func_0x00010b51f0a8();
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x4;
    func_0x00010b51f118(4,param_1[3],*(undefined4 *)(param_1[3] + 0x14));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x5;
    func_0x00010b51f118(5,param_1[4],*(undefined4 *)(param_1[4] + 0x14));
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



/* Entry: 10b51e8c4; end: 10b51e8df;  */

long FUN_10b51e8c4(long param_1)

{
  long extraout_x8;
  
  FUN_10b51e51c();
  func_0x00010b51f0f4();
  return param_1 + extraout_x8;
}



/* Entry: 10b51e8e0; end: 10b51e8e3;  */

void FUN_10b51e8e0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_10b51efe0(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        func_0x00010b51e420();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_10b51efe0(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        func_0x00010b51e420();
      }
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  func_0x00010b51f14c();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 10b51e8e4; end: 10b51e9b3;  */

void FUN_10b51e8e4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_10b51efe0(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        func_0x00010b51e420();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_10b51efe0(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        func_0x00010b51e420();
      }
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  func_0x00010b51f14c();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 10b51e9b4; end: 10b51ea43;  */

undefined8 * FUN_10b51e9b4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cfbcd0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b51f130();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x00010b51f13c();
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x00010b51f13c();
  param_1[4] = lVar1;
  lVar1 = param_3 + 0x28;
  func_0x00010b51f13c();
  param_1[5] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b51f050(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  return param_1;
}



/* Entry: 10b51ea44; end: 10b51ea6f;  */

undefined8 FUN_10b51ea44(undefined8 param_1)

{
  func_0x00010b51f128();
  FUN_10b51ea70(param_1);
  return param_1;
}



/* Entry: 10b51ea70; end: 10b51eaaf;  */

void FUN_10b51ea70(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b51e600();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51eab0; end: 10b51eab3;  */

undefined8 FUN_10b51eab0(undefined8 param_1)

{
  func_0x00010b51f128();
  FUN_10b51ea70(param_1);
  return param_1;
}



/* Entry: 10b51eab4; end: 10b51eac7;  */

void FUN_10b51eab4(void)

{
  FUN_10b51ea44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51eac8; end: 10b51ead3;  */

undefined ** FUN_10b51eac8(void)

{
  return &PTR_DAT_110cfbdc0;
}



/* Entry: 10b51ead4; end: 10b51eb33;  */

void FUN_10b51ead4(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b51e688(*(undefined8 *)(param_1 + 0x30));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 10b51eb34; end: 10b51ec77;  */

long * FUN_10b51eb34(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar6 + 0x17);
  if (lVar2 < 0) {
    lVar2 = puVar6[1];
    if (lVar2 != 0) {
      puVar6 = (undefined8 *)*puVar6;
      goto LAB_10b51eb78;
    }
  }
  else if (*(char *)((long)puVar6 + 0x17) != '\0') {
LAB_10b51eb78:
    func_0x00010b51f120(puVar6,lVar2,param_3,&UNK_10f776c7c);
    param_2 = param_3;
    func_0x00010b51f0c8(param_3,1);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    if (puVar6[1] != 0) {
      puVar6 = (undefined8 *)*puVar6;
      goto LAB_10b51ebbc;
    }
  }
  else if (*(char *)((long)puVar6 + 0x17) != '\0') {
LAB_10b51ebbc:
    func_0x00010b51f120(puVar6);
    param_2 = param_3;
    func_0x00010b51f0c8(param_3,2);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    if (puVar6[1] == 0) goto LAB_10b51ec1c;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_10b51ec1c;
  func_0x00010b51f120(puVar6);
  param_2 = param_3;
  func_0x00010b51f0c8(param_3,3);
LAB_10b51ec1c:
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x4;
    func_0x00010b51f118(4,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2);
  }
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



/* Entry: 10b51ec78; end: 10b51ed4b;  */

long FUN_10b51ec78(long param_1)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b51ecb0;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b51ecb0:
    lVar3 = 0;
    goto LAB_10b51ecb4;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b51ecb4:
  uVar1 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010b51e7e0();
    func_0x00010b51f0f4();
    lVar3 = lVar3 + lVar2 + extraout_x8 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b51ed4c; end: 10b51ed4f;  */

void FUN_10b51ed4c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong extraout_x8;
  
  uVar3 = *(ulong *)(param_1 + 8);
  uVar1 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar1 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar2,uVar3);
  }
  uVar3 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar3,uVar2);
  }
  uVar3 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar3,uVar2);
  }
  if ((*(uint *)(param_2 + 0x10) & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_10b51f050(uVar1,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar1;
    }
    else {
      FUN_10b51e8e4();
    }
  }
  func_0x00010b51f14c();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 10b51ed50; end: 10b51ee5f;  */

void FUN_10b51ed50(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong extraout_x8;
  
  uVar3 = *(ulong *)(param_1 + 8);
  uVar1 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar1 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar2,uVar3);
  }
  uVar3 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar3,uVar2);
  }
  uVar3 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar3,uVar2);
  }
  if ((*(uint *)(param_2 + 0x10) & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_10b51f050(uVar1,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar1;
    }
    else {
      FUN_10b51e8e4();
    }
  }
  func_0x00010b51f14c();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 10b51ee60; end: 10b51ee97;  */

void FUN_10b51ee60(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong extraout_x8;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b51ead4();
  uVar3 = *(ulong *)(param_1 + 8);
  uVar1 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar1 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar2,uVar3);
  }
  uVar3 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar3,uVar2);
  }
  uVar3 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar3,uVar2);
  }
  if ((*(uint *)(param_2 + 0x10) & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_10b51f050(uVar1,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar1;
    }
    else {
      FUN_10b51e8e4();
    }
  }
  func_0x00010b51f14c();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 10b51ee98; end: 10b51ef13;  */

void FUN_10b51ee98(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = uVar2;
  return;
}



/* Entry: 10b51ef14; end: 10b51efdf;  */

void FUN_10b51ef14(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110cfbc30;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b51efe0; end: 10b51f04f;  */

undefined8 * FUN_10b51efe0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110cfbc30;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  func_0x00010b51e420();
  return puVar1;
}



/* Entry: 10b51f050; end: 10b51f08f;  */

undefined8 * FUN_10b51f050(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b51f144();
  }
  else {
    FUN_10b4d80e0(param_1,0x38);
  }
  puVar3[1] = param_1;
  *puVar3 = &PTR_FUN_110cfbc80;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b51f130();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar3 + 2) = uVar1;
  *(undefined4 *)((long)puVar3 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = param_1;
    FUN_10b51efe0(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar3[3] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10b51efe0(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar3[4] = param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(param_2 + 0x30);
  puVar3[5] = uVar4;
  return puVar3;
}



/* Entry: 10b51f090; end: 10b51f15f;  */

void FUN_10b51f090(void)

{
  return;
}



/* Entry: 10b51f160; end: 10b51f217;  */

undefined * FUN_10b51f160(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((bRam000000011383d998 & 1) == 0) {
    iVar2 = 0x1383d998;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar2 != 0) {
      FUN_10b51f218();
      uVar1 = (char)iVar2;
      FUN_10b4c5a3c();
      uRam000000011383d990 = uVar1;
      param_1 = 0x1383d998;
      ___cxa_guard_release();
    }
  }
  FUN_10b51f218();
  FUN_10b4c59b8();
  if (param_1 == -1) {
    func_0x000107c280b4();
    puVar3 = &DAT_11383d918;
  }
  else {
    puVar3 = (undefined *)((long)param_1 * 0x18 + 0x11383d9a0);
  }
  return puVar3;
}



/* Entry: 10b51f218; end: 10b51f25f;  */

undefined1  [16] FUN_10b51f218(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &UNK_10e5ba084;
  auVar1._0_8_ = &PTR_DAT_110cfbe60;
  return auVar1;
}



/* Entry: 10b51f260; end: 10b51f287;  */

long FUN_10b51f260(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b51f288; end: 10b51f28b;  */

long FUN_10b51f288(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b51f28c; end: 10b51f29f;  */

void FUN_10b51f28c(void)

{
  FUN_10b51f260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51f2a0; end: 10b51f2bf;  */

undefined ** FUN_10b51f2a0(void)

{
  return &PTR_DAT_110cfc110;
}



/* Entry: 10b51f2c0; end: 10b51f35b;  */

long * FUN_10b51f2c0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = param_1;
  if ((int)param_1[2] != 0) {
    plVar1 = param_1;
    func_0x00010b51f9d4();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar1);
    func_0x00010b51f99c();
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b51f9d4();
    param_2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b51f99c();
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



/* Entry: 10b51f35c; end: 10b51f3d3;  */

long FUN_10b51f35c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b51f3d4; end: 10b51f40b;  */

void FUN_10b51f3d4(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b51f2ac();
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
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



/* Entry: 10b51f40c; end: 10b51f427;  */

undefined1  [16] FUN_10b51f40c(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x18);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x18);
  return auVar6;
}


