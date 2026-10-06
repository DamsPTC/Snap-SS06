/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b52a2e8; end: 10b52a31f;  */

long FUN_10b52a2e8(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52a320; end: 10b52a323;  */

long FUN_10b52a320(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52a324; end: 10b52a337;  */

void FUN_10b52a324(void)

{
  FUN_10b52a2e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52a338; end: 10b52a343;  */

undefined ** FUN_10b52a338(void)

{
  return &PTR_DAT_110cff8f0;
}



/* Entry: 10b52a344; end: 10b52a37b;  */

void FUN_10b52a344(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010b534360();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x00010b5347e4();
  }
  func_0x00010b534764();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 10b52a37c; end: 10b52a407;  */

long * FUN_10b52a37c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b534274();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x00010b5341e0();
    unaff_x20 = param_1;
  }
  func_0x00010b534460();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52a3d4;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b52a3d4;
  param_4 = (long *)&UNK_10f77739b;
  func_0x00010b534528();
  func_0x00010b534074();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52a3d4:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b52a408; end: 10b52a46f;  */

void FUN_10b52a408(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x00010b5341b8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010b5347dc();
    func_0x00010b5345d4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
  }
  func_0x00010b534770();
  return;
}



/* Entry: 10b52a470; end: 10b52a473;  */

void FUN_10b52a470(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b534170();
  if ((param_3 & 1) != 0) {
    func_0x00010b534784();
  }
  func_0x00010b534344();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5347a4();
    if (param_1 == (ulong *)0x0) {
      func_0x00010b5346c4();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      func_0x00010b535e30();
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b52a474; end: 10b52a4f3;  */

void FUN_10b52a474(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b534170();
  if ((param_3 & 1) != 0) {
    func_0x00010b534784();
  }
  func_0x00010b534344();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5347a4();
    if (param_1 == (ulong *)0x0) {
      func_0x00010b5346c4();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      func_0x00010b535e30();
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b52a4f4; end: 10b52a503;  */

void FUN_10b52a4f4(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
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



/* Entry: 10b52a504; end: 10b52a527;  */

undefined8 FUN_10b52a504(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b52a528; end: 10b52a52b;  */

undefined8 FUN_10b52a528(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b52a52c; end: 10b52a53f;  */

void FUN_10b52a52c(void)

{
  FUN_10b52a504();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52a540; end: 10b52a5bb;  */

undefined ** FUN_10b52a540(void)

{
  return &PTR_DAT_110cff958;
}



/* Entry: 10b52a5bc; end: 10b52a66b;  */

void FUN_10b52a5bc(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 6) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010b5348ac();
      uVar2 = extraout_x8_00;
    }
    if (uVar2 != 0) goto LAB_10b52a63c;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_10b52a504();
    }
  }
  else if (iVar1 == 5) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010b5348ac();
      uVar2 = extraout_x8;
    }
    if (uVar2 != 0) goto LAB_10b52a63c;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_10b52a2e8();
    }
  }
  else {
    if (iVar1 != 4) goto LAB_10b52a63c;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010b5348ac();
      uVar2 = extraout_x8_01;
    }
    if (uVar2 != 0) goto LAB_10b52a63c;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_10b52a0dc();
    }
  }
  __ZdlPv();
LAB_10b52a63c:
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10b52a66c; end: 10b52a6b3;  */

long FUN_10b52a66c(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_10b52a5bc(param_1);
  }
  return param_1;
}



/* Entry: 10b52a6b4; end: 10b52a6b7;  */

long FUN_10b52a6b4(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_10b52a5bc(param_1);
  }
  return param_1;
}



/* Entry: 10b52a6b8; end: 10b52a6cb;  */

void FUN_10b52a6b8(void)

