/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b487cf4; end: 10b487d23;  */

void FUN_10b487cf4(long param_1)

{
  if (*(int *)(param_1 + 0x34) == 5) {
    func_0x000107c30258(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 10b487d24; end: 10b487d2f;  */

undefined ** FUN_10b487d24(void)

{
  return &PTR_DAT_110ceb9f0;
}



/* Entry: 10b487d30; end: 10b487d7b;  */

void FUN_10b487d30(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b488388();
  if ((extraout_x8 & 1) != 0) {
    FUN_10b485680(*(undefined8 *)(unaff_x19 + 0x18));
  }
  func_0x00010b487c28();
  FUN_10b487cf4();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10b487d7c; end: 10b487ee3;  */

long * FUN_10b487d7c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x00010b488380(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2);
  }
  if (*(int *)(param_1 + 0x30) == 3) {
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    lVar3 = (long)*(char *)((long)puVar7 + 0x17);
    if (lVar3 < 0) {
      lVar3 = puVar7[1];
      puVar7 = (undefined8 *)*puVar7;
    }
    func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f76f015);
    plVar2 = param_3;
    func_0x00010b488424(param_3,3);
  }
  else {
    plVar2 = plVar1;
    if (*(int *)(param_1 + 0x30) == 2) {
      plVar2 = (long *)0x2;
      func_0x00010b488380(2,*(long *)(param_1 + 0x20),
                          *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x10),plVar1);
    }
  }
  if (*(int *)(param_1 + 0x34) == 5) {
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    lVar3 = (long)*(char *)((long)puVar7 + 0x17);
    if (lVar3 < 0) {
      lVar3 = puVar7[1];
      puVar7 = (undefined8 *)*puVar7;
    }
    func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f76f052);
    plVar2 = param_3;
    func_0x00010b488424(param_3,5);
  }
  else if (*(int *)(param_1 + 0x34) == 4) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,plVar2);
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b4883e8();
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar2;
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
  if ((long)(int)uVar4 <= *param_3 - (long)plVar2) {
    _memcpy(plVar2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar4);
  }
  while( true ) {
    iVar8 = ((int)*param_3 - (int)plVar2) + 0x10;
    iVar6 = (int)uVar4;
    uVar4 = (ulong)(uint)(iVar6 - iVar8);
    if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
    func_0x00010b4d5738();
    lVar3 = (long)plVar2 + (long)iVar8;
    plVar2 = param_3;
    func_0x000107c303e4(param_3,lVar3);
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar2 + (long)iVar6);
}



/* Entry: 10b487ee4; end: 10b487fb7;  */

long FUN_10b487ee4(void)

{
  ulong uVar1;
  ulong extraout_x8;
  long lVar2;
  long unaff_x19;
  long lVar3;
  
  func_0x00010b488388();
  if ((extraout_x8 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x18);
    FUN_10b484b8c();
    lVar3 = lVar3 + 1;
  }
  if (*(int *)(unaff_x19 + 0x30) == 3) {
    uVar1 = *(ulong *)(unaff_x19 + 0x20) & 0xfffffffffffffffc;
    func_0x000107c282a0();
LAB_10b487f38:
    lVar3 = lVar3 + uVar1 + 1;
  }
  else if (*(int *)(unaff_x19 + 0x30) == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 0x20);
    func_0x00010793598c();
    goto LAB_10b487f38;
  }
  if (*(int *)(unaff_x19 + 0x34) == 5) {
    uVar1 = *(ulong *)(unaff_x19 + 0x28) & 0xfffffffffffffffc;
    func_0x000107c282a0();
  }
  else {
    if (*(int *)(unaff_x19 + 0x34) != 4) goto LAB_10b487f88;
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x28)) * -9 + 0x280U >> 6);
  }
  lVar3 = lVar3 + uVar1 + 1;
