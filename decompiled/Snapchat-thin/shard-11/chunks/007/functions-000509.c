/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088e02f8; end: 1088e0317;  */

undefined ** FUN_1088e02f8(void)

{
  return &PTR_DAT_110a88c90;
}



/* Entry: 1088e0318; end: 1088e0367;  */

void FUN_1088e0318(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 1) {
    func_0x0001088e2d98(param_1,0x10500400020);
  }
  func_0x000107c3025c(param_1 + 0x30);
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



/* Entry: 1088e0368; end: 1088e0513;  */

long **** FUN_1088e0368(long ****param_1,long param_2)

{
  uint uVar1;
  long ****pppplVar2;
  long ****pppplVar3;
  ulong uVar4;
  long unaff_x19;
  long ****unaff_x20;
  long unaff_x21;
  long ****unaff_x22;
  ulong uVar5;
  long ***ppplStack_70;
  long **applStack_68 [3];
  
  func_0x0001088e2b40();
  func_0x0001088e2c10(param_1[6]);
  if (param_2 < 0) {
    if (unaff_x22[1] == (long ***)0x0) goto LAB_1088e03c0;
    unaff_x22 = (long ****)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088e03c0;
  func_0x0001088e2b80();
  func_0x0001088e2a2c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088e03c0:
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  uVar4 = (ulong)uVar1;
  if (uVar1 != 0) {
    if ((uVar1 == 1) || ((*(byte *)(unaff_x19 + 0x3a) & 1) == 0)) {
      func_0x0001088e2d60();
      pppplVar2 = param_1;
      while (param_1 = pppplVar2, (long ***)applStack_68[0] != (long ***)0x0) {
        func_0x0001088e2cc0();
        func_0x0001088e2cb0();
        pppplVar2 = (long ****)applStack_68;
        func_0x000107c27d54(pppplVar2);
        unaff_x20 = param_1;
      }
    }
    else {
      pppplVar2 = (long ****)(uVar4 << 3);
      __Znam();
      ppplStack_70 = (long ***)pppplVar2;
      func_0x0001088e2d60();
      while ((long ***)applStack_68[0] != (long ***)0x0) {
        *pppplVar2 = (long ***)(applStack_68[0] + 1);
        func_0x000107c27d54(applStack_68);
        pppplVar2 = pppplVar2 + 1;
      }
      pppplVar2 = (long ****)ppplStack_70;
      func_0x000105991c2c(ppplStack_70,ppplStack_70 + uVar4);
      uVar5 = uVar4 << 3;
      while (pppplVar3 = pppplVar2, uVar4 != 0) {
        func_0x0001088e2cc0();
        pppplVar2 = pppplVar3;
        func_0x0001088e2cb0();
        uVar5 = uVar5 - 8;
        unaff_x20 = pppplVar3;
        uVar4 = uVar5;
      }
      param_1 = &ppplStack_70;
      func_0x000105991ac8(param_1);
    }
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0001088e2b94();
    func_0x0001088e2d4c();
    func_0x0001053930c4();
    unaff_x20 = param_1;
  }
  return unaff_x20;
}



/* Entry: 1088e0514; end: 1088e05bf;  */

void FUN_1088e0514(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = param_4;
  func_0x000107c28094(param_4,param_3);
  uVar2 = 0x12;
  func_0x000107c280a8(0x12,uVar1);
  uVar1 = param_1;
  func_0x000107c282a0(param_1);
  uVar3 = (ulong)((int)uVar1 + (int)param_2[3] + ((int)LZCOUNT((int)param_2[3]) * -9 + 0x160U >> 6)
                 + 2);
  func_0x000107c280a8(uVar3,uVar2);
  uVar2 = 1;
  func_0x0001059928f0(1,param_1,uVar3,param_4);
  uVar1 = param_4;
  func_0x000107c28094(param_4,uVar2);
  uVar3 = (ulong)*(uint *)(param_2 + 3);
  uVar2 = param_4;
  func_0x0001001a597c(param_4,uVar1);
  uVar1 = 0x12;
  func_0x0001001a59d0(0x12,uVar2);
  func_0x0001001a59d0(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,uVar3,param_4);
  return;
}



/* Entry: 1088e05c0; end: 1088e069f;  */

ulong FUN_1088e05c0(long param_1)

{
  int iVar1;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x9;
  ulong uVar4;
  long alStack_58 [3];
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x10);
  plVar2 = alStack_58;
  func_0x00010564c19c();
  while (lVar3 = alStack_58[0], alStack_58[0] != 0) {
    iVar1 = (int)alStack_58[0] + 8;
    func_0x000107c282a0();
    lVar3 = lVar3 + 0x20;
    FUN_1088e0134();
    lVar3 = lVar3 + (iVar1 + 2) + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6);
    uVar4 = lVar3 + uVar4 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6);
    plVar2 = alStack_58;
    func_0x000107c27d54();
  }
  func_0x0001088e2bbc(*(undefined8 *)(param_1 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = plVar2[1];
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x0001088e2c50();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088e2b88();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    uVar4 = lVar3 + uVar4;
  }
  *(int *)(param_1 + 0x38) = (int)uVar4;
  return uVar4;
}



