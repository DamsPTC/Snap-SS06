/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088cf8d0; end: 1088cf94b;  */

void FUN_1088cf8d0(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x0001088dce1c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_1088c6d60(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x0001088dd30c();
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x0001088dcfc0();
    func_0x0001088dd91c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088dd4c8();
  return;
}



/* Entry: 1088cf94c; end: 1088cf94f;  */

void FUN_1088cf94c(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dcdd0();
  if ((param_3 & 1) != 0) {
    func_0x0001088dd5b0();
  }
  func_0x0001088dd020();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b8();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd560();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088dd9dc();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      FUN_1088c8390();
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x0001088dcd84();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dcf5c();
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



/* Entry: 1088cf950; end: 1088cf97b;  */

undefined8 FUN_1088cf950(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088cf97c(param_1);
  return param_1;
}



/* Entry: 1088cf97c; end: 1088cf9ab;  */

void FUN_1088cf97c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c7e0c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cf9ac; end: 1088cf9b7;  */

undefined ** FUN_1088cf9ac(void)

{
  return &PTR_DAT_110a868c8;
}



/* Entry: 1088cf9b8; end: 1088cfa87;  */

void FUN_1088cf9b8(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088dd450();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dd984();
  }
  func_0x0001088dd43c();
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



/* Entry: 1088cfa88; end: 1088cfa8b;  */

void FUN_1088cfa88(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dce6c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001088dd630();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd624();
    if (extraout_x8 == 0) {
      func_0x0001088c723c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0001088dd994();
    }
  }
  func_0x0001088dce58();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dcf5c();
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



/* Entry: 1088cfa8c; end: 1088cfadf;  */

long FUN_1088cfa8c(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010b5c3924();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1088bca58();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088cfae0; end: 1088cfaf3;  */

void FUN_1088cfae0(void)

{
  FUN_1088cfa8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cfaf4; end: 1088cfaff;  */

undefined ** FUN_1088cfaf4(void)

{
  return &PTR_DAT_110a86908;
}



/* Entry: 1088cfb00; end: 1088cfb57;  */

void FUN_1088cfb00(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0001088dda88();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x0001088dd588();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0001088ddba4();
    }
    if ((unaff_w20 >> 2 & 1) != 0) {
      FUN_1088bcae4(unaff_x19[5]);
    }
  }
  func_0x0001088dd43c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
    *(undefined1 *)*unaff_x19 = 0;
    unaff_x19[1] = 0;
    return;
  }
  *(undefined1 *)unaff_x19 = 0;
  *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
  return;
}



/* Entry: 1088cfb58; end: 1088cfc57;  */

long * FUN_1088cfb58(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0001088dcd70();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001088dd910();
    func_0x0001088dd0e8();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    func_0x0001088dd114();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088dd348();
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



/* Entry: 1088cfc58; end: 1088cfc5b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088cfc58(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcd98();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088ddc54();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd6c4();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd4e4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088dd560();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd6f4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b5c4808();
      }
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      func_0x0001088dd6d0();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088c67b0();
        *(ulong **)(unaff_x21 + 0x28) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088bcd28();
      }
    }
  }
  func_0x0001088dcd84();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088dcf5c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088cfc5c; end: 1088cfca3;  */

long FUN_1088cfc5c(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd448();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010b59cae8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010b5a21d0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088cfca4; end: 1088cfcb7;  */

void FUN_1088cfca4(void)

{
  FUN_1088cfc5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cfcb8; end: 1088cfcc3;  */

undefined ** FUN_1088cfcb8(void)

{
  return &PTR_DAT_110a86948;
}



/* Entry: 1088cfcc4; end: 1088cfd0f;  */

void FUN_1088cfcc4(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0001088dd058();
  func_0x0001088dd904();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010b59cb3c(unaff_x19[4]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010b5a2268(unaff_x19[5]);
    }
  }
  func_0x0001088dd43c();
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



/* Entry: 1088cfd10; end: 1088cfdbf;  */

long * FUN_1088cfd10(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x0001088dcfe8();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 0x24);
    func_0x0001088dcf7c();
    unaff_x20 = param_1;
  }
  func_0x0001088dd0f4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088cfd74;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088cfd74;
  param_4 = (long *)&UNK_10f4eabb4;
  func_0x0001088dd2ec();
  func_0x0001088dcce0();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088cfd74:
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x20);
    param_1 = (long *)0x3;
    func_0x0001088dcfb4();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088dd348();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088dd474();
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



/* Entry: 1088cfdc0; end: 1088cfe43;  */

void FUN_1088cfdc0(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x0001088dce1c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  func_0x0001088dd8f8();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      FUN_1088bccf8(*(undefined8 *)(unaff_x19 + 0x20));
      func_0x0001088dd30c();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      FUN_1088cfe44(*(undefined8 *)(unaff_x19 + 0x28));
      func_0x0001088dd30c();
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088dd4c8();
  return;
}



/* Entry: 1088cfe44; end: 1088cfe5b;  */

void FUN_1088cfe44(void)

{
  func_0x00010b5a2328();
  FUN_1088dcc88();
  return;
}



/* Entry: 1088cfe5c; end: 1088cfe5f;  */

void FUN_1088cfe5c(ulong *param_1,long param_2,ulong *param_3)

{
  undefined1 in_ZR;
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcdd0();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x0001088dd5b0();
    puVar1 = unaff_x22;
  }
  func_0x0001088dd020();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b8();
  }
  func_0x0001088dd654();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd560();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088ddbb4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b59cd28();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088dd6d0();
      if (param_1 == (ulong *)0x0) {
        FUN_1088dc304();
        *(ulong **)(unaff_x21 + 0x28) = puVar1;
        param_1 = puVar1;
      }
      else {
        func_0x00010b5a219c();
      }
    }
  }
  func_0x0001088dcd84();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x0001088dcf5c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088cfe60; end: 1088d000b;  */