LAB_10b487f88:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(unaff_x19 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b487fb8; end: 10b487fbb;  */

void FUN_10b487fb8(ulong *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar5;
  
  func_0x00010b4883d0();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      param_1 = puVar5;
      FUN_10b484ca4();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_10b485cd8();
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar2;
  iVar3 = *(int *)(unaff_x20 + 0x30);
  if (iVar3 != 0) {
    iVar4 = (int)unaff_x21[6];
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        param_1 = unaff_x21;
        func_0x00010b487c28();
      }
      *(int *)(unaff_x21 + 6) = iVar3;
    }
    if (iVar3 == 3) {
      if (iVar4 != 3) {
        unaff_x21[4] = (ulong)&DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(unaff_x20 + 0x20) & 0xfffffffffffffffc);
      if (*(int *)(unaff_x20 + 0x30) != 3) {
        puVar1 = &DAT_11383d918;
      }
      param_1 = unaff_x21 + 4;
      func_0x000107c30248(param_1,puVar1,puVar5);
    }
    else if (iVar3 == 2) {
      if (iVar4 == 2) {
        param_1 = (ulong *)unaff_x21[4];
        func_0x00010bd1b688();
      }
      else {
        param_1 = puVar5;
        func_0x000107c284d4();
        unaff_x21[4] = (ulong)param_1;
      }
    }
  }
  iVar3 = *(int *)(unaff_x20 + 0x34);
  if (iVar3 != 0) {
    iVar4 = *(int *)((long)unaff_x21 + 0x34);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        param_1 = unaff_x21;
        FUN_10b487cf4();
      }
      *(int *)((long)unaff_x21 + 0x34) = iVar3;
    }
    if (iVar3 == 5) {
      if (iVar4 != 5) {
        unaff_x21[5] = (ulong)&DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(unaff_x20 + 0x28) & 0xfffffffffffffffc);
      if (*(int *)(unaff_x20 + 0x34) != 5) {
        puVar1 = &DAT_11383d918;
      }
      param_1 = unaff_x21 + 5;
      func_0x000107c30248(param_1,puVar1,puVar5);
    }
    else if (iVar3 == 4) {
      *(undefined4 *)(unaff_x21 + 5) = *(undefined4 *)(unaff_x20 + 0x28);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4883b0();
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



/* Entry: 10b487fbc; end: 10b487fef;  */

long FUN_10b487fbc(long param_1)

{
  func_0x00010b488404();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4855b8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b487ff0; end: 10b488003;  */

void FUN_10b487ff0(void)

{
  FUN_10b487fbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b488004; end: 10b48800f;  */

undefined ** FUN_10b488004(void)

{
  return &PTR_DAT_110ceba40;
}



/* Entry: 10b488010; end: 10b48810f;  */

void FUN_10b488010(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b488388();
  if ((extraout_x8 & 1) != 0) {
    FUN_10b485680(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10b488110; end: 10b48812b;  */

void FUN_10b488110(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b4883d0();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_10b484ca4();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      FUN_10b485cd8();
      puVar2 = puVar3;
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4883b0();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 10b48812c; end: 10b4881eb;  */

void FUN_10b48812c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b488418();
  }
  *puVar1 = &PTR_DAT_110ceb8d0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b4881ec; end: 10b488357;  */

undefined8 * FUN_10b4881ec(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4883f4();
  }
  else {
    func_0x00010b4883fc();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110ceb920;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b488374();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  iVar4 = *(int *)(param_2 + 0x30);
  *(int *)(puVar2 + 6) = iVar4;
  *(undefined4 *)((long)puVar2 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10b484ca4(param_1,*(undefined8 *)(param_2 + 0x18));
    iVar4 = *(int *)(puVar2 + 6);
  }
  puVar2[3] = puVar3;
  if (iVar4 == 3) {
    puVar3 = (undefined8 *)(param_2 + 0x20);
    func_0x000107c2809c(puVar3,param_1);
  }
  else {
    if (iVar4 != 2) goto LAB_10b4882a0;
    puVar3 = param_1;
    func_0x000107c284d4(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = puVar3;
LAB_10b4882a0:
  if (*(int *)((long)puVar2 + 0x34) == 5) {
    param_2 = param_2 + 0x28;
    func_0x000107c2809c(param_2,param_1);
    puVar2[5] = param_2;
  }
  else if (*(int *)((long)puVar2 + 0x34) == 4) {
    *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28);
  }
  return puVar2;
}



/* Entry: 10b488358; end: 10b48843b;  */

void FUN_10b488358(void)

{
  return;
}



/* Entry: 10b48843c; end: 10b4884c3;  */

void FUN_10b48843c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b488498;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b489260();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_10b488498;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b488498;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b488d38();
    }
  }
  __ZdlPv();
LAB_10b488498:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b4884c4; end: 10b488543;  */

undefined8 * FUN_10b4884c4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110cebc20;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4898c8();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 2) {
    FUN_10b489764(param_2,*(undefined8 *)(param_3 + 0x10));
  }
  else {
    if (iVar1 != 1) {
      return param_1;
    }
    FUN_10b4896a4(param_2,*(undefined8 *)(param_3 + 0x10));
  }
  param_1[2] = param_2;
  return param_1;
}



/* Entry: 10b488544; end: 10b48856f;  */

undefined8 FUN_10b488544(undefined8 param_1)

{
  func_0x00010b4898d4();
  FUN_10b488570(param_1);
  return param_1;
}



/* Entry: 10b488570; end: 10b488583;  */

void FUN_10b488570(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b488498;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b489260();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_10b488498;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b488498;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b488d38();
    }
  }
  __ZdlPv();
LAB_10b488498:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b488584; end: 10b488597;  */

void FUN_10b488584(void)

{
  FUN_10b488544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b488598; end: 10b4885ab;  */

undefined8 FUN_10b488598(undefined8 param_1)

{
  func_0x00010b4898d4();
  FUN_10b488d64(param_1);
  return param_1;
}



/* Entry: 10b4885ac; end: 10b4886c7;  */

void FUN_10b4885ac(long param_1)

{
  ulong *puVar1;
  
  FUN_10b48843c();
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



/* Entry: 10b4886c8; end: 10b4886ff;  */

long FUN_10b4886c8(long param_1)

{
  long extraout_x8;
  
  func_0x00010b489094();
  func_0x00010b489894();
  return param_1 + extraout_x8;
}



/* Entry: 10b488700; end: 10b488703;  */

void FUN_10b488700(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b48999c();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(unaff_x20 + 0x1c);
  if (iVar2 == 0) goto LAB_10b4887d4;
  iVar3 = *(int *)(unaff_x21 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_10b48843c();
    }
    *(int *)(unaff_x21 + 0x1c) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x10);
      if (*(int *)(unaff_x20 + 0x1c) != 2) {
        ppuVar1 = &PTR_PTR_113373cc0;
      }
      FUN_10b488938(*(undefined8 *)(unaff_x21 + 0x10),ppuVar1);
      goto LAB_10b4887d4;
    }
    FUN_10b489764(unaff_x22,*(undefined8 *)(unaff_x20 + 0x10));
  }
  else {
    if (iVar2 != 1) goto LAB_10b4887d4;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x10);
      if (*(int *)(unaff_x20 + 0x1c) != 1) {
        ppuVar1 = &PTR_PTR_113373cf8;
      }
      func_0x00010b4887f8(*(undefined8 *)(unaff_x21 + 0x10),ppuVar1);
      goto LAB_10b4887d4;
    }
    FUN_10b4896a4(unaff_x22,*(undefined8 *)(unaff_x20 + 0x10));
  }
  *(ulong *)(unaff_x21 + 0x10) = unaff_x22;