{
  FUN_10b52a66c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52a6cc; end: 10b52a6d7;  */

undefined ** FUN_10b52a6cc(void)

{
  return &PTR_DAT_110cff9c0;
}



/* Entry: 10b52a6d8; end: 10b52a71b;  */

void FUN_10b52a6d8(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010b534360();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x00010b5347e4();
  }
  *(undefined1 *)(unaff_x19 + 5) = 0;
  FUN_10b52a5bc();
  func_0x00010b534764();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 10b52a71c; end: 10b52a803;  */

long * FUN_10b52a71c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  func_0x00010b534274();
  func_0x00010b534580(param_1[3]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52a768;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b52a768;
  param_4 = (long *)&UNK_10f7773e5;
  func_0x00010b534528();
  func_0x00010b53402c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52a768:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    func_0x00010b534a88();
    func_0x00010b5342c4();
    unaff_x20 = param_1;
  }
  if (*(char *)(unaff_x21 + 0x28) == '\x01') {
    func_0x00010b534320();
    func_0x00010b534940();
    func_0x00010b534b04();
    unaff_x20 = param_1;
  }
  plVar3 = (long *)(ulong)*(uint *)(unaff_x21 + 0x38);
  uVar2 = *(uint *)(unaff_x21 + 0x38) - 4;
  if (uVar2 < 3) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x30) +
                              *(long *)(&UNK_10e5bbd28 + (ulong)uVar2 * 8));
    func_0x00010b5342c4();
    unaff_x20 = plVar3;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b534550();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010b534648();
    if (*plVar3 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*plVar3 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        param_3 = (ulong)(uint)(iVar4 - iVar5);
        if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar5);
        param_4 = plVar3;
        func_0x000107c303e4(plVar3,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 10b52a804; end: 10b52a8b7;  */

void FUN_10b52a804(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  
  func_0x00010b5341b8();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010b5347dc();
    func_0x00010b5345d4();
  }
  iVar1 = *(int *)(unaff_x19 + 0x38);
  if (iVar1 == 6) {
    func_0x00010b52a58c(*(undefined8 *)(unaff_x19 + 0x30));
  }
  else if (iVar1 == 5) {
    FUN_10b52a408(*(undefined8 *)(unaff_x19 + 0x30));
  }
  else {
    if (iVar1 != 4) goto LAB_10b52a890;
    FUN_10b52a1fc(*(undefined8 *)(unaff_x19 + 0x30));
  }
  func_0x00010b534014();
  func_0x00010b534470();
LAB_10b52a890:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
  }
  func_0x00010b534770();
  return;
}



/* Entry: 10b52a8b8; end: 10b52a8bb;  */

void FUN_10b52a8b8(ulong *param_1,long param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b534170();
  puVar4 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x00010b534784();
    puVar4 = unaff_x22;
  }
  func_0x00010b534344();
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x00010b5347a4();
    if (param_1 == (ulong *)0x0) {
      func_0x00010b5346c4();
      unaff_x21[4] = (ulong)param_1;
    }
    else {
      func_0x00010b535e30();
    }
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x21 + 5) = 1;
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x38);
  if (iVar2 == 0) goto LAB_10b52aa10;
  iVar3 = (int)unaff_x21[7];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      param_1 = unaff_x21;
      FUN_10b52a5bc();
    }
    *(int *)(unaff_x21 + 7) = iVar2;
  }
  if (iVar2 == 6) {
    if (iVar3 == 6) {
      func_0x00010b5349ec();
      FUN_10b52a4f4();
      goto LAB_10b52aa10;
    }
    FUN_10b532fd8();
    param_1 = puVar4;
  }
  else if (iVar2 == 5) {
    if (iVar3 == 5) {
      func_0x00010b5349ec();
      FUN_10b52a474();
      goto LAB_10b52aa10;
    }
    func_0x00010b532f70();
    param_1 = puVar4;
  }
  else {
    if (iVar2 != 4) goto LAB_10b52aa10;
    if (iVar3 == 4) {
      func_0x00010b5349ec();
      FUN_10b52a268();
      goto LAB_10b52aa10;
    }
    func_0x00010b532f08();
    param_1 = puVar4;
  }
  unaff_x21[6] = (ulong)param_1;