void FUN_1088cfe60(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  
  if (*(int *)(param_1 + 0x40) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x30) != 0) {
        func_0x00010b5c3924();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 1088d000c; end: 1088d013b;  */

void FUN_1088d000c(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x0001088dcef0();
  func_0x0001088dd608(&PTR_FUN_110a85e68);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  *(undefined4 *)(unaff_x19 + 0x40) = *(undefined4 *)(unaff_x21 + 0x40);
  *(undefined4 *)(unaff_x19 + 0x44) = *(undefined4 *)(unaff_x21 + 0x44);
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088dd88c();
    func_0x0001088c677c();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088dd408();
    func_0x0001088c67b0();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    func_0x0001088dc334();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  if (*(int *)(unaff_x19 + 0x40) == 3) {
    func_0x0001088c67e4();
    *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
    uVar2 = unaff_x20;
  }
  switch(*(undefined4 *)(unaff_x19 + 0x44)) {
  case 0xb:
    func_0x0001088dd8ec();
    func_0x0001088dc364();
    break;
  case 0xc:
    func_0x0001088dd8ec();
    func_0x0001088dc398();
    break;
  case 0xd:
    func_0x0001088dd8ec();
    func_0x0001088dc3c8();
    break;
  case 0xe:
    func_0x0001088dd8ec();
    func_0x0001088dc3f8();
    break;
  case 0xf:
    func_0x0001088dd8ec();
    func_0x0001088dc428();
    break;
  default:
    goto LAB_1088dceb4;
  case 0x11:
    func_0x0001088dd8ec();
    func_0x0001088c67e4();
    break;
  case 0x17:
    func_0x0001088dd8ec();
    FUN_1088dc458();
  }
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
LAB_1088dceb4:
  return;
}



/* Entry: 1088d013c; end: 1088d0167;  */

undefined8 FUN_1088d013c(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d0168(param_1);
  return param_1;
}



/* Entry: 1088d0168; end: 1088d01d7;  */

void FUN_1088d0168(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088d081c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088bca58();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1088bb16c();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1088cfe60(param_1);
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x44)) {
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088cffac;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_1088c8ad8();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088cffac;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_1088c9d5c();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_1088cffac;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_1088c9ff4();
    }
    break;
  case 0xe:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_1088cffac;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_1088cb2d4();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_1088cffac;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_1088cf434();
    }
    break;
  default:
    goto LAB_1088cffac;
  case 0x11:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088cffac;
    if (*(long *)(param_1 + 0x38) != 0) {
      func_0x00010b5c3924();
    }
    break;
  case 0x17:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_1088cffac;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_1088ca878();
    }
  }
  __ZdlPv();
LAB_1088cffac:
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



/* Entry: 1088d01d8; end: 1088d01db;  */

undefined8 FUN_1088d01d8(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d0168(param_1);
  return param_1;
}



/* Entry: 1088d01dc; end: 1088d01ef;  */

void FUN_1088d01dc(void)

{
  FUN_1088d013c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d01f0; end: 1088d01fb;  */

undefined ** FUN_1088d01f0(void)

{
  return &PTR_DAT_110a86990;
}



/* Entry: 1088d01fc; end: 1088d026b;  */

void FUN_1088d01fc(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0001088dda88();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      FUN_1088d026c(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_1088bcae4(unaff_x19[4]);
    }
    if ((unaff_w20 >> 2 & 1) != 0) {
      FUN_1088bb1fc(unaff_x19[5]);
    }
  }
  FUN_1088cfe60();
  func_0x0001088cfeb0();
  func_0x0001088dd43c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
    *(undefined1 *)*unaff_x19 = 0;
    unaff_x19[1] = 0;
    return;
  }
  *(undefined1 *)unaff_x19 = 0;
  *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
  return;
}



