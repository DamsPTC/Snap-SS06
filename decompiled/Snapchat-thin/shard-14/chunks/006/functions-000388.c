/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4f6270; end: 10b4f6283;  */

void FUN_10b4f6270(void)

{
  FUN_10b4f6234();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f6284; end: 10b4f628f;  */

undefined ** FUN_10b4f6284(void)

{
  return &PTR_DAT_110cf4720;
}



/* Entry: 10b4f6290; end: 10b4f62d3;  */

void FUN_10b4f6290(long param_1)

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



/* Entry: 10b4f62d4; end: 10b4f63cb;  */

long * FUN_10b4f62d4(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_10b4f6318;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b4f6318:
    func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f775b83);
    param_2 = param_3;
    FUN_10b4f6554(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 == 0) goto LAB_10b4f6380;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_10b4f6380;
  func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f775bbc);
  param_2 = param_3;
  FUN_10b4f6554(param_3,2);
LAB_10b4f6380:
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
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)uVar2;
      uVar2 = (ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar1,uVar2 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar2);
}



/* Entry: 10b4f63cc; end: 10b4f64fb;  */

long FUN_10b4f63cc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b4f6404;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b4f6404:
    lVar3 = 0;
    goto LAB_10b4f6408;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b4f6408:
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
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b4f64fc; end: 10b4f6503;  */

void FUN_10b4f64fc(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cf46e0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b4f6504; end: 10b4f6553;  */

void FUN_10b4f6504(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf46e0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b4f6554; end: 10b4f6567;  */

long * FUN_10b4f6554(long *param_1,undefined8 param_2)

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



/* Entry: 10b4f6568; end: 10b4f657f;  */

void FUN_10b4f6568(void)

{
  FUN_10b51dea8();
  FUN_10b4f6580();
  return;
}



/* Entry: 10b4f6580; end: 10b4f65a7;  */

long FUN_10b4f6580(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b4f65a8; end: 10b4f6623;  */

undefined8 * FUN_10b4f65a8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf4798;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x00010b4f6aec();
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x00010b4f6aec();
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x00010b4f6aec();
  param_1[4] = lVar1;
  *(undefined4 *)(param_1 + 7) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  param_1[6] = *(undefined8 *)(param_3 + 0x30);
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 10b4f6624; end: 10b4f6653;  */

long FUN_10b4f6624(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4f6654(param_1);
  return param_1;
}



/* Entry: 10b4f6654; end: 10b4f6683;  */

/* WARNING: Possible PIC construction at 0x00010b4f6668: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4f666c) */

void FUN_10b4f6654(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10b4f6684; end: 10b4f6687;  */

long FUN_10b4f6684(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4f6654(param_1);
  return param_1;
}



/* Entry: 10b4f6688; end: 10b4f669b;  */

void FUN_10b4f6688(void)

{
  FUN_10b4f6624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f669c; end: 10b4f66a7;  */

undefined ** FUN_10b4f669c(void)

{
  return &PTR_DAT_110cf47d8;
}



/* Entry: 10b4f66a8; end: 10b4f66f7;  */

void FUN_10b4f66a8(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 10b4f66f8; end: 10b4f688b;  */

long * FUN_10b4f66f8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  plVar1 = param_1;
  if (param_1[5] != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,param_1[5],param_2);
    param_2 = plVar1;
  }
  puVar9 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 != 0) {
      puVar3 = (undefined8 *)*puVar9;
      goto LAB_10b4f6754;
    }
  }
  else {
    puVar3 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) != '\0') {
LAB_10b4f6754:
      func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f775bf7);
      plVar1 = param_3;
      FUN_10b4f6ae4(param_3,2,puVar9);
      param_2 = plVar1;
    }
  }
  lVar4 = (long)*(char *)((param_1[3] & 0xfffffffffffffffcU) + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)((param_1[3] & 0xfffffffffffffffcU) + 8);
  }
  if (lVar4 != 0) {
    plVar1 = param_3;
    FUN_10b4f6ae4(param_3,3);
    param_2 = plVar1;
  }
  plVar7 = plVar1;
  if ((char)param_1[6] == '\x01') {
    func_0x00010b4f6b00();
    plVar7 = (long *)(ulong)*(byte *)(param_1 + 6);
    uVar2 = 0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x000107c280a8(plVar7,uVar2);
    param_2 = plVar7;
  }
  puVar9 = (undefined8 *)(param_1[4] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 == 0) goto LAB_10b4f681c;
    puVar3 = (undefined8 *)*puVar9;
  }
  else {
    puVar3 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b4f681c;
  }
  func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f775c30);
  plVar7 = param_3;
  FUN_10b4f6ae4(param_3,5,puVar9);
  param_2 = plVar7;