LAB_10b4887d4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b488704; end: 10b488937;  */

void FUN_10b488704(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b48999c();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(unaff_x20 + 0x1c);
  if (iVar2 == 0) goto LAB_10b4887d4;
  iVar3 = *(int *)(unaff_x21 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_10b48843c();
    }
    *(int *)(unaff_x21 + 0x1c) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x10);
      if (*(int *)(unaff_x20 + 0x1c) != 2) {
        ppuVar1 = &PTR_PTR_113373cc0;
      }
      FUN_10b488938(*(undefined8 *)(unaff_x21 + 0x10),ppuVar1);
      goto LAB_10b4887d4;
    }
    FUN_10b489764(unaff_x22,*(undefined8 *)(unaff_x20 + 0x10));
  }
  else {
    if (iVar2 != 1) goto LAB_10b4887d4;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x10);
      if (*(int *)(unaff_x20 + 0x1c) != 1) {
        ppuVar1 = &PTR_PTR_113373cf8;
      }
      func_0x00010b4887f8(*(undefined8 *)(unaff_x21 + 0x10),ppuVar1);
      goto LAB_10b4887d4;
    }
    FUN_10b4896a4(unaff_x22,*(undefined8 *)(unaff_x20 + 0x10));
  }
  *(ulong *)(unaff_x21 + 0x10) = unaff_x22;
LAB_10b4887d4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b488938; end: 10b48899b;  */

