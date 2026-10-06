/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4fb080; end: 10b4fb15f;  */

long * FUN_10b4fb080(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  func_0x00010b4fc23c();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    param_2 = *(long **)(unaff_x21 + 0x20);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x1c);
    param_1 = (long *)0x1;
    func_0x00010b4fc1d4();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x30) != 0) {
    func_0x00010b4fc41c();
    param_2 = param_1;
    func_0x00010b4fc3f0();
    func_0x00010b4fc448();
    unaff_x20 = param_1;
  }
  func_0x00010b4fc26c(*(undefined8 *)(unaff_x21 + 0x18));
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4fb114;
  }
  else if ((int)param_2 == 0) goto LAB_10b4fb114;
  param_4 = (long *)&UNK_10f7760c1;
  func_0x00010b4fc25c();
  func_0x00010b4fc1bc();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10b4fb114:
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x20);
    param_1 = (long *)0x4;
    func_0x00010b4fc1d4();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b4fc2bc();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b4fc3cc();
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



/* Entry: 10b4fb160; end: 10b4fb1ff;  */

void FUN_10b4fb160(long param_1)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  
  func_0x00010b4fc2d4();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b4fa8b0(*(undefined8 *)(unaff_x19 + 0x20));
      func_0x00010b4fc288();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b4fb6ec(*(undefined8 *)(unaff_x19 + 0x28));
      func_0x00010b4fc168();
      func_0x00010b4fc394();
    }
  }
  if (*(int *)(unaff_x19 + 0x30) != 0) {
    func_0x00010b4fc3d8();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b4fc478();
  }
  func_0x00010b4fc484();
  return;
}



/* Entry: 10b4fb200; end: 10b4fb423;  */

void FUN_10b4fb200(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b4fc1f4();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010b4fc49c();
    puVar2 = unaff_x22;
  }
  func_0x00010b4fc2ac();
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010b4fc308();
    }
    func_0x00010b4fc400();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b4fc32c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b4fa8f0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_10b4fc04c();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b4fb2c8();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  func_0x00010b4fc24c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b4fc204();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4fb424; end: 10b4fb433;  */

void FUN_10b4fb424(long param_1,ulong param_2)

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



/* Entry: 10b4fb434; end: 10b4fb457;  */

undefined8 FUN_10b4fb434(undefined8 param_1)

{
  func_0x00010b4fc234();
  return param_1;
}



/* Entry: 10b4fb458; end: 10b4fb45b;  */

undefined8 FUN_10b4fb458(undefined8 param_1)

{
  func_0x00010b4fc234();
  return param_1;
}



/* Entry: 10b4fb45c; end: 10b4fb46f;  */

void FUN_10b4fb45c(void)

{
  FUN_10b4fb434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fb470; end: 10b4fb4ff;  */

undefined ** FUN_10b4fb470(void)

{
  return &PTR_DAT_110cf55a8;
}



/* Entry: 10b4fb500; end: 10b4fb56f;  */

void FUN_10b4fb500(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  
  func_0x00010b4fc490(*(undefined4 *)(param_1 + 0x24));
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b4fb530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5b80f7)[extraout_x8] * 4 + 0x10b4fb534))();
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b4fb570; end: 10b4fb5a7;  */

long FUN_10b4fb570(long param_1)

{
  func_0x00010b4fc234();
  func_0x00010b4fc440();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10b4fb500(param_1);
  }
  return param_1;
}



/* Entry: 10b4fb5a8; end: 10b4fb5ab;  */

long FUN_10b4fb5a8(long param_1)

{
  func_0x00010b4fc234();
  func_0x00010b4fc440();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10b4fb500(param_1);
  }
  return param_1;
}



/* Entry: 10b4fb5ac; end: 10b4fb5bf;  */

void FUN_10b4fb5ac(void)

{
  FUN_10b4fb570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fb5c0; end: 10b4fb5cb;  */

undefined ** FUN_10b4fb5c0(void)

{
  return &PTR_DAT_110cf5618;
}



/* Entry: 10b4fb5cc; end: 10b4fb6eb;  */

long * FUN_10b4fb5cc(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long unaff_x22;
  int iVar3;
  
  func_0x00010b4fc23c();
  func_0x00010b4fc490(*(undefined4 *)((long)param_1 + 0x24));
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b4fb600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5b80fc)[extraout_x8] * 4 + 0x10b4fb604))();
    return param_1;
  }
  func_0x00010b4fc26c(*(undefined8 *)(unaff_x21 + 0x10));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4fb6b8;
  }
  else if ((int)param_2 == 0) goto LAB_10b4fb6b8;
  param_4 = (long *)&UNK_10f776143;
  func_0x00010b4fc25c();
  func_0x00010b4fc1bc();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10b4fb6b8:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b4fc2bc();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8_00 + 0x10);
  }
  func_0x00010b4fc3cc();
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



/* Entry: 10b4fb6ec; end: 10b4fb797;  */

long FUN_10b4fb6ec(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b4fc2f4();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  func_0x00010b4fc490(*(undefined4 *)(unaff_x19 + 0x24));
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b4fb73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5b8101)[extraout_x8_00] * 4 + 0x10b4fb740))();
    return param_1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b4fc478();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b4fb798; end: 10b4fb7b3;  */