LAB_10b4f681c:
  if (*(int *)((long)param_1 + 0x34) != 0) {
    func_0x00010b4f6b00();
    param_2 = (long *)(ulong)*(uint *)((long)param_1 + 0x34);
    uVar2 = 0x30;
    func_0x000107c280a8(0x30,plVar7);
    func_0x000107c280b8(param_2,uVar2);
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
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
      iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar8 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar8 - iVar10);
      if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
      func_0x00010b4d5738();
      lVar4 = (long)param_2 + (long)iVar10;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar8);
  }
  _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar5);
}



/* Entry: 10b4f688c; end: 10b4f6987;  */

void FUN_10b4f688c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b4f68c4;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b4f68c4:
    iVar1 = 0;
    goto LAB_10b4f68c8;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b4f68c8:
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c28098();
    iVar1 = iVar1 + (int)uVar2 + 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    iVar1 = iVar1 + (int)uVar2 + 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x30) * 2;
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x38) = iVar1;
  return;
}



/* Entry: 10b4f6988; end: 10b4f698b;  */

void FUN_10b4f6988(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar1,uVar2);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
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



/* Entry: 10b4f698c; end: 10b4f6a83;  */

void FUN_10b4f698c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar1,uVar2);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
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



/* Entry: 10b4f6a84; end: 10b4f6a8b;  */

void FUN_10b4f6a84(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x40);
  }
  *puVar1 = &PTR_FUN_110cf4798;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 10b4f6a8c; end: 10b4f6ae3;  */

void FUN_10b4f6a8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x40);
  }
  *puVar1 = &PTR_FUN_110cf4798;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 10b4f6ae4; end: 10b4f6b13;  */