void FUN_10b488938(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
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



/* Entry: 10b48899c; end: 10b4889c7;  */

long FUN_10b48899c(long param_1)

{
  func_0x00010b4898d4();
  func_0x000107c2a450(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4889c8; end: 10b4889cb;  */

long FUN_10b4889c8(long param_1)

{
  func_0x00010b4898d4();
  func_0x000107c2a450(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4889cc; end: 10b4889df;  */

void FUN_10b4889cc(void)

{
  FUN_10b48899c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4889e0; end: 10b488a03;  */

undefined ** FUN_10b4889e0(void)

{
  return &PTR_DAT_110cebca8;
}



/* Entry: 10b488a04; end: 10b488aeb;  */

byte * FUN_10b488a04(byte *param_1,undefined8 param_2,ulong param_3,byte *param_4)

{
  uint *puVar1;
  long lVar2;
  byte *pbVar3;
  long extraout_x8;
  byte *unaff_x19;
  long unaff_x20;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  func_0x00010b4898ac();
  uVar4 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar4) {
    func_0x00010b48985c();
    pbVar3 = param_1 + 2;
    *param_1 = 10;
    for (; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
      pbVar3[-1] = (byte)uVar4 | 0x80;
      pbVar3 = pbVar3 + 1;
    }
    pbVar3[-1] = (byte)uVar4;
    puVar5 = *(uint **)(unaff_x20 + 0x18);
    puVar1 = puVar5 + *(int *)(unaff_x20 + 0x10);
    do {
      func_0x00010b48985c();
      uVar4 = *puVar5;
      pbVar3 = param_1;
      while( true ) {
        param_4 = pbVar3 + 1;
        if (uVar4 < 0x80) break;
        *pbVar3 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        pbVar3 = param_4;
      }
      puVar5 = puVar5 + 1;
      *pbVar3 = (byte)uVar4;
    } while (puVar5 < puVar1);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010b48985c();
    func_0x00010b489988();
    func_0x00010b489868();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b489960();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar4 = iVar6 - iVar7;
        param_3 = (ulong)uVar4;
        if (uVar4 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return param_4 + iVar6;
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return param_4 + (int)param_3;
  }
  return param_4;
}



/* Entry: 10b488aec; end: 10b488b6f;  */

void FUN_10b488aec(long param_1)

{
  long lVar1;
  int iVar2;
  int extraout_w8;
  long lVar3;
  int extraout_w9;
  ulong uVar4;
  int extraout_w10;
  
  lVar3 = param_1 + 0x10;
  func_0x00010b4d3e38();
  *(int *)(param_1 + 0x20) = (int)lVar3;
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)(int)lVar3) * -9 + 0x280U >> 6) + 1;
  }
  func_0x00010b489940(lVar1 + lVar3);
  iVar2 = extraout_w8;
  if (extraout_w9 != 0) {
    iVar2 = extraout_w8 + extraout_w10;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x28) = iVar2;
  return;
}



/* Entry: 10b488b70; end: 10b488b73;  */

void FUN_10b488b70(long param_1,long param_2)

{
  func_0x0001088ffb98(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
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



/* Entry: 10b488b74; end: 10b488bc7;  */

void FUN_10b488b74(long param_1,long param_2)

{
  func_0x0001088ffb98(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
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



/* Entry: 10b488bc8; end: 10b488beb;  */

undefined8 FUN_10b488bc8(undefined8 param_1)

{
  func_0x00010b4898d4();
  return param_1;
}



/* Entry: 10b488bec; end: 10b488bef;  */

undefined8 FUN_10b488bec(undefined8 param_1)

{
  func_0x00010b4898d4();
  return param_1;
}



/* Entry: 10b488bf0; end: 10b488c03;  */

void FUN_10b488bf0(void)

{
  FUN_10b488bc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b488c04; end: 10b488c23;  */

undefined ** FUN_10b488c04(void)

{
  return &PTR_DAT_110cebcf8;
}



/* Entry: 10b488c24; end: 10b488cab;  */

long * FUN_10b488c24(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b4898ac();
  if ((int)param_1[2] != 0) {
    func_0x00010b48985c();
    func_0x00010b48996c();
    func_0x00010b489868();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b48985c();
    func_0x00010b489988();
    func_0x00010b489868();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b489960();
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



/* Entry: 10b488cac; end: 10b488d37;  */

ulong FUN_10b488cac(long param_1)

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



/* Entry: 10b488d38; end: 10b488d63;  */

undefined8 FUN_10b488d38(undefined8 param_1)

{
  func_0x00010b4898d4();
  FUN_10b488d64(param_1);
  return param_1;
}



/* Entry: 10b488d64; end: 10b488d93;  */

long * FUN_10b488d64(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b48899c();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b488d94; end: 10b488da7;  */

void FUN_10b488d94(void)

{
  FUN_10b488d38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b488da8; end: 10b488db3;  */

undefined ** FUN_10b488da8(void)

{
  return &PTR_DAT_110cebd48;
}



/* Entry: 10b488db4; end: 10b488e1b;  */

void FUN_10b488db4(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b4889ec(*(undefined8 *)(param_1 + 0x30));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
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



/* Entry: 10b488e1c; end: 10b48924b;  */

long * FUN_10b488e1c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  int iVar8;
  
  func_0x00010b4898ac();
  if (param_1[7] != 0) {
    func_0x00010b48985c();
    func_0x00010b48996c();
    func_0x00010b489990();
    param_4 = param_1;
  }
  plVar3 = param_1;
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    func_0x00010b48985c();
    plVar3 = (long *)0x15;
    func_0x000107c280a8(0x15,param_1);
    func_0x00010b489954();
  }
  plVar4 = plVar3;
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    func_0x00010b48985c();
    plVar4 = (long *)0x1d;
    func_0x000107c280a8(0x1d,plVar3);
    func_0x00010b489954();
  }
  plVar3 = plVar4;
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    func_0x00010b48985c();
    plVar3 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar4);
    func_0x00010b489868();
    param_4 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    func_0x00010b48985c();
    plVar4 = (long *)0x2d;
    func_0x000107c280a8(0x2d,plVar3);
    func_0x00010b489954();
  }
  plVar3 = plVar4;
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    func_0x00010b48985c();
    plVar3 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar4);
    func_0x00010b489868();
    param_4 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    func_0x00010b48985c();
    plVar4 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar3);
    func_0x00010b489868();
    param_4 = plVar4;
  }
  plVar3 = plVar4;
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    func_0x00010b48985c();
    plVar3 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar4);
    func_0x00010b489888();
    param_4 = plVar3;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x28);
    plVar3 = (long *)0x9;
    func_0x00010b489980();
    param_4 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)(unaff_x20 + 0x5c) != 0) {
    func_0x00010b48985c();
    plVar4 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar3);
    func_0x00010b489868();
    param_4 = plVar4;
  }
  iVar8 = *(int *)(unaff_x20 + 0x20);
  for (iVar7 = 0; iVar8 != iVar7; iVar7 = iVar7 + 1) {
    uVar6 = *(ulong *)(unaff_x20 + 0x18);
    puVar1 = (ulong *)(unaff_x20 + 0x18);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + (long)iVar7 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar1 + 0x18);
    plVar4 = (long *)0xb;
    func_0x00010b489980();
    param_4 = plVar4;
  }
  plVar3 = plVar4;
  if ((*(byte *)(unaff_x20 + 0x59) & 1) != 0) {
    func_0x00010b48985c();
    plVar3 = (long *)0x60;
    func_0x000107c280a8(0x60,plVar4);
    func_0x00010b489868();
    param_4 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)(unaff_x20 + 0x60) != 0) {
    func_0x00010b48985c();
    plVar4 = (long *)0x68;
    func_0x000107c280a8(0x68,plVar3);
    func_0x00010b489888();
    param_4 = plVar4;
  }
  plVar3 = plVar4;
  if (*(int *)(unaff_x20 + 100) != 0) {
    func_0x00010b48985c();
    plVar3 = (long *)0x75;
    func_0x000107c280a8(0x75,plVar4);
    func_0x00010b489954();
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    func_0x00010b48985c();
    func_0x000107c280a8(0x7d,plVar3);
    func_0x00010b489954();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b489960();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
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
    _memcpy(param_4,lVar5,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b48924c; end: 10b48925f;  */

void FUN_10b48924c(void)

{
  uint uVar1;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b48999c();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  FUN_10b48924c(unaff_x21 + 0x18,unaff_x20 + 0x18);
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x30) == 0) {
      FUN_10b4897dc(unaff_x22,*(undefined8 *)(unaff_x20 + 0x30));
      *(ulong *)(unaff_x21 + 0x30) = unaff_x22;
    }
    else {
      FUN_10b488b74();
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x21 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)(unaff_x21 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x58) = 1;
  }
  if (*(char *)(unaff_x20 + 0x59) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x59) = 1;
  }
  if (*(int *)(unaff_x20 + 0x5c) != 0) {
    *(int *)(unaff_x21 + 0x5c) = *(int *)(unaff_x20 + 0x5c);
  }
  if (*(int *)(unaff_x20 + 0x60) != 0) {
    *(int *)(unaff_x21 + 0x60) = *(int *)(unaff_x20 + 0x60);
  }
  if (*(int *)(unaff_x20 + 100) != 0) {
    *(int *)(unaff_x21 + 100) = *(int *)(unaff_x20 + 100);
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b489260; end: 10b489283;  */

undefined8 FUN_10b489260(undefined8 param_1)

{
  func_0x00010b4898d4();
  return param_1;
}



/* Entry: 10b489284; end: 10b489297;  */

void FUN_10b489284(void)

{
  FUN_10b489260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b489298; end: 10b4892bf;  */

undefined ** FUN_10b489298(void)

{
  return &PTR_DAT_110cebd88;
}



/* Entry: 10b4892c0; end: 10b4893fb;  */

long * FUN_10b4892c0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x00010b4898ac();
  if (param_1[2] != 0) {
    func_0x00010b48985c();
    func_0x00010b48996c();
    func_0x00010b489990();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b48985c();
    func_0x00010b489988();
    func_0x00010b489868();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x00010b48985c();
    plVar2 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x00010b489868();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b48985c();
    plVar3 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x00010b489888();
    param_4 = plVar3;
  }
  plVar2 = plVar3;
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010b48985c();
    plVar2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar3);
    func_0x00010b489868();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b48985c();
    plVar3 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x00010b489868();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x00010b48985c();
    param_4 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar3);
    func_0x00010b489888();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b489960();
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



