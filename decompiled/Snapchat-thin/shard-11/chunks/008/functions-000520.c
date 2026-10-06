/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088fcde4; end: 1088fcfdf;  */

void FUN_1088fcde4(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108901838();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901cdc();
    if (param_1 == (ulong *)0x0) {
      func_0x000108901b1c();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x20) != 0) {
    unaff_x21[4] = *(ulong *)(unaff_x20 + 0x20);
  }
  func_0x00010890198c();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 == 0) goto LAB_1088fcee0;
  iVar2 = (int)unaff_x21[6];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x0001088fcac0();
    }
    *(int *)(unaff_x21 + 6) = iVar1;
  }
  if (iVar1 == 4) {
    if (iVar2 == 4) {
      param_1 = (ulong *)unaff_x21[5];
      FUN_108905d54();
      goto LAB_1088fcee0;
    }
    func_0x0001088b6ce4();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 3) goto LAB_1088fcee0;
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[5];
      func_0x0001088fcefc();
      goto LAB_1088fcee0;
    }
    FUN_10890151c();
    param_1 = unaff_x22;
  }
  unaff_x21[5] = (ulong)param_1;
LAB_1088fcee0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fcfe0; end: 1088fd04f;  */

void FUN_1088fcfe0(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108901b74();
  FUN_1088fcc6c();
  func_0x000108901e6c();
  func_0x000108901838();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901cdc();
    if (param_1 == (ulong *)0x0) {
      func_0x000108901b1c();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x20) != 0) {
    unaff_x21[4] = *(ulong *)(unaff_x20 + 0x20);
  }
  func_0x00010890198c();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 == 0) goto LAB_1088fcee0;
  iVar2 = (int)unaff_x21[6];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x0001088fcac0();
    }
    *(int *)(unaff_x21 + 6) = iVar1;
  }
  if (iVar1 == 4) {
    if (iVar2 == 4) {
      param_1 = (ulong *)unaff_x21[5];
      FUN_108905d54();
      goto LAB_1088fcee0;
    }
    func_0x0001088b6ce4();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 3) goto LAB_1088fcee0;
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[5];
      func_0x0001088fcefc();
      goto LAB_1088fcee0;
    }
    FUN_10890151c();
    param_1 = unaff_x22;
  }
  unaff_x21[5] = (ulong)param_1;
LAB_1088fcee0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fd050; end: 1088fd0a3;  */