long * FUN_10b4f6ae4(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar5;
  uint extraout_w10_00;
  long lVar6;
  long *unaff_x21;
  int iVar7;
  int iVar8;
  long lVar9;
  
  lVar6 = (long)*(char *)((long)param_3 + 0x17);
  if ((-1 < lVar6) || (lVar6 = param_3[1], lVar6 < 0x80)) {
    lVar9 = *param_1;
    uVar5 = (int)param_2 << 3;
    uVar1 = uVar5;
    func_0x0001001a5b20();
    if (lVar6 <= lVar9 + ~((long)unaff_x21 + (long)(int)uVar1) + 0x10) {
      lVar9 = (long)unaff_x21 + 2;
      for (uVar5 = uVar5 | 2; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
        *(byte *)(lVar9 + -2) = (byte)uVar5 | 0x80;
        lVar9 = lVar9 + 1;
      }
      *(byte *)(lVar9 + -2) = (byte)uVar5;
      *(char *)(lVar9 + -1) = (char)lVar6;
      plVar2 = (long *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar2 = param_3;
      }
      func_0x000107c610b4(lVar9,plVar2,lVar6);
      return (long *)(lVar9 + lVar6);
    }
  }
  func_0x00010b4d564c(param_1,param_2);
  func_0x00010b4d56cc();
  uVar5 = extraout_w10;
  while (0x7f < uVar5) {
    func_0x00010b4d576c();
    uVar5 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar4 = extraout_x8;
  while (0x7f < (uint)uVar4) {
    func_0x00010b4d5758();
    uVar4 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  iVar7 = (int)param_3;
  if ((*(char *)((long)param_1 + 0x39) == '\x01') &&
     ((*param_1 - (long)unaff_x21) + 0x10 <= (long)iVar7)) {
    plVar2 = param_1;
    func_0x000107c303e0(param_1,unaff_x21);
    plVar3 = (long *)param_1[6];
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3);
    if (((ulong)plVar3 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar2;
  }
  if (*param_1 - (long)unaff_x21 < (long)iVar7) {
    while( true ) {
      iVar8 = ((int)*param_1 - (int)unaff_x21) + 0x10;
      iVar7 = (int)param_3;
      param_3 = (long *)(ulong)(uint)(iVar7 - iVar8);
      if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
      func_0x00010b4d5738();
      lVar6 = (long)unaff_x21 + (long)iVar8;
      unaff_x21 = param_1;
      func_0x000107c303e4(param_1,lVar6);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x21 + (long)iVar7);
  }
  _memcpy(unaff_x21);
  return (long *)((long)unaff_x21 + (long)iVar7);
}



/* Entry: 10b4f6b14; end: 10b4f6b43;  */

long FUN_10b4f6b14(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4f6b44; end: 10b4f6b47;  */

long FUN_10b4f6b44(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4f6b48; end: 10b4f6b5b;  */

void FUN_10b4f6b48(void)

{
  FUN_10b4f6b14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f6b5c; end: 10b4f6b67;  */

undefined ** FUN_10b4f6b5c(void)

{
  return &PTR_DAT_110cf48e0;
}



/* Entry: 10b4f6b68; end: 10b4f6ba3;  */

void FUN_10b4f6b68(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
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



/* Entry: 10b4f6ba4; end: 10b4f6c87;  */

long * FUN_10b4f6ba4(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b4f6c10;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b4f6c10;
  }
  func_0x000107c303d4(puVar1,lVar4,1,&UNK_10f775c6d);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar2;
LAB_10b4f6c10:
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x18);
    uVar3 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280b8(param_2,uVar3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
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



/* Entry: 10b4f6c88; end: 10b4f6d13;  */

void FUN_10b4f6c88(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b4f6cc0;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b4f6cc0:
    iVar1 = 0;
    goto LAB_10b4f6cc4;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b4f6cc4:
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b4f6d14; end: 10b4f6d17;  */

void FUN_10b4f6d14(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
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



/* Entry: 10b4f6d18; end: 10b4f6de3;  */

void FUN_10b4f6d18(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
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



/* Entry: 10b4f6de4; end: 10b4f6e1b;  */

long FUN_10b4f6de4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x00010b4f6d90(param_1);
  }
  return param_1;
}



/* Entry: 10b4f6e1c; end: 10b4f6e1f;  */

long FUN_10b4f6e1c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x00010b4f6d90(param_1);
  }
  return param_1;
}



/* Entry: 10b4f6e20; end: 10b4f6e33;  */

void FUN_10b4f6e20(void)

{
  FUN_10b4f6de4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f6e34; end: 10b4f6e3f;  */

undefined ** FUN_10b4f6e34(void)

{
  return &PTR_DAT_110cf4930;
}



/* Entry: 10b4f6e40; end: 10b4f6f47;  */

void FUN_10b4f6e40(long param_1)

{
  ulong *puVar1;
  
  func_0x00010b4f6d90();
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



/* Entry: 10b4f6f48; end: 10b4f6f73;  */

long FUN_10b4f6f48(long param_1)

{
  FUN_10b4f6c88();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b4f6f74; end: 10b4f7033;  */

void FUN_10b4f6f74(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        FUN_10b4f6d18(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        func_0x00010b4f6d90(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_10b4f70bc(uVar2,*(undefined8 *)(param_2 + 0x10));
        *(ulong *)(param_1 + 0x10) = uVar2;
      }
    }
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



/* Entry: 10b4f7034; end: 10b4f7043;  */

void FUN_10b4f7034(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010b4f7164();
  }
  else {
    func_0x00010b4f714c();
  }
  *puVar1 = &PTR_FUN_110cf4850;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b4f7044; end: 10b4f70bb;  */

void FUN_10b4f7044(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4f7164();
  }
  else {
    func_0x00010b4f714c();
  }
  *puVar1 = &PTR_FUN_110cf4850;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b4f70bc; end: 10b4f713b;  */

undefined8 * FUN_10b4f70bc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4f7164();
  }
  else {
    FUN_10b4d80e0(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110cf4850;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_2 + 0x10;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[2] = lVar2;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 0x18);
  return puVar1;
}



/* Entry: 10b4f713c; end: 10b4f716b;  */

void FUN_10b4f713c(void)

{
  return;
}



/* Entry: 10b4f716c; end: 10b4f71db;  */

undefined8 * FUN_10b4f716c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf4a20;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4f7884();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b4f77d8(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_3 + 0x20);
  return param_1;
}



/* Entry: 10b4f71dc; end: 10b4f720b;  */

long FUN_10b4f71dc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4f720c(param_1);
  return param_1;
}



/* Entry: 10b4f720c; end: 10b4f7227;  */

void FUN_10b4f720c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4f7550();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f7228; end: 10b4f722b;  */

long FUN_10b4f7228(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4f720c(param_1);
  return param_1;
}



/* Entry: 10b4f722c; end: 10b4f723f;  */

void FUN_10b4f722c(void)

{
  FUN_10b4f71dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f7240; end: 10b4f724b;  */

undefined ** FUN_10b4f7240(void)

{
  return &PTR_DAT_110cf4a60;
}



/* Entry: 10b4f724c; end: 10b4f72d3;  */

void FUN_10b4f724c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b4f7294(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x20) = 0;
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



/* Entry: 10b4f72d4; end: 10b4f737f;  */

long * FUN_10b4f72d4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x20),param_2,param_3);
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    plVar2 = param_3;
    func_0x000107c28094(param_3,plVar1);
    plVar1 = (long *)(ulong)*(byte *)(param_1 + 0x20);
    uVar3 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280a8(plVar1,uVar3);
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
    if (*param_3 - (long)plVar1 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)plVar1) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar4 = (long)plVar1 + (long)iVar8;
        plVar1 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar1 + (long)iVar7);
    }
    _memcpy(plVar1,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)plVar1 + (long)(int)uVar5);
  }
  return plVar1;
}



