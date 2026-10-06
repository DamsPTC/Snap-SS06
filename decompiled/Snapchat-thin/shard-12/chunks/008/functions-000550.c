/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098dcff4; end: 1098dd007;  */

void FUN_1098dcff4(void)

{
  FUN_1098dcf78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098dd008; end: 1098dd013;  */

undefined ** FUN_1098dd008(void)

{
  return &PTR_DAT_110b1b920;
}



/* Entry: 1098dd014; end: 1098dd07b;  */

void FUN_1098dd014(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001098d2dec(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bce80d8(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098dd07c; end: 1098dd1ab;  */

long * FUN_1098dd07c(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x1;
    func_0x0001098dd6f4(1,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x20));
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    if (puVar6[1] != 0) {
      puVar6 = (undefined8 *)*puVar6;
      goto LAB_1098dd0e0;
    }
  }
  else if (*(char *)((long)puVar6 + 0x17) != '\0') {
LAB_1098dd0e0:
    func_0x0001098dd700(puVar6);
    param_2 = param_3;
    func_0x0001098dd6e8(param_3,2);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    if (puVar6[1] == 0) goto LAB_1098dd140;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_1098dd140;
  func_0x0001098dd700(puVar6);
  param_2 = param_3;
  func_0x0001098dd6e8(param_3,3);
LAB_1098dd140:
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x4;
    func_0x0001098dd6f4(4,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x1c));
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
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
  if (*param_3 - (long)param_2 < (long)(int)uVar3) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar7);
      if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar5);
  }
  _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar3);
}



/* Entry: 1098dd1ac; end: 1098dd273;  */

long FUN_1098dd1ac(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_1098dd1e8;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_1098dd1e8:
    lVar4 = 0;
    goto LAB_1098dd1ec;
  }
  func_0x000107c282a0();
  lVar4 = uVar2 + 1;
LAB_1098dd1ec:
  uVar2 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    lVar4 = lVar4 + uVar2 + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      FUN_1098dd274();
      lVar4 = lVar4 + lVar3 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      func_0x0001059918cc();
      lVar4 = lVar4 + lVar3 + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 1098dd274; end: 1098dd29f;  */

long FUN_1098dd274(long param_1)

{
  FUN_1098d2eac();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 1098dd2a0; end: 1098dd3d3;  */

void FUN_1098dd2a0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x0001098dd694(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        func_0x0001098d2d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x000105992a88(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010bce80a4();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098dd3d4; end: 1098dd403;  */

long FUN_1098dd3d4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098dd404; end: 1098dd407;  */

long FUN_1098dd404(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098dd408; end: 1098dd41b;  */

void FUN_1098dd408(void)

{
  FUN_1098dd3d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098dd41c; end: 1098dd427;  */

undefined ** FUN_1098dd41c(void)

{
  return &PTR_DAT_110b1b968;
}



/* Entry: 1098dd428; end: 1098dd45f;  */

void FUN_1098dd428(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098dd460; end: 1098dd50b;  */

long * FUN_1098dd460(long param_1,long *param_2,long *param_3)

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
    if (lVar3 == 0) goto LAB_1098dd4c8;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_1098dd4c8;
  }
  func_0x0001098dd700(puVar1,lVar3,param_3,&UNK_10f58780d);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_1098dd4c8:
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



/* Entry: 1098dd50c; end: 1098dd5df;  */

void FUN_1098dd50c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_1098dd544;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_1098dd544:
    iVar1 = 0;
    goto LAB_1098dd548;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_1098dd548:
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



/* Entry: 1098dd5e0; end: 1098dd5ef;  */

void FUN_1098dd5e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110b1b890;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 1098dd5f0; end: 1098dd6d7;  */

void FUN_1098dd5f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110b1b890;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 1098dd6d8; end: 1098dd713;  */

void FUN_1098dd6d8(void)

{
  return;
}



/* Entry: 1098dd714; end: 1098dd73f;  */

undefined8 FUN_1098dd714(undefined8 param_1)

{
  func_0x0001098de09c();
  FUN_1098dd740(param_1);
  return param_1;
}



/* Entry: 1098dd740; end: 1098dd777;  */

void FUN_1098dd740(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bce8004();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098dd778; end: 1098dd77b;  */

undefined8 FUN_1098dd778(undefined8 param_1)

{
  func_0x0001098de09c();
  FUN_1098dd740(param_1);
  return param_1;
}



/* Entry: 1098dd77c; end: 1098dd78f;  */

void FUN_1098dd77c(void)

{
  FUN_1098dd714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098dd790; end: 1098dd79b;  */

undefined ** FUN_1098dd790(void)

{
  return &PTR_DAT_110b1bad0;
}



/* Entry: 1098dd79c; end: 1098dd7ef;  */

void FUN_1098dd79c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010bce80d8(*(undefined8 *)(param_1 + 0x28));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098dd7f0; end: 1098dd92f;  */

long * FUN_1098dd7f0(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    plVar3 = param_3;
    func_0x000107c28094(param_3,param_2);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar2 = (undefined4 *)0xd;
    func_0x000107c280a8(0xd,plVar3);
    param_2 = (long *)(puVar2 + 1);
    *puVar2 = uVar1;
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 != 0) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_1098dd860;
    }
  }
  else if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_1098dd860:
    func_0x000107c303d4(puVar8,lVar4,1,&UNK_10f58783d);
    param_2 = param_3;
    func_0x0001098de0a4(param_3,2);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_1098dd8c8;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_1098dd8c8;
  func_0x000107c303d4(puVar8,lVar4,1,&UNK_10f58786a);
  param_2 = param_3;
  func_0x0001098de0a4(param_3,3);
LAB_1098dd8c8:
  plVar3 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar3 = (long *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x1c),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar3;
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
  if (*param_3 - (long)plVar3 < (long)(int)uVar5) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)plVar3) + 0x10;
      iVar7 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar7 - iVar9);
      if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
      func_0x00010b4d5738();
      lVar4 = (long)plVar3 + (long)iVar9;
      plVar3 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar3 + (long)iVar7);
  }
  _memcpy(plVar3,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)plVar3 + (long)(int)uVar5);
}