long FUN_1088fd050(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088fc38c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1088b93c4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fd0a4; end: 1088fd0b7;  */

void FUN_1088fd0a4(void)

{
  FUN_1088fd050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fd0b8; end: 1088fd0c3;  */

undefined ** FUN_1088fd0b8(void)

{
  return &PTR_DAT_110a8f270;
}



/* Entry: 1088fd0c4; end: 1088fd133;  */

void FUN_1088fd0c4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088fc42c(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000108901da4();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1088b9464(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
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
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 1088fd134; end: 1088fd2df;  */

long * FUN_1088fd134(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089018e8();
  if (param_1[6] != 0) {
    func_0x0001089018c0();
    func_0x000108901cb0();
    func_0x0001089019c4();
    param_4 = param_1;
  }
  func_0x000108901fac();
  if ((bool)in_ZR) {
    func_0x0001089018c0();
    func_0x000108901bb4();
    func_0x0001089019dc();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x39) == '\x01') {
    func_0x0001089018c0();
    func_0x000108901dbc();
    func_0x0001089019dc();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    param_4 = (long *)0x4;
    func_0x000108901aa8();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    param_4 = (long *)0x5;
    func_0x000108901aa8();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_4 = (long *)0x63;
    func_0x000108901aa8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
      _memcpy(param_4,lVar2,param_3 & 0xffffffff);
      return (long *)((long)param_4 + (long)(int)param_3);
    }
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
  return param_4;
}



/* Entry: 1088fd2e0; end: 1088fd2fb;  */

long FUN_1088fd2e0(long param_1)

{
  long extraout_x8;
  
  FUN_1088fc56c();
  func_0x0001089017ec();
  return param_1 + extraout_x8;
}



/* Entry: 1088fd2fc; end: 1088fd2ff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088fd2fc(ulong *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 extraout_w8;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108901838();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  uVar2 = (uVar1 & 7) == 0;
  if (!(bool)uVar2) {
    if ((uVar1 & 1) != 0) {
      func_0x000108901cdc();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_1089015e0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088fc698();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000108901d5c();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_1088f0114();
        *(ulong **)(unaff_x21 + 0x28) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088b981c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x000108901fac();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x38) = extraout_w8;
  }
  if (*(char *)(unaff_x20 + 0x39) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x39) = 1;
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089018f8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088fd300; end: 1088fd343;  */

long FUN_1088fd300(long param_1)

{
  func_0x000108901ab8();
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fd344; end: 1088fd357;  */

void FUN_1088fd344(void)

{
  FUN_1088fd300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fd358; end: 1088fd363;  */

undefined ** FUN_1088fd358(void)

{
  return &PTR_DAT_110a8f2c0;
}



/* Entry: 1088fd364; end: 1088fd3ab;  */

void FUN_1088fd364(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000108901d98();
  func_0x000107c3025c();
  func_0x000107c3025c(unaff_x19 + 4);
  if ((unaff_x19[2] & 1) != 0) {
    FUN_1088bf358(unaff_x19[5]);
  }
  func_0x000108901bbc();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 1088fd3ac; end: 1088fd49b;  */

long * FUN_1088fd3ac(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  plVar2 = param_3;
  func_0x000108901aec();
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x28);
    plVar2 = (long *)(ulong)*(uint *)(param_2 + 0x18);
    unaff_x20 = (long *)0x1;
    func_0x000108901aa8();
  }
  func_0x000108901fa0(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_1088fd408;
  }
  else if ((int)param_2 != 0) {
LAB_1088fd408:
    func_0x000108901ea4();
    param_2 = 2;
    unaff_x20 = param_3;
    func_0x000108901cf8();
  }
  func_0x000108901fa0(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_1088fd464;
  }
  else if ((int)param_2 == 0) goto LAB_1088fd464;
  func_0x000108901ea4();
  unaff_x20 = param_3;
  func_0x000108901cf8(param_3,3);
LAB_1088fd464:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000108901ae0();
  if ((long)plVar2 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar2 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x20 < (long)(int)plVar2) {
    while( true ) {
      iVar4 = ((int)*param_3 - (int)unaff_x20) + 0x10;
      iVar3 = (int)plVar2;
      plVar2 = (long *)(ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      lVar1 = (long)unaff_x20 + (long)iVar4;
      unaff_x20 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar3);
  }
  _memcpy(unaff_x20,lVar1,(ulong)plVar2 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)plVar2);
}



/* Entry: 1088fd49c; end: 1088fd533;  */

void FUN_1088fd49c(long param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  cVar1 = *(char *)(uVar2 + 0x17);
  if (cVar1 < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_1088fd4d8;
  }
  else if (cVar1 == '\0') goto LAB_1088fd4d8;
  func_0x000107c282a0();
LAB_1088fd4d8:
  uVar2 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x000108901b54();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000107c2a268(*(undefined8 *)(param_1 + 0x28));
    func_0x000108901b54();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x000108901f00();
  }
  func_0x000108901c80();
  return;
}



/* Entry: 1088fd534; end: 1088fd537;  */

void FUN_1088fd534(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108901aec();
  uVar1 = param_1[1];
  func_0x000108901f7c(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108902030();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  func_0x000108901f7c(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000108902030();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x28);
    if (param_1 == (ulong *)0x0) {
      func_0x000108901b1c();
      *(ulong **)(unaff_x21 + 0x28) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x000108901860();
  if ((extraout_x8_01 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fd538; end: 1088fd567;  */

void FUN_1088fd538(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001088bc7a8();
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffd;
  return;
}



/* Entry: 1088fd568; end: 1088fd5bb;  */

long FUN_1088fd568(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088bc754();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1088bc754();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fd5bc; end: 1088fd5cf;  */

void FUN_1088fd5bc(void)

{
  FUN_1088fd568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fd5d0; end: 1088fd5db;  */

undefined ** FUN_1088fd5d0(void)

{
  return &PTR_DAT_110a8f310;
}



/* Entry: 1088fd5dc; end: 1088fd63f;  */

void FUN_1088fd5dc(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108901b24();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001088bc7a8(param_1[4]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001088bc7a8(param_1[5]);
    }
  }
  func_0x000108901bbc();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    *(undefined1 *)*param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  return;
}



/* Entry: 1088fd640; end: 1088fd757;  */

long * FUN_1088fd640(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089018e8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0001089017a4();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    func_0x0001089019ac();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x20);
    param_4 = (long *)0x3;
    func_0x000108901aa8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108901ae0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
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



/* Entry: 1088fd758; end: 1088fd773;  */

long FUN_1088fd758(long param_1)

{
  long extraout_x8;
  
  FUN_1088bc8ac();
  func_0x0001089017ec();
  return param_1 + extraout_x8;
}



/* Entry: 1088fd774; end: 1088fd777;  */

void FUN_1088fd774(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108901838();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108901cdc();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000108901d5c();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010890161c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x0001088bc924();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00010890161c();
        *(ulong **)(unaff_x21 + 0x28) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x0001088bc924();
      }
    }
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089018f8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088fd778; end: 1088fd79b;  */

undefined8 FUN_1088fd778(undefined8 param_1)

{
  func_0x000108901ab8();
  return param_1;
}



/* Entry: 1088fd79c; end: 1088fd7af;  */

void FUN_1088fd79c(void)

{
  FUN_1088fd778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fd7b0; end: 1088fd82b;  */

undefined ** FUN_1088fd7b0(void)

{
  return &PTR_DAT_110a8f358;
}



/* Entry: 1088fd82c; end: 1088fd85f;  */

long FUN_1088fd82c(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fd860; end: 1088fd873;  */

void FUN_1088fd860(void)

{
  FUN_1088fd82c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fd874; end: 1088fd87f;  */

undefined ** FUN_1088fd874(void)

{
  return &PTR_DAT_110a8f3a0;
}



/* Entry: 1088fd880; end: 1088fd8b3;  */

void FUN_1088fd880(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108901b24();
  }
  func_0x000108901d34();
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



/* Entry: 1088fd8b4; end: 1088fd91f;  */

long * FUN_1088fd8b4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108901824();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089017a4();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x0001089018c0();
    func_0x000108901a68();
    func_0x0001089019c4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
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



/* Entry: 1088fd920; end: 1088fd977;  */

void FUN_1088fd920(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901b2c();
    param_1 = param_1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000108901a0c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108901f00();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088fd978; end: 1088fd97b;  */

void FUN_1088fd978(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fd97c; end: 1088fd99f;  */

undefined8 FUN_1088fd97c(undefined8 param_1)

{
  func_0x000108901ab8();
  return param_1;
}



/* Entry: 1088fd9a0; end: 1088fd9b3;  */

void FUN_1088fd9a0(void)

{
  FUN_1088fd97c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fd9b4; end: 1088fda2b;  */

undefined ** FUN_1088fd9b4(void)

{
  return &PTR_DAT_110a8f3e8;
}



/* Entry: 1088fda2c; end: 1088fda5b;  */

void FUN_1088fda2c(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000108901b74();
  func_0x0001088fd9c0();
  func_0x000108901e6c();
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



/* Entry: 1088fda5c; end: 1088fda7f;  */

undefined8 FUN_1088fda5c(undefined8 param_1)

{
  func_0x000108901ab8();
  return param_1;
}



/* Entry: 1088fda80; end: 1088fda93;  */

void FUN_1088fda80(void)

{
  FUN_1088fda5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fda94; end: 1088fdab3;  */

undefined ** FUN_1088fda94(void)

{
  return &PTR_DAT_110a8f438;
}



/* Entry: 1088fdab4; end: 1088fdb1b;  */

long * FUN_1088fdab4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089018e8();
  if ((int)param_1[2] != 0) {
    func_0x0001089018c0();
    func_0x000108901cb0();
    func_0x0001089019d0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108901ae0();
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



/* Entry: 1088fdb1c; end: 1088fdb63;  */

long FUN_1088fdb1c(long param_1)

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



/* Entry: 1088fdb64; end: 1088fdb9b;  */

long FUN_1088fdb64(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  func_0x000108901e64();
  return param_1;
}



/* Entry: 1088fdb9c; end: 1088fdbaf;  */

void FUN_1088fdb9c(void)

{
  FUN_1088fdb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fdbb0; end: 1088fdbbb;  */

undefined ** FUN_1088fdbb0(void)

{
  return &PTR_DAT_110a8f488;
}



/* Entry: 1088fdbbc; end: 1088fdbf3;  */

void FUN_1088fdbbc(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000108901c14();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x000108901f6c();
  }
  func_0x000108901bbc();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 1088fdbf4; end: 1088fdc6b;  */

long * FUN_1088fdbf4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x000108901824();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089017dc();
    param_4 = param_1;
  }
  func_0x000108901ce8();
  while (unaff_w22 != unaff_w21) {
    func_0x000108901898();
    func_0x00010890199c();
    func_0x000108901eb8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108901ae0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8_00 + 8);
    param_3 = *(ulong *)(extraout_x8_00 + 0x10);
  }
  else {
    lVar2 = extraout_x8_00 + 8;
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



/* Entry: 1088fdc6c; end: 1088fdcc7;  */

void FUN_1088fdc6c(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x0001089017b8();
  while (unaff_x22 != 0) {
    func_0x000108901e94();
    func_0x000108901cb8();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x000108901f74();
    func_0x000108901b54();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108901f00();
  }
  func_0x000108901c80();
  return;
}



/* Entry: 1088fdcc8; end: 1088fdccb;  */

void FUN_1088fdcc8(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x000108901838();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901bc8();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x000108901b1c();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fdccc; end: 1088fdd03;  */

long FUN_1088fdccc(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  func_0x000108901e64();
  return param_1;
}



/* Entry: 1088fdd04; end: 1088fdd17;  */

void FUN_1088fdd04(void)

{
  FUN_1088fdccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fdd18; end: 1088fdd23;  */

undefined ** FUN_1088fdd18(void)

{
  return &PTR_DAT_110a8f4e0;
}



/* Entry: 1088fdd24; end: 1088fdd5b;  */

void FUN_1088fdd24(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000108901c14();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x000108901f6c();
  }
  func_0x000108901bbc();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 1088fdd5c; end: 1088fddd3;  */

long * FUN_1088fdd5c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x000108901824();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089017dc();
    param_4 = param_1;
  }
  func_0x000108901ce8();
  while (unaff_w22 != unaff_w21) {
    func_0x000108901898();
    func_0x00010890199c();
    func_0x000108901eb8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108901ae0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8_00 + 8);
    param_3 = *(ulong *)(extraout_x8_00 + 0x10);
  }
  else {
    lVar2 = extraout_x8_00 + 8;
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



/* Entry: 1088fddd4; end: 1088fde2f;  */

void FUN_1088fddd4(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x0001089017b8();
  while (unaff_x22 != 0) {
    func_0x000108901e94();
    func_0x000108901cb8();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x000108901f74();
    func_0x000108901b54();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108901f00();
  }
  func_0x000108901c80();
  return;
}



/* Entry: 1088fde30; end: 1088fde33;  */

void FUN_1088fde30(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x000108901838();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901bc8();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x000108901b1c();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fde34; end: 1088fde67;  */

long FUN_1088fde34(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fde68; end: 1088fde7b;  */

void FUN_1088fde68(void)

{
  FUN_1088fde34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fde7c; end: 1088fde87;  */

undefined ** FUN_1088fde7c(void)

{
  return &PTR_DAT_110a8f538;
}



/* Entry: 1088fde88; end: 1088fdf57;  */

void FUN_1088fde88(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108901b24();
  }
  func_0x000108901bbc();
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



/* Entry: 1088fdf58; end: 1088fdf5b;  */

void FUN_1088fdf58(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fdf5c; end: 1088fdf9f;  */

long FUN_1088fdf5c(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2b4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fdfa0; end: 1088fdfb3;  */

void FUN_1088fdfa0(void)

{
  FUN_1088fdf5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fdfb4; end: 1088fdfbf;  */

undefined ** FUN_1088fdfb4(void)

{
  return &PTR_DAT_110a8f580;
}



/* Entry: 1088fdfc0; end: 1088fe00b;  */

void FUN_1088fdfc0(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x000108901b44();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x000108901b24();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_1088bc2e4(*(undefined8 *)(unaff_x19 + 0x20));
    }
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 1088fe00c; end: 1088fe157;  */

long * FUN_1088fe00c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089018e8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0001089017a4();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010890199c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x0001089018c0();
    func_0x000108901dbc();
    func_0x0001089019d0();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x0001089018c0();
    param_4 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x0001089019d0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
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



/* Entry: 1088fe158; end: 1088fe15b;  */

void FUN_1088fe158(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x000108901838();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901d50();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108901cdc();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108901d5c();
      if (param_1 == (ulong *)0x0) {
        func_0x000107c2a2f4();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088bc418();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x21 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089018f8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088fe15c; end: 1088fe19f;  */

long FUN_1088fe15c(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fe1a0; end: 1088fe1b3;  */

void FUN_1088fe1a0(void)

{
  FUN_1088fe15c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fe1b4; end: 1088fe1bf;  */

undefined ** FUN_1088fe1b4(void)

{
  return &PTR_DAT_110a8f5d8;
}



/* Entry: 1088fe1c0; end: 1088fe207;  */

void FUN_1088fe1c0(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x000108901b44();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x000108901b24();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x000108901da4();
    }
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 1088fe208; end: 1088fe327;  */

long * FUN_1088fe208(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089018e8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0001089017a4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x0001089018c0();
    func_0x000108901bb4();
    func_0x0001089019d0();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    param_4 = (long *)0x3;
    func_0x000108901aa8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
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



/* Entry: 1088fe328; end: 1088fe32b;  */

void FUN_1088fe328(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x000108901838();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901d50();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108901cdc();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108901d5c();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089018f8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088fe32c; end: 1088fe35f;  */

long FUN_1088fe32c(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fe360; end: 1088fe373;  */

void FUN_1088fe360(void)

{
  FUN_1088fe32c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fe374; end: 1088fe37f;  */

undefined ** FUN_1088fe374(void)

{
  return &PTR_DAT_110a8f628;
}



/* Entry: 1088fe380; end: 1088fe44f;  */

void FUN_1088fe380(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108901b24();
  }
  func_0x000108901bbc();
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



/* Entry: 1088fe450; end: 1088fe453;  */

void FUN_1088fe450(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fe454; end: 1088fe4b3;  */

void FUN_1088fe454(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000108902004();
  if (extraout_w8 == 2) {
    func_0x000107c30258(unaff_x19 + 0x10);
  }
  else if (extraout_w8 == 1) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        func_0x000107c2a2e0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088fe4b4; end: 1088fe4e7;  */

long FUN_1088fe4b4(long param_1)

{
  func_0x000108901ab8();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1088fe454(param_1);
  }
  return param_1;
}



/* Entry: 1088fe4e8; end: 1088fe4eb;  */

long FUN_1088fe4e8(long param_1)

{
  func_0x000108901ab8();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1088fe454(param_1);
  }
  return param_1;
}



/* Entry: 1088fe4ec; end: 1088fe4ff;  */

void FUN_1088fe4ec(void)

{
  FUN_1088fe4b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fe500; end: 1088fe50b;  */

undefined ** FUN_1088fe500(void)

{
  return &PTR_DAT_110a8f678;
}



/* Entry: 1088fe50c; end: 1088fe53b;  */

void FUN_1088fe50c(long param_1)

{
  ulong *puVar1;
  
  FUN_1088fe454();
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



/* Entry: 1088fe53c; end: 1088fe5eb;  */

long * FUN_1088fe53c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  int iVar4;
  
  plVar2 = param_3;
  func_0x000108901aec();
  if (*(int *)(param_1 + 0x1c) == 2) {
    func_0x000108901fa0(*(undefined8 *)(unaff_x21 + 0x10));
    func_0x000108901ea4();
    unaff_x20 = param_3;
    func_0x000108901cf8(param_3,2);
  }
  else if (*(int *)(param_1 + 0x1c) == 1) {
    plVar2 = (long *)(ulong)*(uint *)(*(long *)(unaff_x21 + 0x10) + 0x18);
    unaff_x20 = (long *)0x1;
    func_0x000108901aa8();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000108901ae0();
  if ((long)plVar2 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar2 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if ((long)(int)plVar2 <= *param_3 - (long)unaff_x20) {
    _memcpy(unaff_x20,lVar1,(ulong)plVar2 & 0xffffffff);
    return (long *)((long)unaff_x20 + (long)(int)plVar2);
  }
  while( true ) {
    iVar4 = ((int)*param_3 - (int)unaff_x20) + 0x10;
    iVar3 = (int)plVar2;
    plVar2 = (long *)(ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    lVar1 = (long)unaff_x20 + (long)iVar4;
    unaff_x20 = param_3;
    func_0x000107c303e4(param_3,lVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x20 + (long)iVar3);
}



/* Entry: 1088fe5ec; end: 1088fe657;  */

void FUN_1088fe5ec(void)

{
  uint uVar1;
  int iVar2;
  int extraout_w8;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108902004();
  if (extraout_w8 == 2) {
    uVar1 = (uint)*(undefined8 *)(unaff_x19 + 0x10) & 0xfffffffc;
    func_0x000107c282a0();
  }
  else {
    if (extraout_w8 != 1) {
      iVar2 = 0;
      goto LAB_1088fe630;
    }
    uVar1 = (uint)*(undefined8 *)(unaff_x19 + 0x10);
    func_0x000107c2a268();
  }
  iVar2 = uVar1 + 1;
LAB_1088fe630:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108901f00();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(unaff_x19 + 0x18) = iVar2;
  return;
}



/* Entry: 1088fe658; end: 1088fe737;  */

void FUN_1088fe658(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x000108901838();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_1088fe454();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    if (iVar1 == 2) {
      if (iVar2 != 2) {
        unaff_x21[2] = (ulong)&DAT_11383d918;
      }
      param_1 = unaff_x21 + 2;
      func_0x000107c30248();
    }
    else if (iVar1 == 1) {
      if (iVar2 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        FUN_1088bf398();
      }
      else {
        func_0x000108901b1c();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fe738; end: 1088fe793;  */

long FUN_1088fe738(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1088f72bc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c303ac();
  }
  func_0x000108901e64();
  return param_1;
}



/* Entry: 1088fe794; end: 1088fe7a7;  */

void FUN_1088fe794(void)

{
  FUN_1088fe738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fe7a8; end: 1088fe7b3;  */

undefined ** FUN_1088fe7a8(void)

{
  return &PTR_DAT_110a8f6c8;
}



/* Entry: 1088fe7b4; end: 1088fe817;  */

void FUN_1088fe7b4(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000108901c14();
  if (0 < (int)unaff_x19[7]) {
    func_0x0001053936e4(unaff_x19 + 6);
  }
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(unaff_x19[9]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088f7334(unaff_x19[10]);
    }
  }
  func_0x000108901bbc();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 1088fe818; end: 1088fe977;  */

long * FUN_1088fe818(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089018e8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x48);
    func_0x0001089017dc();
    param_4 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x20);
  while (iVar3 != 0) {
    func_0x000108901a28();
    func_0x00010890199c();
    func_0x000108901fe4();
  }
  iVar3 = *(int *)(unaff_x20 + 0x38);
  while (iVar3 != 0) {
    func_0x000108901a28();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x000108901aa8(3);
    func_0x000108901fe4();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x54);
    param_4 = (long *)0x4;
    func_0x000108901aa8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
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



/* Entry: 1088fe978; end: 1088fe98b;  */

void FUN_1088fe978(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x000108901838();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901bc8();
  func_0x000108901f88();
  FUN_1088fe978();
  func_0x000108901d50();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108902024();
      if (param_1 == (ulong *)0x0) {
        FUN_108900568();
        *(ulong **)(unaff_x21 + 0x50) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088f7540();
      }
    }
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089018f8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088fe98c; end: 1088fe9df;  */

long FUN_1088fe98c(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1088f7004();
  }
  __ZdlPv();
  FUN_108900108(param_1 + 0x30);
  func_0x000107c2a418(param_1 + 0x18);
  return param_1;
}



/* Entry: 1088fe9e0; end: 1088fe9f3;  */

void FUN_1088fe9e0(void)

{
  FUN_1088fe98c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fe9f4; end: 1088fe9ff;  */

undefined ** FUN_1088fe9f4(void)

{
  return &PTR_DAT_110a8f710;
}



/* Entry: 1088fea00; end: 1088fea5b;  */

void FUN_1088fea00(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000108901d98();
  func_0x000107c2a170();
  FUN_108900554(unaff_x19 + 6);
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(unaff_x19[9]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088f47b0(unaff_x19[10]);
    }
  }
  func_0x000108901bbc();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 1088fea5c; end: 1088feb27;  */

long * FUN_1088fea5c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089018e8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x48);
    func_0x0001089017dc();
    param_4 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x20);
  while (iVar3 != 0) {
    func_0x000108901a28();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x0001089019ac();
    func_0x000108901fe4();
  }
  iVar3 = *(int *)(unaff_x20 + 0x38);
  while (iVar3 != 0) {
    func_0x000108901a28();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x000108901aa8(3);
    func_0x000108901fe4();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x30);
    param_4 = (long *)0x4;
    func_0x000108901aa8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
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



/* Entry: 1088feb28; end: 1088febbb;  */

/* WARNING: Removing unreachable block (ram,0x0001088feb58) */

void FUN_1088feb28(void)

{
  uint uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x0001089017b8();
  while (unaff_x22 != 0) {
    FUN_1088f503c(*unaff_x21);
    func_0x000108901cb8();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x000108901968();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(unaff_x19 + 0x48));
      func_0x000108901b54();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001088f5058(*(undefined8 *)(unaff_x19 + 0x50));
      func_0x000108901b54();
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108901f00();
  }
  func_0x000108901c80();
  return;
}