/* Entry: 10b4f7380; end: 10b4f73df;  */

void FUN_10b4f7380(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_10b4f73e0();
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x20) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10b4f73e0; end: 10b4f740b;  */

long FUN_10b4f73e0(long param_1)

{
  FUN_10b4f76b4();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b4f740c; end: 10b4f740f;  */

void FUN_10b4f740c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_10b4f77d8(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b4f74b4(*(long *)(param_1 + 0x18));
    }
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10b4f7410; end: 10b4f74b3;  */

void FUN_10b4f7410(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_10b4f77d8(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b4f74b4(*(long *)(param_1 + 0x18));
    }
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10b4f74b4; end: 10b4f754f;  */

void FUN_10b4f74b4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
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



/* Entry: 10b4f7550; end: 10b4f757f;  */

long FUN_10b4f7550(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4f7580(param_1);
  return param_1;
}



/* Entry: 10b4f7580; end: 10b4f75a7;  */

/* WARNING: Possible PIC construction at 0x00010b4f7594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4f7598) */

void FUN_10b4f7580(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10b4f75a8; end: 10b4f75ab;  */

long FUN_10b4f75a8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4f7580(param_1);
  return param_1;
}



/* Entry: 10b4f75ac; end: 10b4f75bf;  */

void FUN_10b4f75ac(void)

{
  FUN_10b4f7550();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f75c0; end: 10b4f75cb;  */

undefined ** FUN_10b4f75c0(void)

{
  return &PTR_DAT_110cf4ab8;
}



/* Entry: 10b4f75cc; end: 10b4f76b3;  */

long * FUN_10b4f75cc(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_10b4f7610;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b4f7610:
    func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f775ca1);
    param_2 = param_3;
    func_0x00010b4f7878(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 == 0) goto LAB_10b4f7678;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_10b4f7678;
  func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f775cde);
  param_2 = param_3;
  func_0x00010b4f7878(param_3,2);
LAB_10b4f7678:
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
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)uVar2;
      uVar2 = (ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar1,uVar2 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar2);
}



/* Entry: 10b4f76b4; end: 10b4f7743;  */

long FUN_10b4f76b4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b4f76ec;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b4f76ec:
    lVar3 = 0;
    goto LAB_10b4f76f0;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b4f76f0:
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
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b4f7744; end: 10b4f7757;  */