/* Entry: 10b4893fc; end: 10b4894ff;  */

ulong FUN_10b4893fc(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  iVar2 = -9;
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x00010b489924();
    uVar1 = extraout_x8;
    iVar2 = extraout_w9;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x00010b489924();
    uVar1 = extraout_x8_00;
    iVar2 = extraout_w9_00;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * iVar2 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x00010b489924();
    uVar1 = extraout_x8_01;
    iVar2 = extraout_w9_01;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x00010b489924();
    uVar1 = extraout_x8_02;
    iVar2 = extraout_w9_02;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * iVar2 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar1 = lVar3 + uVar1;
  }
  *(int *)(param_1 + 0x30) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b489500; end: 10b48952f;  */

long * FUN_10b489500(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b489530; end: 10b4896a3;  */

void FUN_10b489530(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b489974();
  }
  *puVar1 = &PTR_FUN_110cebae0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b4896a4; end: 10b489763;  */

undefined8 * FUN_10b4896a4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x70;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x70);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110cebbd0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4898c8();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[5] = param_1;
  FUN_10b48924c(puVar1 + 3,param_2 + 0x18);
  puVar2 = (undefined8 *)0x0;
  if ((*(byte *)(puVar1 + 2) & 1) != 0) {
    FUN_10b4897dc(param_1,*(undefined8 *)(param_2 + 0x30));
    puVar2 = param_1;
  }
  puVar1[6] = puVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  uVar8 = *(undefined8 *)(param_2 + 0x60);
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(puVar1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  puVar1[0xc] = uVar8;
  puVar1[0xb] = uVar7;
  puVar1[10] = uVar6;
  puVar1[9] = uVar5;
  puVar1[8] = uVar4;
  puVar1[7] = uVar3;
  return puVar1;
}



/* Entry: 10b489764; end: 10b4897db;  */

undefined8 * FUN_10b489764(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110cebb80;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_10b488938();
  return puVar1;
}



/* Entry: 10b4897dc; end: 10b48985b;  */

undefined8 * FUN_10b4897dc(undefined8 *param_1,long param_2)

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
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110cebb30;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4898c8();
  }
  func_0x000107c2a448(puVar1 + 2,param_1,param_2 + 0x10);
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  return puVar1;
}



/* Entry: 10b48985c; end: 10b4899af;  */

ulong * FUN_10b48985c(void)

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



/* Entry: 10b4899b0; end: 10b4899ef;  */

long FUN_10b4899b0(long param_1)