/* Entry: 1098dd930; end: 1098dd9e3;  */

void FUN_1098dd930(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar3 + 0x17) < '\0') {
    if (*(long *)(uVar3 + 8) == 0) goto LAB_1098dd968;
  }
  else if (*(char *)(uVar3 + 0x17) == '\0') {
LAB_1098dd968:
    iVar2 = 0;
    goto LAB_1098dd96c;
  }
  func_0x000107c282a0();
  iVar2 = (int)uVar3 + 1;
LAB_1098dd96c:
  uVar3 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    iVar2 = iVar2 + (int)uVar3 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x0001059918cc();
    iVar2 = iVar2 + iVar1 + 1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = iVar2 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar3 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 1098dd9e4; end: 1098dd9e7;  */

void FUN_1098dd9e4(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098de040();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar3 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248(param_1,uVar3,puVar4);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x20) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar3 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    uVar5 = *(ulong *)(unaff_x21 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248(param_1,uVar3,uVar5);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x28);
    if (param_1 == (ulong *)0x0) {
      func_0x000105992a88();
      *(ulong **)(unaff_x21 + 0x28) = puVar2;
      param_1 = puVar2;
    }
    else {
      func_0x00010bce80a4();
    }
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098de030();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098dd9e8; end: 1098ddaeb;  */

void FUN_1098dd9e8(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098de040();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar3 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248(param_1,uVar3,puVar4);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x20) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar3 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    uVar5 = *(ulong *)(unaff_x21 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248(param_1,uVar3,uVar5);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x28);
    if (param_1 == (ulong *)0x0) {
      func_0x000105992a88();
      *(ulong **)(unaff_x21 + 0x28) = puVar2;
      param_1 = puVar2;
    }
    else {
      func_0x00010bce80a4();
    }
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098de030();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098ddaec; end: 1098ddb17;  */

undefined8 FUN_1098ddaec(undefined8 param_1)

{
  func_0x0001098de09c();
  FUN_1098ddb18(param_1);
  return param_1;
}



/* Entry: 1098ddb18; end: 1098ddb33;  */