long FUN_10b4fb798(long param_1)

{
  long extraout_x8;
  
  func_0x00010b4fb4c8();
  FUN_10b4fc168();
  return param_1 + extraout_x8;
}



/* Entry: 10b4fb7b4; end: 10b4fb7b7;  */

void FUN_10b4fb7b4(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  long extraout_x8;
  long lVar6;
  ulong extraout_x8_00;
  undefined *extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b4fc1f4();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  puVar3 = puVar5;
  if (((ulong)puVar5 & 1) != 0) {
    func_0x00010b4fc49c();
    puVar3 = unaff_x22;
  }
  func_0x00010b4fc314(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if (((ulong)puVar5 & 1) != 0) {
      func_0x00010b4fc308();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 == 0) goto LAB_10b4fb400;
  iVar2 = *(int *)((long)unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b4fb500();
    }
    *(int *)((long)unaff_x21 + 0x24) = iVar1;
  }
  switch(iVar1) {
  case 1:
    if (iVar2 != iVar1) {
code_r0x00010b4fb3bc:
      FUN_10b4fc0fc();
      unaff_x21[3] = (ulong)puVar3;
      param_1 = puVar3;
      goto LAB_10b4fb400;
    }
    func_0x00010b4fc3b4();
    break;
  case 2:
    if (iVar2 != iVar1) goto code_r0x00010b4fb3bc;
    func_0x00010b4fc3b4();
    break;
  default:
    goto LAB_10b4fb400;
  case 4:
    if (iVar2 != iVar1) {
      func_0x00010b4fc320();
      unaff_x21[3] = extraout_x8_00;
    }
    puVar4 = (undefined *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
    if (*(int *)(unaff_x20 + 0x24) != 4) {
      puVar4 = &DAT_11383d918;
    }
    goto code_r0x00010b4fb3f4;
  case 5:
    func_0x00010b4fc320();
    if (iVar2 != iVar1) {
      unaff_x21[3] = (ulong)extraout_x8_01;
    }
    puVar4 = (undefined *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
    if (*(int *)(unaff_x20 + 0x24) != 5) {
      puVar4 = extraout_x8_01;
    }
code_r0x00010b4fb3f4:
    param_1 = unaff_x21 + 3;
    func_0x000107c30248(param_1,puVar4,puVar3);
    goto LAB_10b4fb400;
  }
  FUN_10b4fb424();
LAB_10b4fb400:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4fc204();
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



/* Entry: 10b4fb7b8; end: 10b4fb7df;  */

undefined8 FUN_10b4fb7b8(undefined8 param_1)

{
  func_0x00010b4fc234();
  func_0x00010b4fc440();
  return param_1;
}



/* Entry: 10b4fb7e0; end: 10b4fb7f3;  */

void FUN_10b4fb7e0(void)

{
  FUN_10b4fb7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fb7f4; end: 10b4fb7ff;  */

undefined ** FUN_10b4fb7f4(void)

{
  return &PTR_DAT_110cf5678;
}



/* Entry: 10b4fb800; end: 10b4fb8a7;  */

long * FUN_10b4fb800(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long unaff_x22;
  int iVar3;
  
  func_0x00010b4fc23c();
  func_0x00010b4fc26c(param_1[2]);
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4fb854;
  }
  else if ((int)param_2 == 0) goto LAB_10b4fb854;
  param_4 = (long *)&UNK_10f776191;
  func_0x00010b4fc25c();
  func_0x00010b4fc1bc();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10b4fb854:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x00010b4fc41c();
    func_0x00010b4fc3f0();
    func_0x00010b4fc448();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b4fc2bc();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b4fc3cc();
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



/* Entry: 10b4fb8a8; end: 10b4fb913;  */

void FUN_10b4fb8a8(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b4fc2f4();
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
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x00010b4fc3d8();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b4fc478();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b4fb914; end: 10b4fb917;  */

void FUN_10b4fb914(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = param_2;
  func_0x00010b4fc314(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4fc308();
    }
    func_0x000107c30248(param_1 + 0x10);
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



/* Entry: 10b4fb918; end: 10b4fb93b;  */

undefined8 FUN_10b4fb918(undefined8 param_1)

{
  func_0x00010b4fc234();
  return param_1;
}



/* Entry: 10b4fb93c; end: 10b4fb94f;  */

void FUN_10b4fb93c(void)

{
  FUN_10b4fb918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fb950; end: 10b4fb973;  */

undefined ** FUN_10b4fb950(void)

{
  return &PTR_DAT_110cf56d0;
}



/* Entry: 10b4fb974; end: 10b4fb9ff;  */

long * FUN_10b4fb974(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b4fc3a4();
  plVar2 = param_1;
  if (param_1[2] != 0) {
    func_0x00010b4fc2a0();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010b4fc454();
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b4fc2a0();
    func_0x00010b4fc3f0();
    func_0x00010b4fc460();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4fc2bc();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b4fba00; end: 10b4fbabb;  */

ulong FUN_10b4fba00(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b4fbabc; end: 10b4fbaeb;  */

long * FUN_10b4fbabc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b4fbaec; end: 10b4fbdef;  */

void FUN_10b4fbaec(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4fc384();
  }
  else {
    func_0x00010b4fc38c();
  }
  *puVar1 = &PTR_DAT_110cf5060;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b4fbdf0; end: 10b4fbeff;  */

undefined8 * FUN_10b4fbdf0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x70;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x70);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110cf52e0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4fc1e0();
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar2 + 0x1c) = 0;
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined4 *)((long)puVar2 + 0x24) = 0;
  puVar2[5] = param_1;
  FUN_10b4fa8cc(puVar2 + 3,param_2 + 0x18);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = param_1;
  func_0x00010b4fa8e0(puVar2 + 6,param_2 + 0x30);
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010b4fbf00(param_1,*(undefined8 *)(param_2 + 0x48));
  }
  puVar2[9] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010b4fbf00(param_1,*(undefined8 *)(param_2 + 0x50));
  }
  puVar2[10] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4fbf70(param_1,*(undefined8 *)(param_2 + 0x58));
  }
  puVar2[0xb] = param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  *(undefined1 *)(puVar2 + 0xd) = *(undefined1 *)(param_2 + 0x68);
  puVar2[0xc] = uVar4;
  return puVar2;
}



/* Entry: 10b4fbf00; end: 10b4fbfe7;  */

undefined8 * FUN_10b4fbf00(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4fc384();
  }
  else {
    func_0x00010b4fc38c();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110cf50b0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4fc1e0();
  }
  lVar2 = param_2 + 0x10;
  func_0x00010b4fc3f8();
  puVar1[2] = lVar2;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 0x18);
  return puVar1;
}



/* Entry: 10b4fbfe8; end: 10b4fc04b;  */

undefined8 * FUN_10b4fbfe8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4fc384();
  }
  else {
    func_0x00010b4fc38c();
  }
  *puVar1 = &PTR_DAT_110cf5060;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_10b4faf5c();
  return puVar1;
}



