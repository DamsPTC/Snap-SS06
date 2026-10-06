/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10793b0b0; end: 10793b0db;  */

void FUN_10793b0b0(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464ac();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10793b25c; end: 10793b25f;  */

void FUN_10793b25c(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464ac();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10793b4f0; end: 10793b62f;  */

void FUN_10793b4f0(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x0001079465bc();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x000107947068();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        func_0x00010793b28c();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x00010793ada4();
        goto LAB_10793b614;
      }
      func_0x000107946bdc();
      func_0x00010794564c();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x00010793ae68();
        goto LAB_10793b614;
      }
      func_0x000107946bdc();
      FUN_10794569c();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        FUN_10793b0b0();
        goto LAB_10793b614;
      }
      func_0x000107946bdc();
      func_0x0001079456ec();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x00010793b260();
        goto LAB_10793b614;
      }
      func_0x000107946bdc();
      func_0x000107945738();
      break;
    default:
      goto LAB_10793b614;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_10793b614:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010794672c();
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



/* Entry: 10793b83c; end: 10793b83f;  */

undefined8 FUN_10793b83c(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793b950; end: 10793b96f;  */

undefined ** FUN_10793b950(void)

{
  return &PTR_DAT_1109ef490;
}



/* Entry: 10793bab8; end: 10793bafb;  */

void FUN_10793bab8(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079473c0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010793b95c(*(undefined8 *)(unaff_x19 + 0x18));
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



/* Entry: 10793be34; end: 10793be67;  */

void FUN_10793be34(void)

{
  long unaff_x19;
  
  func_0x000107946b84();
  func_0x000107946f1c();
  func_0x0001079470b0();
  func_0x000100067de0(unaff_x19 + 0x30);
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    func_0x00010793ba4c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793c11c; end: 10793c22b;  */

void FUN_10793c11c(ulong *param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000107946614();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x000107946e40();
    puVar1 = unaff_x22;
  }
  func_0x0001079467d4();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x0001001a53d4();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x0001001a53d4();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x0001001a53d4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x38);
    if (param_1 == (ulong *)0x0) {
      func_0x0001079458d4();
      *(ulong **)(unaff_x21 + 0x38) = puVar1;
      param_1 = puVar1;
    }
    else {
      func_0x00010793bc84();
    }
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x40) = 1;
  }
  func_0x000107946584();
  if ((extraout_x8_03 & 1) != 0) {
    func_0x00010794672c();
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



/* Entry: 10793c3b4; end: 10793c3c7;  */

void FUN_10793c3b4(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  FUN_10793c3b4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10793c520; end: 10793c54b;  */

undefined8 FUN_10793c520(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793c54c(param_1);
  return param_1;
}



/* Entry: 10793c6d8; end: 10793c6db;  */

void FUN_10793c6d8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946430();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946bb4();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946d64();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10793c8a0; end: 10793c9a3;  */

void FUN_10793c8a0(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x19;
  
  func_0x000107946514();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
  }
  func_0x0001079468ac();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x0001079470c0();
  return;
}



/* Entry: 10793cbb8; end: 10793ce8f;  */

long * FUN_10793cbb8(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar6;
  int iVar7;
  
  func_0x000107946984();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x78);
    param_3 = (ulong)*(uint *)(param_2 + 4);
    param_1 = (long *)0x1;
    func_0x0001079467ac();
    unaff_x21 = param_1;
  }
  iVar6 = *(int *)(unaff_x20 + 0x20);
  while (iVar6 != 0) {
    func_0x0001079469f4(*(undefined8 *)(unaff_x20 + 0x18));
    param_3 = (ulong)*(uint *)(param_2 + 4);
    param_1 = (long *)0x2;
    func_0x0001079467ac();
    func_0x000107947354();
  }
  iVar6 = *(int *)(unaff_x20 + 0x38);
  while (iVar6 != 0) {
    func_0x0001079469f4(*(undefined8 *)(unaff_x20 + 0x30));
    param_3 = (ulong)*(uint *)(param_2 + 4);
    param_1 = (long *)0x3;
    func_0x0001079467ac();
    func_0x000107947354();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x80);
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x4;
    func_0x0001079467ac();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x88);
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x5;
    func_0x0001079467ac();
    unaff_x21 = param_1;
  }
  if (*(char *)(unaff_x20 + 0xac) == '\x01') {
    func_0x0001079466b8();
    param_2 = param_1;
    func_0x000107946f8c();
    func_0x0001079466ac();
    unaff_x21 = param_1;
  }
  plVar3 = param_1;
  if (*(int *)(unaff_x20 + 0xa8) != 0) {
    func_0x0001079466b8();
    plVar3 = (long *)0x38;
    func_0x0001001a59d0();
    func_0x000107946a6c();
    param_2 = param_1;
    unaff_x21 = plVar3;
  }
  plVar4 = plVar3;
  if (*(char *)(unaff_x20 + 0xad) == '\x01') {
    func_0x0001079466b8();
    unaff_x21 = (long *)0x40;
    func_0x0001001a59d0();
    func_0x0001079466ac();
    plVar4 = unaff_x21;
    param_2 = plVar3;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x90);
    param_3 = (ulong)*(uint *)(param_2 + 4);
    plVar4 = (long *)0x9;
    func_0x0001079467ac();
    unaff_x21 = plVar4;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x98);
    param_3 = (ulong)*(uint *)(param_2 + 3);
    plVar4 = (long *)0xa;
    func_0x0001079467ac();
    unaff_x21 = plVar4;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x60));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    uVar5 = uRam0000000000000000;
    if (lRam0000000000000008 != 0) goto LAB_10793cd58;
  }
  else if ((int)param_2 != 0) {
    uVar5 = 0;
LAB_10793cd58:
    param_4 = (long *)&UNK_10f438e05;
    func_0x000107946aa4(uVar5);
    param_2 = (long *)0xb;
    plVar4 = unaff_x19;
    func_0x000107946758();
    unaff_x21 = plVar4;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x68));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    uVar5 = uRam0000000000000000;
    if (lRam0000000000000008 != 0) goto LAB_10793cd98;
  }
  else if ((int)param_2 != 0) {
    uVar5 = 0;
LAB_10793cd98:
    param_4 = (long *)&UNK_10f438e3a;
    func_0x000107946aa4(uVar5);
    param_2 = (long *)0xc;
    plVar4 = unaff_x19;
    func_0x000107946758();
    unaff_x21 = plVar4;
  }
  plVar3 = plVar4;
  if (*(int *)(unaff_x20 + 0xb0) != 0) {
    func_0x0001079466b8();
    plVar3 = (long *)0x68;
    func_0x0001001a59d0();
    func_0x000107946a6c();
    param_2 = plVar4;
    unaff_x21 = plVar3;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x70));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    uVar5 = uRam0000000000000000;
    if (lRam0000000000000008 == 0) goto LAB_10793ce18;
  }
  else {
    if ((int)param_2 == 0) goto LAB_10793ce18;
    uVar5 = 0;
  }
  param_4 = (long *)&UNK_10f438e7f;
  func_0x000107946aa4(uVar5);
  param_2 = (long *)0xe;
  func_0x000107946758();
  plVar3 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_10793ce18:
  if ((uVar2 >> 5 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0xa0);
    param_3 = (ulong)*(uint *)(param_2 + 5);
    plVar3 = (long *)0xf;
    func_0x0001079467ac();
    unaff_x21 = plVar3;
  }
  iVar6 = *(int *)(unaff_x20 + 0x50);
  while (iVar6 != 0) {
    func_0x0001079465e4();
    param_3 = (ulong)*(uint *)(param_2 + 4);
    plVar3 = (long *)0x10;
    func_0x0001079467ac();
    func_0x000107947354();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946ee4();
  if (*plVar3 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar7 = ((int)*plVar3 - (int)param_4) + 0x10;
      iVar6 = (int)param_3;
      param_3 = (ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar7);
      param_4 = plVar3;
      func_0x000107c303e4(plVar3,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar6);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10793d30c; end: 10793d30f;  */

undefined8 FUN_10793d30c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 10793d4bc; end: 10793d50b;  */

void FUN_10793d4bc(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
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



/* Entry: 10793d6c4; end: 10793d6ef;  */

undefined8 FUN_10793d6c4(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793d6f0(param_1);
  return param_1;
}



/* Entry: 10793da48; end: 10793da73;  */

long FUN_10793da48(long param_1)

{
  func_0x000107946a94();
  func_0x0001079439d8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10793db98; end: 10793db9b;  */

void FUN_10793db98(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x00010793dbcc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10793dccc; end: 10793dcef;  */

void FUN_10793dccc(void)

{
  long unaff_x19;
  
  func_0x000107946b84();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x00010793e360();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793de74; end: 10793e047;  */

void FUN_10793de74(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107946614();
  if ((param_3 & 1) != 0) {
    func_0x000107946e40();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000107946e34();
    if (param_1 == (ulong *)0x0) {
      func_0x000107947294();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      func_0x00010793def4();
    }
  }
  func_0x000107946584();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010794672c();
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



/* Entry: 10793e0fc; end: 10793e1b3;  */

long * FUN_10793e0fc(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x0001079463c8();
  while (unaff_w22 != unaff_w21) {
    func_0x000107946318();
    func_0x000107946d7c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
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



/* Entry: 10793e3a0; end: 10793e3b3;  */

void FUN_10793e3a0(void)

{
  func_0x00010793e360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793e638; end: 10793e63b;  */

long FUN_10793e638(long param_1)

{
  func_0x000107946a94();
  func_0x000107946c10();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010793e360();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10793e834; end: 10793e863;  */

long FUN_10793e834(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000107946fe4();
  func_0x000100067de0(unaff_x19 + 0x30);
  func_0x000100067de0(unaff_x19 + 0x38);
  func_0x000107946d94(unaff_x19 + 0x10);
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return unaff_x19;
}



/* Entry: 10793eb80; end: 10793eba3;  */

void FUN_10793eb80(void)

{
  long unaff_x19;
  
  func_0x000107946b84();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x00010793e360();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793ecf8; end: 10793ed77;  */

void FUN_10793ecf8(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107946614();
  if ((param_3 & 1) != 0) {
    func_0x000107946e40();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000107946e34();
    if (param_1 == (ulong *)0x0) {
      func_0x000107947294();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      func_0x00010793def4();
    }
  }
  func_0x000107946584();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010794672c();
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



/* Entry: 10793ee30; end: 10793ee8f;  */

long * FUN_10793ee30(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x0001079463c8();
  while (unaff_w22 != unaff_w21) {
    func_0x000107946318();
    func_0x000107946d7c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
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



/* Entry: 10793ef7c; end: 10793efa7;  */

void FUN_10793ef7c(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010794673c();
  func_0x000107947378();
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



/* Entry: 10793f194; end: 10793f27f;  */

long * FUN_10793f194(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x0001079463c8();
  while (unaff_w22 != unaff_w21) {
    func_0x00010794635c();
    param_3 = (ulong)*(uint *)(param_2 + 0x1c);
    func_0x0001079467a0();
    func_0x000107946d7c();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010794668c();
    func_0x00010794714c();
    func_0x000107946ec8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
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



/* Entry: 10793f5a4; end: 10793f5d3;  */

void FUN_10793f5a4(long param_1,long param_2)

{
  int iVar1;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x00010793f3c4();
  func_0x000107946c18();
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x20) != iVar1) {
      *(int *)(param_1 + 0x20) = iVar1;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    }
  }
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x24) != iVar1) {
      *(int *)(param_1 + 0x24) = iVar1;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    }
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x28) != iVar1) {
      *(int *)(param_1 + 0x28) = iVar1;
    }
    if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
  }
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



/* Entry: 10793f7d8; end: 10793f7fb;  */

undefined8 FUN_10793f7d8(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793fa7c; end: 10793fa8f;  */

void FUN_10793fa7c(void)

{
  func_0x00010793fa54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793fc3c; end: 10793fc8b;  */

void FUN_10793fc3c(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010794656c();
  while (unaff_x22 != 0) {
    func_0x000107946340();
    func_0x000107946974();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946cb0();
  return;
}



/* Entry: 10793fd38; end: 10793fe0f;  */

long * FUN_10793fd38(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x23;
  int iVar4;
  long unaff_x26;
  long *unaff_x30;
  
  func_0x000107946ffc();
  func_0x000107946448();
  while (unaff_x26 != 0) {
    func_0x000107946378();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x000107946894();
    cVar2 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar2 < 0) && (func_0x000107946ea4(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x000107946764(), in_NG != in_OV)) {
      func_0x000107946598();
      unaff_x20 = param_1;
    }
    else {
      func_0x0001079469b8();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x0001079464f0();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar2);
    }
    func_0x000107946e98();
  }
  if (*(int *)(unaff_x21 + 0x28) != 0) {
    func_0x0001079468c8();
    func_0x000107946bd4();
    func_0x000107946a60();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
  if ((long)(int)param_3 <= *param_1 - (long)unaff_x30) {
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*param_1 - (int)unaff_x30) + 0x10;
    iVar3 = (int)param_3;
    param_3 = (ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    lVar1 = (long)unaff_x30 + (long)iVar4;
    unaff_x30 = param_1;
    func_0x000107c303e4(param_1,lVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x30 + (long)iVar3);
}



/* Entry: 10793fefc; end: 10793ff77;  */

undefined ** FUN_10793fefc(void)

{
  return &PTR_DAT_1109efd58;
}



/* Entry: 10794016c; end: 10794016f;  */

void FUN_10794016c(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107946614();
  if ((param_3 & 1) != 0) {
    func_0x000107946e40();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x0001001a53d4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001079470a4();
    if (param_1 == (ulong *)0x0) {
      func_0x000107946eb0();
      *(ulong **)(unaff_x21 + 0x28) = param_1;
    }
    else {
      func_0x000107931364();
    }
  }
  func_0x000107946584();
  if ((extraout_x8_01 & 1) != 0) {
    func_0x00010794672c();
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



/* Entry: 10794036c; end: 1079403bb;  */

void FUN_10794036c(undefined8 param_1)

{
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010794656c();
  iVar1 = (int)param_1;
  while (unaff_x22 != 0) {
    func_0x000107946340();
    func_0x000107946974();
    iVar1 = (int)param_1;
  }
  func_0x0001079471f8();
  if ((extraout_x8 & 1) != 0) {
    func_0x000107947044();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x2c) = iVar1;
  return;
}



/* Entry: 10794047c; end: 10794057f;  */

long * FUN_10794047c(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x000107946984();
  func_0x000107946824();
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1079404b0;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1079404b0:
      param_4 = (long *)&UNK_10f439205;
      func_0x000107946aa4();
      func_0x000107946634();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    func_0x0001079466b8();
    param_2 = param_1;
    func_0x000107946bd4();
    func_0x0001079466ac();
    unaff_x21 = param_1;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_107940528;
  }
  else if ((int)param_2 == 0) goto LAB_107940528;
  param_4 = (long *)&UNK_10f439258;
  func_0x000107946aa4();
  func_0x000107946758();
  param_1 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_107940528:
  if (*(char *)(unaff_x20 + 0x21) == '\x01') {
    func_0x0001079466b8();
    func_0x000107946ef8();
    func_0x0001079466ac();
    unaff_x21 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946ee4();
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



/* Entry: 1079406d4; end: 1079406ff;  */

void FUN_1079406d4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
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



/* Entry: 107940870; end: 10794087b;  */

undefined ** FUN_107940870(void)

{
  return &PTR_DAT_1109eff50;
}



/* Entry: 107940a10; end: 107940a13;  */

undefined8 FUN_107940a10(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107940b98; end: 107940b9b;  */

undefined8 FUN_107940b98(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107940ca4; end: 107940d5b;  */

long * FUN_107940ca4(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x23;
  int iVar4;
  long unaff_x26;
  long *unaff_x30;
  
  func_0x000107946ffc();
  func_0x000107946448();
  while (unaff_x26 != 0) {
    func_0x000107946378();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x000107946894();
    cVar2 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar2 < 0) && (func_0x000107946ea4(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x000107946764(), in_NG != in_OV)) {
      func_0x000107946598();
      unaff_x20 = param_1;
    }
    else {
      func_0x0001079469b8();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x0001079464f0();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar2);
    }
    func_0x000107946e98();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
  if ((long)(int)param_3 <= *param_1 - (long)unaff_x30) {
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*param_1 - (int)unaff_x30) + 0x10;
    iVar3 = (int)param_3;
    param_3 = (ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    lVar1 = (long)unaff_x30 + (long)iVar4;
    unaff_x30 = param_1;
    func_0x000107c303e4(param_1,lVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x30 + (long)iVar3);
}



/* Entry: 107940e24; end: 107940e9f;  */

undefined ** FUN_107940e24(void)

{
  return &PTR_DAT_1109f0158;
}



/* Entry: 10794140c; end: 10794155b;  */

void FUN_10794140c(void)

{
  func_0x00010793fadc();
  func_0x0001079462e4();
  return;
}



/* Entry: 107941914; end: 107941937;  */

undefined ** FUN_107941914(void)

{
  return &PTR_DAT_1109f0200;
}



/* Entry: 107941a7c; end: 107941b4f;  */

long * FUN_107941a7c(long *param_1,long *param_2,ulong param_3,long *param_4)

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
  
  func_0x000107946414();
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_107941aac;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_107941aac:
      param_4 = (long *)&UNK_10f43939e;
      func_0x000107946aa4();
      func_0x000107946398();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  if (*(int *)(unaff_x21 + 0x20) != 0) {
    func_0x0001079468c8();
    param_2 = param_1;
    func_0x000107946bd4();
    func_0x000107946b6c();
    unaff_x20 = param_1;
  }
  func_0x000107946964();
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_107941b1c;
  }
  else if ((int)param_2 == 0) goto LAB_107941b1c;
  param_4 = (long *)&UNK_10f4393dd;
  func_0x000107946aa4();
  func_0x000107946674();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_107941b1c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
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



/* Entry: 107941d24; end: 107941e2b;  */

void FUN_107941d24(long param_1)

{
  ulong *puVar1;
  
  func_0x000107941c48();
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



/* Entry: 107941f90; end: 10794203b;  */

long * FUN_107941f90(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x000107946414();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_107941fc0;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_107941fc0:
      param_4 = (long *)&UNK_10f43941d;
      func_0x000107946aa4();
      func_0x000107946398();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x000107946964();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_107942008;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_107942008;
  param_4 = (long *)&UNK_10f439442;
  func_0x000107946aa4();
  func_0x000107946498();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_107942008:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
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



/* Entry: 1079421b8; end: 107942267;  */

long * FUN_1079421b8(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x000107946704();
  func_0x000107946ac8(param_1[5]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 == 0) goto LAB_107942208;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_107942208;
  param_4 = (long *)&UNK_10f439467;
  func_0x000107946aa4();
  func_0x000107946398();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_107942208:
  iVar3 = *(int *)(unaff_x21 + 0x18);
  for (iVar2 = 0; iVar3 != iVar2; iVar2 = iVar2 + 1) {
    func_0x0001079465e4();
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    func_0x000107946748();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x000107946ab4();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x000107946b90();
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
  return unaff_x20;
}



/* Entry: 1079423ac; end: 1079423ff;  */

void FUN_1079423ac(void)

{
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x000107947098();
  if ((unaff_w20 & 3) != 0) {
    if ((unaff_w20 & 1) != 0) {
      func_0x000107931420(*(undefined8 *)(unaff_x19 + 0x18));
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x000107931420(*(undefined8 *)(unaff_x19 + 0x20));
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



/* Entry: 107942614; end: 107942633;  */

undefined ** FUN_107942614(void)

{
  return &PTR_DAT_1109f03f0;
}



/* Entry: 107942768; end: 1079427ef;  */

long * FUN_107942768(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x000107946414();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1079427ac;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1079427ac;
  param_4 = (long *)&UNK_10f4394a5;
  func_0x000107946aa4();
  func_0x000107946398();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1079427ac:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x0001079472d4();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
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



/* Entry: 107942910; end: 10794291b;  */

undefined ** FUN_107942910(void)

{
  return &PTR_DAT_1109f0488;
}



/* Entry: 107942b60; end: 107942b63;  */

undefined8 FUN_107942b60(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107942b00(param_1);
  return param_1;
}



/* Entry: 107942f50; end: 107942f7b;  */

undefined8 FUN_107942f50(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107942f7c(param_1);
  return param_1;
}



/* Entry: 10794316c; end: 10794316f;  */

void FUN_10794316c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001079464ac();
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946f48();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 107943724; end: 10794374b;  */

void FUN_107943724(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 10794385c; end: 107943883;  */

void FUN_10794385c(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 1079439b0; end: 1079439d7;  */

void FUN_1079439b0(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 107944dcc; end: 107944dfb;  */

undefined8 * FUN_107944dcc(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010068f438();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107946bac();
  }
  else {
    func_0x000107946b78();
  }
  func_0x00010068f4c0();
  *param_1 = &PTR_DAT_1109ecf60;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x000107931364();
  return param_1;
}



/* Entry: 107945330; end: 10794538f;  */

long FUN_107945330(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010068f438();
  if (param_1 == 0) {
    func_0x000107946b04();
  }
  else {
    func_0x0001079467e4();
  }
  func_0x00010068f4c0();
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109ee180);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946f70();
  func_0x0001079438d8();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return unaff_x19;
}



/* Entry: 10794569c; end: 1079456eb;  */

long FUN_10794569c(long param_1)

{
  func_0x000107946d30();
  if (param_1 == 0) {
    func_0x00010068f474();
  }
  else {
    func_0x0001079468bc();
  }
  func_0x0001079469c8(&PTR_DAT_1109ece20);
  func_0x00010793ae68();
  return param_1;
}



/* Entry: 107945adc; end: 107945b2b;  */

long FUN_107945adc(long param_1)

{
  func_0x000107946d30();
  if (param_1 == 0) {
    func_0x00010068f474();
  }
  else {
    func_0x0001079468bc();
  }
  func_0x0001079469c8(&PTR_DAT_1109ec290);
  func_0x00010793dbdc();
  return param_1;
}



/* Entry: 107945f34; end: 107945f83;  */

long FUN_107945f34(long param_1)

{
  func_0x000107946d30();
  if (param_1 == 0) {
    func_0x00010068f474();
  }
  else {
    func_0x0001079468bc();
  }
  func_0x0001079469c8(&PTR_FUN_1109ecbf0);
  func_0x000107940b68();
  return param_1;
}



/* Entry: 1079474d0; end: 1079474f7;  */

long FUN_1079474d0(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  return param_1;
}



/* Entry: 1079476b0; end: 1079476d3;  */

undefined1  [16] FUN_1079476b0(long param_1,long param_2)

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
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x15);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x15);
  return auVar6;
}



/* Entry: 10794829c; end: 1079482ab;  */

void FUN_10794829c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR____CFConstantStringClassReference_110e5d618,
             PTR_s_stringByAppendingString__112674db8,param_1);
  return;
}



/* Entry: 10794a3ac; end: 10794a7f3;  */

void FUN_10794a3ac(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126cd848;
  _objc_opt_class(PTR_PTR_1126cd848);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d5220;
    _objc_alloc_init(PTR_PTR_1126d5220);
    func_0x00010c1a99c0();
    func_0x00010c208fc0(puVar4);
    func_0x00010c192d40(0x4014000000000000,puVar4);
    func_0x00010c1b3e20(puVar4);
    func_0x00010c171d00(puVar4);
    func_0x00010bf31400(param_2);
    func_0x00010c215dc0(puVar4);
    _objc_retain(param_2);
    uVar3 = param_2;
    func_0x00010c0fb660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c08fa60();
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (uVar5 == 0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      func_0x00010794b630();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_2;
      func_0x00010c0fb660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    _objc_release(uVar3);
    puVar8 = PTR_PTR_1126d5228;
    _objc_alloc_init(PTR_PTR_1126d5228);
    uVar3 = param_2;
    func_0x00010c0fb760(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c5520(puVar8);
    _objc_release(uVar3);
    func_0x00010c204e40(puVar8);
    func_0x00010c1931a0(puVar8);
    puVar9 = PTR_PTR_1126d5238;
    _objc_alloc_init(PTR_PTR_1126d5238);
    func_0x00010c216240(puVar8);
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010c2711a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e880();
    _objc_release(puVar10);
    _objc_release(puVar9);
    puVar9 = puVar8;
    func_0x00010c2711a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19a0e0();
    _objc_release(puVar9);
    uVar3 = param_2;
    func_0x00010c0fb660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf4bb00();
    _objc_release(uVar3);
    if ((int)uVar5 != 0) {
      uVar3 = param_2;
      func_0x00010bf10e20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c08fa60();
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (uVar5 == 0) {
        ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        func_0x00010794b648();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_2;
        func_0x00010bf10e20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
      _objc_release(uVar3);
      puVar9 = puVar8;
      func_0x00010c2711a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19a0e0();
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126d5238;
      _objc_alloc_init(PTR_PTR_1126d5238);
      func_0x00010c1bf4c0(puVar8);
      _objc_release(puVar9);
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010c09e360(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20e880();
      _objc_release(puVar10);
      _objc_release(puVar9);
      puVar9 = puVar8;
      func_0x00010c09e360(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19a0e0();
      _objc_release(puVar9);
      _objc_release(ppuVar11);
    }
    _objc_release(ppuVar7);
    _objc_release(param_2);
    func_0x00010c204860(puVar4);
    _objc_release(puVar8);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10794b7b8; end: 10794b81f; +[SCMTGetPoiPlaylistRequest descriptor] */

void FUN_10794b7b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113726f78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b64c60,
                        &PTR____CFConstantStringClassReference_110ea61d8,
                        &PTR_s_snapchat_map_11323a6d0,&PTR_DAT_11323a828,4,0x20,0x1c);
    puRam0000000113726f78 = puVar1;
  }
  return;
}



/* Entry: 10794baf8; end: 10794bbaf; +[SCMTMapSnapLite descriptor] */

void FUN_10794baf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113726fb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b64f30,
                        &PTR____CFConstantStringClassReference_110ea62d8,&PTR_DAT_11323aa48,
                        &PTR_s_id_p_11323aa60,8,0x38,0x1c);
    puRam0000000113726fb8 = puVar1;
  }
  return;
}



/* Entry: 10794c638; end: 10794c7cb; -[SCMemoriesSnapDocSaveManager _saveSnap:saveSource:storyMetadata:snapDocKey:] */

void FUN_10794c638(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_6;
  func_0x00010bf51e00(param_6);
  _objc_release(param_6);
  func_0x00010c1d0560(puVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar3 = puVar1;
  if ((long)param_4 < 4) {
    if (param_4 < 2) {
LAB_10794c730:
      func_0x00010bdf9520(param_1);
      _objc_retainAutoreleasedReturnValue();
      param_6 = param_1;
      goto LAB_10794c7a0;
    }
    if (param_4 != 2) {
      if (param_4 != 3) goto LAB_10794c7a0;
      goto LAB_10794c6f0;
    }
    func_0x00010bf51e00(puVar1);
    func_0x00010be311c0(param_1,param_2,puVar3,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (2 < param_4 - 6) {
      if (param_4 == 5) {
        func_0x00010bf51e00(puVar1);
        func_0x00010be2fd80(param_1,param_2,puVar3,5);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10794c79c;
      }
      if (param_4 != 4) goto LAB_10794c7a0;
      goto LAB_10794c730;
    }
LAB_10794c6f0:
    func_0x00010bf51e00(puVar1);
    func_0x00010be30660(param_1,param_2,puVar3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10794c79c:
  _objc_release(puVar3);
  param_6 = param_1;
LAB_10794c7a0:
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_6);
  return;
}



/* Entry: 10794ce28; end: 10794d15f; -[SCMemoriesSnapDocSaveManager _handleSnapDocDataMutating:snapDocKey:saveData:saveSource:subject:] */

void FUN_10794ce28(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uStack_290;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar2 = param_5;
  func_0x00010c23fb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    puVar24 = param_5;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126af4c0;
    if (puVar24 == (undefined *)0x0) {
      puVar24 = (undefined *)0x0;
    }
    else {
      puVar24 = param_5;
      func_0x00010bf97200(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar24);
      puVar3 = puVar2;
      func_0x00010bf59960();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        puVar24 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar3);
        puVar24 = puVar3;
      }
      _objc_release(puVar3);
      puVar3 = param_5;
      func_0x00010bf5a5a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf529e0();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126af4d0;
      if (puVar4 != (undefined *)0x0) {
        puVar4 = param_5;
        func_0x00010bf5a5a0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7580();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_retain(puVar3);
        puVar4 = puVar3;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar4 != (undefined *)0x0) {
          puVar22 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar3);
            }
            puVar23 = *(undefined **)((long)puVar22 * 8);
            puVar5 = puVar23;
            func_0x00010bf59960();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010bf433a0();
            _objc_release(puVar5);
            if (puVar6 == (undefined *)0xffffffffffffffff) {
              func_0x00010bf59960();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar24);
              puVar24 = puVar23;
            }
            puVar22 = puVar22 + 1;
          } while (puVar4 != puVar22);
          puVar4 = puVar3;
          func_0x00010bf52a60();
        }
        _objc_release(puVar3);
        _objc_release(puVar3);
      }
      _objc_release(puVar2);
    }
  }
  else {
    puVar24 = param_5;
    func_0x00010c23fb60();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = param_3;
  uVar20 = param_4;
  func_0x00010be5cf60(param_1);
  _objc_release(puVar24);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  _objc_retain(uVar20);
  _objc_retain(param_6);
  puVar24 = puVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar24;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar24);
  puVar24 = puVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar24;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar22;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  puVar22 = puVar4;
  func_0x00010794f29c(puVar4,5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010794f29c(puVar4,6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010794f3d8(uVar7,puVar4,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010795025c(puVar22,puVar4);
  if (puVar6 == (undefined *)0x0) {
    uStack_290 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010c0ef840();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010794f724(uVar9,puVar4,puVar3,puVar6);
    _objc_retainAutoreleasedReturnValue();
    uStack_290 = uVar10;
    func_0x00010c0ef880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(uVar8);
  }
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  func_0x0001079505f0(uVar10,puVar4,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  func_0x0001079507c0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar4;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar23;
  func_0x00010c0fef80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf85640();
  _objc_release(puVar12);
  _objc_release(puVar23);
  puVar12 = PTR_PTR_1126b2220;
  _objc_alloc();
  puVar23 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar23;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a560();
  _objc_release(puVar13);
  _objc_release(puVar23);
  puVar13 = puVar4;
  func_0x000107950544();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ed100();
  func_0x00010c25b720();
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar8);
  puVar14 = puVar22;
  func_0x00010c27dd80();
  puVar23 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if ((int)puVar14 == 0) {
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010794f724(uVar9,puVar4,puVar3,puVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uVar18 = *(undefined8 *)(param_3 + 8);
    func_0x00010c22c220();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = 0xffffffffa9fc90cc;
    func_0x00010b77c6b4();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar22;
    func_0x00010c0c4bc0(puVar22);
    func_0x00010bfbd540();
    func_0x00010bf977c0();
    func_0x00010bf97860();
    puVar19 = puVar4;
    func_0x00010bf30ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb280();
    _objc_retain(puVar2);
    _objc_retain(param_6);
    func_0x00010c14b200((double)((ulong)puVar14 & 0xffffffff),uVar9);
    _objc_release(puVar19);
    _objc_release(uVar15);
    _objc_release(uVar9);
    _objc_release(uVar18);
    _objc_release(param_6);
    _objc_release(puVar2);
  }
  else {
    puVar23 = puVar22;
    func_0x00010c27dd80();
    if ((int)puVar23 != 1) goto code_r0x00010794d848;
    uVar15 = *(undefined8 *)(param_3 + 8);
    func_0x00010c22c220();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010794f724(uVar16,puVar4,puVar3,puVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = 0xffffffff9f8c09ae;
    func_0x00010b77c6b4();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar20;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbd540();
    func_0x00010bf977c0();
    func_0x00010bf97860();
    puVar23 = puVar4;
    func_0x00010bf30ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb280();
    _objc_retain(puVar2);
    _objc_retain(param_6);
    func_0x00010c14b320(uVar9);
    _objc_release(puVar23);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar9);
    _objc_release(uVar15);
    _objc_release(param_6);
    puVar23 = puVar2;
  }
  _objc_release(puVar23);
code_r0x00010794d848:
  _objc_release(uVar8);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uStack_290);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar22);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar24);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(uVar20);
  _objc_release(puVar2);
  return;
}



/* Entry: 10794e560; end: 10794e56f;  */

void FUN_10794e560(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14c730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_sc_addObjectIfNotNil__112630be8,param_2);
  return;
}



/* Entry: 10794ee7c; end: 10794f29b;  */

void FUN_10794ee7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,char param_9
                  ,undefined4 param_10,long param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  lVar11 = param_1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar11);
      }
      lVar2 = param_1;
      func_0x00010c0dff20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010c12b7c0(param_5);
      _objc_release(lVar3);
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    lVar1 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  puVar4 = PTR_PTR_1126bbfd0;
  _objc_opt_new(PTR_PTR_1126bbfd0);
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_7);
      }
      uVar9 = *(undefined8 *)(lVar11 * 8);
      lVar10 = param_7;
      func_0x00010c0e00e0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c55e0(uVar9);
      func_0x00010c1d0560(puVar4);
      _objc_release(lVar10);
      lVar11 = lVar11 + 1;
    } while (lVar1 != lVar11);
    lVar1 = param_7;
    func_0x00010bf52a60();
  }
  _objc_release(param_7);
  puVar6 = PTR_PTR_1126af5d0;
  if (param_9 == '\0') {
    if (param_11 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(param_8);
      _objc_release(puVar6);
    }
    else {
      puVar5 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(param_8);
    }
  }
  else {
    puVar5 = PTR_PTR_1126bf818;
    _objc_alloc();
    func_0x00010c0172c0();
    puVar6 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_8);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  func_0x00010bf436e0(param_8);
  _objc_release(puVar4);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar7;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
  return;
}



/* Entry: 10794fe28; end: 10794ff8b;  */

void FUN_10794fe28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar6 = PTR_PTR_1126d5748;
  uVar8 = param_2;
  _objc_retain(param_2);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0b760(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf93e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf93e60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c55e0();
  func_0x00010c13fe20(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar8);
  puVar7 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined **)(lVar9 + 0x28) = puVar7;
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 107950830; end: 107950c0b;  */

undefined1 *
FUN_107950830(undefined8 param_1,undefined **param_2,undefined **param_3,undefined **param_4,
             long *param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined **ppuStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  ppuVar1 = param_2;
  puStack_138 = puVar10;
  func_0x00010801f88c(param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (*param_5 == 0) {
    ppuVar9 = ppuVar1;
    func_0x00010bf3d7e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar9;
    func_0x00010bf529e0();
    _objc_release(ppuVar9);
    ppuVar9 = param_3;
    func_0x00010bf529e0();
    if (ppuVar8 == ppuVar9) {
      ppuVar2 = param_3;
      func_0x00010bf529e0();
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar9 = (undefined **)0x0;
LAB_1079508fc:
        ppuVar2 = ppuVar1;
        func_0x00010bf3d7e0(ppuVar1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
        ppuVar3 = ppuVar8;
        func_0x00010bf0b540(ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cac90;
        ppuVar4 = ppuVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        ppuVar3 = ppuVar4;
        func_0x00010c067ec0(ppuVar4);
        ppuVar5 = param_2;
        func_0x00010801f394(param_2,ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar5 != (undefined **)0x0) goto code_r0x000107950980;
        _objc_release(ppuVar4);
LAB_107950b9c:
        _objc_release(ppuVar8);
        goto LAB_107950ba0;
      }
LAB_1079509f8:
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      puStack_130 = (undefined *)0x0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(param_4);
      ppuVar2 = &puStack_130;
      ppuVar9 = param_4;
      func_0x00010bf52a60();
      if (ppuVar9 != (undefined **)0x0) {
        lStack_140 = *plStack_120;
        ppuStack_148 = param_4;
        do {
          ppuVar8 = (undefined **)0x0;
          do {
            if (*plStack_120 != lStack_140) {
              _objc_enumerationMutation(ppuStack_148);
            }
            uVar11 = *(undefined8 *)(lStack_128 + (long)ppuVar8 * 8);
            ppuVar4 = ppuVar1;
            func_0x00010bfcd040(ppuVar1);
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar4;
            func_0x00010bf0b540();
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bf0b760(uVar11);
            func_0x00010c0df760();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar5;
            ppuVar2 = ppuVar3;
            func_0x00010c0e00e0(ppuVar5);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar3);
            _objc_release(ppuVar5);
            _objc_release(ppuVar4);
            ppuVar3 = ppuVar6;
            func_0x00010c067ec0(ppuVar6);
            ppuVar4 = param_2;
            func_0x00010801f394(param_2,ppuVar3);
            _objc_retainAutoreleasedReturnValue();
            if (ppuVar4 == (undefined **)0x0) {
              _objc_release(ppuVar6);
              ppuVar8 = ppuStack_148;
              param_4 = ppuStack_148;
              goto LAB_107950b9c;
            }
            func_0x00010bf0b260(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puStack_138);
            _objc_release(uVar11);
            _objc_release(ppuVar4);
            _objc_release(ppuVar6);
            param_4 = ppuStack_148;
            ppuVar8 = (undefined **)((long)ppuVar8 + 1);
          } while (ppuVar9 != ppuVar8);
          ppuVar2 = &puStack_130;
          ppuVar9 = ppuStack_148;
          func_0x00010bf52a60();
        } while (ppuVar9 != (undefined **)0x0);
      }
      _objc_release(param_4);
      puVar10 = puStack_138;
      func_0x00010bf51e00(puStack_138);
      goto LAB_107950ba4;
    }
  }
LAB_107950ba0:
  puVar10 = (undefined *)0x0;
LAB_107950ba4:
  _objc_release(ppuVar1);
  _objc_release(puStack_138);
  _objc_release(param_4);
  _objc_release(param_3);
  ppuVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  pppuVar7 = &ppuStack_180;
  puStack_158 = &UNK_107950c0c;
  ppuStack_170 = param_3;
  ppuStack_168 = param_2;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  puStack_178 = PTR_PTR_1126f8ed8;
  ppuStack_180 = ppuVar1;
  _objc_msgSendSuper2(&ppuStack_180,PTR_s_init_1125d9248);
  if (pppuVar7 != (undefined ***)0x0) {
    _objc_retain(ppuVar2);
    uVar11 = *(undefined8 *)((long)pppuVar7 + 8);
    *(undefined ***)((long)pppuVar7 + 8) = ppuVar2;
    _objc_release(uVar11);
    *(undefined4 *)((long)pppuVar7 + 0x10) = 0;
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar11 = *(undefined8 *)((long)pppuVar7 + 0x18);
    *(undefined **)((long)pppuVar7 + 0x18) = puVar10;
    _objc_release(uVar11);
  }
  _objc_release(ppuVar2);
  return (undefined1 *)pppuVar7;
code_r0x000107950980:
  ppuVar2 = param_3;
  func_0x00010c0dfd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puStack_138);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar8);
  ppuVar9 = (undefined **)((long)ppuVar9 + 1);
  ppuVar2 = param_3;
  func_0x00010bf529e0();
  if (ppuVar2 <= ppuVar9) goto LAB_1079509f8;
  goto LAB_1079508fc;
}



/* Entry: 1079514f4; end: 1079514f7;  */

void FUN_1079514f4(void)

{
  return;
}



/* Entry: 107951eb4; end: 107951f73;  */

void FUN_107951eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf99260(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000107951db4(param_1,param_2,param_3,param_4,puVar1,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107952800; end: 107952833;  */

void FUN_107952800(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110ea6478,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,uVar1);
  return;
}



/* Entry: 107952f50; end: 107953167; -[SCSnapDocManagerImpl queryMediaStatusForKey:mediaMetadata:snapDoc:completion:] */

/* WARNING: Removing unreachable block (ram,0x000107953000) */

void FUN_107952f50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar5 = param_4;
  func_0x00010c0c5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bee77e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_retain(0);
  _objc_release(uVar5);
  lVar2 = param_1;
  func_0x00010bde7e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdf7ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_6);
    func_0x00010c11d240(uVar5);
    _objc_release(uVar5);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  else {
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(0);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10795381c; end: 107953a43; -[SCSnapDocManagerImpl retrievePlaybackMediaForKey:snapDoc:context:completion:] */

void FUN_10795381c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lStack_68 = 0;
  func_0x00010bee7c60(param_1);
  lVar1 = lStack_68;
  _objc_retain(lStack_68);
  if (lVar1 == 0) {
    _objc_initWeak(auStack_70,param_1);
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010bde4260(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  else {
    func_0x00010be52ae0(param_1);
    puVar2 = PTR_PTR_1126d5758;
    _objc_alloc(PTR_PTR_1126d5758);
    func_0x00010c04c320();
    (**(code **)(param_6 + 0x10))(param_6,puVar2);
    _objc_release(puVar2);
    param_1 = 0;
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1079543c8; end: 10795444f;  */

void FUN_1079543c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c5180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c6c20(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf0b760(uVar3);
  FUN_107951eb4(uVar4,uVar1,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107954ed4; end: 107954f2b;  */

void FUN_107954ed4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be82120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079553fc; end: 10795551b; -[SCSnapDocManagerImpl addMediaReferenceForKey:snapDoc:data:mediaType:error:] */

void FUN_1079553fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_4;
  func_0x00010c0c5600(param_4);
  puVar2 = PTR_PTR_1126bcf20;
  _objc_alloc_init(PTR_PTR_1126bcf20);
  func_0x00010c1c4aa0();
  puVar3 = PTR_PTR_1126bc860;
  func_0x00010bf4c8c0(PTR_PTR_1126bc860,param_2,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010b0ee738(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bdc8b40(param_1,param_2,param_5,puVar3);
  _objc_release(param_5);
  func_0x00010bdc7580(param_1,param_2,0,puVar4,param_4,param_6,lVar1 + 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107955b08; end: 107956063; -[SCSnapDocManagerImpl authClaimOrRegisterMediaWithKey:snapDoc:completionQueue:completionHandler:] */

void FUN_107955b08(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lStack_2d8;
  long lStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_6;
  _objc_retain();
  puStack_1a0 = &uStack_1a8;
  uStack_1a8 = 0;
  uStack_198 = 0x2020000000;
  uStack_190 = 1;
  _dispatch_group_create();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lVar2 = param_4;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  lStack_2d8 = lVar2;
  func_0x00010bf52a60();
  if (lStack_2d8 != 0) {
    lVar12 = *plStack_1e0;
    do {
      lStack_2b0 = 0;
      do {
        if (*plStack_1e0 != lVar12) {
          _objc_enumerationMutation(lVar2);
        }
        lVar16 = *(long *)(lStack_1e8 + lStack_2b0 * 8);
        _dispatch_group_enter(uVar1);
        lVar3 = lVar16;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        if (lVar4 != 0) {
          _objc_release(lVar3);
LAB_107955c80:
          uVar5 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf1f3c0();
          _objc_release(uVar5);
          if ((int)uVar6 != 0) {
            lVar3 = param_1;
            func_0x00010bf106a0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar3 == 0) {
              _dispatch_group_leave(uVar1);
              goto LAB_107955e88;
            }
            _objc_release();
          }
          uStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          uStack_200 = 0;
          uStack_218 = 0;
          plStack_220 = (long *)0x0;
          lStack_228 = 0;
          uStack_230 = 0;
          lVar3 = param_4;
          func_0x00010c0fee00();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c0ff660();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          lVar3 = lVar4;
          func_0x00010bf52a60();
          if (lVar3 == 0) {
            _objc_release(lVar4);
          }
          else {
            lVar17 = 0;
            lVar13 = *plStack_220;
            do {
              lVar14 = 0;
              do {
                if (*plStack_220 != lVar13) {
                  _objc_enumerationMutation(lVar4);
                }
                lVar15 = *(long *)(lStack_228 + lVar14 * 8);
                lVar7 = lVar15;
                func_0x00010c0c3fe0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar7 != 0) {
                  lVar7 = lVar15;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = lVar7;
                  func_0x00010c0c5180();
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = lVar8;
                  func_0x00010c0c55e0();
                  lVar10 = lVar16;
                  func_0x00010c0c55e0();
                  _objc_release(lVar8);
                  _objc_release(lVar7);
                  if (lVar9 == lVar10) {
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar17);
                    lVar17 = lVar15;
                  }
                }
                lVar14 = lVar14 + 1;
              } while (lVar3 != lVar14);
              lVar3 = lVar4;
              func_0x00010bf52a60();
            } while (lVar3 != 0);
            _objc_release(lVar4);
            if (lVar17 != 0) {
              puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_268 = 0xc2000000;
              puStack_260 = &UNK_107956064;
              puStack_258 = &UNK_1109f1710;
              _objc_retain(param_3);
              puStack_238 = &uStack_1a8;
              uStack_250 = param_3;
              lStack_248 = lVar16;
              uStack_240 = uVar1;
              func_0x00010be5e160(param_1);
              _objc_release(uStack_250);
              _objc_release(lVar17);
              goto LAB_107955e88;
            }
          }
          *(undefined1 *)(puStack_1a0 + 3) = 0;
          _dispatch_group_leave(uVar1);
          goto LAB_107955f38;
        }
        lVar4 = lVar16;
        func_0x00010bf4cce0();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar4;
        func_0x00010c08fa60();
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (lVar17 != 0) goto LAB_107955c80;
        lVar3 = param_1;
        func_0x00010bf106a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010c0bb2a0(param_1);
          *(undefined1 *)(puStack_1a0 + 3) = 0;
        }
        _dispatch_group_leave(uVar1);
        _objc_release(lVar3);
LAB_107955e88:
        lStack_2b0 = lStack_2b0 + 1;
      } while (lStack_2b0 != lStack_2d8);
      lStack_2d8 = lVar2;
      func_0x00010bf52a60();
    } while (lStack_2d8 != 0);
  }
LAB_107955f38:
  _objc_release(lVar2);
  puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2a0 = 0xc2000000;
  puStack_298 = &UNK_10795607c;
  puStack_290 = &UNK_110883360;
  puStack_278 = &uStack_1a8;
  uStack_288 = param_3;
  uStack_280 = param_6;
  _objc_retain();
  _objc_retain(param_3);
  func_0x000100bc0718(uVar1,param_5,&puStack_2a8);
  _objc_release(uStack_280);
  _objc_release(uStack_288);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_1a8,8);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    uVar11 = 0;
    __Block_object_dispose(&uStack_1a8);
    __Unwind_Resume();
    if ((uVar11 & 1) == 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x18) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_4 + 0x30));
    return;
  }
  return;
}



/* Entry: 1079565f8; end: 10795660f;  */

void FUN_1079565f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107956608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 107957174; end: 1079571fb;  */

void FUN_107957174(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((param_2 & 1) == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      (**(code **)(lVar2 + 0x10))(lVar2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7460(*(undefined8 *)(param_1 + 0x20));
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079583d4; end: 107958607;  */

void FUN_1079583d4(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))
              (*(long *)(param_1 + 0x48),0,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    if (*(char *)(param_1 + 0x58) == '\x01') {
      func_0x00010c0c6c20(*(undefined8 *)(param_1 + 0x20));
      lVar7 = lVar1;
      func_0x00010beb4700();
      if ((int)lVar7 != 0) {
        puVar2 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf18ba0();
        _objc_release(puVar2);
        lVar7 = lVar1;
        func_0x00010bdf8ae0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        puVar2 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf95660();
        _objc_release(puVar2);
        lVar3 = lVar7;
        func_0x00010c08fa60();
        param_2 = lVar7;
        if (lVar3 == 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bfc40e0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be8f7c0(lVar1);
          _objc_release(uVar4);
        }
      }
    }
    lVar7 = *(long *)(param_1 + 0x48);
    puVar2 = PTR_PTR_1126d5768;
    _objc_alloc(PTR_PTR_1126d5768);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0c5180(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf0b760(*(undefined8 *)(param_1 + 0x40));
    puVar5 = PTR_PTR_1126d5790;
    _objc_alloc(PTR_PTR_1126d5790);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfc40e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0036a0(puVar5);
    func_0x00010c029620(puVar2);
    (**(code **)(lVar7 + 0x10))(lVar7,puVar2,*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107958bf0; end: 107958c5b; -[SCSnapDocManagerImpl _potentialMediaType:matchesExpectedMediaType:] */

uint FUN_107958bf0(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_4 < 6) {
    if (param_4 != 2) {
      if (param_4 != 3) goto LAB_107958c54;
      goto LAB_107958c20;
    }
    uVar1 = 0x1e;
  }
  else {
    if (param_4 == 6) {
      uVar1 = (uint)(param_3 == 8 || param_3 == 3);
      goto LAB_107958c54;
    }
    if (param_4 != 9) goto LAB_107958c54;
LAB_107958c20:
    uVar1 = 0xa0;
  }
  uVar1 = uVar1 >> (ulong)((uint)param_3 & 0x1f);
  if (8 < param_3) {
    uVar1 = 1;
  }
LAB_107958c54:
  return uVar1 & 1;
}



/* Entry: 107959768; end: 107959997; -[SCSnapDocManagerImpl _updateMediaReferenceForSnapDoc:contentWriter:newContentKey:mediaListId:error:] */

bool FUN_107959768(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar2 = param_4;
  func_0x00010bfc40e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bcf20;
  _objc_alloc_init();
  func_0x00010c1c4aa0();
  puVar4 = puVar3;
  func_0x0001079521d8(puVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar4 == (undefined *)0x0) {
    if (param_7 == (long *)0x0) {
      bVar1 = false;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      bVar1 = false;
      *param_7 = (long)puVar5;
    }
  }
  else {
    if (param_4 == 0) {
      lVar6 = param_1;
      func_0x00010bdec600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf39b00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar6 = param_4;
      func_0x00010c126140();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar6;
      func_0x00010bf267e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar8;
      func_0x00010c08fa60();
      _objc_release(lVar8);
      if (lVar7 != 0) {
        lVar8 = lVar6;
        func_0x00010bf267e0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bf020(puVar4);
        _objc_release(lVar8);
      }
      lVar7 = lVar6;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010b7f5498();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar7);
    _objc_release(lVar6);
    bVar1 = lVar8 == 0;
    if ((param_7 != (long *)0x0) && (lVar8 != 0)) {
      _objc_retainAutorelease(lVar8);
      *param_7 = lVar8;
    }
    _objc_release(lVar8);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10795a180; end: 10795a4eb; -[SCSnapDocManagerImpl _mediaMetadataListForSnapDoc:snapDocKey:apiType:] */

void FUN_10795a180(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar3);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar4 = uVar8;
        func_0x00010c08c3a0();
        if ((int)uVar4 == 1) {
          func_0x00010c0c3fe0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,uVar8);
          _objc_release(uVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  lVar2 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfdcf00();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c261180();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x0001079515e8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar9 != 0) {
      func_0x00010befa120(puVar1,param_2,lVar9);
    }
    _objc_release(lVar9);
  }
  uVar4 = param_4;
  func_0x00010c0c46a0(param_4);
  lVar2 = param_1;
  func_0x00010be17c80(param_1,param_2,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 != 0) {
    if (param_5 == 2) {
      uVar7 = *(ulong *)(param_1 + 0x18);
      uVar4 = param_4;
      func_0x00010c0c46a0(param_4);
      func_0x00010c0df760(puVar5,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar7,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010bf1f3c0();
      if ((uVar6 & 1) == 0) {
        func_0x00010c11d5a0(param_1,param_2,param_4,lVar2,param_3);
        _objc_release(uVar7);
        _objc_release(puVar5);
        if (param_1 != 0) goto LAB_10795a484;
      }
      else {
        _objc_release(uVar7);
        _objc_release(puVar5);
      }
    }
    else if (param_5 != 1) {
      if (param_5 != 0) goto LAB_10795a48c;
      uVar7 = *(ulong *)(param_1 + 0x18);
      uVar4 = param_4;
      func_0x00010c0c46a0(param_4);
      func_0x00010c0df760(puVar5,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar7,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010bf1f3c0();
      _objc_release(uVar7);
      _objc_release(puVar5);
      if ((uVar6 & 1) == 0) goto LAB_10795a484;
    }
    func_0x00010befa120(puVar1,param_2,lVar2);
  }
LAB_10795a484:
  _objc_retain(puVar1);
LAB_10795a48c:
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10795acac; end: 10795b0bf; -[SCSnapDocManagerImpl _linkAndReplaceMediaRefForMediaIdToContentRefMap:snapDoc:mediaContextType:] */

void FUN_10795acac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lStack_250;
  long lStack_238;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_3);
  lStack_238 = param_3;
  func_0x00010bf52a60();
  if (lStack_238 != 0) {
    lVar8 = *plStack_140;
    do {
      lVar9 = 0;
      do {
        if (*plStack_140 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        lStack_158 = 0;
        lVar1 = param_1;
        func_0x00010bee77e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lStack_158;
        _objc_retain(lStack_158);
        if (lVar2 != 0) {
LAB_10795b01c:
          _objc_retain(lVar2);
          lStack_250 = lVar2;
LAB_10795b034:
          _objc_release(lVar1);
          _objc_release(param_3);
          goto LAB_10795b044;
        }
        lVar2 = lVar1;
        func_0x00010c09d7e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c08fa60();
        _objc_release(lVar2);
        if (lVar3 == 0) {
          func_0x00010be3d700();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = param_1;
          goto LAB_10795b01c;
        }
        lVar3 = param_3;
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uStack_188 = 0;
        uStack_178 = 0x3032000000;
        puStack_170 = &UNK_107955788;
        puStack_168 = &UNK_107955798;
        uStack_160 = 0;
        puStack_180 = &uStack_188;
        func_0x00010c0bcf80();
        lVar4 = *(long *)(param_1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar1;
        func_0x00010c09d7e0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c119380(PTR_PTR_1126bfc90);
        lVar2 = lVar4;
        func_0x00010c099660();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(lVar4);
        if (lVar2 != 0) {
          _objc_retain(lVar2);
          lStack_250 = lVar2;
        }
        __Block_object_dispose(&uStack_188,8);
        _objc_release(uStack_160);
        if (lVar2 != 0) {
          _objc_release(lVar3);
          goto LAB_10795b034;
        }
        _objc_retain(lVar1);
        _objc_retain(lVar1);
        func_0x00010c0bcf80(lVar3);
        func_0x00010c1bf020(lVar1);
        _objc_release(lVar1);
        _objc_release(lVar1);
        _objc_release(lVar1);
        _objc_release(lVar3);
        lVar9 = lVar9 + 1;
      } while (lStack_238 != lVar9);
      lStack_238 = param_3;
      func_0x00010bf52a60();
    } while (lStack_238 != 0);
  }
  lStack_250 = 0;
  lVar2 = param_3;
LAB_10795b044:
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lStack_250);
    return;
  }
  ___stack_chk_fail();
  uVar7 = 8;
  __Block_object_dispose(&uStack_188,8);
  __Unwind_Resume();
  puVar6 = PTR_PTR_1126d57a8;
  _objc_retain(uVar7);
  _objc_alloc();
  func_0x00010c059f60();
  _objc_release(uVar7);
  lVar8 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10795b50c; end: 10795b58b; -[SCSnapDocManagerImpl _removeFromInMemoryCacheForKey:] */

void FUN_10795b50c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1109f1900);
  _os_unfair_lock_lock(param_1 + 0x60);
  func_0x00010c12d4a0(*(undefined8 *)(param_1 + 0x20));
  _os_unfair_lock_unlock(param_1 + 0x60);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10795b938; end: 10795b93f; -[SCSnapDocMediaResultImpl getMediaType] */

undefined4 FUN_10795b938(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10795baa4; end: 10795bad3; -[SCSnapDocPlaybackMediaResultImpl .cxx_destruct] */

void FUN_10795baa4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10795c368; end: 10795c54f; -[SCSnapDocThumbnailResolverImpl _validateOnlyTwoMediaPlaybackLayersPresentInSnapDoc:snapDocKey:] */

undefined1 *
FUN_10795c368(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  puVar7 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf529e0();
  if (puVar9 == (undefined1 *)0x0) {
    _objc_release(puVar1);
    _objc_release(puVar7);
  }
  else {
    puVar9 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    _objc_release(puVar2);
    _objc_release(puVar9);
    _objc_release(puVar1);
    _objc_release(puVar7);
    if (puVar3 < (undefined1 *)0x3) {
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      puVar7 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar7;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      param_4 = auStack_d8;
      param_5 = 0x10;
      puVar7 = puVar1;
      func_0x00010bf52a60();
      if (puVar7 != (undefined1 *)0x0) {
        lVar8 = *plStack_110;
        do {
          puVar9 = (undefined1 *)0x0;
          do {
            if (*plStack_110 != lVar8) {
              _objc_enumerationMutation(puVar1);
            }
            lVar4 = *(long *)(lStack_118 + (long)puVar9 * 8);
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar4 == 0) {
              puVar7 = (undefined1 *)0x0;
              goto LAB_10795c504;
            }
            puVar9 = puVar9 + 1;
          } while (puVar7 != puVar9);
          param_4 = auStack_d8;
          param_5 = 0x10;
          puVar7 = puVar1;
          puVar5 = &uStack_120;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined1 *)0x0);
      }
      puVar7 = (undefined1 *)0x1;
LAB_10795c504:
      _objc_release(puVar1);
      goto LAB_10795c50c;
    }
  }
  puVar5 = (undefined8 *)puVar6;
  puVar7 = (undefined1 *)0x0;
LAB_10795c50c:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_178,param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_copyWeak(auStack_180,auStack_178);
  _objc_retain(puVar5);
  _objc_retain(param_6);
  func_0x00010be96240(param_3);
  _objc_release(param_6);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_180);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_178);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar5);
  return (undefined1 *)puVar5;
}



/* Entry: 10795d194; end: 10795d27b;  */

void FUN_10795d194(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128420();
  _objc_release(uVar4);
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  lVar1 = lVar3;
  func_0x00010be1c200(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x38);
  puVar2 = PTR_PTR_1126d57b8;
  _objc_alloc(PTR_PTR_1126d57b8);
  func_0x00010c08fa60(lVar1);
  func_0x00010c008560(puVar2);
  (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10795d830; end: 10795d883;  */

void FUN_10795d830(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113726fc8 != -1) {
    func_0x00010002a2fc(0x113726fc8,&PTR___NSConcreteGlobalBlock_1109f1ab0);
  }
  uVar1 = uRam0000000113726fc0;
  _objc_retain(uRam0000000113726fc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10795e1e4; end: 10795e293; -[SCMemoriesStorySavingLoggingStatus initWithSaveToMemories:saveToCameraRoll:isGroupStory:savingCompleteEvent:savingStartTime:] */

undefined1 *
FUN_10795e1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f8f10;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}