void FUN_1098ddb18(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098d2d54();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098ddb34; end: 1098ddb37;  */

undefined8 FUN_1098ddb34(undefined8 param_1)

{
  func_0x0001098de09c();
  FUN_1098ddb18(param_1);
  return param_1;
}



/* Entry: 1098ddb38; end: 1098ddb4b;  */

void FUN_1098ddb38(void)

{
  FUN_1098ddaec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098ddb4c; end: 1098ddb57;  */

undefined ** FUN_1098ddb4c(void)

{
  return &PTR_DAT_110b1bb08;
}



/* Entry: 1098ddb58; end: 1098ddc47;  */

void FUN_1098ddb58(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098de0d8();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098d2dec(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098ddc48; end: 1098ddcaf;  */

void FUN_1098ddc48(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098de040();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x0001098dd694();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001098d2d18();
      puVar1 = puVar2;
    }
  }
  func_0x0001098de0b0();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098de030();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098ddcb0; end: 1098ddcdb;  */

undefined8 FUN_1098ddcb0(undefined8 param_1)

{
  func_0x0001098de09c();
  FUN_1098ddcdc(param_1);
  return param_1;
}



/* Entry: 1098ddcdc; end: 1098ddcf7;  */

void FUN_1098ddcdc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098dd714();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098ddcf8; end: 1098ddcfb;  */

undefined8 FUN_1098ddcf8(undefined8 param_1)

{
  func_0x0001098de09c();
  FUN_1098ddcdc(param_1);
  return param_1;
}



/* Entry: 1098ddcfc; end: 1098ddd0f;  */

void FUN_1098ddcfc(void)

{
  FUN_1098ddcb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098ddd10; end: 1098ddd1b;  */

undefined ** FUN_1098ddd10(void)

{
  return &PTR_DAT_110b1bb50;
}



/* Entry: 1098ddd1c; end: 1098dde23;  */

void FUN_1098ddd1c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098de0d8();
  if ((extraout_x8 & 1) != 0) {
    FUN_1098dd79c(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098dde24; end: 1098dde8b;  */

void FUN_1098dde24(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098de040();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_1098ddf70();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_1098dd9e8();
      puVar1 = puVar2;
    }
  }
  func_0x0001098de0b0();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098de030();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098dde8c; end: 1098ddea3;  */

void FUN_1098dde8c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x38);
  }
  *puVar1 = &PTR_FUN_110b1b9f0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 1098ddea4; end: 1098ddf6f;  */

void FUN_1098ddea4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110b1b9f0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 1098ddf70; end: 1098de027;  */

undefined8 * FUN_1098ddf70(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b1b9f0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  lVar2 = param_2 + 0x18;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[3] = lVar2;
  lVar2 = param_2 + 0x20;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[4] = lVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x000105992a88(param_1,*(undefined8 *)(param_2 + 0x28));
  }
  puVar1[5] = param_1;
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_2 + 0x30);
  return puVar1;
}



/* Entry: 1098de028; end: 1098de0e3;  */

void FUN_1098de028(void)

{
  return;
}



/* Entry: 1098de0e4; end: 1098de107;  */

undefined8 FUN_1098de0e4(undefined8 param_1)

{
  func_0x0001098e1db0();
  return param_1;
}



/* Entry: 1098de108; end: 1098de10b;  */

undefined8 FUN_1098de108(undefined8 param_1)

{
  func_0x0001098e1db0();
  return param_1;
}



/* Entry: 1098de10c; end: 1098de11f;  */

void FUN_1098de10c(void)

{
  FUN_1098de0e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098de120; end: 1098de153;  */

undefined ** FUN_1098de120(void)

{
  return &PTR_DAT_110b1c138;
}



/* Entry: 1098de154; end: 1098de22b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1098de154(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098e1c64();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001098e1bc8();
    func_0x0001098e1e10();
    func_0x0001098e1d24();
    param_4 = param_1;
  }
  if ((uVar1 & 1) != 0) {
    func_0x0001098e1bc8();
    param_4 = (long *)0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x0001098e1c10();
    param_1 = param_4;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    func_0x0001098e1bc8();
    param_4 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x0001098e1d24();
    param_1 = param_4;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    func_0x0001098e1bc8();
    param_4 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x0001098e1c10();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1dc0();
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



/* Entry: 1098de22c; end: 1098de343;  */

long FUN_1098de22c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    lVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = uVar2 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
    }
    lVar3 = uVar2 + ((ulong)(uVar1 >> 1) & 2);
    if ((uVar1 >> 3 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar3;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 1098de344; end: 1098de36f;  */

long FUN_1098de344(long param_1)

{
  func_0x0001098e1db0();
  FUN_1098e1104(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098de370; end: 1098de373;  */

long FUN_1098de370(long param_1)

{
  func_0x0001098e1db0();
  FUN_1098e1104(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098de374; end: 1098de387;  */

void FUN_1098de374(void)

{
  FUN_1098de344();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098de388; end: 1098de393;  */

undefined ** FUN_1098de388(void)

{
  return &PTR_DAT_110b1c188;
}



/* Entry: 1098de394; end: 1098de3c7;  */

void FUN_1098de394(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098e1f58();
  if (in_NG == in_OV) {
    func_0x0001098e1fb4();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098de3c8; end: 1098de497;  */

long * FUN_1098de3c8(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x0001098e1c64();
  func_0x0001098e1f48();
  while (unaff_w22 != unaff_w21) {
    func_0x0001098e1b90();
    func_0x0001098e1da8(1);
    func_0x0001098e1e40();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1dc0();
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



/* Entry: 1098de498; end: 1098de49b;  */

void FUN_1098de498(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0001098e1df0();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_1098de4d4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1cc4();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098de49c; end: 1098de4d3;  */

void FUN_1098de49c(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0001098e1df0();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_1098de4d4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1cc4();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098de4d4; end: 1098de4e3;  */

void FUN_1098de4d4(long *param_1,long param_2)

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



/* Entry: 1098de4e4; end: 1098de54f;  */

long FUN_1098de4e4(long param_1)

{
  func_0x0001098e1db0();
  func_0x000107c30258(param_1 + 0x48);
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_1098de568(param_1);
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    func_0x0001098de598(param_1);
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    func_0x0001098de5c8(param_1);
  }
  FUN_1098e112c(param_1 + 0x30);
  FUN_1098e112c(param_1 + 0x18);
  return param_1;
}



/* Entry: 1098de550; end: 1098de553;  */

long FUN_1098de550(long param_1)

{
  func_0x0001098e1db0();
  func_0x000107c30258(param_1 + 0x48);
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_1098de568(param_1);
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    func_0x0001098de598(param_1);
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    func_0x0001098de5c8(param_1);
  }
  FUN_1098e112c(param_1 + 0x30);
  FUN_1098e112c(param_1 + 0x18);
  return param_1;
}



/* Entry: 1098de554; end: 1098de567;  */

void FUN_1098de554(void)

{
  FUN_1098de4e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098de568; end: 1098de5f7;  */

void FUN_1098de568(long param_1)

{
  if (*(int *)(param_1 + 0x68) == 10) {
    func_0x000107c30258(param_1 + 0x50);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 1098de5f8; end: 1098de603;  */

undefined ** FUN_1098de5f8(void)

{
  return &PTR_DAT_110b1c1d0;
}



/* Entry: 1098de604; end: 1098de66b;  */

void FUN_1098de604(long param_1)

{
  ulong *puVar1;
  
  FUN_1098e1668(param_1 + 0x18);
  FUN_1098e1668(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000106af6874(param_1 + 0x48);
  }
  FUN_1098de568(param_1);
  func_0x0001098de598(param_1);
  func_0x0001098de5c8(param_1);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098de66c; end: 1098de8d3;  */

long * FUN_1098de66c(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  int iVar4;
  int iVar5;
  
  func_0x0001098e1c64();
  if ((int)param_1[0xd] == 1) {
    func_0x0001098e1bc8();
    func_0x0001098e1e10();
    func_0x0001098e1c10();
    param_4 = param_1;
  }
  switch(*(undefined4 *)(unaff_x20 + 0x6c)) {
  case 2:
    func_0x0001098e1bc8();
    func_0x0001098e1fdc();
    param_1 = (long *)0x10;
    func_0x000107c280a8();
    func_0x0001098e1d24();
    param_4 = param_1;
    break;
  case 3:
    func_0x0001098e1bc8();
    func_0x0001098e1fdc();
    param_1 = (long *)0x18;
    goto code_r0x0001098de7ac;
  case 4:
    param_1 = unaff_x19;
    func_0x000107c282e8();
    param_3 = param_4;
    param_4 = param_1;
    break;
  case 5:
    func_0x0001098e1bc8();
    func_0x0001098e1fdc();
    if (extraout_w8 == 5) {
      lVar3 = *(long *)(unaff_x20 + 0x58);
    }
    else {
      lVar3 = 0;
    }
    param_1 = (long *)0x29;
    func_0x000107c280a8();
    *param_1 = lVar3;
    param_4 = param_1 + 1;
    break;
  case 6:
    func_0x0001098e1dfc(*(undefined8 *)(unaff_x20 + 0x58));
    func_0x000107c280a0();
    param_4 = param_1;
    break;
  case 7:
    func_0x0001098e1bc8();
    func_0x0001098e1fdc();
    param_1 = (long *)0x38;
code_r0x0001098de7ac:
    func_0x000107c280a8();
    func_0x0001098e1c10();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x68) == 10) {
    func_0x0001098e1dfc(*(undefined8 *)(unaff_x20 + 0x50));
    func_0x000107c280a0();
    param_4 = param_1;
  }
  iVar4 = *(int *)(unaff_x20 + 0x20);
  while (iVar4 != 0) {
    func_0x0001098e1b90();
    param_1 = (long *)0xb;
    func_0x0001098e1da8();
    func_0x0001098e1e40();
  }
  iVar4 = *(int *)(unaff_x20 + 0x38);
  while (iVar4 != 0) {
    func_0x0001098e1b90();
    param_1 = (long *)0xc;
    func_0x0001098e1da8();
    func_0x0001098e1e40();
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x70) == 0xd) {
    func_0x0001098e1bc8();
    plVar2 = (long *)0x68;
    func_0x000107c280a8(0x68,param_1);
    func_0x0001098e1c10();
    param_4 = plVar2;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001098e1dfc(*(undefined8 *)(unaff_x20 + 0x48));
    func_0x000107c280a0();
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x70) == 0x10) {
    func_0x0001098e1dfc(*(undefined8 *)(unaff_x20 + 0x60));
    func_0x000107c280a0();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001098e1dc0();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar3,(ulong)param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar4 = (int)param_3;
    uVar1 = iVar4 - iVar5;
    param_3 = (long *)(ulong)uVar1;
    if (uVar1 == 0 || iVar4 < iVar5) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar4);
}



/* Entry: 1098de8d4; end: 1098dea43;  */

long FUN_1098de8d4(ulong param_1)

{
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  long extraout_x8;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  long unaff_x22;
  long lVar1;
  
  func_0x0001098e1ffc();
  func_0x0001098e1d40();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    param_1 = *unaff_x21;
    FUN_1098dea44();
    unaff_x20 = param_1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x0001098e1d8c();
  for (lVar1 = 0; lVar1 != 0; lVar1 = lVar1 + -8) {
    param_1 = *unaff_x21;
    FUN_1098dea44();
    unaff_x20 = param_1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    param_1 = *(ulong *)(unaff_x19 + 0x48) & 0xfffffffffffffffc;
    func_0x000107c28098();
    unaff_x20 = unaff_x20 + param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x68) == 10) {
    func_0x0001098e1dcc(*(undefined8 *)(unaff_x19 + 0x50));
    unaff_x20 = unaff_x20 + param_1 + 1;
  }
  else if (*(int *)(unaff_x19 + 0x68) == 1) {
    func_0x0001098e1fc4(*(undefined8 *)(unaff_x19 + 0x50));
    func_0x0001098e1f74(extraout_w9 + extraout_w8 * -9);
  }
  switch(*(undefined4 *)(unaff_x19 + 0x6c)) {
  case 2:
    unaff_x20 = unaff_x20 + 2;
    break;
  case 3:
  case 4:
  case 7:
    func_0x0001098e1fc4(*(undefined8 *)(unaff_x19 + 0x58));
    func_0x0001098e1f74(extraout_w9_00 + extraout_w8_00 * -9);
    break;
  case 5:
    unaff_x20 = unaff_x20 + 9;
    break;
  case 6:
    func_0x0001098e1dcc(*(undefined8 *)(unaff_x19 + 0x58));
    unaff_x20 = unaff_x20 + param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x70) == 0xd) {
    func_0x0001098e1fc4(*(undefined8 *)(unaff_x19 + 0x60));
    func_0x0001098e1f74(extraout_w9_01 + extraout_w8_01 * -9);
  }
  else if (*(int *)(unaff_x19 + 0x70) == 0x10) {
    func_0x0001098e1dcc(*(undefined8 *)(unaff_x19 + 0x60));
    unaff_x20 = unaff_x20 + param_1 + 2;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001098e1e9c();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x14) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 1098dea44; end: 1098dea5f;  */

long FUN_1098dea44(long param_1)

{
  long extraout_x8;
  
  FUN_1098de8d4();
  func_0x0001098e1bb0();
  return param_1 + extraout_x8;
}



/* Entry: 1098dea60; end: 1098dec83;  */

void FUN_1098dea60(void)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098e1e30();
  FUN_1098dec84(unaff_x21 + 0x18,unaff_x20 + 0x18);
  FUN_1098dec84(unaff_x21 + 0x30);
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | 1;
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001098e1e88();
    }
    func_0x000107c30248(unaff_x21 + 0x48);
  }
  func_0x0001098e1f28();
  iVar1 = *(int *)(unaff_x20 + 0x68);
  if (iVar1 != 0) {
    iVar2 = *(int *)(unaff_x21 + 0x68);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        FUN_1098de568();
      }
      *(int *)(unaff_x21 + 0x68) = iVar1;
    }
    if (iVar1 == 10) {
      if (iVar2 != 10) {
        *(undefined **)(unaff_x21 + 0x50) = &DAT_11383d918;
      }
      func_0x0001098e1fbc(unaff_x21 + 0x50);
    }
    else if (iVar1 == 1) {
      *(undefined8 *)(unaff_x21 + 0x50) = *(undefined8 *)(unaff_x20 + 0x50);
    }
  }
  iVar1 = *(int *)(unaff_x20 + 0x6c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(unaff_x21 + 0x6c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        func_0x0001098de598();
      }
      *(int *)(unaff_x21 + 0x6c) = iVar1;
    }
    switch(iVar1) {
    case 2:
      *(undefined1 *)(unaff_x21 + 0x58) = *(undefined1 *)(unaff_x20 + 0x58);
      break;
    case 3:
    case 4:
    case 7:
      *(undefined8 *)(unaff_x21 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
      break;
    case 5:
      *(undefined8 *)(unaff_x21 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
      break;
    case 6:
      if (iVar2 != iVar1) {
        *(undefined **)(unaff_x21 + 0x58) = &DAT_11383d918;
      }
      func_0x0001098e1fbc(unaff_x21 + 0x58);
    }
  }
  iVar1 = *(int *)(unaff_x20 + 0x70);
  if (iVar1 != 0) {
    iVar2 = *(int *)(unaff_x21 + 0x70);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        func_0x0001098de5c8();
      }
      *(int *)(unaff_x21 + 0x70) = iVar1;
    }
    if (iVar1 == 0xd) {
      *(undefined8 *)(unaff_x21 + 0x60) = *(undefined8 *)(unaff_x20 + 0x60);
    }
    else if (iVar1 == 0x10) {
      if (iVar2 != 0x10) {
        *(undefined **)(unaff_x21 + 0x60) = &DAT_11383d918;
      }
      func_0x0001098e1fbc(unaff_x21 + 0x60);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1de4();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098dec84; end: 1098dec93;  */

void FUN_1098dec84(long *param_1,long param_2)

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



/* Entry: 1098dec94; end: 1098decbb;  */

undefined8 FUN_1098dec94(undefined8 param_1)

{
  func_0x0001098e1db0();
  func_0x0001098e1e28();
  return param_1;
}



/* Entry: 1098decbc; end: 1098decbf;  */

undefined8 FUN_1098decbc(undefined8 param_1)

{
  func_0x0001098e1db0();
  func_0x0001098e1e28();
  return param_1;
}



/* Entry: 1098decc0; end: 1098decd3;  */

void FUN_1098decc0(void)

{
  FUN_1098dec94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098decd4; end: 1098decdf;  */

undefined ** FUN_1098decd4(void)

{
  return &PTR_DAT_110b1c218;
}



/* Entry: 1098dece0; end: 1098ded13;  */

void FUN_1098dece0(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001098e1f1c();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098e1e08();
  }
  func_0x0001098e1e78();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1098ded14; end: 1098ded7f;  */

long * FUN_1098ded14(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098e1c64();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001098e1bc8();
    func_0x0001098e1d30();
    func_0x0001098e1c10();
    param_4 = param_1;
  }
  if ((uVar1 & 1) != 0) {
    func_0x0001098e1c38();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1dc0();
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



/* Entry: 1098ded80; end: 1098dede7;  */

void FUN_1098ded80(int param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  uint unaff_w20;
  
  func_0x0001098e1d60();
  if ((bool)in_ZR) {
    param_1 = 0;
  }
  else {
    if ((unaff_w20 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x0001098e1cec();
      param_1 = param_1 + 1;
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0001098e1c1c(*(undefined8 *)(unaff_x19 + 0x20));
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001098e1e9c();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1098dede8; end: 1098dee37;  */

void FUN_1098dede8(ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  uint unaff_w21;
  
  func_0x0001098e1d10();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      func_0x0001098e1c4c();
      if ((param_3 & 1) != 0) {
        func_0x0001098e1e88();
      }
      func_0x0001098e1d04();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      func_0x0001098e1fd0();
    }
  }
  func_0x0001098e1cb0();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098e1cc4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098dee38; end: 1098dee5f;  */

undefined8 FUN_1098dee38(undefined8 param_1)

{
  func_0x0001098e1db0();
  func_0x0001098e1e28();
  return param_1;
}



/* Entry: 1098dee60; end: 1098dee63;  */

undefined8 FUN_1098dee60(undefined8 param_1)

{
  func_0x0001098e1db0();
  func_0x0001098e1e28();
  return param_1;
}



/* Entry: 1098dee64; end: 1098dee77;  */

void FUN_1098dee64(void)

{
  FUN_1098dee38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098dee78; end: 1098dee83;  */

undefined ** FUN_1098dee78(void)

{
  return &PTR_DAT_110b1c268;
}



/* Entry: 1098dee84; end: 1098deeb7;  */

void FUN_1098dee84(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001098e1f1c();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098e1e08();
  }
  func_0x0001098e1e78();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1098deeb8; end: 1098def23;  */

long * FUN_1098deeb8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098e1c64();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001098e1bc8();
    func_0x0001098e1d30();
    func_0x0001098e1c10();
    param_4 = param_1;
  }
  if ((uVar1 & 1) != 0) {
    func_0x0001098e1c38();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1dc0();
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



/* Entry: 1098def24; end: 1098def8b;  */

void FUN_1098def24(int param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  uint unaff_w20;
  
  func_0x0001098e1d60();
  if ((bool)in_ZR) {
    param_1 = 0;
  }
  else {
    if ((unaff_w20 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x0001098e1cec();
      param_1 = param_1 + 1;
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0001098e1c1c(*(undefined8 *)(unaff_x19 + 0x20));
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001098e1e9c();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1098def8c; end: 1098defdb;  */

void FUN_1098def8c(ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  uint unaff_w21;
  
  func_0x0001098e1d10();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      func_0x0001098e1c4c();
      if ((param_3 & 1) != 0) {
        func_0x0001098e1e88();
      }
      func_0x0001098e1d04();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      func_0x0001098e1fd0();
    }
  }
  func_0x0001098e1cb0();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098e1cc4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098defdc; end: 1098df007;  */

undefined8 * FUN_1098defdc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110b1bf18;
  param_1[1] = param_2;
  FUN_1098df008();
  return param_1;
}



/* Entry: 1098df008; end: 1098df027;  */

void FUN_1098df008(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 1098df028; end: 1098df053;  */

undefined8 FUN_1098df028(undefined8 param_1)

{
  func_0x0001098e1db0();
  FUN_1098df054(param_1);
  return param_1;
}



/* Entry: 1098df054; end: 1098df077;  */

long FUN_1098df054(long param_1)

{
  if (*(int *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  func_0x0001088f2648(param_1 + 0x40);
  FUN_1098e112c(param_1 + 0x28);
  func_0x0001088f2648(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 1098df078; end: 1098df08b;  */

void FUN_1098df078(void)

{
  FUN_1098df028();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098df08c; end: 1098df097;  */

undefined ** FUN_1098df08c(void)

{
  return &PTR_DAT_110b1c2c0;
}



/* Entry: 1098df098; end: 1098df0ef;  */

void FUN_1098df098(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_1098e1668(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1098df0f0; end: 1098df2e3;  */

long * FUN_1098df0f0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *plVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  
  func_0x0001098e1c64();
  uVar1 = *(uint *)(param_1 + 3);
  for (lVar7 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 3 != lVar7;
      lVar7 = lVar7 + 8) {
    func_0x0001098e1bc8();
    param_4 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x0001098e1c10();
    param_1 = param_4;
  }
  iVar6 = *(int *)(unaff_x20 + 0x30);
  while (iVar6 != 0) {
    func_0x0001098e1b90();
    param_1 = (long *)0x4;
    func_0x0001098e1da8();
    func_0x0001098e1e40();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  plVar5 = param_1;
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001098e1bc8();
    plVar5 = (long *)(ulong)*(uint *)(unaff_x20 + 0x58);
    uVar2 = 0x48;
    func_0x000107c280a8(0x48,param_1);
    func_0x000107c280b8(plVar5,uVar2);
    param_4 = plVar5;
  }
  plVar3 = plVar5;
  if (*(int *)(unaff_x20 + 0x70) == 10) {
    func_0x0001098e1bc8();
    plVar3 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar5);
    func_0x0001098e1c10();
    param_4 = plVar3;
  }
  plVar5 = plVar3;
  if ((uVar1 & 1) != 0) {
    func_0x0001098e1bc8();
    plVar5 = (long *)0x58;
    func_0x000107c280a8(0x58,plVar3);
    func_0x0001098e1c10();
    param_4 = plVar5;
  }
  plVar3 = plVar5;
  if (*(int *)(unaff_x20 + 0x74) == 0x1e) {
    func_0x0001098e1bc8();
    plVar3 = (long *)0xf0;
    func_0x000107c280a8(0xf0,plVar5);
    func_0x0001098e1c10();
    param_4 = plVar3;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x40);
  for (lVar7 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 3 != lVar7;
      lVar7 = lVar7 + 8) {
    func_0x0001098e1bc8();
    param_4 = (long *)0x120;
    func_0x000107c280a8(0x120,plVar3);
    func_0x0001098e1c10();
    plVar3 = param_4;
  }
  if (*(int *)(unaff_x20 + 0x74) == 0x2c) {
    func_0x0001098e1bc8();
    if (*(int *)(unaff_x20 + 0x74) == 0x2c) {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
    }
    else {
      uVar2 = 0;
    }
    puVar4 = (undefined8 *)0x161;
    func_0x000107c280a8(0x161,plVar3);
    param_4 = puVar4 + 1;
    *puVar4 = uVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001098e1dc0();
  if ((long)param_3 < 0) {
    lVar7 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar7 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar7,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar6 = (int)param_3;
    uVar1 = iVar6 - iVar8;
    param_3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar6 < iVar8) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar6);
}



/* Entry: 1098df2e4; end: 1098df41b;  */

void FUN_1098df2e4(long param_1)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  uint extraout_w8;
  uint uVar4;
  int extraout_w8_00;
  long extraout_x8;
  long lVar5;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  ulong uVar6;
  long lVar7;
  
  lVar5 = param_1 + 0x18;
  func_0x00010b4d3edc();
  uVar6 = *(ulong *)(param_1 + 0x28);
  lVar5 = lVar5 + (ulong)*(uint *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x30);
  iVar3 = (int)lVar5;
  puVar1 = (ulong *)(param_1 + 0x28);
  if ((uVar6 & 1) != 0) {
    puVar1 = (ulong *)(uVar6 + 7);
  }
  for (lVar7 = (long)*(int *)(param_1 + 0x30) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    uVar6 = *puVar1;
    FUN_1098dea44();
    lVar5 = uVar6 + lVar5;
    iVar3 = (int)lVar5;
    puVar1 = puVar1 + 1;
  }
  iVar2 = (int)param_1 + 0x40;
  func_0x00010b4d3edc();
  iVar3 = iVar2 + iVar3 + *(int *)(param_1 + 0x40) * 2;
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 3) != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x0001098e1f98();
      iVar3 = ((uint)(extraout_w10 + extraout_w9 * -9) >> 6) + iVar3;
      uVar4 = extraout_w8;
    }
    if ((uVar4 >> 1 & 1) != 0) {
      iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x58)) * -9 + 0x280U >> 6) + 1;
    }
  }
  if (*(int *)(param_1 + 0x70) == 10) {
    func_0x0001098e1fc4(*(undefined8 *)(param_1 + 0x60));
    iVar3 = ((uint)(extraout_w9_00 + extraout_w8_00 * -9) >> 6) + iVar3;
  }
  if (*(int *)(param_1 + 0x74) == 0x2c) {
    iVar3 = iVar3 + 10;
  }
  else if (*(int *)(param_1 + 0x74) == 0x1e) {
    iVar3 = iVar3 + ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x68)) * -9 + 0x280U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001098e1e9c();
    lVar5 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar5 = *(long *)(extraout_x9 + 0x10);
    }
    iVar3 = (int)lVar5 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 1098df41c; end: 1098df41f;  */

void FUN_1098df41c(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001098e1df0();
  func_0x0001088f1584(param_1 + 0x18,param_2 + 0x18);
  FUN_1098dec84(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar3 = (ulong *)(unaff_x19 + 0x40);
  func_0x0001088f1584();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x50);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x58) = *(undefined4 *)(unaff_x20 + 0x58);
    }
  }
  *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x70);
  if (iVar2 != 0) {
    if (*(int *)(unaff_x19 + 0x70) != iVar2) {
      *(int *)(unaff_x19 + 0x70) = iVar2;
    }
    if (iVar2 == 10) {
      *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x20 + 0x60);
    }
  }
  iVar2 = *(int *)(unaff_x20 + 0x74);
  if (iVar2 != 0) {
    if (*(int *)(unaff_x19 + 0x74) != iVar2) {
      *(int *)(unaff_x19 + 0x74) = iVar2;
    }
    if (iVar2 == 0x2c) {
      *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x68);
    }
    else if (iVar2 == 0x1e) {
      *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x68);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1cc4();
    if ((*puVar3 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098df420; end: 1098df503;  */

void FUN_1098df420(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001098e1df0();
  func_0x0001088f1584(param_1 + 0x18,param_2 + 0x18);
  FUN_1098dec84(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar3 = (ulong *)(unaff_x19 + 0x40);
  func_0x0001088f1584();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x50);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x58) = *(undefined4 *)(unaff_x20 + 0x58);
    }
  }
  *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x70);
  if (iVar2 != 0) {
    if (*(int *)(unaff_x19 + 0x70) != iVar2) {
      *(int *)(unaff_x19 + 0x70) = iVar2;
    }
    if (iVar2 == 10) {
      *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x20 + 0x60);
    }
  }
  iVar2 = *(int *)(unaff_x20 + 0x74);
  if (iVar2 != 0) {
    if (*(int *)(unaff_x19 + 0x74) != iVar2) {
      *(int *)(unaff_x19 + 0x74) = iVar2;
    }
    if (iVar2 == 0x2c) {
      *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x68);
    }
    else if (iVar2 == 0x1e) {
      *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x68);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098e1cc4();
    if ((*puVar3 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098df504; end: 1098df533;  */

void FUN_1098df504(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1098df534; end: 1098df557;  */

undefined8 FUN_1098df534(undefined8 param_1)

{
  func_0x0001098e1db0();
  return param_1;
}