void FUN_10b4f7744(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
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



/* Entry: 10b4f7758; end: 10b4f77d7;  */

void FUN_10b4f7758(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4f789c();
  }
  else {
    func_0x00010b4f7864();
  }
  *puVar1 = &PTR_FUN_110cf49d0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b4f77d8; end: 10b4f784f;  */

undefined8 * FUN_10b4f77d8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4f789c();
  }
  else {
    func_0x00010b4f7864();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110cf49d0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4f7884();
  }
  lVar2 = param_2 + 0x10;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[2] = lVar2;
  param_2 = param_2 + 0x18;
  func_0x000107c2809c(param_2,param_1);
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  return puVar1;
}



/* Entry: 10b4f7850; end: 10b4f78a3;  */

void FUN_10b4f7850(void)

{
  return;
}



/* Entry: 10b4f78a4; end: 10b4f78db;  */

long FUN_10b4f78a4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b4f78dc; end: 10b4f78df;  */

long FUN_10b4f78dc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b4f78e0; end: 10b4f78f3;  */

void FUN_10b4f78e0(void)

{
  FUN_10b4f78a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f78f4; end: 10b4f78ff;  */

undefined ** FUN_10b4f78f4(void)

{
  return &PTR_DAT_110cf4b90;
}



/* Entry: 10b4f7900; end: 10b4f7943;  */

void FUN_10b4f7900(long param_1)

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



/* Entry: 10b4f7944; end: 10b4f7a3b;  */

long * FUN_10b4f7944(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_10b4f7988;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b4f7988:
    func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f775d23);
    param_2 = param_3;
    FUN_10b4f7bc4(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 == 0) goto LAB_10b4f79f0;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_10b4f79f0;
  func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f775d4e);
  param_2 = param_3;
  FUN_10b4f7bc4(param_3,2);
LAB_10b4f79f0:
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
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)uVar2;
      uVar2 = (ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar1,uVar2 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar2);
}



/* Entry: 10b4f7a3c; end: 10b4f7b6b;  */

long FUN_10b4f7a3c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b4f7a74;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b4f7a74:
    lVar3 = 0;
    goto LAB_10b4f7a78;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b4f7a78:
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
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b4f7b6c; end: 10b4f7b73;  */

void FUN_10b4f7b6c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cf4b50;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b4f7b74; end: 10b4f7bc3;  */