/* Entry: 1088e06a0; end: 1088e06ff;  */

void FUN_1088e06a0(long param_1,long param_2)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e2cf0();
  puVar1 = (ulong *)(param_1 + 0x10);
  param_2 = param_2 + 0x10;
  FUN_1088e2540();
  func_0x0001088e2bec(*(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e2be0();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e2bd0();
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



/* Entry: 1088e0700; end: 1088e07a3;  */

undefined8 * FUN_1088e0700(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a88bf0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001088e2a40();
  }
  FUN_1088e217c(param_1 + 2,param_2,param_3 + 0x10);
  func_0x0001088e219c(param_1 + 5,param_2,param_3 + 0x28);
  lVar1 = param_3 + 0x40;
  func_0x000107c2809c(lVar1,param_2);
  param_1[8] = lVar1;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_3 + 0x48);
  return param_1;
}



/* Entry: 1088e07a4; end: 1088e07cf;  */

undefined8 FUN_1088e07a4(undefined8 param_1)

{
  func_0x0001088e2b28();
  FUN_1088e07d0(param_1);
  return param_1;
}



/* Entry: 1088e07d0; end: 1088e07f7;  */

long * FUN_1088e07d0(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x40);
  plVar1 = (long *)(param_1 + 0x10);
  FUN_1088e21bc(param_1 + 0x28);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 1088e07f8; end: 1088e07fb;  */

undefined8 FUN_1088e07f8(undefined8 param_1)

{
  func_0x0001088e2b28();
  FUN_1088e07d0(param_1);
  return param_1;
}



/* Entry: 1088e07fc; end: 1088e080f;  */

void FUN_1088e07fc(void)

{
  FUN_1088e07a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e0810; end: 1088e081b;  */

undefined ** FUN_1088e0810(void)

{
  return &PTR_DAT_110a88ce8;
}



/* Entry: 1088e081c; end: 1088e087b;  */

void FUN_1088e081c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  func_0x000107c3025c(param_1 + 0x40);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x48) = 0;
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



/* Entry: 1088e087c; end: 1088e0a5f;  */

long * FUN_1088e087c(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0001088e2b40();
  func_0x0001088e2c10(param_1[8]);
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 == (long *)0x0) goto LAB_1088e08cc;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088e08cc;
  param_4 = (long *)&UNK_10f4ebc76;
  func_0x0001088e2b80();
  func_0x0001088e2a2c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088e08cc:
  if (*(int *)(unaff_x21 + 0x48) != 0) {
    func_0x0001088e2c04();
    param_2 = param_1;
    func_0x0001088e2ca8();
    func_0x0001088e2d6c();
    unaff_x20 = param_1;
  }
  iVar3 = *(int *)(unaff_x21 + 0x18);
  for (iVar2 = 0; iVar3 != iVar2; iVar2 = iVar2 + 1) {
    func_0x0001088e2c7c();
    param_3 = (ulong)*(uint *)(param_2 + 7);
    param_1 = (long *)0x3;
    func_0x0001088e2b78();
    param_4 = unaff_x20;
    unaff_x20 = param_1;
  }
  iVar3 = *(int *)(unaff_x21 + 0x30);
  for (iVar2 = 0; iVar3 != iVar2; iVar2 = iVar2 + 1) {
    func_0x0001088e2c7c();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    param_1 = (long *)0x4;
    func_0x0001088e2b78();
    param_4 = unaff_x20;
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088e2b94();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088e2d4c();
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



/* Entry: 1088e0a60; end: 1088e0a63;  */

void FUN_1088e0a60(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e2cf0();
  FUN_1088e0adc(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  lVar2 = unaff_x20 + 0x28;
  func_0x0001088e0aec();
  func_0x0001088e2bec(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e2be0();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x40);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e2bd0();
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



/* Entry: 1088e0a64; end: 1088e0adb;  */

void FUN_1088e0a64(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e2cf0();
  FUN_1088e0adc(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  lVar2 = unaff_x20 + 0x28;
  func_0x0001088e0aec();
  func_0x0001088e2bec(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e2be0();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x40);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e2bd0();
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



/* Entry: 1088e0adc; end: 1088e0afb;  */

void FUN_1088e0adc(long *param_1,long param_2)

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



/* Entry: 1088e0afc; end: 1088e0c03;  */

void FUN_1088e0afc(void)

{
  undefined4 extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x19;
  
  func_0x0001088e2dcc();
  switch(extraout_w8) {
  case 1:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088e2d28();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_1088e0bbc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088e1408();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088e2d28();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_1088e0bbc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088e1694();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088e2d28();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088e0bbc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088e1858();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088e2d28();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088e0bbc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088e1994();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088e2d28();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088e0bbc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088e11a4();
    }
    break;
  default:
    goto LAB_1088e0bbc;
  }
  __ZdlPv();
LAB_1088e0bbc:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088e0c04; end: 1088e0c37;  */

long FUN_1088e0c04(long param_1)

{
  func_0x0001088e2b28();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1088e0afc(param_1);
  }
  return param_1;
}



/* Entry: 1088e0c38; end: 1088e0c3b;  */

long FUN_1088e0c38(long param_1)

{
  func_0x0001088e2b28();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1088e0afc(param_1);
  }
  return param_1;
}



/* Entry: 1088e0c3c; end: 1088e0c4f;  */

void FUN_1088e0c3c(void)

{
  FUN_1088e0c04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e0c50; end: 1088e0c6f;  */

long FUN_1088e0c50(long param_1)

{
  func_0x0001088e2b28();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088e1b00();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e0c70; end: 1088e0dbb;  */

void FUN_1088e0c70(long param_1)

{
  ulong *puVar1;
  
  FUN_1088e0afc();
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



/* Entry: 1088e0dbc; end: 1088e0dbf;  */

void FUN_1088e0dbc(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x0001088e2a94();
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_1088e0afc();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x0001088e2b30();
        func_0x0001088e0f3c();
        goto LAB_1088e0f20;
      }
      func_0x0001088e2d40();
      func_0x0001088e263c();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x0001088e2b30();
        func_0x0001088e0fb0();
        goto LAB_1088e0f20;
      }
      func_0x0001088e2d40();
      func_0x0001088e26b8();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x0001088e2b30();
        func_0x0001088e1030();
        goto LAB_1088e0f20;
      }
      func_0x0001088e2d40();
      func_0x0001088e2748();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001088e2b30();
        func_0x0001088e108c();
        goto LAB_1088e0f20;
      }
      func_0x0001088e2d40();
      func_0x0001088e27bc();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0001088e2b30();
        FUN_1088e10f4();
        goto LAB_1088e0f20;
      }
      func_0x0001088e2d40();
      func_0x0001088e2838();
      break;
    default:
      goto LAB_1088e0f20;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_1088e0f20:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e2a7c();
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



/* Entry: 1088e0dc0; end: 1088e0f3b;  */

void FUN_1088e0dc0(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x0001088e2a94();
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_1088e0afc();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x0001088e2b30();
        func_0x0001088e0f3c();
        goto LAB_1088e0f20;
      }
      func_0x0001088e2d40();
      func_0x0001088e263c();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x0001088e2b30();
        func_0x0001088e0fb0();
        goto LAB_1088e0f20;
      }
      func_0x0001088e2d40();
      func_0x0001088e26b8();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x0001088e2b30();
        func_0x0001088e1030();
        goto LAB_1088e0f20;
      }
      func_0x0001088e2d40();
      func_0x0001088e2748();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001088e2b30();
        func_0x0001088e108c();
        goto LAB_1088e0f20;
      }
      func_0x0001088e2d40();
      func_0x0001088e27bc();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0001088e2b30();
        FUN_1088e10f4();
        goto LAB_1088e0f20;
      }
      func_0x0001088e2d40();
      func_0x0001088e2838();
      break;
    default:
      goto LAB_1088e0f20;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_1088e0f20:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e2a7c();
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