/* Entry: 10b4fc04c; end: 10b4fc0fb;  */

undefined8 * FUN_10b4fc04c(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4fc374();
  }
  else {
    FUN_10b4d80e0(param_1,0x28);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110cf5240;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4fc1e0();
  }
  puVar2 = (undefined8 *)(param_2 + 0x10);
  func_0x00010b4fc3f8();
  puVar1[2] = puVar2;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  func_0x00010b4fc490();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b4fc0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5b8106)[extraout_x8] * 4 + 0x10b4fc0d4))();
    return puVar2;
  }
  return puVar1;
}



/* Entry: 10b4fc0fc; end: 10b4fc167;  */

undefined8 * FUN_10b4fc0fc(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf5100;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_10b4fb424();
  return puVar1;
}



/* Entry: 10b4fc168; end: 10b4fc4f3;  */

void FUN_10b4fc168(void)

{
  return;
}



/* Entry: 10b4fc4f4; end: 10b4fc51b;  */

long FUN_10b4fc4f4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b4fc51c; end: 10b4fc567;  */

undefined8 * FUN_10b4fc51c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cf5828;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b4fc4b4(param_1,param_3);
  return param_1;
}



/* Entry: 10b4fc568; end: 10b4fc56b;  */

long FUN_10b4fc568(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b4fc56c; end: 10b4fc57f;  */

void FUN_10b4fc56c(void)

{
  FUN_10b4fc4f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fc580; end: 10b4fc59f;  */

undefined ** FUN_10b4fc580(void)

{
  return &PTR_DAT_110cf5868;
}



/* Entry: 10b4fc5a0; end: 10b4fc687;  */

long * FUN_10b4fc5a0(long *param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  plVar5 = param_1;
  if (param_1[2] != 0) {
    plVar6 = param_1;
    FUN_10b4fc764();
    plVar5 = (long *)param_1[2];
    uVar1 = 8;
    func_0x000107c280a8(8,plVar6);
    func_0x000107c280ac(plVar5,uVar1);
    param_2 = plVar5;
  }
  plVar6 = plVar5;
  if ((int)param_1[3] != 0) {
    FUN_10b4fc764();
    plVar6 = (long *)(ulong)*(uint *)(param_1 + 3);
    uVar1 = 0x10;
    func_0x000107c280a8(0x10,plVar5);
    func_0x000107c280a8(plVar6,uVar1);
    param_2 = plVar6;
  }
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    FUN_10b4fc764();
    param_2 = (long *)(ulong)*(uint *)((long)param_1 + 0x1c);
    uVar1 = 0x18;
    func_0x000107c280a8(0x18,plVar6);
    func_0x000107c280b8(param_2,uVar1);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar4 = param_1[1] & 0xfffffffffffffffe;
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
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 10b4fc688; end: 10b4fc71b;  */

ulong FUN_10b4fc688(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x280U >> 6) + 1;
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



/* Entry: 10b4fc71c; end: 10b4fc763;  */

void FUN_10b4fc71c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf5828;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b4fc764; end: 10b4fc7b7;  */

ulong * FUN_10b4fc764(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 10b4fc7b8; end: 10b4fc7db;  */

undefined8 FUN_10b4fc7b8(undefined8 param_1)

{
  func_0x00010b504218();
  return param_1;
}



/* Entry: 10b4fc7dc; end: 10b4fc7df;  */

undefined8 FUN_10b4fc7dc(undefined8 param_1)

{
  func_0x00010b504218();
  return param_1;
}



/* Entry: 10b4fc7e0; end: 10b4fc7f3;  */

void FUN_10b4fc7e0(void)

{
  FUN_10b4fc7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fc7f4; end: 10b4fc823;  */

undefined ** FUN_10b4fc7f4(void)

{
  return &PTR_DAT_110cf62c8;
}



/* Entry: 10b4fc824; end: 10b4fc893;  */

long * FUN_10b4fc824(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  func_0x00010b503fd4();
  if ((unaff_w21 & 1) != 0) {
    func_0x00010b50442c();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010b50442c();
    func_0x00010598f43c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504254();
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



/* Entry: 10b4fc894; end: 10b4fc913;  */

ulong FUN_10b4fc894(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    uVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar2;
    }
  }
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



/* Entry: 10b4fc914; end: 10b4fc987;  */

undefined8 * FUN_10b4fc914(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf6288;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b504094();
  }
  func_0x00010b50437c();
  FUN_10b50299c();
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b50307c(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 0x38);
  return param_1;
}



/* Entry: 10b4fc988; end: 10b4fc9b3;  */

undefined8 FUN_10b4fc988(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b4fc9b4(param_1);
  return param_1;
}



/* Entry: 10b4fc9b4; end: 10b4fc9e3;  */

undefined8 FUN_10b4fc9b4(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b4fd010();
  }
  __ZdlPv();
  func_0x00010b504510(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x00010b504454();
  }
  return unaff_x19;
}



/* Entry: 10b4fc9e4; end: 10b4fc9e7;  */

undefined8 FUN_10b4fc9e4(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b4fc9b4(param_1);
  return param_1;
}



/* Entry: 10b4fc9e8; end: 10b4fc9fb;  */

void FUN_10b4fc9e8(void)

{
  FUN_10b4fc988();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fc9fc; end: 10b4fca07;  */

undefined ** FUN_10b4fc9fc(void)

{
  return &PTR_DAT_110cf6310;
}



/* Entry: 10b4fca08; end: 10b4fcb77;  */

void FUN_10b4fca08(long param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010b50433c();
    iVar2 = (int)param_1;
    FUN_10b4fcf60();
    if ((iVar2 != 0) && ((uVar1 & 1) != 0)) {
      FUN_10b4fd0d0();
    }
  }
  return;
}



/* Entry: 10b4fcb78; end: 10b4fcc13;  */

long * FUN_10b4fcb78(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  func_0x00010b504084();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010b50402c();
    unaff_w21 = *(uint *)(unaff_x20 + 0x38);
    func_0x00010b504368();
    func_0x00010b5040c8();
    param_4 = param_1;
  }
  if ((uVar1 & 1) != 0) {
    func_0x00010b503fc4();
    param_4 = param_1;
  }
  func_0x00010b5045c0();
  while (uVar1 != unaff_w21) {
    func_0x00010b503fa4();
    func_0x00010b5041e8(7);
    func_0x00010b504330();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504254();
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



/* Entry: 10b4fcc14; end: 10b4fcc83;  */

void FUN_10b4fcc14(void)

{
  uint uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b503f38();
  while (unaff_x22 != 0) {
    FUN_10b4fcc84(*unaff_x21);
    func_0x00010b5043fc();
    unaff_x21 = unaff_x21 + 1;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x00010b4fcc9c(*(undefined8 *)(unaff_x19 + 0x30));
    func_0x00010b5042dc();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010b50404c((long)*(int *)(unaff_x19 + 0x38));
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b504268();
  }
  func_0x00010b504324();
  return;
}



/* Entry: 10b4fcc84; end: 10b4fccb3;  */

void FUN_10b4fcc84(void)

{
  FUN_10b4ffd60();
  FUN_10b503ee4();
  return;
}



/* Entry: 10b4fccb4; end: 10b4fcd33;  */

void FUN_10b4fccb4(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  func_0x00010b50451c();
  FUN_10b4fcd34();
  func_0x00010b5047ac();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        FUN_10b50307c();
        *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b4fcd44();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x38) = *(undefined4 *)(unaff_x20 + 0x38);
    }
  }
  func_0x00010b504018();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b50410c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4fcd34; end: 10b4fcd43;  */

void FUN_10b4fcd34(long *param_1,long param_2)

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



/* Entry: 10b4fcd44; end: 10b4fcf5f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4fcd44(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  func_0x00010b50451c();
  FUN_10b4fd7b8();
  func_0x00010b5047a0();
  func_0x00010b4fd7bc();
  func_0x000107c282d0(unaff_x21 + 0x48,unaff_x20 + 0x48);
  func_0x00010b4fd7cc(unaff_x21 + 0x58,unaff_x20 + 0x58);
  puVar2 = (ulong *)(unaff_x21 + 0x70);
  func_0x00010b4fd7bc();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5042b4(*(undefined8 *)(unaff_x20 + 0x88));
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      puVar2 = (ulong *)(unaff_x21 + 0x88);
      func_0x00010b504260();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5044cc(*(undefined8 *)(unaff_x20 + 0x90));
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      puVar2 = (ulong *)(unaff_x21 + 0x90);
      func_0x00010b504260();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b5044cc(*(undefined8 *)(unaff_x20 + 0x98));
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      puVar2 = (ulong *)(unaff_x21 + 0x98);
      func_0x00010b504260();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b5044cc(*(undefined8 *)(unaff_x20 + 0xa0));
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      puVar2 = (ulong *)(unaff_x21 + 0xa0);
      func_0x00010b504260();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00010b5031fc();
        *(ulong **)(unaff_x21 + 0xa8) = puVar2;
      }
      else {
        FUN_10b4fd7dc();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb0);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b503280();
        *(ulong **)(unaff_x21 + 0xb0) = unaff_x22;
        puVar2 = unaff_x22;
      }
      else {
        FUN_10b4fd8a8();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb8);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b5046ec();
        *(ulong **)(unaff_x21 + 0xb8) = puVar2;
      }
      else {
        FUN_10b4fd988();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0xc0) = *(undefined4 *)(unaff_x20 + 0xc0);
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xc4) = *(undefined1 *)(unaff_x20 + 0xc4);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xc5) = *(undefined1 *)(unaff_x20 + 0xc5);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xc6) = *(undefined1 *)(unaff_x20 + 0xc6);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 199) = *(undefined1 *)(unaff_x20 + 199);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 200) = *(undefined1 *)(unaff_x20 + 200);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xc9) = *(undefined1 *)(unaff_x20 + 0xc9);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xca) = *(undefined1 *)(unaff_x20 + 0xca);
    }
  }
  func_0x00010b504018();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b50410c();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4fcf60; end: 10b4fcf9f;  */

bool FUN_10b4fcf60(ulong param_1)

{
  int unaff_w21;
  
  func_0x00010b504284();
  do {
    unaff_w21 = unaff_w21 + -1;
    if (unaff_w21 < 1) break;
    func_0x00010b5044ac();
    FUN_10b4ff93c();
  } while ((param_1 & 1) != 0);
  return unaff_w21 < 1;
}



/* Entry: 10b4fcfa0; end: 10b4fcfcb;  */

undefined8 * FUN_10b4fcfa0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110cf61e8;
  param_1[1] = param_2;
  FUN_10b4fcfcc();
  return param_1;
}



/* Entry: 10b4fcfcc; end: 10b4fd00f;  */

void FUN_10b4fcfcc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = param_2;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined **)(param_1 + 0x88) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x90) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x98) = &DAT_11383d918;
  *(undefined **)(param_1 + 0xa0) = &DAT_11383d918;
  *(undefined4 *)(param_1 + 199) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return;
}