void FUN_10b4f7b74(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf4b50;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b4f7bc4; end: 10b4f7bd7;  */

long * FUN_10b4f7bc4(long *param_1,undefined8 param_2)

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



/* Entry: 10b4f7bd8; end: 10b4f7c37;  */

undefined8 * FUN_10b4f7bd8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf4bf8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x000107c2809c(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10b4f7c38; end: 10b4f7c67;  */

long FUN_10b4f7c38(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4f7c68; end: 10b4f7c6b;  */

long FUN_10b4f7c68(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4f7c6c; end: 10b4f7c7f;  */

void FUN_10b4f7c6c(void)

{
  FUN_10b4f7c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f7c80; end: 10b4f7c8b;  */

undefined ** FUN_10b4f7c80(void)

{
  return &PTR_DAT_110cf4c38;
}



/* Entry: 10b4f7c8c; end: 10b4f7cc7;  */

void FUN_10b4f7c8c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
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



/* Entry: 10b4f7cc8; end: 10b4f7d77;  */

long * FUN_10b4f7cc8(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b4f7d34;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b4f7d34;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f775d76);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_10b4f7d34:
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



/* Entry: 10b4f7d78; end: 10b4f7ddf;  */

void FUN_10b4f7d78(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b4f7db0;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b4f7db0:
    iVar1 = 0;
    goto LAB_10b4f7db4;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b4f7db4:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 10b4f7de0; end: 10b4f7de3;  */

void FUN_10b4f7de0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
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



/* Entry: 10b4f7de4; end: 10b4f7e53;  */

void FUN_10b4f7de4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
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



/* Entry: 10b4f7e54; end: 10b4f7e5b;  */

void FUN_10b4f7e54(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110cf4bf8;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b4f7e5c; end: 10b4f7eab;  */

void FUN_10b4f7e5c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf4bf8;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b4f7eac; end: 10b4f7ebf;  */

void FUN_10b4f7eac(void)

{
  return;
}



/* Entry: 10b4f7ec0; end: 10b4f806f;  */

undefined8 * FUN_10b4f7ec0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf4ca8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_10b4f1ec4(param_1 + 3,param_2,param_3 + 0x18);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  FUN_10b4f8a0c(param_1 + 6,param_3 + 0x30);
  lVar2 = param_3 + 0x48;
  func_0x00010b4f8b38();
  param_1[9] = lVar2;
  lVar2 = param_3 + 0x50;
  func_0x00010b4f8b38();
  param_1[10] = lVar2;
  lVar2 = param_3 + 0x58;
  func_0x00010b4f8b38();
  param_1[0xb] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010b4f8b48();
  }
  param_1[0xc] = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010b4f8b48();
  }
  param_1[0xd] = lVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f8ac0(param_2,*(undefined8 *)(param_3 + 0x70));
  }
  param_1[0xe] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b4f8b28();
  }
  param_1[0xf] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b4f8b48();
  }
  param_1[0x10] = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000106af6730(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  param_1[0x11] = param_2;
  if ((uVar1 >> 6 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b4f8b28();
  }
  param_1[0x12] = param_2;
  if ((uVar1 >> 7 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b4f8b28();
  }
  param_1[0x13] = param_2;
  if ((uVar1 >> 8 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b4f8b28();
  }
  param_1[0x14] = param_2;
  return param_1;
}



/* Entry: 10b4f8070; end: 10b4f809f;  */

long FUN_10b4f8070(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4f80a0(param_1);
  return param_1;
}



/* Entry: 10b4f80a0; end: 10b4f816f;  */

long * FUN_10b4f80a0(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b4f7c38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x00010bceb594();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  FUN_10b4f8a24(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b4f8170; end: 10b4f8173;  */

long FUN_10b4f8170(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4f80a0(param_1);
  return param_1;
}



/* Entry: 10b4f8174; end: 10b4f8187;  */

void FUN_10b4f8174(void)

{
  FUN_10b4f8070();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f8188; end: 10b4f8193;  */

undefined ** FUN_10b4f8188(void)

{
  return &PTR_DAT_110cf4ce8;
}



/* Entry: 10b4f8194; end: 10b4f8297;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4f8194(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x00010b4f2070(param_1 + 0x18);
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  func_0x000107c3025c(param_1 + 0x58);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bcebce4(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bcebce4(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b4f7c8c(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(param_1 + 0x78));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010bcebce4(*(undefined8 *)(param_1 + 0x80));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x00010bceb634(*(undefined8 *)(param_1 + 0x88));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(param_1 + 0x90));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(param_1 + 0x98));
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    func_0x00010bcebb44(*(undefined8 *)(param_1 + 0xa0));
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



/* Entry: 10b4f8298; end: 10b4f8563;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b4f8298(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_10b4f82e4;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_10b4f82e4:
    func_0x00010b4f8b50(puVar7,lVar3,param_3,&UNK_10f775da4);
    param_2 = param_3;
    func_0x00010b4f8b1c(param_3,1);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    if (puVar7[1] != 0) {
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_10b4f8328;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_10b4f8328:
    func_0x00010b4f8b50(puVar7);
    param_2 = param_3;
    func_0x00010b4f8b1c(param_3,2);
  }
  iVar8 = *(int *)(param_1 + 0x20);
  for (iVar6 = 0; iVar8 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    param_2 = (long *)0x3;
    func_0x00010b4f8b04(3,*puVar1,*(undefined4 *)(*puVar1 + 0x18));
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_2 = (long *)0x4;
    func_0x00010b4f8b04(4,*(long *)(param_1 + 0x60),
                        *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x18));
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = (long *)0x5;
    func_0x00010b4f8b04(5,*(long *)(param_1 + 0x68),
                        *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x18));
  }
  iVar8 = *(int *)(param_1 + 0x38);
  for (iVar6 = 0; iVar8 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x30);
    puVar1 = (ulong *)(param_1 + 0x30);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    param_2 = (long *)0x6;
    func_0x00010b4f8b04(6,*puVar1,*(undefined4 *)(*puVar1 + 0x20));
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_2 = (long *)0x7;
    func_0x00010b4f8b04(7,*(long *)(param_1 + 0x70),
                        *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x18));
  }
  if ((uVar2 >> 3 & 1) != 0) {
    param_2 = (long *)0x8;
    func_0x00010b4f8b04(8,*(long *)(param_1 + 0x78),
                        *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x14));
  }
  if ((uVar2 >> 4 & 1) != 0) {
    param_2 = (long *)0x9;
    func_0x00010b4f8b04(9,*(long *)(param_1 + 0x80),
                        *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x18));
  }
  if ((uVar2 >> 5 & 1) != 0) {
    param_2 = (long *)0xa;
    func_0x00010b4f8b04(10,*(long *)(param_1 + 0x88),
                        *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x18));
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    if (puVar7[1] == 0) goto LAB_10b4f84b4;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b4f84b4;
  func_0x00010b4f8b50(puVar7);
  param_2 = param_3;
  func_0x00010b4f8b1c(param_3,0xb);
LAB_10b4f84b4:
  if ((uVar2 >> 6 & 1) != 0) {
    param_2 = (long *)0xc;
    func_0x00010b4f8b04(0xc,*(long *)(param_1 + 0x90),
                        *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x14));
  }
  if ((uVar2 >> 7 & 1) != 0) {
    param_2 = (long *)0xd;
    func_0x00010b4f8b04(0xd,*(long *)(param_1 + 0x98),
                        *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x14));
  }
  if ((uVar2 >> 8 & 1) != 0) {
    param_2 = (long *)0xe;
    func_0x00010b4f8b04(0xe,*(long *)(param_1 + 0xa0),
                        *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x14));
  }
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
  if ((long)(int)uVar4 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
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



/* Entry: 10b4f8564; end: 10b4f8773;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10b4f8564(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  lVar4 = (long)*(int *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar3 & 1) != 0) {
    puVar1 = (ulong *)(uVar3 + 7);
  }
  for (lVar5 = lVar4 << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
    uVar3 = *puVar1;
    func_0x000106af66c4();
    lVar4 = uVar3 + lVar4;
    puVar1 = puVar1 + 1;
  }
  uVar3 = *(ulong *)(param_1 + 0x30);
  lVar4 = lVar4 + *(int *)(param_1 + 0x38);
  puVar1 = (ulong *)(param_1 + 0x30);
  if ((uVar3 & 1) != 0) {
    puVar1 = (ulong *)(uVar3 + 7);
  }
  for (lVar5 = (long)*(int *)(param_1 + 0x38) << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
    uVar3 = *puVar1;
    FUN_10b4f7a3c();
    lVar4 = uVar3 + lVar4 + (ulong)((int)LZCOUNT((int)uVar3) * -9 + 0x160U >> 6);
    puVar1 = puVar1 + 1;
  }
  uVar3 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4f8b10();
  }
  uVar3 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4f8b10();
  }
  uVar3 = *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4f8b10();
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0xff) != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x000106af66c4(*(undefined8 *)(param_1 + 0x60));
      func_0x00010b4f8b10();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x000106af66c4(*(undefined8 *)(param_1 + 0x68));
      func_0x00010b4f8b10();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x70);
      FUN_10b4f7d78();
      lVar4 = lVar4 + lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      func_0x000105991570(*(undefined8 *)(param_1 + 0x78));
      func_0x00010b4f8b10();
    }
    if ((uVar2 >> 4 & 1) != 0) {
      func_0x000106af66c4(*(undefined8 *)(param_1 + 0x80));
      func_0x00010b4f8b10();
    }
    if ((uVar2 >> 5 & 1) != 0) {
      func_0x000106af66dc(*(undefined8 *)(param_1 + 0x88));
      func_0x00010b4f8b10();
    }
    if ((uVar2 >> 6 & 1) != 0) {
      func_0x000105991570(*(undefined8 *)(param_1 + 0x90));
      func_0x00010b4f8b10();
    }
    if ((uVar2 >> 7 & 1) != 0) {
      func_0x000105991570(*(undefined8 *)(param_1 + 0x98));
      func_0x00010b4f8b10();
    }
  }
  if ((uVar2 >> 8 & 1) != 0) {
    func_0x000105991570(*(undefined8 *)(param_1 + 0xa0));
    func_0x00010b4f8b10();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar5 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}