{
  func_0x00010b48aa88();
  func_0x000107c30258(param_1 + 0x28);
  if (*(int *)(param_1 + 0x44) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4899f0; end: 10b4899f3;  */

long FUN_10b4899f0(long param_1)

{
  func_0x00010b48aa88();
  func_0x000107c30258(param_1 + 0x28);
  if (*(int *)(param_1 + 0x44) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4899f4; end: 10b489a07;  */

void FUN_10b4899f4(void)

{
  FUN_10b4899b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b489a08; end: 10b489a13;  */

undefined ** FUN_10b489a08(void)

{
  return &PTR_DAT_110cebf30;
}



/* Entry: 10b489a14; end: 10b489a4f;  */

void FUN_10b489a14(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b48aa90();
  func_0x000107c3025c(unaff_x19 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x30) = 0;
  *(undefined4 *)(unaff_x19 + 0x44) = 0;
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



/* Entry: 10b489a50; end: 10b489c1b;  */

long * FUN_10b489a50(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  long unaff_x22;
  undefined8 *unaff_x23;
  int iVar9;
  long lVar10;
  ulong uVar11;
  
  if (*(int *)(param_1 + 0x44) == 2) {
    plVar5 = *(long **)(param_1 + 0x38);
    plVar7 = param_3;
    func_0x000107c282cc(param_3,plVar5,param_2);
  }
  else {
    plVar5 = param_2;
    plVar7 = param_2;
    if (*(int *)(param_1 + 0x44) == 1) {
      plVar5 = *(long **)(param_1 + 0x38);
      plVar7 = param_3;
      func_0x000105991a14(param_3,plVar5,param_2);
    }
  }
  func_0x00010b48aae8(*(undefined8 *)(param_1 + 0x28));
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b489afc;
  }
  else if ((int)plVar5 == 0) goto LAB_10b489afc;
  func_0x00010b48a9bc();
  plVar5 = (long *)0x3;
  plVar7 = param_3;
  func_0x000107c280a0();
LAB_10b489afc:
  for (uVar11 = (ulong)(*(uint *)(param_1 + 0x18) &
                       ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
      uVar11 = uVar11 - 1) {
    func_0x00010b48a97c();
    puVar2 = unaff_x23;
    if ((long)plVar5 < 0) {
      plVar5 = (long *)unaff_x23[1];
      puVar2 = (undefined8 *)*unaff_x23;
    }
    func_0x00010b48aa7c(puVar2);
    lVar10 = (long)*(char *)((long)unaff_x23 + 0x17);
    if (((lVar10 < 0) && (lVar10 = unaff_x23[1], 0x7f < lVar10)) ||
       ((*param_3 - (long)plVar7) + 0xe < lVar10)) {
      plVar5 = (long *)0x4;
      plVar3 = param_3;
      func_0x00010b4d5120(param_3,4,unaff_x23,plVar7);
    }
    else {
      *(undefined1 *)plVar7 = 0x22;
      *(char *)((long)plVar7 + 1) = (char)lVar10;
      if (*(char *)((long)unaff_x23 + 0x17) < '\0') {
        unaff_x23 = (undefined8 *)*unaff_x23;
      }
      func_0x00010b48aa4c((undefined1 *)((long)plVar7 + 2));
      plVar3 = (long *)((undefined1 *)((long)plVar7 + 2) + lVar10);
    }
    plVar7 = plVar3;
  }
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    plVar5 = param_3;
    func_0x000107c28094(param_3,plVar7);
    plVar7 = (long *)(ulong)*(byte *)(param_1 + 0x30);
    uVar4 = 0x28;
    func_0x000107c280a8(0x28,plVar5);
    func_0x000107c280a8(plVar7,uVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar7;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar11 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar11 < 0) {
    lVar10 = *(long *)(uVar6 + 8);
    uVar11 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar10 = uVar6 + 8;
  }
  if ((long)(int)uVar11 <= *param_3 - (long)plVar7) {
    _memcpy(plVar7,lVar10,uVar11 & 0xffffffff);
    return (long *)((long)plVar7 + (long)(int)uVar11);
  }
  while( true ) {
    iVar9 = ((int)*param_3 - (int)plVar7) + 0x10;
    iVar8 = (int)uVar11;
    uVar11 = (ulong)(uint)(iVar8 - iVar9);
    if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)plVar7 + (long)iVar9);
    plVar7 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar7 + (long)iVar8);
}



/* Entry: 10b489c1c; end: 10b489cb7;  */

void FUN_10b489c1c(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  iVar1 = (int)unaff_x20;
  func_0x00010b48aa20();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -1) {
    func_0x00010b48a8f4();
    unaff_x20 = param_1 + unaff_x20;
    iVar1 = (int)unaff_x20;
  }
  func_0x00010b48aabc(*(undefined8 *)(unaff_x19 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b48aaa4();
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x30) * 2;
  if (*(int *)(unaff_x19 + 0x44) - 1U < 2) {
    func_0x00010b48a9f0(*(undefined8 *)(unaff_x19 + 0x38));
    iVar1 = extraout_w8 + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x40) = iVar1;
  return;
}



/* Entry: 10b489cb8; end: 10b489d47;  */

void FUN_10b489cb8(ulong *param_1,long param_2)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b48a968();
  func_0x00010598fce8();
  func_0x00010b48aadc(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b48aab0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x30) = 1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x44);
  if (uVar1 != 0) {
    if (*(uint *)(unaff_x19 + 0x44) != uVar1) {
      *(uint *)(unaff_x19 + 0x44) = uVar1;
    }
    if (uVar1 < 3) {
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b48a9e0();
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



/* Entry: 10b489d48; end: 10b489dd3;  */

void FUN_10b489d48(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x00010b48aac8();
  *unaff_x19 = &PTR_FUN_110cebe50;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b48aa70();
  }
  func_0x00010598fd00(unaff_x19 + 2);
  lVar1 = unaff_x20 + 0x28;
  func_0x00010b48aa9c();
  unaff_x19[5] = lVar1;
  lVar1 = unaff_x20 + 0x30;
  func_0x00010b48aa9c();
  unaff_x19[6] = lVar1;
  lVar1 = unaff_x20 + 0x38;
  func_0x00010b48aa9c();
  unaff_x19[7] = lVar1;
  *(undefined4 *)(unaff_x19 + 10) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  unaff_x19[9] = *(undefined8 *)(unaff_x20 + 0x48);
  unaff_x19[8] = uVar2;
  return;
}



/* Entry: 10b489dd4; end: 10b489dff;  */

undefined8 FUN_10b489dd4(undefined8 param_1)

{
  func_0x00010b48aa88();
  FUN_10b489e00(param_1);
  return param_1;
}



/* Entry: 10b489e00; end: 10b489e37;  */

long * FUN_10b489e00(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    func_0x000100069100(plVar1);
  }
  return plVar1;
}



/* Entry: 10b489e38; end: 10b489e3b;  */

undefined8 FUN_10b489e38(undefined8 param_1)

{
  func_0x00010b48aa88();
  FUN_10b489e00(param_1);
  return param_1;
}



/* Entry: 10b489e3c; end: 10b489e4f;  */

void FUN_10b489e3c(void)

{
  FUN_10b489dd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b489e50; end: 10b489e5b;  */

undefined ** FUN_10b489e50(void)

{
  return &PTR_DAT_110cebf78;
}



/* Entry: 10b489e5c; end: 10b489ea3;  */

void FUN_10b489e5c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b48aa90();
  func_0x000107c3025c(unaff_x19 + 0x28);
  func_0x000107c3025c(unaff_x19 + 0x30);
  func_0x000107c3025c(unaff_x19 + 0x38);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
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



/* Entry: 10b489ea4; end: 10b48a0a7;  */

long * FUN_10b489ea4(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long unaff_x22;
  undefined8 *unaff_x23;
  int iVar8;
  long lVar9;
  ulong uVar10;
  
  lVar5 = *(long *)(param_1 + 0x40);
  plVar2 = param_2;
  if (lVar5 != 0) {
    plVar2 = param_3;
    func_0x000105991a14(param_3,lVar5,param_2);
  }
  func_0x00010b48aae8(*(undefined8 *)(param_1 + 0x28));
  if (lVar5 < 0) {
    lVar5 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b489f08;
  }
  else if ((int)lVar5 != 0) {
LAB_10b489f08:
    func_0x00010b48a9bc();
    lVar5 = 2;
    plVar2 = param_3;
    func_0x00010b48a918();
  }
  func_0x00010b48aae8(*(undefined8 *)(param_1 + 0x30));
  if (lVar5 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b489f48;
  }
  else if ((int)lVar5 != 0) {
LAB_10b489f48:
    func_0x00010b48a9bc();
    plVar2 = param_3;
    func_0x00010b48a918(param_3,3);
  }
  lVar5 = *(long *)(param_1 + 0x48);
  plVar3 = plVar2;
  if (lVar5 != 0) {
    plVar3 = param_3;
    func_0x000107c282e8(param_3,lVar5,plVar2);
  }
  func_0x00010b48aae8(*(undefined8 *)(param_1 + 0x38));
  if (lVar5 < 0) {
    lVar5 = 0;
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b489fbc;
  }
  else if ((int)lVar5 == 0) goto LAB_10b489fbc;
  func_0x00010b48a9bc();
  lVar5 = 5;
  plVar3 = param_3;
  func_0x00010b48a918();
LAB_10b489fbc:
  for (uVar10 = (ulong)(*(uint *)(param_1 + 0x18) &
                       ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    func_0x00010b48a97c();
    puVar4 = unaff_x23;
    if (lVar5 < 0) {
      lVar5 = unaff_x23[1];
      puVar4 = (undefined8 *)*unaff_x23;
    }
    func_0x00010b48aa7c(puVar4);
    lVar9 = (long)*(char *)((long)unaff_x23 + 0x17);
    if (((lVar9 < 0) && (lVar9 = unaff_x23[1], 0x7f < lVar9)) ||
       ((*param_3 - (long)plVar3) + 0xe < lVar9)) {
      lVar5 = 6;
      plVar2 = param_3;
      func_0x00010b4d5120(param_3,6,unaff_x23,plVar3);
    }
    else {
      *(undefined1 *)plVar3 = 0x32;
      *(char *)((long)plVar3 + 1) = (char)lVar9;
      if (*(char *)((long)unaff_x23 + 0x17) < '\0') {
        unaff_x23 = (undefined8 *)*unaff_x23;
      }
      func_0x00010b48aa4c((undefined1 *)((long)plVar3 + 2));
      plVar2 = (long *)((undefined1 *)((long)plVar3 + 2) + lVar9);
    }
    plVar3 = plVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar3;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar10 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar10 < 0) {
    lVar5 = *(long *)(uVar6 + 8);
    uVar10 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar5 = uVar6 + 8;
  }
  if ((long)(int)uVar10 <= *param_3 - (long)plVar3) {
    _memcpy(plVar3,lVar5,uVar10 & 0xffffffff);
    return (long *)((long)plVar3 + (long)(int)uVar10);
  }
  while( true ) {
    iVar8 = ((int)*param_3 - (int)plVar3) + 0x10;
    iVar7 = (int)uVar10;
    uVar10 = (ulong)(uint)(iVar7 - iVar8);
    if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)plVar3 + (long)iVar8);
    plVar3 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar3 + (long)iVar7);
}



/* Entry: 10b48a0a8; end: 10b48a197;  */

long FUN_10b48a0a8(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00010b48aa20();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -1) {
    func_0x00010b48a8f4();
    unaff_x20 = param_1 + unaff_x20;
  }
  func_0x00010b48aabc(*(undefined8 *)(unaff_x19 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b48aaa4();
  }
  func_0x00010b48aabc(*(undefined8 *)(unaff_x19 + 0x30));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b48aaa4();
  }
  func_0x00010b48aabc(*(undefined8 *)(unaff_x19 + 0x38));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b48aaa4();
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    unaff_x20 = (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 0x40)) * -9 + 0x2c0U >> 6) + unaff_x20;
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    unaff_x20 = (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 0x48)) * -9 + 0x2c0U >> 6) + unaff_x20;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x50) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b48a198; end: 10b48a19b;  */