/* Entry: 10b4fd010; end: 10b4fd03b;  */

undefined8 FUN_10b4fd010(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b4fd03c(param_1);
  return param_1;
}



/* Entry: 10b4fd03c; end: 10b4fd0ab;  */

long FUN_10b4fd03c(long param_1)

{
  func_0x000107c30258(param_1 + 0x88);
  func_0x000107c30258(param_1 + 0x90);
  func_0x000107c30258(param_1 + 0x98);
  func_0x000107c30258(param_1 + 0xa0);
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_10b4fda4c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_10b50115c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_10b5017c4();
  }
  __ZdlPv();
  FUN_10b502a24(param_1 + 0x70);
  FUN_10b502a4c(param_1 + 0x58);
  func_0x000107c282dc(param_1 + 0x48);
  FUN_10b502a24(param_1 + 0x30);
  FUN_10b502a24(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b4fd0ac; end: 10b4fd0af;  */

undefined8 FUN_10b4fd0ac(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b4fd03c(param_1);
  return param_1;
}



/* Entry: 10b4fd0b0; end: 10b4fd0c3;  */

void FUN_10b4fd0b0(void)

{
  FUN_10b4fd010();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fd0c4; end: 10b4fd0cf;  */

undefined ** FUN_10b4fd0c4(void)

{
  return &PTR_DAT_110cf6358;
}



/* Entry: 10b4fd0d0; end: 10b4fd223;  */

bool FUN_10b4fd0d0(int param_1)

{
  int iVar1;
  ulong uVar2;
  long unaff_x19;
  int unaff_w21;
  
  func_0x00010b50433c();
  FUN_10b4fda0c();
  if (param_1 != 0) {
    iVar1 = (int)unaff_x19 + 0x30;
    FUN_10b4fda0c();
    if (iVar1 != 0) {
      uVar2 = unaff_x19 + 0x70;
      func_0x00010b504284();
      do {
        unaff_w21 = unaff_w21 + -1;
        if (unaff_w21 < 1) break;
        func_0x00010b5044ac();
        func_0x00010b500258();
      } while ((uVar2 & 1) != 0);
      return unaff_w21 < 1;
    }
  }
  return false;
}



/* Entry: 10b4fd224; end: 10b4fd757;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b4fd224(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar5;
  int unaff_w23;
  long lVar6;
  int iVar7;
  
  func_0x00010b504084();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x00010b5042f8(*(undefined8 *)(unaff_x20 + 0x88));
    func_0x000107c280a0();
    param_4 = param_1;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xa8) + 0x14);
    param_1 = (long *)0xa;
    func_0x00010b5041e8();
    param_4 = param_1;
  }
  if ((uVar1 >> 7 & 1) != 0) {
    func_0x00010b50442c();
    func_0x0001089f5418();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010b5042f8(*(undefined8 *)(unaff_x20 + 0x90));
    func_0x000107c280a0();
    param_4 = param_1;
  }
  func_0x00010b504358();
  while (unaff_w23 != unaff_w21) {
    func_0x00010b503f18();
    param_1 = (long *)0x1c;
    func_0x00010b5041e8();
    func_0x00010b504330();
  }
  func_0x00010b5045d0();
  while (unaff_w23 != unaff_w21) {
    func_0x00010b503f18();
    param_1 = (long *)0x1d;
    func_0x00010b5041e8();
    func_0x00010b504330();
  }
  uVar2 = *(uint *)(unaff_x20 + 0x48);
  for (lVar6 = 0; (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 2 != lVar6;
      lVar6 = lVar6 + 4) {
    func_0x00010b50402c();
    param_4 = (long *)0x110;
    func_0x000107c280a8(0x110,param_1);
    func_0x00010b5040c8();
    param_1 = param_4;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    func_0x00010b50402c();
    param_4 = (long *)0x130;
    func_0x000107c280a8(0x130,param_1);
    func_0x00010b5040bc();
    param_1 = param_4;
  }
  if ((uVar1 >> 9 & 1) != 0) {
    func_0x00010b50402c();
    param_4 = (long *)0x158;
    func_0x000107c280a8(0x158,param_1);
    func_0x00010b5040bc();
    param_1 = param_4;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xb0) + 0x14);
    param_1 = (long *)0x2c;
    func_0x00010b5041e8();
    param_4 = param_1;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xb8) + 0x14);
    param_1 = (long *)0x2d;
    func_0x00010b5041e8();
    param_4 = param_1;
  }
  plVar3 = param_1;
  if ((uVar1 >> 10 & 1) != 0) {
    func_0x00010b50402c();
    plVar3 = (long *)0x170;
    func_0x000107c280a8(0x170,param_1);
    func_0x00010b5040bc();
    param_4 = plVar3;
  }
  iVar5 = *(int *)(unaff_x20 + 0x60);
  while (iVar5 != 0) {
    func_0x00010b503f18();
    plVar3 = (long *)0x2f;
    func_0x00010b5041e8();
    func_0x00010b504330();
  }
  plVar4 = plVar3;
  if ((uVar1 >> 0xb & 1) != 0) {
    func_0x00010b50402c();
    plVar4 = (long *)0x180;
    func_0x000107c280a8(0x180,plVar3);
    func_0x00010b5040bc();
    param_4 = plVar4;
  }
  iVar5 = *(int *)(unaff_x20 + 0x78);
  while (iVar5 != 0) {
    func_0x00010b503f18();
    plVar4 = (long *)0x31;
    func_0x00010b5041e8();
    func_0x00010b504330();
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    func_0x00010b50402c();
    param_4 = (long *)0x190;
    func_0x000107c280a8(400,plVar4);
    func_0x00010b5040bc();
    plVar4 = param_4;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    func_0x00010b5042f8(*(undefined8 *)(unaff_x20 + 0x98));
    func_0x000107c280a0();
    param_4 = plVar4;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    func_0x00010b5042f8(*(undefined8 *)(unaff_x20 + 0xa0));
    func_0x000107c280a0();
    param_4 = plVar4;
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    func_0x00010b50402c();
    param_4 = (long *)0x1a8;
    func_0x000107c280a8(0x1a8,plVar4);
    func_0x00010b5040bc();
    plVar4 = param_4;
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    func_0x00010b50402c();
    param_4 = (long *)0x1b0;
    func_0x000107c280a8(0x1b0,plVar4);
    func_0x00010b5040bc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b504254();
  if ((long)param_3 < 0) {
    lVar6 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar6 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      uVar1 = iVar5 - iVar7;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4,lVar6,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b4fd758; end: 10b4fd7b7;  */

void FUN_10b4fd758(void)

{
  func_0x00010b50030c();
  FUN_10b503ee4();
  return;
}



/* Entry: 10b4fd7b8; end: 10b4fd7db;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4fd7b8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  func_0x00010b50451c();
  FUN_10b4fd7b8();
  func_0x00010b5047a0();
  FUN_10b4fd7b8();
  func_0x000107c282d0(unaff_x21 + 0x48,unaff_x20 + 0x48);
  func_0x00010b4fd7cc(unaff_x21 + 0x58,unaff_x20 + 0x58);
  puVar2 = (ulong *)(unaff_x21 + 0x70);
  func_0x00010b4fd7bc();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5042b4(*(undefined8 *)(unaff_x20 + 0x88));
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      puVar2 = (ulong *)(unaff_x21 + 0x88);
      func_0x00010b504260();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5044cc(*(undefined8 *)(unaff_x20 + 0x90));
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      puVar2 = (ulong *)(unaff_x21 + 0x90);
      func_0x00010b504260();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b5044cc(*(undefined8 *)(unaff_x20 + 0x98));
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      puVar2 = (ulong *)(unaff_x21 + 0x98);
      func_0x00010b504260();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b5044cc(*(undefined8 *)(unaff_x20 + 0xa0));
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      puVar2 = (ulong *)(unaff_x21 + 0xa0);
      func_0x00010b504260();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00010b5031fc();
        *(ulong **)(unaff_x21 + 0xa8) = puVar2;
      }
      else {
        FUN_10b4fd7dc();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb0);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b503280();
        *(ulong **)(unaff_x21 + 0xb0) = unaff_x22;
        puVar2 = unaff_x22;
      }
      else {
        FUN_10b4fd8a8();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb8);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b5046ec();
        *(ulong **)(unaff_x21 + 0xb8) = puVar2;
      }
      else {
        FUN_10b4fd988();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0xc0) = *(undefined4 *)(unaff_x20 + 0xc0);
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xc4) = *(undefined1 *)(unaff_x20 + 0xc4);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xc5) = *(undefined1 *)(unaff_x20 + 0xc5);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xc6) = *(undefined1 *)(unaff_x20 + 0xc6);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 199) = *(undefined1 *)(unaff_x20 + 199);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 200) = *(undefined1 *)(unaff_x20 + 200);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xc9) = *(undefined1 *)(unaff_x20 + 0xc9);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xca) = *(undefined1 *)(unaff_x20 + 0xca);
    }
  }
  func_0x00010b504018();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b50410c();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4fd7dc; end: 10b4fd8a7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4fd7dc(ulong *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ulong extraout_x8;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5043e8();
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b50406c();
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      func_0x00010b504198();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5043ac();
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      param_1 = (ulong *)(unaff_x19 + 0x20);
      func_0x00010b504260();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
      *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) | 4;
      if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
        func_0x00010b504304(uVar2);
      }
      param_1 = (ulong *)(unaff_x19 + 0x28);
      func_0x00010b504260();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
    }
  }
  func_0x00010b504130();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b504170();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4fd8a8; end: 10b4fd987;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4fd8a8(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b504618();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5046f4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b5008e8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b504760();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5046f4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b5008e8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5046f4();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10b5008e8();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b503cbc();
        *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b501070();
      }
    }
  }
  func_0x00010b504018();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b50410c();
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



/* Entry: 10b4fd988; end: 10b4fd9d7;  */

void FUN_10b4fd988(ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  uint unaff_w21;
  
  func_0x00010b5041cc();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      func_0x00010b50406c();
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      func_0x00010b504198();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      func_0x00010b504754();
    }
  }
  func_0x00010b504130();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b504170();
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



/* Entry: 10b4fd9d8; end: 10b4fda0b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4fd9d8(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b5043d0();
  func_0x00010b4fca9c();
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  func_0x00010b50451c();
  FUN_10b4fd7b8();
  func_0x00010b5047a0();
  func_0x00010b4fd7bc();
  func_0x000107c282d0(unaff_x21 + 0x48,unaff_x20 + 0x48);
  func_0x00010b4fd7cc(unaff_x21 + 0x58,unaff_x20 + 0x58);
  puVar2 = (ulong *)(unaff_x21 + 0x70);
  func_0x00010b4fd7bc();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5042b4(*(undefined8 *)(unaff_x20 + 0x88));
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      puVar2 = (ulong *)(unaff_x21 + 0x88);
      func_0x00010b504260();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5044cc(*(undefined8 *)(unaff_x20 + 0x90));
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      puVar2 = (ulong *)(unaff_x21 + 0x90);
      func_0x00010b504260();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b5044cc(*(undefined8 *)(unaff_x20 + 0x98));
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      puVar2 = (ulong *)(unaff_x21 + 0x98);
      func_0x00010b504260();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b5044cc(*(undefined8 *)(unaff_x20 + 0xa0));
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      puVar2 = (ulong *)(unaff_x21 + 0xa0);
      func_0x00010b504260();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00010b5031fc();
        *(ulong **)(unaff_x21 + 0xa8) = puVar2;
      }
      else {
        FUN_10b4fd7dc();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb0);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b503280();
        *(ulong **)(unaff_x21 + 0xb0) = unaff_x22;
        puVar2 = unaff_x22;
      }
      else {
        FUN_10b4fd8a8();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb8);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b5046ec();
        *(ulong **)(unaff_x21 + 0xb8) = puVar2;
      }
      else {
        FUN_10b4fd988();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0xc0) = *(undefined4 *)(unaff_x20 + 0xc0);
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xc4) = *(undefined1 *)(unaff_x20 + 0xc4);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xc5) = *(undefined1 *)(unaff_x20 + 0xc5);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xc6) = *(undefined1 *)(unaff_x20 + 0xc6);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 199) = *(undefined1 *)(unaff_x20 + 199);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 200) = *(undefined1 *)(unaff_x20 + 200);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xc9) = *(undefined1 *)(unaff_x20 + 0xc9);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xca) = *(undefined1 *)(unaff_x20 + 0xca);
    }
  }
  func_0x00010b504018();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b50410c();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4fda0c; end: 10b4fda4b;  */

bool FUN_10b4fda0c(ulong param_1)

{
  int unaff_w21;
  
  func_0x00010b504284();
  do {
    unaff_w21 = unaff_w21 + -1;
    if (unaff_w21 < 1) break;
    func_0x00010b5044ac();
    func_0x00010b500258();
  } while ((param_1 & 1) != 0);
  return unaff_w21 < 1;
}



/* Entry: 10b4fda4c; end: 10b4fda77;  */

undefined8 FUN_10b4fda4c(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b4fda78(param_1);
  return param_1;
}



/* Entry: 10b4fda78; end: 10b4fda9f;  */

/* WARNING: Possible PIC construction at 0x00010b4fda88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4fda8c) */

void FUN_10b4fda78(ulong *param_1)

{
  ulong uVar1;
  
  func_0x00010b50433c();
  uVar1 = *param_1 ^ 2;
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



/* Entry: 10b4fdaa0; end: 10b4fdaa3;  */

undefined8 FUN_10b4fdaa0(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b4fda78(param_1);
  return param_1;
}



/* Entry: 10b4fdaa4; end: 10b4fdab7;  */

void FUN_10b4fdaa4(void)

{
  FUN_10b4fda4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fdab8; end: 10b4fdac3;  */

undefined ** FUN_10b4fdab8(void)

{
  return &PTR_DAT_110cf63a0;
}



/* Entry: 10b4fdac4; end: 10b4fdc67;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b4fdac4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  func_0x00010b503fd4();
  if ((unaff_w21 & 1) != 0) {
    func_0x00010b504038();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 3 & 1) != 0) {
    func_0x00010b50442c();
    func_0x000107c282cc();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 4 & 1) != 0) {
    func_0x00010b50442c();
    func_0x00010599ccb0();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 5 & 1) != 0) {
    func_0x00010b50442c();
    func_0x000107c282e8();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010b5042f8(*(undefined8 *)(unaff_x20 + 0x20));
    func_0x000107c280a0();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 2 & 1) != 0) {
    func_0x00010b5042f8(*(undefined8 *)(unaff_x20 + 0x28));
    func_0x000107c280a0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504254();
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



/* Entry: 10b4fdc68; end: 10b4fdc6b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4fdc68(ulong *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ulong extraout_x8;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5043e8();
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b50406c();
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      func_0x00010b504198();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5043ac();
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      param_1 = (ulong *)(unaff_x19 + 0x20);
      func_0x00010b504260();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
      *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) | 4;
      if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
        func_0x00010b504304(uVar2);
      }
      param_1 = (ulong *)(unaff_x19 + 0x28);
      func_0x00010b504260();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
    }
  }
  func_0x00010b504130();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b504170();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4fdc6c; end: 10b4fdc93;  */

undefined8 FUN_10b4fdc6c(undefined8 param_1)

{
  func_0x00010b504218();
  func_0x00010b504508();
  return param_1;
}



/* Entry: 10b4fdc94; end: 10b4fdc97;  */

undefined8 FUN_10b4fdc94(undefined8 param_1)

{
  func_0x00010b504218();
  func_0x00010b504508();
  return param_1;
}



/* Entry: 10b4fdc98; end: 10b4fdcab;  */

void FUN_10b4fdc98(void)

{
  FUN_10b4fdc6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fdcac; end: 10b4fdcb7;  */

undefined ** FUN_10b4fdcac(void)

{
  return &PTR_DAT_110cf63e8;
}



/* Entry: 10b4fdcb8; end: 10b4fdceb;  */

void FUN_10b4fdcb8(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00010b5045a0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b504424();
  }
  func_0x00010b5045e0();
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



/* Entry: 10b4fdcec; end: 10b4fdd53;  */

long * FUN_10b4fdcec(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  func_0x00010b503fd4();
  if ((unaff_w21 & 1) != 0) {
    func_0x00010b504038();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010b50402c();
    func_0x00010b504548();
    func_0x00010b5040c8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504254();
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



/* Entry: 10b4fdd54; end: 10b4fddc3;  */

void FUN_10b4fdd54(int param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  uint unaff_w20;
  
  func_0x00010b5041a4();
  if ((bool)in_ZR) {
    param_1 = 0;
  }
  else {
    if ((unaff_w20 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010b50444c(*(undefined8 *)(unaff_x19 + 0x18));
      param_1 = param_1 + 1;
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010b5040e8((long)*(int *)(unaff_x19 + 0x20));
      func_0x00010b504734();
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b504268();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 10b4fddc4; end: 10b4fddc7;  */

void FUN_10b4fddc4(ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  uint unaff_w21;
  
  func_0x00010b5041cc();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      func_0x00010b50406c();
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      func_0x00010b504198();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      func_0x00010b504754();
    }
  }
  func_0x00010b504130();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b504170();
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



/* Entry: 10b4fddc8; end: 10b4fde17;  */

void FUN_10b4fddc8(ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  uint unaff_w21;
  
  func_0x00010b5041cc();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      func_0x00010b50406c();
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      func_0x00010b504198();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      func_0x00010b504754();
    }
  }
  func_0x00010b504130();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b504170();
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



/* Entry: 10b4fde18; end: 10b4fde43;  */

void FUN_10b4fde18(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
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



/* Entry: 10b4fde44; end: 10b4fde67;  */

undefined8 FUN_10b4fde44(undefined8 param_1)

{
  func_0x00010b504218();
  return param_1;
}



/* Entry: 10b4fde68; end: 10b4fde6b;  */

undefined8 FUN_10b4fde68(undefined8 param_1)

{
  func_0x00010b504218();
  return param_1;
}