/* Entry: 1088e0f3c; end: 1088e10f3;  */

void FUN_1088e0f3c(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e2a94();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e2dc0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e2df8();
    if (extraout_x8 == 0) {
      func_0x0001088e28c4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088e2d14();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  func_0x0001088e2aac();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e2a7c();
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



/* Entry: 1088e10f4; end: 1088e11a3;  */

void FUN_1088e10f4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e2cf0();
  func_0x0001088e2bec(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e2be0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  func_0x0001088e2bec(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e2be0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  func_0x0001088e2bec(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e2be0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e2bd0();
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



/* Entry: 1088e11a4; end: 1088e11d7;  */

long FUN_1088e11a4(long param_1)

{
  func_0x0001088e2b28();
  func_0x0001088e2da4();
  func_0x0001088e2dac();
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 1088e11d8; end: 1088e11eb;  */

void FUN_1088e11d8(void)

{
  FUN_1088e11a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e11ec; end: 1088e11f7;  */

undefined ** FUN_1088e11ec(void)

{
  return &PTR_DAT_110a88d88;
}



/* Entry: 1088e11f8; end: 1088e1237;  */

void FUN_1088e11f8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088e2db4();
  func_0x000107c3025c(unaff_x19 + 0x18);
  func_0x000107c3025c(unaff_x19 + 0x20);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 1088e1238; end: 1088e135b;  */

long * FUN_1088e1238(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x0001088e2b40();
  func_0x0001088e2c10(param_1[2]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088e1270;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088e1270:
      param_4 = (long *)&UNK_10f4ebca8;
      func_0x0001088e2b80();
      func_0x0001088e2a2c();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088e2c10(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (unaff_x22[1] != 0) goto LAB_1088e12a8;
  }
  else if ((int)param_2 != 0) {
LAB_1088e12a8:
    param_4 = (long *)&UNK_10f4ebcdd;
    func_0x0001088e2b80();
    param_2 = 2;
    param_1 = unaff_x19;
    func_0x0001088e2a4c();
    unaff_x20 = param_1;
  }
  func_0x0001088e2c10(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088e1304;
  }
  else if ((int)param_2 == 0) goto LAB_1088e1304;
  param_4 = (long *)&UNK_10f4ebd18;
  func_0x0001088e2b80();
  func_0x0001088e2a4c();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_1088e1304:
  plVar2 = param_1;
  if (*(int *)(unaff_x21 + 0x28) != 0) {
    func_0x0001088e2c04();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x0001088e2d6c();
    unaff_x20 = plVar2;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088e2b94();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088e2d4c();
  if (*plVar2 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*plVar2 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = plVar2;
      func_0x000107c303e4(plVar2,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1088e135c; end: 1088e1403;  */

long FUN_1088e135c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x0001088e2bbc(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = lVar2 + 1;
  }
  func_0x0001088e2bbc(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088e2c50();
  }
  func_0x0001088e2bbc(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088e2c50();
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x0001088e2c30();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088e2b88();
    lVar2 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar3;
  return lVar3;
}



/* Entry: 1088e1404; end: 1088e1407;  */

void FUN_1088e1404(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e2cf0();
  func_0x0001088e2bec(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e2be0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  func_0x0001088e2bec(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e2be0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  func_0x0001088e2bec(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e2be0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e2bd0();
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



/* Entry: 1088e1408; end: 1088e143b;  */

long FUN_1088e1408(long param_1)

{
  func_0x0001088e2b28();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088e1b00();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e143c; end: 1088e144f;  */

void FUN_1088e143c(void)

{
  FUN_1088e1408();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e1450; end: 1088e145b;  */

undefined ** FUN_1088e1450(void)

{
  return &PTR_DAT_110a88dd8;
}



/* Entry: 1088e145c; end: 1088e14d3;  */

void FUN_1088e145c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088e2c1c();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e2ce8();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 1088e14d4; end: 1088e156b;  */

long * FUN_1088e14d4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e2b50();
  if ((int)param_1[4] != 0) {
    func_0x0001088e2a70();
    func_0x0001088e2cd0();
    func_0x0001088e2a58();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x0001088e2a70();
    func_0x0001088e2ca8();
    func_0x0001088e2a58();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e2dec();
    param_4 = (long *)0x3;
    func_0x0001088e2b78();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e2b94();
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



/* Entry: 1088e156c; end: 1088e15cf;  */

void FUN_1088e156c(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088e2c1c();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088e2ce0();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0001088e2a04();
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    func_0x0001088e2a04();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088e2b88();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088e15d0; end: 1088e15eb;  */

long FUN_1088e15d0(long param_1)

{
  long extraout_x8;
  
  FUN_1088e1c30();
  func_0x0001088e2b60();
  return param_1 + extraout_x8;
}



/* Entry: 1088e15ec; end: 1088e15ef;  */

void FUN_1088e15ec(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e2a94();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e2dc0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e2df8();
    if (extraout_x8 == 0) {
      func_0x0001088e28c4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088e2d14();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  func_0x0001088e2aac();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e2a7c();
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



/* Entry: 1088e15f0; end: 1088e1693;  */

void FUN_1088e15f0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e2cf0();
  func_0x0001088e2bec(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e2be0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  func_0x0001088e2bec(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e2be0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  func_0x0001088e2bec(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e2be0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e2bd0();
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



/* Entry: 1088e1694; end: 1088e16c7;  */

long FUN_1088e1694(long param_1)

{
  func_0x0001088e2b28();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088e1b00();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e16c8; end: 1088e16db;  */

void FUN_1088e16c8(void)

{
  FUN_1088e1694();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e16dc; end: 1088e16e7;  */

undefined ** FUN_1088e16dc(void)

{
  return &PTR_DAT_110a88e28;
}



/* Entry: 1088e16e8; end: 1088e1727;  */

void FUN_1088e16e8(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088e2c1c();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e2ce8();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 1088e1728; end: 1088e17e3;  */

long * FUN_1088e1728(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e2b50();
  if ((int)param_1[4] != 0) {
    func_0x0001088e2a70();
    func_0x0001088e2cd0();
    func_0x0001088e2a58();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x0001088e2a70();
    func_0x0001088e2ca8();
    func_0x0001088e2a58();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x0001088e2a70();
    param_4 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x0001088e2a58();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e2dec();
    param_4 = (long *)0x4;
    func_0x0001088e2b78();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e2b94();
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



/* Entry: 1088e17e4; end: 1088e1853;  */

void FUN_1088e17e4(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088e2c1c();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088e2ce0();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0001088e2a04();
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    func_0x0001088e2a04();
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x0001088e2a04();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088e2b88();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088e1854; end: 1088e1857;  */

void FUN_1088e1854(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e2a94();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e2dc0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e2df8();
    if (extraout_x8 == 0) {
      func_0x0001088e28c4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088e2d14();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x0001088e2aac();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e2a7c();
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



/* Entry: 1088e1858; end: 1088e188b;  */

long FUN_1088e1858(long param_1)

{
  func_0x0001088e2b28();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088e1b00();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e188c; end: 1088e189f;  */

void FUN_1088e188c(void)

{
  FUN_1088e1858();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e18a0; end: 1088e18ab;  */

undefined ** FUN_1088e18a0(void)

{
  return &PTR_DAT_110a88e78;
}



/* Entry: 1088e18ac; end: 1088e198f;  */

void FUN_1088e18ac(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088e2c1c();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e2ce8();
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



/* Entry: 1088e1990; end: 1088e1993;  */

void FUN_1088e1990(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e2a94();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e2dc0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e2df8();
    if (extraout_x8 == 0) {
      func_0x0001088e28c4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088e2d14();
    }
  }
  func_0x0001088e2aac();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e2a7c();
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



/* Entry: 1088e1994; end: 1088e19c7;  */

long FUN_1088e1994(long param_1)

{
  func_0x0001088e2b28();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088e1b00();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e19c8; end: 1088e19db;  */

void FUN_1088e19c8(void)

{
  FUN_1088e1994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e19dc; end: 1088e19e7;  */

undefined ** FUN_1088e19dc(void)

{
  return &PTR_DAT_110a88ec8;
}



/* Entry: 1088e19e8; end: 1088e1a23;  */

void FUN_1088e19e8(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088e2c1c();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e2ce8();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 1088e1a24; end: 1088e1aa3;  */

long * FUN_1088e1a24(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e2b50();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x0001088e2dec();
    param_1 = (long *)0x1;
    func_0x0001088e2b78();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088e2a70();
    func_0x0001088e2ca8();
    func_0x0001088e2a58();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e2b94();
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



/* Entry: 1088e1aa4; end: 1088e1afb;  */

void FUN_1088e1aa4(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088e2c1c();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088e2ce0();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0001088e2a04();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088e2b88();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088e1afc; end: 1088e1aff;  */

void FUN_1088e1afc(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e2a94();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e2dc0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e2df8();
    if (extraout_x8 == 0) {
      func_0x0001088e28c4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088e2d14();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x0001088e2aac();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e2a7c();
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



/* Entry: 1088e1b00; end: 1088e1b33;  */

long FUN_1088e1b00(long param_1)

{
  func_0x0001088e2b28();
  func_0x0001088e2da4();
  func_0x0001088e2dac();
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 1088e1b34; end: 1088e1b37;  */

long FUN_1088e1b34(long param_1)

{
  func_0x0001088e2b28();
  func_0x0001088e2da4();
  func_0x0001088e2dac();
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 1088e1b38; end: 1088e1b4b;  */

void FUN_1088e1b38(void)

{
  FUN_1088e1b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e1b4c; end: 1088e1b57;  */

undefined ** FUN_1088e1b4c(void)

{
  return &PTR_DAT_110a88f18;
}



/* Entry: 1088e1b58; end: 1088e1c2f;  */

long * FUN_1088e1b58(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  func_0x0001088e2b40();
  func_0x0001088e2c10(param_1[2]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088e1ba4;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088e1ba4;
  param_4 = (long *)&UNK_10f4ebd4b;
  func_0x0001088e2b80();
  func_0x0001088e2a2c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088e1ba4:
  uVar2 = *(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    param_1 = unaff_x19;
    func_0x000107c280a0();
    param_4 = unaff_x20;
    unaff_x20 = param_1;
  }
  uVar2 = *(ulong *)(unaff_x21 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c280a0();
    param_1 = unaff_x19;
    param_4 = unaff_x20;
    unaff_x20 = unaff_x19;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0001088e2b94();
    if ((long)uVar2 < 0) {
      uVar2 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x0001088e2d4c();
    if (*param_1 - (long)param_4 < (long)(int)uVar2) {
      while( true ) {
        iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar4 = (int)uVar2;
        uVar2 = (ulong)(uint)(iVar4 - iVar5);
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
    return (long *)((long)param_4 + (long)(int)uVar2);
  }
  return unaff_x20;
}



/* Entry: 1088e1c30; end: 1088e1ccb;  */

long FUN_1088e1c30(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x0001088e2bbc(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = lVar2 + 1;
  }
  func_0x0001088e2bbc(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c28098();
    func_0x0001088e2c50();
  }
  func_0x0001088e2bbc(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c28098();
    func_0x0001088e2c50();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088e2b88();
    lVar2 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 1088e1ccc; end: 1088e1ccf;  */

void FUN_1088e1ccc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e2cf0();
  func_0x0001088e2bec(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e2be0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  func_0x0001088e2bec(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e2be0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  func_0x0001088e2bec(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e2be0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e2bd0();
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



/* Entry: 1088e1cd0; end: 1088e1d17;  */

long FUN_1088e1cd0(long param_1)

{
  func_0x0001088e2b28();
  func_0x0001088e2dac();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1088e0c04();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e1d18; end: 1088e1d1b;  */

long FUN_1088e1d18(long param_1)

{
  func_0x0001088e2b28();
  func_0x0001088e2dac();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1088e0c04();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e1d1c; end: 1088e1d2f;  */

void FUN_1088e1d1c(void)

{
  FUN_1088e1cd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e1d30; end: 1088e1d3b;  */

undefined ** FUN_1088e1d30(void)

{
  return &PTR_DAT_110a88f70;
}



/* Entry: 1088e1d3c; end: 1088e1d9f;  */

void FUN_1088e1d3c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088e0c70(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
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



/* Entry: 1088e1da0; end: 1088e1eff;  */

long * FUN_1088e1da0(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long extraout_x8;
  int iVar7;
  long *unaff_x22;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 2);
  plVar2 = param_1;
  plVar6 = param_3;
  plVar4 = param_2;
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)param_1[4];
    plVar6 = (long *)(ulong)*(uint *)(param_2 + 3);
    plVar2 = (long *)0x1;
    func_0x0001088e2b78();
    plVar4 = plVar2;
  }
  func_0x0001088e2c10(param_1[3]);
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088e1e28;
  }
  else if ((int)param_2 == 0) goto LAB_1088e1e28;
  func_0x0001088e2b80();
  plVar2 = param_3;
  func_0x000107c280a0(param_3,2);
  plVar6 = unaff_x22;
  plVar4 = plVar2;
LAB_1088e1e28:
  if (param_1[6] != 0) {
    plVar2 = param_3;
    func_0x00010599ccb0();
    plVar6 = plVar4;
    plVar4 = plVar2;
  }
  plVar3 = plVar2;
  if ((int)param_1[7] != 0) {
    func_0x0001088e2bf8();
    plVar3 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x0001088e2a58();
    plVar4 = plVar3;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[5] + 0x18);
    plVar3 = (long *)0x5;
    func_0x0001088e2b78();
    plVar4 = plVar3;
  }
  plVar2 = plVar3;
  if (*(int *)((long)param_1 + 0x3c) != 0) {
    func_0x0001088e2bf8();
    plVar2 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar3);
    func_0x0001088e2d78();
    plVar4 = plVar2;
  }
  if ((int)param_1[8] != 0) {
    func_0x0001088e2bf8();
    plVar4 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar2);
    func_0x0001088e2d78();
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x0001088e2b94();
    if ((long)plVar6 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      plVar6 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*param_3 - (long)plVar4 < (long)(int)plVar6) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)plVar4) + 0x10;
        iVar7 = (int)plVar6;
        plVar6 = (long *)(ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar5 = (long)plVar4 + (long)iVar8;
        plVar4 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar4 + (long)iVar7);
    }
    _memcpy(plVar4,lVar5,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)plVar4 + (long)(int)plVar6);
  }
  return plVar4;
}



/* Entry: 1088e1f00; end: 1088e201f;  */

long FUN_1088e1f00(long param_1)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long lVar3;
  
  lVar3 = param_1;
  func_0x0001088e2bbc(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = lVar3 + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(param_1 + 0x20));
      func_0x0001088e2c50();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x0001088e0d14();
      func_0x0001088e2b60();
      lVar3 = lVar3 + lVar2 + extraout_x8_00 + 1;
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x38)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x40)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088e2b88();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 1088e2020; end: 1088e2123;  */

void FUN_1088e2020(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e2a94();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x0001088e2bec(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x0001088e2be0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x000107c2a26c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088e293c();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_1088e0dc0();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x21 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001088e2a7c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088e2124; end: 1088e217b;  */

void FUN_1088e2124(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x0001088e2bc8();
  }
  else {
    func_0x0001088e2b14();
  }
  *puVar1 = &PTR_DAT_110a888d0;
  puVar1[1] = param_2;
  func_0x0001088e2d1c();
  puVar1[2] = extraout_x8;
  puVar1[3] = extraout_x8;
  puVar1[4] = extraout_x8;
  puVar1[5] = 0;
  return;
}



/* Entry: 1088e217c; end: 1088e21bb;  */

void FUN_1088e217c(void)

{
  func_0x0001088e2dd8();
  FUN_1088e0adc();
  return;
}



/* Entry: 1088e21bc; end: 1088e21eb;  */

long * FUN_1088e21bc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1088e21ec; end: 1088e221b;  */

long * FUN_1088e21ec(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1088e221c; end: 1088e253f;  */

long * FUN_1088e221c(long *param_1)

{
  FUN_1088e21bc(param_1 + 3);
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1088e2540; end: 1088e263b;  */

void FUN_1088e2540(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  int *apiStack_58 [3];
  
  func_0x00010564c19c(apiStack_58);
  while (piVar1 = apiStack_58[0], apiStack_58[0] != (int *)0x0) {
    piVar2 = apiStack_58[0] + 2;
    func_0x000107c28188();
    func_0x0001088e2ba0();
    if (piVar2 == (int *)0x0) {
      piVar3 = (int *)(ulong)(*param_1 + 1);
      piVar2 = param_1;
      func_0x000107c27d60(param_1,piVar3);
      if ((int)piVar2 != 0) {
        func_0x000107c28188(piVar1 + 2);
        func_0x0001088e2ba0();
        param_2 = piVar3;
      }
      piVar2 = param_1;
      func_0x000107c27d64(param_1,0x40);
      func_0x000107c2821c(piVar2 + 2,*(undefined8 *)(param_1 + 6),piVar1 + 2);
      uVar4 = *(undefined8 *)(param_1 + 6);
      *(undefined ***)(piVar2 + 8) = &PTR_FUN_110a88970;
      *(undefined8 *)(piVar2 + 10) = uVar4;
      piVar2[0xe] = 0;
      piVar2[0xf] = 0;
      func_0x000107c27d68(param_1,param_2,piVar2);
      *param_1 = *param_1 + 1;
    }
    if (piVar1 != piVar2) {
      FUN_1088e002c(piVar2 + 8);
      param_2 = piVar1 + 8;
      FUN_1088e01c4(piVar2 + 8);
    }
    func_0x000107c27d54(apiStack_58);
  }
  return;
}



/* Entry: 1088e263c; end: 1088e2a03;  */

undefined8 * FUN_1088e263c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088e2c98();
  }
  else {
    func_0x0001088e2ca0();
  }
  puVar3 = puVar2 + 1;
  *puVar3 = param_1;
  *puVar2 = &PTR_FUN_110a88a60;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001088e2a40();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x0001088e2d8c();
  }
  puVar2[3] = puVar3;
  puVar2[4] = *(undefined8 *)(param_2 + 0x20);
  return puVar2;
}



/* Entry: 1088e2a04; end: 1088e2e03;  */

long FUN_1088e2a04(long param_1)

{
  undefined4 in_w8;
  
  return param_1 + (ulong)((int)LZCOUNT(in_w8) * -9 + 0x1a0U >> 6);
}



/* Entry: 1088e2e04; end: 1088e338b;  */

void FUN_1088e2e04(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001088e9fbc();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001088e2e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df6d4a8)[extraout_x8] * 4 + 0x1088e2e30))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088e338c; end: 1088e3593;  */

void FUN_1088e338c(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *unaff_x19;
  
  lVar3 = param_3;
  func_0x0001088e9c44();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = param_2;
  *unaff_x19 = &PTR_DAT_110a89c60;
  if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
    func_0x0001088e9848();
  }
  *(undefined4 *)(unaff_x19 + 3) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)((long)unaff_x19 + 0x1c) = uVar1;
  switch(uVar1) {
  case 1:
    func_0x0001088e9a84();
    func_0x0001088e892c();
    break;
  case 2:
    func_0x0001088e9a84();
    func_0x0001088e8990();
    break;
  case 3:
    func_0x0001088e9a84();
    func_0x0001088e8a48();
    break;
  case 4:
    func_0x0001088e9a84();
    func_0x0001088e8ad0();
    break;
  case 5:
    func_0x0001088e9a84();
    func_0x0001088e8b54();
    break;
  case 6:
    func_0x0001088e9a84();
    FUN_1088e8bb0();
    break;
  case 7:
    func_0x0001088e9a84();
    func_0x0001088e8c40();
    break;
  case 8:
    func_0x0001088e9a84();
    func_0x0001088e8cc0();
    break;
  case 9:
    func_0x0001088e9a84();
    FUN_1088e8d54();
    break;
  case 10:
    func_0x0001088e9a84();
    func_0x0001088e8dd0();
    break;
  case 0xb:
    func_0x0001088e9a84();
    func_0x0001088e8e2c();
    break;
  case 0xc:
    func_0x0001088e9a84();
    FUN_1088e8ebc();
    break;
  case 0xd:
    func_0x0001088e9a84();
    FUN_1088e8f74();
    break;
  case 0xe:
    func_0x0001088e9a84();
    FUN_1088e8fd0();
    break;
  case 0xf:
    func_0x0001088e9a84();
    FUN_1088e9020();
    break;
  case 0x10:
    func_0x0001088e9a84();
    FUN_1088e9070();
    break;
  case 0x11:
    func_0x0001088e9a84();
    FUN_1088e90c0();
    break;
  case 0x12:
    func_0x0001088e9a84();
    FUN_1088e9110();
    break;
  case 0x13:
    func_0x0001088e9a84();
    FUN_1088e9160();
    break;
  case 0x14:
    func_0x0001088e9a84();
    FUN_1088e91b8();
    break;
  case 0x15:
    func_0x0001088e9a84();
    FUN_1088e9208();
    break;
  case 0x16:
    func_0x0001088e9a84();
    FUN_1088e9268();
    break;
  case 0x17:
    func_0x0001088e9a84();
    FUN_1088e92b8();
    break;
  case 0x18:
    func_0x0001088e9a84();
    func_0x0001088e9308();
    break;
  case 0x19:
    func_0x0001088e9a84();
    func_0x0001088e9370();
    break;
  case 0x1a:
    func_0x0001088e9a84();
    FUN_1088e93f0();
    break;
  case 0x1b:
    func_0x0001088e9a84();
    FUN_1088e9440();
    break;
  case 0x1c:
    func_0x0001088e9a84();
    FUN_1088e9490();
    break;
  case 0x1d:
    func_0x0001088e9a84();
    FUN_1088e9510();
    break;
  case 0x1e:
    func_0x0001088e9a84();
    func_0x0001088e9560();
    break;
  case 0x1f:
    func_0x0001088e9a84();
    func_0x0001088e95b8();
    break;
  case 0x20:
    func_0x0001088e9a84();
    FUN_1088e9610();
    break;
  case 0x21:
    func_0x0001088e9a84();
    func_0x0001088e9668();
    break;
  case 0x22:
    func_0x0001088e9a84();
    func_0x0001088e96cc();
    break;
  default:
    goto LAB_1088e97fc;
  }
  unaff_x19[2] = puVar2;
LAB_1088e97fc:
  return;
}



/* Entry: 1088e3594; end: 1088e35bf;  */

undefined8 FUN_1088e3594(undefined8 param_1)

{
  func_0x0001088e9a50();
  FUN_1088e35c0(param_1);
  return param_1;
}



/* Entry: 1088e35c0; end: 1088e35d3;  */

void FUN_1088e35c0(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x0001088e9fbc();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001088e2e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df6d4a8)[extraout_x8] * 4 + 0x1088e2e30))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088e35d4; end: 1088e35e7;  */

void FUN_1088e35d4(void)

{
  FUN_1088e3594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e35e8; end: 1088e367b;  */

long FUN_1088e35e8(long param_1)

{
  func_0x0001088e9a50();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e367c; end: 1088e3923;  */

void FUN_1088e367c(long param_1)

{
  ulong *puVar1;
  
  FUN_1088e2e04();
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



/* Entry: 1088e3924; end: 1088e3927;  */

void FUN_1088e3924(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x0001088e98cc();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088e9de0();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_1088e2e04();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e4010();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e892c();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e4090();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e8990();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e4140();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e8a48();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e41cc();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e8ad0();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e427c();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e8b54();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e42e4();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e8bb0();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e4370();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e8c40();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e43ec();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e8cc0();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e4494();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e8d54();
      break;
    case 10:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e44f4();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e8dd0();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e455c();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e8e2c();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e4608();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e8ebc();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e46c0();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e8f74();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e4728();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e8fd0();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e4734();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9020();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e4740();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9070();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e474c();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e90c0();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e4758();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9110();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e4764();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9160();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e4784();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e91b8();
      break;
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e4790();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9208();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e47bc();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9268();
      break;
    case 0x17:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e47c8();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e92b8();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e47d4();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e9308();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e4848();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e9370();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e48d8();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e93f0();
      break;
    case 0x1b:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e48e4();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9440();
      break;
    case 0x1c:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e48f0();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9490();
      break;
    case 0x1d:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        FUN_1088e498c();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9510();
      break;
    case 0x1e:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e4998();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e9560();
      break;
    case 0x1f:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e49e0();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e95b8();
      break;
    case 0x20:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e4a28();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9610();
      break;
    case 0x21:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e4a48();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e9668();
      break;
    case 0x22:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e4a9c();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e96cc();
      break;
    default:
      goto LAB_1088e3ff4;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_1088e3ff4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e3928; end: 1088e400f;  */

void FUN_1088e3928(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x0001088e98cc();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088e9de0();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_1088e2e04();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e4010();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e892c();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e4090();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e8990();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e4140();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e8a48();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e41cc();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e8ad0();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e427c();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e8b54();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e42e4();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e8bb0();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e4370();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e8c40();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e43ec();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e8cc0();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e4494();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e8d54();
      break;
    case 10:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e44f4();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e8dd0();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e455c();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e8e2c();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e4608();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e8ebc();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e46c0();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e8f74();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e4728();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e8fd0();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e4734();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9020();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e4740();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9070();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e474c();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e90c0();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e4758();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9110();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e4764();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9160();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e4784();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e91b8();
      break;
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e4790();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9208();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e47bc();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9268();
      break;
    case 0x17:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e47c8();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e92b8();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e47d4();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e9308();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e4848();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e9370();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e48d8();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e93f0();
      break;
    case 0x1b:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        func_0x0001088e48e4();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9440();
      break;
    case 0x1c:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e48f0();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9490();
      break;
    case 0x1d:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e9c8c();
        FUN_1088e498c();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9510();
      break;
    case 0x1e:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e4998();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e9560();
      break;
    case 0x1f:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        func_0x0001088e49e0();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e95b8();
      break;
    case 0x20:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e4a28();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      FUN_1088e9610();
      break;
    case 0x21:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e4a48();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e9668();
      break;
    case 0x22:
      if (iVar2 == iVar1) {
        func_0x0001088e9808();
        FUN_1088e4a9c();
        goto LAB_1088e3ff4;
      }
      func_0x0001088e9a78();
      func_0x0001088e96cc();
      break;
    default:
      goto LAB_1088e3ff4;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_1088e3ff4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e4010; end: 1088e408f;  */

void FUN_1088e4010(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e9dd4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9dc8();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088e9c98();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x0001088e995c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e4090; end: 1088e427b;  */

void FUN_1088e4090(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  
  func_0x0001088e98cc();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088e9de0();
  }
  func_0x0001088e9cb8();
  func_0x0001088e9e9c();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088e9b0c();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088e9f54();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088e9b0c();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
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
  func_0x0001088e9824();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088e98dc();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088e427c; end: 1088e42e3;  */

void FUN_1088e427c(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e9dd4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9dc8();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088e9c98();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x0001088e995c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e42e4; end: 1088e4493;  */

void FUN_1088e42e4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088e9de0();
  }
  func_0x0001088e9cb8();
  func_0x0001088e9c2c(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088e9c20();
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9f54();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088e9b0c();
      *(ulong **)(unaff_x21 + 0x38) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x0001088e9824();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e4494; end: 1088e44f3;  */

void FUN_1088e4494(long param_1,long param_2)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e9c44();
  puVar1 = (ulong *)(param_1 + 0x10);
  param_2 = param_2 + 0x10;
  func_0x000107c296d4();
  func_0x0001088e9c2c(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e9c20();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9bf0();
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



/* Entry: 1088e44f4; end: 1088e455b;  */

void FUN_1088e44f4(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e9dd4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9dc8();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088e9c98();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x0001088e995c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e98dc();
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