void FUN_10b48a198(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b48a968();
  func_0x00010598fce8();
  func_0x00010b48aadc(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b48aab0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  func_0x00010b48aadc(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b48aab0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b48aadc(*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b48aab0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x38);
    func_0x000107c30248();
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x19 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x19 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b48a9e0();
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



/* Entry: 10b48a19c; end: 10b48a293;  */

void FUN_10b48a19c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b48a968();
  func_0x00010598fce8();
  func_0x00010b48aadc(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b48aab0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  func_0x00010b48aadc(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b48aab0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b48aadc(*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b48aab0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x38);
    func_0x000107c30248();
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x19 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x19 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b48a9e0();
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



/* Entry: 10b48a294; end: 10b48a2bb;  */

void FUN_10b48a294(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110cebef0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = param_2;
  param_1[0xb] = 0;
  return;
}



/* Entry: 10b48a2bc; end: 10b48a353;  */

void FUN_10b48a2bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010b48aac8();
  *unaff_x19 = &PTR_FUN_110cebef0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b48aa70();
  }
  FUN_10b48a704(unaff_x19 + 2);
  func_0x00010b48a724(unaff_x19 + 5);
  func_0x00010b48a744(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0xc) = 0;
  unaff_x19[0xb] = *(undefined8 *)(unaff_x20 + 0x58);
  return;
}



/* Entry: 10b48a354; end: 10b48a37f;  */

long FUN_10b48a354(long param_1)

{
  func_0x00010b48aa88();
  FUN_10b48a7bc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b48a380; end: 10b48a383;  */

long FUN_10b48a380(long param_1)

{
  func_0x00010b48aa88();
  FUN_10b48a7bc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b48a384; end: 10b48a397;  */

void FUN_10b48a384(void)

{
  FUN_10b48a354();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b48a398; end: 10b48a3a3;  */

undefined ** FUN_10b48a398(void)

{
  return &PTR_DAT_110cebfb8;
}



/* Entry: 10b48a3a4; end: 10b48a403;  */

void FUN_10b48a3a4(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  FUN_10b48a8ac(param_1 + 0x40);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x58) = 0;
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



/* Entry: 10b48a404; end: 10b48a5ff;  */

long * FUN_10b48a404(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    func_0x00010b48a8d0();
    param_2 = (long *)0x1;
    func_0x00010b48aa44();
  }
  iVar7 = *(int *)(param_1 + 0x30);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    func_0x00010b48a8d0();
    param_2 = (long *)0x2;
    func_0x00010b48aa44();
  }
  iVar7 = *(int *)(param_1 + 0x48);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    func_0x00010b48a8d0();
    param_2 = (long *)0x3;
    func_0x00010b48aa44();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = *(long **)(param_1 + 0x58);
    uVar2 = 0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x000107c280ac(param_2,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
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
  return param_2;
}



/* Entry: 10b48a600; end: 10b48a62b;  */

long FUN_10b48a600(long param_1)

{
  FUN_10b486aa4();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b48a62c; end: 10b48a62f;  */

void FUN_10b48a62c(void)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b48a968();
  FUN_10b48a684();
  func_0x00010b48a694(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 0x40);
  func_0x00010b48a6a4();
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x19 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b48a9e0();
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



/* Entry: 10b48a630; end: 10b48a683;  */

void FUN_10b48a630(void)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b48a968();
  FUN_10b48a684();
  func_0x00010b48a694(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 0x40);
  func_0x00010b48a6a4();
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x19 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b48a9e0();
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



/* Entry: 10b48a684; end: 10b48a6b3;  */

void FUN_10b48a684(long *param_1,long param_2)

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



/* Entry: 10b48a6b4; end: 10b48a6eb;  */

void FUN_10b48a6b4(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b48a3a4();
  func_0x00010b48a968(param_1,param_2);
  FUN_10b48a684();
  func_0x00010b48a694(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 0x40);
  func_0x00010b48a6a4();
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x19 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b48a9e0();
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



/* Entry: 10b48a6ec; end: 10b48a703;  */

void FUN_10b48a6ec(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 == 0) {
    param_2 = 0x58;
    __Znwm();
  }
  else {
    FUN_10b4d80e0(param_2,0x58);
  }
  func_0x00010b48aa08(&PTR_FUN_110cebe50);
  *(undefined8 *)(param_2 + 0x30) = extraout_x8;
  *(undefined8 *)(param_2 + 0x38) = extraout_x8;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x50) = 0;
  return;
}



/* Entry: 10b48a704; end: 10b48a763;  */

void FUN_10b48a704(void)

{
  func_0x00010b48a954();
  FUN_10b48a684();
  return;
}



/* Entry: 10b48a764; end: 10b48a78f;  */

long * FUN_10b48a764(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b48aa68();
  }
  return param_1;
}



/* Entry: 10b48a790; end: 10b48a7bb;  */

long * FUN_10b48a790(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b48aa68();
  }
  return param_1;
}



/* Entry: 10b48a7bc; end: 10b48a7eb;  */

long * FUN_10b48a7bc(long *param_1)

{
  FUN_10b48a7ec(param_1 + 6);
  FUN_10b48a764(param_1 + 3);
  if (*param_1 != 0) {
    func_0x00010b48aa68();
  }
  return param_1;
}



/* Entry: 10b48a7ec; end: 10b48a817;  */

long * FUN_10b48a7ec(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b48aa68();
  }
  return param_1;
}



/* Entry: 10b48a818; end: 10b48a8ab;  */

void FUN_10b48a818(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    param_1 = 0x58;
    __Znwm();
  }
  else {
    FUN_10b4d80e0(param_1,0x58);
  }
  func_0x00010b48aa08(&PTR_FUN_110cebe50);
  *(undefined8 *)(param_1 + 0x30) = extraout_x8;
  *(undefined8 *)(param_1 + 0x38) = extraout_x8;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 10b48a8ac; end: 10b48ab27;  */

void FUN_10b48a8ac(ulong *param_1)

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



/* Entry: 10b48ab28; end: 10b48ab4b;  */

undefined8 FUN_10b48ab28(undefined8 param_1)

{
  func_0x00010b48ba04();
  return param_1;
}



/* Entry: 10b48ab4c; end: 10b48ab4f;  */

undefined8 FUN_10b48ab4c(undefined8 param_1)

{
  func_0x00010b48ba04();
  return param_1;
}



/* Entry: 10b48ab50; end: 10b48ab63;  */

void FUN_10b48ab50(void)

{
  FUN_10b48ab28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