LAB_10b52aa10:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b52a8bc; end: 10b52aa33;  */

void FUN_10b52a8bc(ulong *param_1,long param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b534170();
  puVar4 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x00010b534784();
    puVar4 = unaff_x22;
  }
  func_0x00010b534344();
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x00010b5347a4();
    if (param_1 == (ulong *)0x0) {
      func_0x00010b5346c4();
      unaff_x21[4] = (ulong)param_1;
    }
    else {
      func_0x00010b535e30();
    }
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x21 + 5) = 1;
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x38);
  if (iVar2 == 0) goto LAB_10b52aa10;
  iVar3 = (int)unaff_x21[7];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      param_1 = unaff_x21;
      FUN_10b52a5bc();
    }
    *(int *)(unaff_x21 + 7) = iVar2;
  }
  if (iVar2 == 6) {
    if (iVar3 == 6) {
      func_0x00010b5349ec();
      FUN_10b52a4f4();
      goto LAB_10b52aa10;
    }
    FUN_10b532fd8();
    param_1 = puVar4;
  }
  else if (iVar2 == 5) {
    if (iVar3 == 5) {
      func_0x00010b5349ec();
      FUN_10b52a474();
      goto LAB_10b52aa10;
    }
    func_0x00010b532f70();
    param_1 = puVar4;
  }
  else {
    if (iVar2 != 4) goto LAB_10b52aa10;
    if (iVar3 == 4) {
      func_0x00010b5349ec();
      FUN_10b52a268();
      goto LAB_10b52aa10;
    }
    func_0x00010b532f08();
    param_1 = puVar4;
  }
  unaff_x21[6] = (ulong)param_1;
LAB_10b52aa10:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b52aa34; end: 10b52aa63;  */

undefined8 FUN_10b52aa34(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  func_0x00010b53465c();
  func_0x00010b534840();
  return param_1;
}



/* Entry: 10b52aa64; end: 10b52aa67;  */

undefined8 FUN_10b52aa64(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  func_0x00010b53465c();
  func_0x00010b534840();
  return param_1;
}



/* Entry: 10b52aa68; end: 10b52aa7b;  */

void FUN_10b52aa68(void)