/* Entry: 1088d026c; end: 1088d027f;  */

void FUN_1088d026c(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
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



/* Entry: 1088d0280; end: 1088d04bb;  */

long * FUN_1088d0280(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001088dcf6c();
  if ((int)param_1[8] == 3) {
    func_0x0001088dd114();
    param_4 = param_1;
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x44);
  uVar1 = *(uint *)(unaff_x20 + 0x44) - 0xb;
  if ((uVar1 < 7) && ((0x5fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    func_0x0001088dd208(*(undefined8 *)(&UNK_10df6d040 + (ulong)uVar1 * 8),plVar2,
                        *(undefined8 *)(unaff_x20 + 0x38));
    param_4 = plVar2;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_4 = (long *)0x12;
    func_0x0001088dd2f4();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001088dd910();
    param_4 = (long *)0x13;
    func_0x0001088dd2f4();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_4 = (long *)0x14;
    func_0x0001088dd2f4();
  }
  if (*(int *)(unaff_x20 + 0x44) == 0x17) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x14);
    param_4 = (long *)0x17;
    func_0x0001088dd2f4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088dd348();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
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



/* Entry: 1088d04bc; end: 1088d054b;  */

void FUN_1088d04bc(void)

{
  func_0x0001088bb2f0();
  FUN_1088dcc88();
  return;
}



/* Entry: 1088d054c; end: 1088d054f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088d054c(ulong *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcd98();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088ddc54();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd6c4();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088c677c();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        FUN_1088d07f0();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088dd560();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088c67b0();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_1088bcd28();
      }
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      func_0x0001088dd6d0();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dc334();
        unaff_x21[5] = (ulong)unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088bb37c();
      }
    }
  }
  func_0x0001088dcfd8();
  iVar1 = *(int *)(unaff_x20 + 0x40);
  if (iVar1 != 0) {
    if ((int)unaff_x21[8] == iVar1) {
      if (iVar1 == 3) {
        func_0x0001088ddc84();
        func_0x00010b5c4808();
      }
    }
    else {
      if ((int)unaff_x21[8] != 0) {
        param_1 = unaff_x21;
        func_0x0001088cfe60();
      }
      *(int *)(unaff_x21 + 8) = iVar1;
      if (iVar1 == 3) {
        func_0x0001088dd6f4();
        unaff_x21[6] = (ulong)param_1;
      }
    }
  }
  iVar1 = *(int *)(unaff_x20 + 0x44);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x44);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        func_0x0001088cfeb0();
      }
      *(int *)((long)unaff_x21 + 0x44) = iVar1;
    }
    switch(iVar1) {
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x0001088dd384();
        FUN_1088c8cc8();
        goto LAB_1088d07d4;
      }
      func_0x0001088dd8e0();
      func_0x0001088dc364();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x0001088dd384();
        FUN_1088c9eac();
        goto LAB_1088d07d4;
      }
      func_0x0001088dd8e0();
      func_0x0001088dc398();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x0001088dd384();
        FUN_1088ca1ec();
        goto LAB_1088d07d4;
      }
      func_0x0001088dd8e0();
      func_0x0001088dc3c8();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x0001088dd384();
        FUN_1088cb740();
        goto LAB_1088d07d4;
      }
      func_0x0001088dd8e0();
      func_0x0001088dc3f8();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x0001088dd384();
        FUN_1088cf5c8();
        goto LAB_1088d07d4;
      }
      func_0x0001088dd8e0();
      func_0x0001088dc428();
      break;
    default:
      goto LAB_1088d07d4;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x0001088dd384();
        func_0x00010b5c4808();
        goto LAB_1088d07d4;
      }
      func_0x0001088dd6f4();
      break;
    case 0x17:
      if (iVar2 == iVar1) {
        func_0x0001088dd384();
        FUN_1088ca9c4();
        goto LAB_1088d07d4;
      }
      func_0x0001088dd8e0();
      FUN_1088dc458();
    }
    unaff_x21[7] = (ulong)param_1;
  }
LAB_1088d07d4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dcf5c();
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



/* Entry: 1088d0550; end: 1088d07ef;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088d0550(ulong *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcd98();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088ddc54();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd6c4();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088c677c();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        FUN_1088d07f0();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088dd560();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088c67b0();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_1088bcd28();
      }
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      func_0x0001088dd6d0();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dc334();
        unaff_x21[5] = (ulong)unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088bb37c();
      }
    }
  }
  func_0x0001088dcfd8();
  iVar1 = *(int *)(unaff_x20 + 0x40);
  if (iVar1 != 0) {
    if ((int)unaff_x21[8] == iVar1) {
      if (iVar1 == 3) {
        func_0x0001088ddc84();
        func_0x00010b5c4808();
      }
    }
    else {
      if ((int)unaff_x21[8] != 0) {
        param_1 = unaff_x21;
        func_0x0001088cfe60();
      }
      *(int *)(unaff_x21 + 8) = iVar1;
      if (iVar1 == 3) {
        func_0x0001088dd6f4();
        unaff_x21[6] = (ulong)param_1;
      }
    }
  }
  iVar1 = *(int *)(unaff_x20 + 0x44);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x44);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        func_0x0001088cfeb0();
      }
      *(int *)((long)unaff_x21 + 0x44) = iVar1;
    }
    switch(iVar1) {
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x0001088dd384();
        FUN_1088c8cc8();
        goto LAB_1088d07d4;
      }
      func_0x0001088dd8e0();
      func_0x0001088dc364();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x0001088dd384();
        FUN_1088c9eac();
        goto LAB_1088d07d4;
      }
      func_0x0001088dd8e0();
      func_0x0001088dc398();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x0001088dd384();
        FUN_1088ca1ec();
        goto LAB_1088d07d4;
      }
      func_0x0001088dd8e0();
      func_0x0001088dc3c8();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x0001088dd384();
        FUN_1088cb740();
        goto LAB_1088d07d4;
      }
      func_0x0001088dd8e0();
      func_0x0001088dc3f8();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x0001088dd384();
        FUN_1088cf5c8();
        goto LAB_1088d07d4;
      }
      func_0x0001088dd8e0();
      func_0x0001088dc428();
      break;
    default:
      goto LAB_1088d07d4;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x0001088dd384();
        func_0x00010b5c4808();
        goto LAB_1088d07d4;
      }
      func_0x0001088dd6f4();
      break;
    case 0x17:
      if (iVar2 == iVar1) {
        func_0x0001088dd384();
        FUN_1088ca9c4();
        goto LAB_1088d07d4;
      }
      func_0x0001088dd8e0();
      FUN_1088dc458();
    }
    unaff_x21[7] = (ulong)param_1;
  }
LAB_1088d07d4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dcf5c();
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



/* Entry: 1088d07f0; end: 1088d081b;  */

void FUN_1088d07f0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
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



/* Entry: 1088d081c; end: 1088d083f;  */

undefined8 FUN_1088d081c(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088d0840; end: 1088d0883;  */

undefined8 * FUN_1088d0840(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a84298;
  param_1[1] = param_2;
  func_0x0001088dda2c();
  FUN_1088d07f0();
  return param_1;
}



/* Entry: 1088d0884; end: 1088d0887;  */

undefined8 FUN_1088d0884(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088d0888; end: 1088d089b;  */

void FUN_1088d0888(void)

{
  FUN_1088d081c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d089c; end: 1088d08a7;  */

undefined ** FUN_1088d089c(void)

{
  return &PTR_DAT_110a869d0;
}



/* Entry: 1088d08a8; end: 1088d092f;  */

long * FUN_1088d08a8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dce08();
  if (extraout_w8 == 1) {
    func_0x0001088dd014();
    func_0x0001088dd6e4();
    func_0x0001088dd164();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x0001088dd014();
    func_0x0001088dd670();
    func_0x0001088dd088();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd348();
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



/* Entry: 1088d0930; end: 1088d0987;  */

long FUN_1088d0930(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + lVar1 + 1;
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



/* Entry: 1088d0988; end: 1088d09ff;  */

void FUN_1088d0988(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x0001088dd50c();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088d09dc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088d0db4();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_1088d09dc;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088d09dc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088d0d04();
    }
  }
  __ZdlPv();
LAB_1088d09dc:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088d0a00; end: 1088d0a5f;  */

void FUN_1088d0a00(undefined8 param_1)

{
  int extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x0001088dcef0();
  func_0x0001088dd608(&PTR_DAT_110a850f8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088dda38();
  if (extraout_w8 == 2) {
    func_0x0001088ddc04();
    FUN_1088dc514();
  }
  else {
    if (extraout_w8 != 1) {
      return;
    }
    func_0x0001088ddc04();
    FUN_1088dc4b8();
  }
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 1088d0a60; end: 1088d0a8b;  */

undefined8 FUN_1088d0a60(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d0a8c(param_1);
  return param_1;
}



/* Entry: 1088d0a8c; end: 1088d0a9f;  */

void FUN_1088d0a8c(long param_1)

{
  undefined1 in_ZR;
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x0001088dd50c();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088d09dc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088d0db4();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_1088d09dc;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088d09dc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088d0d04();
    }
  }
  __ZdlPv();
LAB_1088d09dc:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088d0aa0; end: 1088d0ab3;  */

void FUN_1088d0aa0(void)

{
  FUN_1088d0a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d0ab4; end: 1088d0ac7;  */

undefined8 FUN_1088d0ab4(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088d0ac8; end: 1088d0bcb;  */

void FUN_1088d0ac8(long param_1)

{
  ulong *puVar1;
  
  FUN_1088d0988();
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



/* Entry: 1088d0bcc; end: 1088d0bfb;  */

void FUN_1088d0bcc(void)

{
  func_0x0001088d0d88();
  FUN_1088dcc88();
  return;
}



/* Entry: 1088d0bfc; end: 1088d0bff;  */

void FUN_1088d0bfc(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_1088d0ca8;
  func_0x0001088ddc9c();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_1088d0988();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x0001088dd7d8();
      func_0x0001088dd968();
      func_0x0001088d0cd4();
      goto LAB_1088d0ca8;
    }
    func_0x0001088dd898();
    FUN_1088dc514();
  }
  else {
    if (iVar1 != 1) goto LAB_1088d0ca8;
    if (unaff_w24 == 1) {
      func_0x0001088dd7d8();
      func_0x0001088ddb08();
      FUN_1088d0cc4();
      goto LAB_1088d0ca8;
    }
    func_0x0001088dd898();
    FUN_1088dc4b8();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_1088d0ca8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dcf5c();
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



/* Entry: 1088d0c00; end: 1088d0cc3;  */

void FUN_1088d0c00(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_1088d0ca8;
  func_0x0001088ddc9c();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_1088d0988();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x0001088dd7d8();
      func_0x0001088dd968();
      func_0x0001088d0cd4();
      goto LAB_1088d0ca8;
    }
    func_0x0001088dd898();
    FUN_1088dc514();
  }
  else {
    if (iVar1 != 1) goto LAB_1088d0ca8;
    if (unaff_w24 == 1) {
      func_0x0001088dd7d8();
      func_0x0001088ddb08();
      FUN_1088d0cc4();
      goto LAB_1088d0ca8;
    }
    func_0x0001088dd898();
    FUN_1088dc4b8();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_1088d0ca8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dcf5c();
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



/* Entry: 1088d0cc4; end: 1088d0d03;  */

void FUN_1088d0cc4(long param_1,long param_2)

{
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



/* Entry: 1088d0d04; end: 1088d0d27;  */

undefined8 FUN_1088d0d04(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088d0d28; end: 1088d0d3b;  */

void FUN_1088d0d28(void)

{
  FUN_1088d0d04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d0d3c; end: 1088d0db3;  */

undefined ** FUN_1088d0d3c(void)

{
  return &PTR_DAT_110a86a58;
}



/* Entry: 1088d0db4; end: 1088d0dd7;  */

undefined8 FUN_1088d0db4(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088d0dd8; end: 1088d0deb;  */

void FUN_1088d0dd8(void)

{
  FUN_1088d0db4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d0dec; end: 1088d0e0b;  */

undefined ** FUN_1088d0dec(void)

{
  return &PTR_DAT_110a86aa0;
}



/* Entry: 1088d0e0c; end: 1088d0e83;  */

long * FUN_1088d0e0c(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001088dd014();
    func_0x0001088dd9a4();
    func_0x0001088ddae4();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x0001088dd014();
    func_0x0001088ddbcc();
    func_0x0001088ddae4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd348();
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



/* Entry: 1088d0e84; end: 1088d0ecb;  */

long FUN_1088d0e84(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088d0ecc; end: 1088d0f2f;  */

void FUN_1088d0ecc(undefined8 param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001088dd540();
  func_0x0001088dd608(&PTR_FUN_110a85148);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088ddb68();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined1 *)(unaff_x19 + 0x40) = *(undefined1 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
  return;
}



/* Entry: 1088d0f30; end: 1088d0f5b;  */

undefined8 FUN_1088d0f30(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d0f5c(param_1);
  return param_1;
}



/* Entry: 1088d0f5c; end: 1088d0f77;  */

void FUN_1088d0f5c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d0f78; end: 1088d0f7b;  */

undefined8 FUN_1088d0f78(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d0f5c(param_1);
  return param_1;
}



/* Entry: 1088d0f7c; end: 1088d0f8f;  */

void FUN_1088d0f7c(void)

{
  FUN_1088d0f30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d0f90; end: 1088d0f9b;  */

undefined ** FUN_1088d0f90(void)

{
  return &PTR_DAT_110a86ae8;
}



/* Entry: 1088d0f9c; end: 1088d0fe3;  */

void FUN_1088d0f9c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd450();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dd588();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 1088d0fe4; end: 1088d10db;  */

long * FUN_1088d0fe4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001088dce08();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcd70();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088dd014();
    func_0x0001088ddbcc();
    func_0x0001088ddae4();
  }
  plVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x0001088dd014();
    plVar2 = (long *)0x19;
    func_0x000107c280a8(0x19,param_1);
    func_0x0001088ddae4();
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x0001088dd014();
    func_0x0001088dd99c();
    func_0x0001088dd3f0();
    param_4 = plVar2;
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x0001088dd014();
    func_0x0001088dd9e4();
    func_0x0001088dd3f0();
    param_4 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    func_0x0001088dd014();
    param_4 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x0001088dd164();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd348();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar3 = extraout_x8_00 + 8;
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



/* Entry: 1088d10dc; end: 1088d1183;  */

void FUN_1088d10dc(long param_1)

{
  int iVar1;
  ulong extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088dd450();
  if ((extraout_x8 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001088dd590();
    lVar2 = param_1 + 1;
  }
  iVar1 = (int)param_1;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar2 = lVar2 + 9;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    lVar2 = lVar2 + 9;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    lVar2 = (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 0x30)) * -9 + 0x2c0U >> 6) + lVar2;
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    lVar2 = (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 0x38)) * -9 + 0x2c0U >> 6) + lVar2;
  }
  func_0x0001088ddc10(lVar2);
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dd730();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 1088d1184; end: 1088d1187;  */

void FUN_1088d1184(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dce6c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001088dd630();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd624();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0001088dd6a8();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x40) = 1;
  }
  func_0x0001088dce58();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dcf5c();
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



/* Entry: 1088d1188; end: 1088d1227;  */

void FUN_1088d1188(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dce6c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001088dd630();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd624();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0001088dd6a8();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x40) = 1;
  }
  func_0x0001088dce58();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dcf5c();
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



/* Entry: 1088d1228; end: 1088d124b;  */

undefined8 FUN_1088d1228(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088d124c; end: 1088d125f;  */

void FUN_1088d124c(void)

{
  FUN_1088d1228();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d1260; end: 1088d12db;  */

undefined ** FUN_1088d1260(void)

{
  return &PTR_DAT_110a86b30;
}



/* Entry: 1088d12dc; end: 1088d1333;  */

long FUN_1088d12dc(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd448();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_1088d1348(param_1);
  }
  return param_1;
}



/* Entry: 1088d1334; end: 1088d1347;  */

void FUN_1088d1334(void)

{
  FUN_1088d12dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d1348; end: 1088d1377;  */

void FUN_1088d1348(long param_1)

{
  if (*(int *)(param_1 + 0x58) == 8) {
    func_0x000107c30258(param_1 + 0x50);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 1088d1378; end: 1088d1383;  */

undefined ** FUN_1088d1378(void)

{
  return &PTR_DAT_110a86b78;
}



/* Entry: 1088d1384; end: 1088d13df;  */

void FUN_1088d1384(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0001088dd058();
  func_0x0001088dd904();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x0001088dd660();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_1088bf358(unaff_x19[5]);
    }
  }
  unaff_x19[6] = 0;
  unaff_x19[7] = 0;
  *(undefined1 *)(unaff_x19 + 9) = 0;
  unaff_x19[8] = 0;
  FUN_1088d1348();
  func_0x0001088dd43c();
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



/* Entry: 1088d13e0; end: 1088d163f;  */

long * FUN_1088d13e0(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  
  func_0x0001088dd4ec();
  plVar3 = param_1;
  if (param_1[6] != 0) {
    func_0x0001088dd0bc();
    lVar6 = *(long *)(unaff_x20 + 0x30);
    plVar3 = (long *)0x9;
    func_0x000107c280a8();
    unaff_x21 = plVar3 + 1;
    *plVar3 = lVar6;
    param_2 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x0001088dd0bc();
    lVar6 = *(long *)(unaff_x20 + 0x38);
    param_2 = plVar3;
    func_0x0001088ddbcc();
    unaff_x21 = plVar3 + 1;
    *plVar3 = lVar6;
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x0001088dd0bc();
    param_2 = plVar3;
    func_0x0001088dd6dc();
    func_0x0001088dd3f0();
    unaff_x21 = plVar3;
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  plVar7 = (long *)(ulong)uVar2;
  if ((uVar2 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 3);
    plVar3 = (long *)0x4;
    func_0x0001088dd254();
    unaff_x21 = plVar3;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x28);
    param_3 = (ulong)*(uint *)(param_2 + 3);
    plVar3 = (long *)0x5;
    func_0x0001088dd254();
    unaff_x21 = plVar3;
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)param_2 < 0) {
    param_2 = (long *)plVar7[1];
    if (param_2 == (long *)0x0) goto LAB_1088d14c8;
    plVar4 = (long *)*plVar7;
  }
  else {
    plVar4 = plVar7;
    if ((int)param_2 == 0) goto LAB_1088d14c8;
  }
  param_4 = (long *)&UNK_10f4eabe0;
  func_0x0001088dd2ec();
  func_0x0001088dda0c();
  func_0x0001088dd008();
  plVar3 = plVar4;
  unaff_x21 = plVar4;
LAB_1088d14c8:
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    func_0x0001088dd0bc();
    param_2 = plVar3;
    func_0x0001088ddbc4();
    func_0x0001088dd164();
    unaff_x21 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x58) == 8) {
    func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x50));
    if ((long)param_2 < 0) {
      plVar7 = (long *)*plVar7;
    }
    param_4 = (long *)&UNK_10f4eac05;
    func_0x0001088dd2ec(plVar7);
    func_0x0001088dd008();
    plVar3 = unaff_x19;
    unaff_x21 = unaff_x19;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd348();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x0001088dda00();
    if (*plVar3 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*plVar3 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        param_3 = (ulong)(uint)(iVar5 - iVar8);
        if (iVar5 - iVar8 == 0 || iVar5 < iVar8) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar8);
        param_4 = plVar3;
        func_0x000107c303e4(plVar3,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x21;
}



/* Entry: 1088d1640; end: 1088d1643;  */

void FUN_1088d1640(ulong *param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x20;
  ulong *unaff_x21;
  uint unaff_w23;
  
  func_0x0001088dcdd0();
  if ((param_3 & 1) != 0) {
    func_0x0001088dd5b0();
  }
  func_0x0001088dd020();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b8();
  }
  func_0x0001088dd654();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd560();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd4e4();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088dd6d0();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd4e4();
        unaff_x21[5] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(ulong *)(unaff_x20 + 0x30) != 0) {
    unaff_x21[6] = *(ulong *)(unaff_x20 + 0x30);
  }
  if (*(ulong *)(unaff_x20 + 0x38) != 0) {
    unaff_x21[7] = *(ulong *)(unaff_x20 + 0x38);
  }
  if (*(ulong *)(unaff_x20 + 0x40) != 0) {
    unaff_x21[8] = *(ulong *)(unaff_x20 + 0x40);
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 9) = 1;
  }
  func_0x0001088dcfd8();
  iVar1 = *(int *)(unaff_x20 + 0x58);
  if (iVar1 != 0) {
    if ((int)unaff_x21[0xb] == iVar1) {
      if (iVar1 != 8) goto LAB_1088cc7cc;
    }
    else {
      if ((int)unaff_x21[0xb] != 0) {
        param_1 = unaff_x21;
        FUN_1088d1348();
      }
      *(int *)(unaff_x21 + 0xb) = iVar1;
      if (iVar1 != 8) goto LAB_1088cc7cc;
      func_0x0001088dd3c4();
      unaff_x21[10] = extraout_x8_00;
    }
    param_1 = unaff_x21 + 10;
    func_0x0001088dd9d4();
  }
LAB_1088cc7cc:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001088dcf5c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088d1644; end: 1088d16df;  */

void FUN_1088d1644(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x0001088dcef0();
  func_0x0001088dd608(&PTR_FUN_110a85a08);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  lVar2 = unaff_x21 + 0x18;
  func_0x0001088dd464();
  *(long *)(unaff_x19 + 0x18) = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001088dd408();
    func_0x000107c2a26c();
  }
  *(long *)(unaff_x19 + 0x20) = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x20;
    func_0x0001088dc578();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x0001088dc600();
  }
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1088d16e0; end: 1088d170b;  */

undefined8 FUN_1088d16e0(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d170c(param_1);
  return param_1;
}



/* Entry: 1088d170c; end: 1088d174f;  */

void FUN_1088d170c(void)

{
  long unaff_x19;
  
  func_0x0001088dd2ac();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_1088d1c58();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_1088d1ed4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d1750; end: 1088d1753;  */

undefined8 FUN_1088d1750(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d170c(param_1);
  return param_1;
}



/* Entry: 1088d1754; end: 1088d1767;  */

void FUN_1088d1754(void)

{
  FUN_1088d16e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d1768; end: 1088d1773;  */

undefined ** FUN_1088d1768(void)

{
  return &PTR_DAT_110a86bb8;
}



/* Entry: 1088d1774; end: 1088d185f;  */

void FUN_1088d1774(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x0001088dd058();
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd660();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001088d17d8(unaff_x19[5]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001088d1820(unaff_x19[6]);
    }
  }
  func_0x0001088dd43c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
    *(undefined1 *)*unaff_x19 = 0;
    unaff_x19[1] = 0;
    return;
  }
  *(undefined1 *)unaff_x19 = 0;
  *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
  return;
}



/* Entry: 1088d1860; end: 1088d1927;  */

long * FUN_1088d1860(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x0001088dcfe8();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x0001088dcf7c();
    unaff_x20 = param_1;
  }
  func_0x0001088dd0f4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088d18c4;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088d18c4;
  param_4 = (long *)&UNK_10f4eac26;
  func_0x0001088dd2ec();
  func_0x0001088dcce0();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088d18c4:
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x14);
    param_1 = (long *)0x3;
    func_0x0001088dcfb4();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x30) + 0x14);
    param_1 = (long *)0x4;
    func_0x0001088dcfb4();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088dd348();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088dd474();
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



/* Entry: 1088d1928; end: 1088d19c7;  */

void FUN_1088d1928(long param_1)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  
  func_0x0001088dce1c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd668();
      func_0x0001088dd30c();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001088d19c8(*(undefined8 *)(unaff_x19 + 0x28));
      func_0x0001088dd30c();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001088d19e0(*(undefined8 *)(unaff_x19 + 0x30));
      func_0x0001088dd30c();
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088dd4c8();
  return;
}



/* Entry: 1088d19c8; end: 1088d19f7;  */

void FUN_1088d19c8(void)

{
  FUN_1088d1e1c();
  FUN_1088dcc88();
  return;
}



/* Entry: 1088d19f8; end: 1088d19fb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088d19f8(ulong *param_1,long param_2,ulong *param_3)

{
  undefined1 in_ZR;
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcdd0();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x0001088dd5b0();
    puVar1 = unaff_x22;
  }
  func_0x0001088dd020();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b8();
  }
  func_0x0001088ddc54();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd560();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd4e4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088dd6d0();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar1;
        func_0x0001088dc578();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x0001088d1ad4();
      }
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      func_0x0001088ddc84();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dc600();
        *(ulong **)(unaff_x21 + 0x30) = puVar1;
        param_1 = puVar1;
      }
      else {
        func_0x0001088d1bb8();
      }
    }
  }
  func_0x0001088dcd84();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x0001088dcf5c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088d19fc; end: 1088d1c57;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088d19fc(ulong *param_1,long param_2,ulong *param_3)

{
  undefined1 in_ZR;
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcdd0();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x0001088dd5b0();
    puVar1 = unaff_x22;
  }
  func_0x0001088dd020();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b8();
  }
  func_0x0001088ddc54();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd560();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd4e4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088dd6d0();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar1;
        func_0x0001088dc578();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x0001088d1ad4();
      }
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      func_0x0001088ddc84();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dc600();
        *(ulong **)(unaff_x21 + 0x30) = puVar1;
        param_1 = puVar1;
      }
      else {
        func_0x0001088d1bb8();
      }
    }
  }
  func_0x0001088dcd84();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x0001088dcf5c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088d1c58; end: 1088d1c83;  */

undefined8 FUN_1088d1c58(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d1c84(param_1);
  return param_1;
}



/* Entry: 1088d1c84; end: 1088d1cb3;  */

void FUN_1088d1c84(void)

{
  long unaff_x19;
  
  func_0x0001088dd2ac();
  func_0x0001088dd4fc();
  func_0x0001088dd6fc();
  func_0x0001088dd73c();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_1088c7e0c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d1cb4; end: 1088d1cb7;  */

undefined8 FUN_1088d1cb4(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d1c84(param_1);
  return param_1;
}



/* Entry: 1088d1cb8; end: 1088d1ccb;  */

void FUN_1088d1cb8(void)

{
  FUN_1088d1c58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d1ccc; end: 1088d1cd7;  */

undefined ** FUN_1088d1ccc(void)

{
  return &PTR_DAT_110a86bf8;
}



/* Entry: 1088d1cd8; end: 1088d1e1b;  */

long * FUN_1088d1cd8(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x0001088dcfe8();
  func_0x0001088dd33c(param_1[3]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088d1d10;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d1d10:
      param_4 = (long *)&UNK_10f4eac54;
      func_0x0001088dd2ec();
      func_0x0001088dcd10();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd170();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088d1d44;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d1d44:
      param_4 = (long *)&UNK_10f4eac8c;
      func_0x0001088dd2ec();
      func_0x0001088dcce0();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088d1d7c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d1d7c:
      param_4 = (long *)&UNK_10f4eacbb;
      func_0x0001088dd2ec();
      func_0x0001088dcd24();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x30));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088d1dcc;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088d1dcc;
  param_4 = (long *)&UNK_10f4eaced;
  func_0x0001088dd2ec();
  func_0x0001088dd724();
  func_0x0001088dcf10();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088d1dcc:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x38) + 0x14);
    param_1 = (long *)0x5;
    func_0x0001088dcfb4();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088dd348();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088dd474();
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


