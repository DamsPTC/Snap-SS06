/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b553ae8; end: 10b553aeb;  */

void FUN_10b553ae8(long param_1,long param_2)

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
  uVar4 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      func_0x00010b537450(uVar2,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar2;
    }
    else {
      FUN_10b54a65c();
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
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



/* Entry: 10b553aec; end: 10b553c2b;  */

void FUN_10b553aec(long param_1,long param_2)

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
  uVar4 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      func_0x00010b537450(uVar2,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar2;
    }
    else {
      FUN_10b54a65c();
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
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



/* Entry: 10b553c2c; end: 10b553c33;  */

void FUN_10b553c2c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d05b70;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 10b553c34; end: 10b553c8b;  */

void FUN_10b553c34(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d05b70;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 10b553c8c; end: 10b553cbb;  */

long * FUN_10b553c8c(long *param_1,undefined8 param_2)

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



/* Entry: 10b553cbc; end: 10b553d1b;  */

undefined8 * FUN_10b553cbc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d05c38;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x000107c2809c(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10b553d1c; end: 10b553d4b;  */

long FUN_10b553d1c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b553d4c; end: 10b553d4f;  */

long FUN_10b553d4c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b553d50; end: 10b553d63;  */

void FUN_10b553d50(void)

{
  FUN_10b553d1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b553d64; end: 10b553d6f;  */

undefined ** FUN_10b553d64(void)

{
  return &PTR_DAT_110d05c78;
}



/* Entry: 10b553d70; end: 10b553dab;  */

void FUN_10b553d70(long param_1)

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



/* Entry: 10b553dac; end: 10b553e5b;  */

long * FUN_10b553dac(long param_1,long *param_2,long *param_3)

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
    if (lVar3 == 0) goto LAB_10b553e18;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b553e18;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f7797c9);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_10b553e18:
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



/* Entry: 10b553e5c; end: 10b553ec3;  */

void FUN_10b553e5c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b553e94;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b553e94:
    iVar1 = 0;
    goto LAB_10b553e98;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b553e98:
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



/* Entry: 10b553ec4; end: 10b553ec7;  */

void FUN_10b553ec4(long param_1,long param_2)

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



/* Entry: 10b553ec8; end: 10b553f37;  */

void FUN_10b553ec8(long param_1,long param_2)

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



/* Entry: 10b553f38; end: 10b553f3f;  */

void FUN_10b553f38(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d05c38;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b553f40; end: 10b553f8f;  */

void FUN_10b553f40(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d05c38;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b553f90; end: 10b553fcb;  */

void FUN_10b553f90(void)

{
  return;
}



/* Entry: 10b553fcc; end: 10b553ff3;  */

long FUN_10b553fcc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b553ff4; end: 10b55403b;  */

undefined8 * FUN_10b553ff4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d05d00;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010b553fa4(param_1,param_3);
  return param_1;
}



/* Entry: 10b55403c; end: 10b55403f;  */

long FUN_10b55403c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b554040; end: 10b554053;  */

void FUN_10b554040(void)

{
  FUN_10b553fcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b554054; end: 10b554073;  */

undefined ** FUN_10b554054(void)

{
  return &PTR_DAT_110d05d40;
}



/* Entry: 10b554074; end: 10b55410b;  */

long * FUN_10b554074(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280b8(param_2,uVar2);
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



/* Entry: 10b55410c; end: 10b554163;  */

long FUN_10b55410c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
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



/* Entry: 10b554164; end: 10b5541a7;  */

void FUN_10b554164(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d05d00;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b5541a8; end: 10b5541d7;  */

void FUN_10b5541a8(void)

{
  return;
}



/* Entry: 10b5541d8; end: 10b5541ff;  */

long FUN_10b5541d8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b554200; end: 10b554247;  */

undefined8 * FUN_10b554200(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d05dc8;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010b5541b0(param_1,param_3);
  return param_1;
}



/* Entry: 10b554248; end: 10b55424b;  */

long FUN_10b554248(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b55424c; end: 10b55425f;  */

void FUN_10b55424c(void)

{
  FUN_10b5541d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b554260; end: 10b55427f;  */

undefined ** FUN_10b554260(void)

{
  return &PTR_DAT_110d05e08;
}



/* Entry: 10b554280; end: 10b554317;  */

long * FUN_10b554280(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280b8(param_2,uVar2);
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



/* Entry: 10b554318; end: 10b55436f;  */

long FUN_10b554318(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
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



/* Entry: 10b554370; end: 10b5543b3;  */

void FUN_10b554370(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d05dc8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b5543b4; end: 10b5543ef;  */

void FUN_10b5543b4(void)

{
  return;
}



/* Entry: 10b5543f0; end: 10b554413;  */

undefined8 FUN_10b5543f0(undefined8 param_1)

{
  func_0x00010b556650();
  return param_1;
}



/* Entry: 10b554414; end: 10b554417;  */

undefined8 FUN_10b554414(undefined8 param_1)

{
  func_0x00010b556650();
  return param_1;
}



/* Entry: 10b554418; end: 10b55442b;  */

void FUN_10b554418(void)

{
  FUN_10b5543f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b55442c; end: 10b55444b;  */

undefined ** FUN_10b55442c(void)

{
  return &PTR_DAT_110d06150;
}



/* Entry: 10b55444c; end: 10b5544bf;  */

long * FUN_10b55444c(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b5565f4();
  plVar2 = param_4;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar2 = unaff_x19;
    func_0x000105991a14();
    param_3 = param_4;
  }
  plVar3 = plVar2;
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    plVar3 = unaff_x19;
    func_0x000107c282cc();
    param_3 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b556690();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)plVar3 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)plVar3) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        plVar3 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar3 + (long)iVar5);
    }
    _memcpy(plVar3,lVar4,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar3 + (long)(int)param_3);
  }
  return plVar3;
}



/* Entry: 10b5544c0; end: 10b554527;  */

ulong FUN_10b5544c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b554528; end: 10b554553;  */

long FUN_10b554528(long param_1)

{
  func_0x00010b556650();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b554554; end: 10b554557;  */

long FUN_10b554554(long param_1)

{
  func_0x00010b556650();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b554558; end: 10b55456b;  */

void FUN_10b554558(void)

{
  FUN_10b554528();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b55456c; end: 10b554577;  */

undefined ** FUN_10b55456c(void)

{
  return &PTR_DAT_110d061a0;
}



/* Entry: 10b554578; end: 10b5545ab;  */

void FUN_10b554578(long param_1)

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



/* Entry: 10b5545ac; end: 10b554647;  */

long * FUN_10b5545ac(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long *unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x00010b5566c8(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b554610;
  }
  else if ((int)plVar1 == 0) goto LAB_10b554610;
  func_0x00010b556670();
  param_2 = param_3;
  func_0x000107c280a0(param_3,1);
  plVar4 = unaff_x22;
LAB_10b554610:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b556690();
  if ((long)plVar4 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 10b554648; end: 10b5546a7;  */

void FUN_10b554648(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010b5566b4(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b55669c();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 10b5546a8; end: 10b5546ab;  */

void FUN_10b5546a8(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b556794();
  func_0x00010b5566e0(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5566d4();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b5546ac; end: 10b55470b;  */

void FUN_10b5546ac(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b556794();
  func_0x00010b5566e0(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5566d4();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b55470c; end: 10b55473f;  */

long FUN_10b55470c(long param_1)

{
  func_0x00010b556650();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b554740; end: 10b554743;  */

long FUN_10b554740(long param_1)

{
  func_0x00010b556650();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b554744; end: 10b554757;  */

void FUN_10b554744(void)

{
  FUN_10b55470c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b554758; end: 10b554763;  */

undefined ** FUN_10b554758(void)

{
  return &PTR_DAT_110d061f8;
}



/* Entry: 10b554764; end: 10b55484b;  */

void FUN_10b554764(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00010b55677c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b535efc(unaff_x19[3]);
  }
  func_0x00010b556770();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b55484c; end: 10b55484f;  */

void FUN_10b55484c(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5565b8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x000108c6f470();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010b535e30();
      puVar1 = puVar2;
    }
  }
  func_0x00010b556744();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b556568();
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



/* Entry: 10b554850; end: 10b5548b7;  */

void FUN_10b554850(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5565b8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x000108c6f470();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010b535e30();
      puVar1 = puVar2;
    }
  }
  func_0x00010b556744();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b556568();
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



/* Entry: 10b5548b8; end: 10b55493f;  */

void FUN_10b5548b8(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b554914;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b55470c();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_10b554914;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b554914;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b554528();
    }
  }
  __ZdlPv();
LAB_10b554914:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b554940; end: 10b554973;  */

long FUN_10b554940(long param_1)

{
  func_0x00010b556650();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b5548b8(param_1);
  }
  return param_1;
}



/* Entry: 10b554974; end: 10b554977;  */

long FUN_10b554974(long param_1)

{
  func_0x00010b556650();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b5548b8(param_1);
  }
  return param_1;
}



/* Entry: 10b554978; end: 10b55498b;  */

void FUN_10b554978(void)

{
  FUN_10b554940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b55498c; end: 10b554997;  */

undefined ** FUN_10b55498c(void)

{
  return &PTR_DAT_110d06250;
}



/* Entry: 10b554998; end: 10b554aaf;  */

void FUN_10b554998(long param_1)

{
  ulong *puVar1;
  
  FUN_10b5548b8();
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



/* Entry: 10b554ab0; end: 10b554ab3;  */

void FUN_10b554ab0(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar3;
  
  func_0x00010b5565b8();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010b556788();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b554b84;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b5548b8();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_10b554850();
      goto LAB_10b554b84;
    }
    func_0x00010b5562b0();
    param_1 = puVar3;
  }
  else {
    if (iVar1 != 1) goto LAB_10b554b84;
    if (iVar2 == 1) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_10b5546ac();
      goto LAB_10b554b84;
    }
    FUN_10b55624c();
    param_1 = puVar3;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b554b84:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b556568();
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



/* Entry: 10b554ab4; end: 10b554b9f;  */

void FUN_10b554ab4(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar3;
  
  func_0x00010b5565b8();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010b556788();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b554b84;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b5548b8();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_10b554850();
      goto LAB_10b554b84;
    }
    func_0x00010b5562b0();
    param_1 = puVar3;
  }
  else {
    if (iVar1 != 1) goto LAB_10b554b84;
    if (iVar2 == 1) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_10b5546ac();
      goto LAB_10b554b84;
    }
    FUN_10b55624c();
    param_1 = puVar3;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b554b84:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b556568();
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



/* Entry: 10b554ba0; end: 10b554be3;  */

long FUN_10b554ba0(long param_1)

{
  func_0x00010b556650();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b554940();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5543f0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b554be4; end: 10b554be7;  */

long FUN_10b554be4(long param_1)

{
  func_0x00010b556650();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b554940();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5543f0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b554be8; end: 10b554bfb;  */

void FUN_10b554be8(void)

{
  FUN_10b554ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b554bfc; end: 10b554c07;  */

undefined ** FUN_10b554bfc(void)

{
  return &PTR_DAT_110d062a8;
}



/* Entry: 10b554c08; end: 10b554c57;  */

void FUN_10b554c08(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b554998(param_1[3]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b554438(param_1[4]);
    }
  }
  func_0x00010b556770();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b554c58; end: 10b554d5b;  */

long * FUN_10b554c58(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5565f4();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_4 = (long *)0x1;
    func_0x00010b556618();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    param_4 = (long *)0x2;
    func_0x00010b556618();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b556690();
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



/* Entry: 10b554d5c; end: 10b554d77;  */

long FUN_10b554d5c(long param_1)

{
  long extraout_x8;
  
  FUN_10b5544c0();
  func_0x00010b5564fc();
  return param_1 + extraout_x8;
}



/* Entry: 10b554d78; end: 10b554e0f;  */

void FUN_10b554d78(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b5565b8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b556788();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b55631c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b554ab4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10b5563b4();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b5543bc();
      }
    }
  }
  func_0x00010b556604();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b556568();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b554e10; end: 10b554e4b;  */

long FUN_10b554e10(long param_1)

{
  func_0x00010b556650();
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5543f0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b554e4c; end: 10b554e4f;  */

long FUN_10b554e4c(long param_1)

{
  func_0x00010b556650();
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5543f0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b554e50; end: 10b554e63;  */

void FUN_10b554e50(void)

{
  FUN_10b554e10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b554e64; end: 10b554e6f;  */

undefined ** FUN_10b554e64(void)

{
  return &PTR_DAT_110d062f8;
}



/* Entry: 10b554e70; end: 10b554eb3;  */

void FUN_10b554e70(ulong *param_1)

{
  ulong extraout_x8;
  
  func_0x000107c3025c(param_1 + 3);
  if ((param_1[2] & 1) != 0) {
    func_0x00010b554438(param_1[4]);
  }
  func_0x00010b556770();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b554eb4; end: 10b554f6f;  */

long * FUN_10b554eb4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  plVar1 = param_2;
  plVar3 = param_3;
  func_0x00010b5566c8(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b554f18;
  }
  else if ((int)plVar1 == 0) goto LAB_10b554f18;
  func_0x00010b556670();
  param_2 = param_3;
  func_0x000107c280a0(param_3,1);
  plVar3 = unaff_x22;
LAB_10b554f18:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x20);
    param_2 = (long *)0x2;
    func_0x00010b556618();
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b556690();
  if ((long)plVar3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar3) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar2,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar3);
}



/* Entry: 10b554f70; end: 10b554fe7;  */

long FUN_10b554f70(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010b5566b4(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = lVar2 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b554d5c(*(undefined8 *)(param_1 + 0x20));
    func_0x00010b5566a8();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b55669c();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x14) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b554fe8; end: 10b55507f;  */

void FUN_10b554fe8(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5565b8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x00010b5566e0(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010b5566d4();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      FUN_10b5563b4();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      func_0x00010b5543bc();
    }
  }
  func_0x00010b556604();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b556568();
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



/* Entry: 10b555080; end: 10b5550b3;  */

long FUN_10b555080(long param_1)

{
  func_0x00010b556650();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5543f0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5550b4; end: 10b5550b7;  */

long FUN_10b5550b4(long param_1)

{
  func_0x00010b556650();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5543f0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5550b8; end: 10b5550cb;  */

void FUN_10b5550b8(void)

{
  FUN_10b555080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5550cc; end: 10b5550d7;  */

undefined ** FUN_10b5550cc(void)

{
  return &PTR_DAT_110d06348;
}



/* Entry: 10b5550d8; end: 10b55511b;  */

void FUN_10b5550d8(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b55677c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b554438(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x22) = 0;
  *(undefined2 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 10b55511c; end: 10b5551f7;  */

long * FUN_10b55511c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b5565f4();
  plVar2 = param_1;
  if ((char)param_1[4] == '\x01') {
    func_0x00010b556678();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010b556620();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)(unaff_x20 + 0x21) == '\x01') {
    func_0x00010b556678();
    plVar3 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b556620();
    param_4 = plVar3;
  }
  if (*(char *)(unaff_x20 + 0x22) == '\x01') {
    func_0x00010b556678();
    param_4 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar3);
    func_0x00010b556620();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    param_4 = (long *)0x4;
    func_0x00010b556618();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b556690();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5551f8; end: 10b55525f;  */

void FUN_10b5551f8(void)

{
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b55677c();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_10b554d5c();
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x20) * 2 + (uint)*(byte *)(unaff_x19 + 0x21) * 2 +
          (uint)*(byte *)(unaff_x19 + 0x22) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b55669c();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 10b555260; end: 10b5552f7;  */

void FUN_10b555260(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5565b8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_10b5563b4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010b5543bc();
      puVar1 = puVar2;
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  if (*(char *)(unaff_x20 + 0x21) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x21) = 1;
  }
  if (*(char *)(unaff_x20 + 0x22) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x22) = 1;
  }
  func_0x00010b556744();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b556568();
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



/* Entry: 10b5552f8; end: 10b555323;  */

undefined8 FUN_10b5552f8(undefined8 param_1)

{
  func_0x00010b556650();
  FUN_10b555324(param_1);
  return param_1;
}



/* Entry: 10b555324; end: 10b55535b;  */

void FUN_10b555324(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b55535c; end: 10b55535f;  */

undefined8 FUN_10b55535c(undefined8 param_1)

{
  func_0x00010b556650();
  FUN_10b555324(param_1);
  return param_1;
}



/* Entry: 10b555360; end: 10b555373;  */

void FUN_10b555360(void)

{
  FUN_10b5552f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b555374; end: 10b55537f;  */

undefined ** FUN_10b555374(void)

{
  return &PTR_DAT_110d06398;
}



/* Entry: 10b555380; end: 10b5553cf;  */

void FUN_10b555380(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b535efc(param_1[3]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b535efc(param_1[4]);
    }
  }
  func_0x00010b556770();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b5553d0; end: 10b5554cb;  */

long * FUN_10b5553d0(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5565f4();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    param_4 = (long *)0x1;
    func_0x00010b556618();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    param_4 = (long *)0x2;
    func_0x00010b556618();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b556690();
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



/* Entry: 10b5554cc; end: 10b5554cf;  */

void FUN_10b5554cc(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b5565b8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b556788();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x000108c6f470();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x000108c6f470();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  func_0x00010b556604();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b556568();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5554d0; end: 10b555567;  */

void FUN_10b5554d0(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b5565b8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b556788();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x000108c6f470();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x000108c6f470();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  func_0x00010b556604();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b556568();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b555568; end: 10b5556cf;  */

undefined8 * FUN_10b555568(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d06110;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5565e8();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x000108c6ef28(param_1 + 3,param_2,param_3 + 0x18);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  FUN_10b555ec0(param_1 + 6,param_3 + 0x30);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2;
  func_0x00010b555ed0(param_1 + 9,param_3 + 0x48);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  func_0x00010b555ee0(param_1 + 0xc,param_3 + 0x60);
  lVar2 = param_3 + 0x78;
  func_0x00010b5566c0();
  param_1[0xf] = lVar2;
  lVar2 = param_3 + 0x80;
  func_0x00010b5566c0();
  param_1[0x10] = lVar2;
  lVar2 = param_3 + 0x88;
  func_0x00010b5566c0();
  param_1[0x11] = lVar2;
  lVar2 = param_3 + 0x90;
  func_0x00010b5566c0();
  param_1[0x12] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b556424(param_2,*(undefined8 *)(param_3 + 0x98));
  }
  param_1[0x13] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b5564ac(param_2,*(undefined8 *)(param_3 + 0xa0));
  }
  param_1[0x14] = param_2;
  uVar4 = *(undefined8 *)(param_3 + 0xb0);
  uVar3 = *(undefined8 *)(param_3 + 0xa8);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_3 + 0xb8);
  param_1[0x16] = uVar4;
  param_1[0x15] = uVar3;
  return param_1;
}