{
  FUN_10b52aa34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52aa7c; end: 10b52aa87;  */

undefined ** FUN_10b52aa7c(void)

{
  return &PTR_DAT_110cffa18;
}



/* Entry: 10b52aa88; end: 10b52aabb;  */

void FUN_10b52aa88(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
  func_0x00010b5349d0();
  func_0x00010b534838();
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



/* Entry: 10b52aabc; end: 10b52ab9f;  */

long * FUN_10b52aabc(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010b534088();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b52aaec;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b52aaec:
      param_4 = (long *)&UNK_10f777426;
      func_0x00010b534528();
      func_0x00010b53402c();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010b534460();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b52ab20;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b52ab20:
      param_4 = (long *)&UNK_10f77746a;
      func_0x00010b534528();
      func_0x00010b534074();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010b534580(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52ab6c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b52ab6c;
  param_4 = (long *)&UNK_10f7774b0;
  func_0x00010b534528();
  func_0x00010b53412c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52ab6c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
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



/* Entry: 10b52aba0; end: 10b52ac2f;  */

void FUN_10b52aba0(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long unaff_x19;
  
  func_0x00010b5340e0();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
  }
  func_0x00010b534bbc();
  return;
}



/* Entry: 10b52ac30; end: 10b52ac33;  */

void FUN_10b52ac30(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  func_0x00010b534344();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b5349d8();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534b20();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
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



/* Entry: 10b52ac34; end: 10b52acbf;  */

void FUN_10b52ac34(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  func_0x00010b534344();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b5349d8();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534b20();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
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



/* Entry: 10b52acc0; end: 10b52acef;  */

void FUN_10b52acc0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 1;
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



/* Entry: 10b52acf0; end: 10b52ad13;  */

undefined8 FUN_10b52acf0(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b52ad14; end: 10b52ad17;  */

undefined8 FUN_10b52ad14(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b52ad18; end: 10b52ad2b;  */

void FUN_10b52ad18(void)

{
  FUN_10b52acf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52ad2c; end: 10b52ad4b;  */

undefined ** FUN_10b52ad2c(void)

{
  return &PTR_DAT_110cffa70;
}



/* Entry: 10b52ad4c; end: 10b52addb;  */

long * FUN_10b52ad4c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5342b4();
  if ((char)param_1[2] == '\x01') {
    func_0x00010b53425c();
    func_0x00010b53477c();
    func_0x00010b534354();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x11) == '\x01') {
    func_0x00010b53425c();
    func_0x00010b5346f8();
    func_0x00010b534354();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b534550();
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



/* Entry: 10b52addc; end: 10b52ae13;  */

long FUN_10b52addc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = ((ulong)((uint)*(byte *)(param_1 + 0x11) + (uint)*(byte *)(param_1 + 0x10)) & 3) * 2;
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



/* Entry: 10b52ae14; end: 10b52ae3f;  */

undefined8 FUN_10b52ae14(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  func_0x00010b53465c();
  return param_1;
}



/* Entry: 10b52ae40; end: 10b52ae43;  */

undefined8 FUN_10b52ae40(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  func_0x00010b53465c();
  return param_1;
}



/* Entry: 10b52ae44; end: 10b52ae57;  */

void FUN_10b52ae44(void)

{
  FUN_10b52ae14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52ae58; end: 10b52ae63;  */

undefined ** FUN_10b52ae58(void)

{
  return &PTR_DAT_110cffad0;
}



/* Entry: 10b52ae64; end: 10b52ae9b;  */

void FUN_10b52ae64(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
  func_0x00010b5349d0();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 10b52ae9c; end: 10b52af7f;  */

long * FUN_10b52ae9c(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  func_0x00010b534088();
  if (param_2 < 0) {
    if (unaff_x22[1] != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b52aecc;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b52aecc:
      param_4 = (long *)&UNK_10f7774f3;
      func_0x00010b534528();
      func_0x00010b53402c();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  lVar3 = *(long *)(unaff_x21 + 0x20);
  if (lVar3 != 0) {
    func_0x000107c282cc();
    param_1 = unaff_x19;
    param_3 = unaff_x20;
    unaff_x20 = unaff_x19;
  }
  func_0x00010b534460();
  if (lVar3 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52af2c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)lVar3 == 0) goto LAB_10b52af2c;
  param_4 = (long *)&UNK_10f77753d;
  func_0x00010b534528();
  func_0x00010b53412c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52af2c:
  if (*(int *)(unaff_x21 + 0x28) != 0) {
    func_0x00010b534320();
    func_0x00010b5348f8();
    func_0x00010b534480();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      param_3 = (long *)(ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b52af80; end: 10b52b0a3;  */

long FUN_10b52af80(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar3;
  
  func_0x00010b5340e0();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = param_1 + 1;
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  iVar1 = -9;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x00010b534a34();
    iVar1 = extraout_w8;
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x00010b534a28((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x28)) * iVar1 + 0x280U >> 6);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(unaff_x19 + 0x2c) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b52b0a4; end: 10b52b0d3;  */

undefined8 FUN_10b52b0a4(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  func_0x00010b53465c();
  func_0x00010b534840();
  return param_1;
}



/* Entry: 10b52b0d4; end: 10b52b0d7;  */

undefined8 FUN_10b52b0d4(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  func_0x00010b53465c();
  func_0x00010b534840();
  return param_1;
}



/* Entry: 10b52b0d8; end: 10b52b0eb;  */

void FUN_10b52b0d8(void)

{
  FUN_10b52b0a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52b0ec; end: 10b52b0f7;  */

undefined ** FUN_10b52b0ec(void)

{
  return &PTR_DAT_110cffb38;
}



/* Entry: 10b52b0f8; end: 10b52b12b;  */

void FUN_10b52b0f8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
  func_0x00010b5349d0();
  func_0x00010b534838();
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



/* Entry: 10b52b12c; end: 10b52b20f;  */

long * FUN_10b52b12c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010b534088();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b52b15c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b52b15c:
      param_4 = (long *)&UNK_10f77758c;
      func_0x00010b534528();
      func_0x00010b53402c();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010b534460();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b52b190;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b52b190:
      param_4 = (long *)&UNK_10f7775d7;
      func_0x00010b534528();
      func_0x00010b534074();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010b534580(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52b1dc;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b52b1dc;
  param_4 = (long *)&UNK_10f777627;
  func_0x00010b534528();
  func_0x00010b53412c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52b1dc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
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



/* Entry: 10b52b210; end: 10b52b32b;  */

void FUN_10b52b210(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long unaff_x19;
  
  func_0x00010b5340e0();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
  }
  func_0x00010b534bbc();
  return;
}



/* Entry: 10b52b32c; end: 10b52b35f;  */

long FUN_10b52b32c(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b59aa8c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52b360; end: 10b52b363;  */

long FUN_10b52b360(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b59aa8c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52b364; end: 10b52b377;  */

void FUN_10b52b364(void)

{
  FUN_10b52b32c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52b378; end: 10b52b383;  */

undefined ** FUN_10b52b378(void)

{
  return &PTR_DAT_110cffba0;
}



/* Entry: 10b52b384; end: 10b52b3c3;  */

void FUN_10b52b384(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534798();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b59a920(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 10b52b3c4; end: 10b52b443;  */

long * FUN_10b52b3c4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5342b4();
  if ((int)param_1[4] != 0) {
    func_0x00010b53425c();
    func_0x00010b53477c();
    func_0x00010b5343b4();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x60);
    func_0x00010b53442c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b534550();
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



/* Entry: 10b52b444; end: 10b52b4a3;  */

void FUN_10b52b444(void)

{
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b534798();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_10b52b4a4();
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x00010b53414c();
    func_0x00010b534964();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 10b52b4a4; end: 10b52b4bf;  */

long FUN_10b52b4a4(long param_1)

{
  long extraout_x8;
  
  FUN_10b59ace0();
  func_0x00010b534014();
  return param_1 + extraout_x8;
}



/* Entry: 10b52b4c0; end: 10b52b4c3;  */

void FUN_10b52b4c0(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53424c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b534958();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5349bc();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_10b533028();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      func_0x00010b59a978();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00010b534400();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b52b4c4; end: 10b52b52f;  */

void FUN_10b52b4c4(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53424c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b534958();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5349bc();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_10b533028();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      func_0x00010b59a978();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00010b534400();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b52b530; end: 10b52b57f;  */

long FUN_10b52b530(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b52b32c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c303ac();
  }
  FUN_10b531950(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b52b580; end: 10b52b583;  */

long FUN_10b52b580(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b52b32c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c303ac();
  }
  FUN_10b531950(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b52b584; end: 10b52b597;  */

void FUN_10b52b584(void)

{
  FUN_10b52b530();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52b598; end: 10b52b5a3;  */

undefined ** FUN_10b52b598(void)

{
  return &PTR_DAT_110cffc10;
}



/* Entry: 10b52b5a4; end: 10b52b607;  */

void FUN_10b52b5a4(ulong *param_1)

{
  ulong extraout_x8;
  
  if (0 < (int)param_1[4]) {
    func_0x0001053936e4(param_1 + 3);
  }
  if (0 < (int)param_1[7]) {
    func_0x0001053936e4(param_1 + 6);
  }
  if ((param_1[2] & 1) != 0) {
    FUN_10b52b384(param_1[9]);
  }
  func_0x00010b534764();
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



/* Entry: 10b52b608; end: 10b52b75b;  */

long * FUN_10b52b608(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5342b4();
  iVar3 = *(int *)(param_1 + 0x20);
  while (iVar3 != 0) {
    func_0x00010b5343e4();
    param_3 = (ulong)*(uint *)(param_2 + 0x2c);
    func_0x00010b5343c0();
    func_0x00010b534bdc();
  }
  iVar3 = *(int *)(unaff_x20 + 0x38);
  while (iVar3 != 0) {
    func_0x00010b5343e4();
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    func_0x00010b53442c();
    func_0x00010b534bdc();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x48) + 0x14);
    param_4 = (long *)0x3;
    func_0x00010b534508();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b534550();
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



/* Entry: 10b52b75c; end: 10b52b75f;  */

void FUN_10b52b75c(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b53424c();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b5347ec();
  }
  func_0x00010b534c08();
  FUN_10b52b7dc();
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x00010b52b7ec();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b533064();
      *(ulong **)(unaff_x21 + 0x48) = puVar2;
      puVar1 = puVar2;
    }
    else {
      FUN_10b52b4c4();
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b52b760; end: 10b52b7db;  */

void FUN_10b52b760(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b53424c();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b5347ec();
  }
  func_0x00010b534c08();
  FUN_10b52b7dc();
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x00010b52b7ec();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b533064();
      *(ulong **)(unaff_x21 + 0x48) = puVar2;
      puVar1 = puVar2;
    }
    else {
      FUN_10b52b4c4();
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b52b7dc; end: 10b52b7fb;  */

void FUN_10b52b7dc(long *param_1,long param_2)

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



/* Entry: 10b52b7fc; end: 10b52b837;  */

long FUN_10b52b7fc(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  func_0x00010b534840();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b59ba40();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52b838; end: 10b52b83b;  */

long FUN_10b52b838(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  func_0x00010b534840();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b59ba40();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52b83c; end: 10b52b84f;  */

void FUN_10b52b83c(void)

{
  FUN_10b52b7fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52b850; end: 10b52b85b;  */

undefined ** FUN_10b52b850(void)

{
  return &PTR_DAT_110cffc68;
}



/* Entry: 10b52b85c; end: 10b52b8a3;  */

void FUN_10b52b85c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534360();
  func_0x00010b534838();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_10b59bad0(*(undefined8 *)(unaff_x19 + 0x28));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
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



/* Entry: 10b52b8a4; end: 10b52b997;  */

long * FUN_10b52b8a4(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010b534274();
  func_0x00010b534580(param_1[3]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b52b8dc;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b52b8dc:
      param_4 = (long *)&UNK_10f77767a;
      func_0x00010b534528();
      func_0x00010b53402c();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010b534580(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52b928;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b52b928;
  param_4 = (long *)&UNK_10f7776ba;
  func_0x00010b534528();
  func_0x00010b534074();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52b928:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x30);
    param_1 = (long *)0x3;
    func_0x00010b5342c4();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x30) != 0) {
    func_0x00010b534320();
    func_0x00010b5348f8();
    func_0x00010b534480();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b534550();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010b534648();
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



/* Entry: 10b52b998; end: 10b52ba2f;  */

void FUN_10b52b998(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x19;
  
  func_0x00010b5341b8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_10b52ba30(*(undefined8 *)(unaff_x19 + 0x28));
    func_0x00010b5345d4();
  }
  if (*(int *)(unaff_x19 + 0x30) != 0) {
    func_0x00010b53414c();
    func_0x00010b534a28();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
  }
  func_0x00010b534770();
  return;
}



/* Entry: 10b52ba30; end: 10b52ba4b;  */

long FUN_10b52ba30(long param_1)

{
  long extraout_x8;
  
  FUN_10b59bc44();
  func_0x00010b534014();
  return param_1 + extraout_x8;
}



/* Entry: 10b52ba4c; end: 10b52baff;  */

void FUN_10b52ba4c(ulong *param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b534170();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x00010b534784();
    puVar1 = unaff_x22;
  }
  func_0x00010b534344();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534b10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b53499c();
    if (param_1 == (ulong *)0x0) {
      FUN_10b5330cc();
      *(ulong **)(unaff_x21 + 0x28) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_10b59bd38();
    }
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  func_0x00010b5340f4();
  if ((extraout_x8_01 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b52bb00; end: 10b52bb27;  */

undefined8 FUN_10b52bb00(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52bb28; end: 10b52bb2b;  */

undefined8 FUN_10b52bb28(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52bb2c; end: 10b52bb3f;  */

void FUN_10b52bb2c(void)

{
  FUN_10b52bb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52bb40; end: 10b52bb4b;  */

undefined ** FUN_10b52bb40(void)

{
  return &PTR_DAT_110cffcc0;
}



/* Entry: 10b52bb4c; end: 10b52bb7b;  */

void FUN_10b52bb4c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10b52bb7c; end: 10b52bc13;  */

long * FUN_10b52bb7c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b534088();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52bbc0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b52bbc0;
  param_4 = (long *)&UNK_10f7776f8;
  func_0x00010b534528();
  func_0x00010b53402c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52bbc0:
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    func_0x00010b534320();
    func_0x00010b5346f8();
    func_0x00010b534820();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b52bc14; end: 10b52bc7b;  */

void FUN_10b52bc14(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5340e0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    func_0x00010b534720();
    iVar1 = extraout_w8 + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x20) = iVar1;
  return;
}



/* Entry: 10b52bc7c; end: 10b52bc7f;  */

void FUN_10b52bc7c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
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



/* Entry: 10b52bc80; end: 10b52bcd3;  */

void FUN_10b52bc80(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
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



/* Entry: 10b52bcd4; end: 10b52bd47;  */

long FUN_10b52bcd4(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b534d54();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b534e58();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b534f94();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b535098();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b5351d4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52bd48; end: 10b52bd4b;  */

long FUN_10b52bd48(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b534d54();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b534e58();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b534f94();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b535098();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b5351d4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52bd4c; end: 10b52bd5f;  */

void FUN_10b52bd4c(void)

{
  FUN_10b52bcd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52bd60; end: 10b52bd6b;  */

undefined ** FUN_10b52bd60(void)

{
  return &PTR_DAT_110cffd20;
}



/* Entry: 10b52bd6c; end: 10b52bdf3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b52bd6c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b534dd8(param_1[3]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b534ee0(param_1[4]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b535018(param_1[5]);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b535120(param_1[6]);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010b535258(param_1[7]);
    }
  }
  func_0x00010b534764();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b52bdf4; end: 10b52bf7b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b52bdf4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5342b4();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x10);
    func_0x00010b5343c0();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    func_0x00010b53442c();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x10);
    param_4 = (long *)0x3;
    func_0x00010b534508();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_4 = (long *)0x4;
    func_0x00010b534508();
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    param_4 = (long *)0x5;
    func_0x00010b534508();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b534550();
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



/* Entry: 10b52bf7c; end: 10b52c007;  */

long FUN_10b52bf7c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b534e14();
  func_0x00010b534014();
  return param_1 + extraout_x8;
}



/* Entry: 10b52c008; end: 10b52c00b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b52c008(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b53424c();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b5347ec();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b534ba4();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b5330fc();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b534d44();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5347a4();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b53312c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b534e3c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b53499c();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b53315c();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010b534f84();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b534b78();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b53318c();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010b53507c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5331bc();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b5351c4();
      }
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b53423c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b52c00c; end: 10b52c11f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b52c00c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b53424c();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b5347ec();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b534ba4();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b5330fc();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b534d44();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5347a4();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b53312c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b534e3c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b53499c();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b53315c();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010b534f84();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b534b78();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b53318c();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010b53507c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5331bc();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b5351c4();
      }
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b53423c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}


