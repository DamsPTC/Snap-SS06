/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004e5f7c; end: 004e6027;  */

void FUN_004e5f7c(ulong *param_1)

{
  uint uVar1;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  uVar1 = *(uint *)(unaff_x20 + 0x2c);
  if (uVar1 != 0) {
    if (*(uint *)(unaff_x21 + 0x2c) != uVar1) {
      *(uint *)(unaff_x21 + 0x2c) = uVar1;
    }
    if ((uVar1 & 0xfffffffc) == 4) {
      *(undefined4 *)(unaff_x21 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e6028; end: 004e60e3;  */

void FUN_004e6028(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004ec6ec();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004ecba0();
      if (param_1 == (ulong *)0x0) {
        func_0x004ec9f4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004ecc0c();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004ec4d0();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x004d8ba4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x004ec4d0();
        *(ulong **)(unaff_x21 + 0x28) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x004d8ba4();
      }
    }
  }
  func_0x004ec714();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004ec7b8();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004e60e4; end: 004e6147;  */

void FUN_004e60e4(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e6148; end: 004e61ab;  */

void FUN_004e6148(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x004ec6ec();
  if ((unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  func_0x004eca90();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x004ec9f4();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_004d9d18();
    }
  }
  func_0x004ec714();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e61ac; end: 004e6203;  */

void FUN_004e61ac(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e6204; end: 004e628f;  */

void FUN_004e6204(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x004ec6ec();
  if ((unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  func_0x004ecc00();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x004ecba0();
      if (param_1 == (ulong *)0x0) {
        func_0x004ec9f4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x004ecc0c();
      if (param_1 == (ulong *)0x0) {
        func_0x004ec9f4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x004ec714();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004ec7b8();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004e6290; end: 004e62f3;  */

void FUN_004e6290(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e62f4; end: 004e6373;  */

void FUN_004e62f4(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x004ec6ec();
  if ((unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  func_0x004ecc00();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x004ecba0();
      if (param_1 == (ulong *)0x0) {
        func_0x004ec9f4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x004ecc0c();
      if (param_1 == (ulong *)0x0) {
        func_0x004ec9f4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
  }
  func_0x004ec714();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004ec7b8();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004e6374; end: 004e6493;  */

void FUN_004e6374(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e6494; end: 004e64d7;  */

void FUN_004e6494(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e64d8; end: 004e652f;  */

void FUN_004e64d8(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e6530; end: 004e653b;  */

void FUN_004e6530(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e653c; end: 004e6593;  */

void FUN_004e653c(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e6594; end: 004e65ab;  */

void FUN_004e6594(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e65ac; end: 004e66bf;  */

void FUN_004e65ac(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x004ec6ec();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_004e66a4;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_004ea850();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      func_0x004ecd18();
      FUN_004eab30();
      goto LAB_004e66a4;
    }
    func_0x004ec5d8();
    param_1 = unaff_x22;
  }
  else if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x004ecd18();
      func_0x004eaaec();
      goto LAB_004e66a4;
    }
    FUN_004ec57c();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 1) goto LAB_004e66a4;
    if (iVar2 == 1) {
      func_0x004ecd18();
      FUN_004eaa80();
      goto LAB_004e66a4;
    }
    FUN_004ec500();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_004e66a4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e66c0; end: 004e670f;  */

void FUN_004e66c0(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e6710; end: 004e6773;  */

void FUN_004e6710(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x004ec6ec();
  if ((unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  func_0x004eca90();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x004ec9f4();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_004d9d18();
    }
  }
  func_0x004ec714();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e6774; end: 004e6797;  */

undefined8 FUN_004e6774(undefined8 param_1)

{
  func_0x004ec990();
  return param_1;
}



/* Entry: 004e6798; end: 004e67ab;  */

void FUN_004e6798(void)

{
  FUN_004e6774();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e67ac; end: 004e6827;  */

undefined ** FUN_004e67ac(void)

{
  return &PTR_DAT_009f41c0;
}



/* Entry: 004e6828; end: 004e684b;  */

undefined8 FUN_004e6828(undefined8 param_1)

{
  func_0x004ec990();
  return param_1;
}



/* Entry: 004e684c; end: 004e685f;  */

void FUN_004e684c(void)

{
  FUN_004e6828();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e6860; end: 004e68db;  */

undefined ** FUN_004e6860(void)

{
  return &PTR_DAT_009f4210;
}



/* Entry: 004e68dc; end: 004e690f;  */

long FUN_004e68dc(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e6910; end: 004e6923;  */

void FUN_004e6910(void)

{
  FUN_004e68dc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e6924; end: 004e692f;  */

undefined ** FUN_004e6924(void)

{
  return &PTR_DAT_009f4268;
}



/* Entry: 004e6930; end: 004e69ff;  */

void FUN_004e6930(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec9fc();
  }
  func_0x004eca84();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004e6a00; end: 004e6a03;  */

void FUN_004e6a00(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e6a04; end: 004e6a37;  */

long FUN_004e6a04(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e6a38; end: 004e6a4b;  */

void FUN_004e6a38(void)

{
  FUN_004e6a04();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e6a4c; end: 004e6a57;  */

undefined ** FUN_004e6a4c(void)

{
  return &PTR_DAT_009f42b8;
}



/* Entry: 004e6a58; end: 004e6b27;  */

void FUN_004e6a58(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec9fc();
  }
  func_0x004eca84();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004e6b28; end: 004e6b2b;  */

void FUN_004e6b28(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e6b2c; end: 004e6b5f;  */

long FUN_004e6b2c(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e6b60; end: 004e6b73;  */

void FUN_004e6b60(void)

{
  FUN_004e6b2c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e6b74; end: 004e6b7f;  */

undefined ** FUN_004e6b74(void)

{
  return &PTR_DAT_009f4308;
}



/* Entry: 004e6b80; end: 004e6bb3;  */

void FUN_004e6b80(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec9fc();
  }
  func_0x004ecd28();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004e6bb4; end: 004e6c27;  */

long * FUN_004e6bb4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004ec6d8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec658();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x004ec774();
    func_0x004eca68();
    func_0x004ec88c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec9c4();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004e6c28; end: 004e6c83;  */

void FUN_004e6c28(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004eca04();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x004ec94c();
    func_0x004eccf4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004ecd58();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004e6c84; end: 004e6c87;  */

void FUN_004e6c84(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e6c88; end: 004e6cbb;  */

long FUN_004e6c88(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e6cbc; end: 004e6ccf;  */

void FUN_004e6cbc(void)

{
  FUN_004e6c88();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e6cd0; end: 004e6cdb;  */

undefined ** FUN_004e6cd0(void)

{
  return &PTR_DAT_009f4358;
}



/* Entry: 004e6cdc; end: 004e6d0f;  */

void FUN_004e6cdc(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec9fc();
  }
  func_0x004ecbf0();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004e6d10; end: 004e6d7b;  */

long * FUN_004e6d10(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004ec6d8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec658();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x004ec774();
    func_0x004ec930();
    func_0x004ec880();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec9c4();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004e6d7c; end: 004e6dd3;  */

void FUN_004e6d7c(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004eca04();
    param_1 = param_1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x004ec8f0();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004ecd58();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004e6dd4; end: 004e6dd7;  */

void FUN_004e6dd4(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e6dd8; end: 004e6e0b;  */

long FUN_004e6dd8(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e6e0c; end: 004e6e1f;  */

void FUN_004e6e0c(void)

{
  FUN_004e6dd8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e6e20; end: 004e6e2b;  */

undefined ** FUN_004e6e20(void)

{
  return &PTR_DAT_009f43a8;
}



/* Entry: 004e6e2c; end: 004e6efb;  */

void FUN_004e6e2c(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec9fc();
  }
  func_0x004eca84();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004e6efc; end: 004e6eff;  */

void FUN_004e6efc(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e6f00; end: 004e6f23;  */

undefined8 FUN_004e6f00(undefined8 param_1)

{
  func_0x004ec990();
  return param_1;
}



/* Entry: 004e6f24; end: 004e6f37;  */

void FUN_004e6f24(void)

{
  FUN_004e6f00();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e6f38; end: 004e6f57;  */

undefined ** FUN_004e6f38(void)

{
  return &PTR_DAT_009f43f0;
}



/* Entry: 004e6f58; end: 004e6fbf;  */

long * FUN_004e6f58(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004ec6d8();
  if (extraout_w8 == 1) {
    func_0x004ec774();
    func_0x004ecb68();
    func_0x004ec898();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004ec9c4();
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
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 004e6fc0; end: 004e6fef;  */

long FUN_004e6fc0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
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



/* Entry: 004e6ff0; end: 004e7013;  */

undefined8 FUN_004e6ff0(undefined8 param_1)

{
  func_0x004ec990();
  return param_1;
}



/* Entry: 004e7014; end: 004e7027;  */

void FUN_004e7014(void)

{
  FUN_004e6ff0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e7028; end: 004e7047;  */

undefined ** FUN_004e7028(void)

{
  return &PTR_DAT_009f4440;
}



/* Entry: 004e7048; end: 004e70af;  */

long * FUN_004e7048(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004ec6d8();
  if (extraout_w8 == 1) {
    func_0x004ec774();
    func_0x004ecb68();
    func_0x004ec898();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004ec9c4();
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
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 004e70b0; end: 004e70df;  */

long FUN_004e70b0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
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



/* Entry: 004e70e0; end: 004e7103;  */

undefined8 FUN_004e70e0(undefined8 param_1)

{
  func_0x004ec990();
  return param_1;
}



/* Entry: 004e7104; end: 004e7117;  */

void FUN_004e7104(void)

{
  FUN_004e70e0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e7118; end: 004e7193;  */

undefined ** FUN_004e7118(void)

{
  return &PTR_DAT_009f4488;
}



/* Entry: 004e7194; end: 004e71c7;  */

long FUN_004e7194(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e71c8; end: 004e71db;  */

void FUN_004e71c8(void)

{
  FUN_004e7194();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e71dc; end: 004e71e7;  */

undefined ** FUN_004e71dc(void)

{
  return &PTR_DAT_009f44d8;
}



/* Entry: 004e71e8; end: 004e721b;  */

void FUN_004e71e8(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec9fc();
  }
  func_0x004ecd28();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004e721c; end: 004e728f;  */

long * FUN_004e721c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004ec6d8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec658();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x004ec774();
    func_0x004eca68();
    func_0x004ec88c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec9c4();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004e7290; end: 004e72eb;  */

void FUN_004e7290(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004eca04();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x004ec94c();
    func_0x004eccf4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004ecd58();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004e72ec; end: 004e72ef;  */

void FUN_004e72ec(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e72f0; end: 004e7323;  */

long FUN_004e72f0(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e7324; end: 004e7327;  */

long FUN_004e7324(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e7328; end: 004e733b;  */

void FUN_004e7328(void)

{
  FUN_004e72f0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e733c; end: 004e7347;  */

undefined ** FUN_004e733c(void)

{
  return &PTR_DAT_009f4530;
}



/* Entry: 004e7348; end: 004e737b;  */

void FUN_004e7348(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec9fc();
  }
  func_0x004ecbf0();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004e737c; end: 004e73e7;  */

long * FUN_004e737c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004ec6d8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec658();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x004ec774();
    func_0x004ec930();
    func_0x004ec880();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec9c4();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004e73e8; end: 004e743f;  */

void FUN_004e73e8(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004eca04();
    param_1 = param_1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x004ec8f0();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004ecd58();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004e7440; end: 004e7443;  */

void FUN_004e7440(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e7444; end: 004e74a7;  */

void FUN_004e7444(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e74a8; end: 004e74b3;  */

void FUN_004e74a8(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e74b4; end: 004e74d7;  */

undefined8 FUN_004e74b4(undefined8 param_1)

{
  func_0x004ec990();
  return param_1;
}



/* Entry: 004e74d8; end: 004e74db;  */

undefined8 FUN_004e74d8(undefined8 param_1)

{
  func_0x004ec990();
  return param_1;
}



/* Entry: 004e74dc; end: 004e74ef;  */

void FUN_004e74dc(void)

{
  FUN_004e74b4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e74f0; end: 004e756b;  */

undefined ** FUN_004e74f0(void)

{
  return &PTR_DAT_009f4588;
}



/* Entry: 004e756c; end: 004e7717;  */

void FUN_004e756c(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_004e76a0;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_004e8624();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_004e76a0;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_004e9c54();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_004e76a0;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_004ea180();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_004e76a0;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_004e9224();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_004e76a0;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_00512598();
    }
    break;
  default:
    goto LAB_004e76a0;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_004e76a0;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_004e8a6c();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_004e76a0;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_004e95f4();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_004e76a0;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_004e72f0();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_004e76a0;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_004e74b4();
    }
  }
  __ZdlPv();
LAB_004e76a0:
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 004e7718; end: 004e781f;  */

void FUN_004e7718(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *unaff_x19;
  
  lVar2 = param_3;
  func_0x004eca78();
  puVar1 = (undefined8 *)(param_1 + 8);
  *puVar1 = param_2;
  *unaff_x19 = &PTR_FUN_009f3f08;
  if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
    func_0x004ec780();
  }
  func_0x004ecb1c();
  FUN_004eb1e8();
  uVar3 = *(undefined4 *)(param_3 + 0x48);
  *(undefined4 *)(unaff_x19 + 9) = uVar3;
  if ((*(byte *)(unaff_x19 + 2) & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    func_0x004ecae4();
    uVar3 = *(undefined4 *)(unaff_x19 + 9);
  }
  unaff_x19[6] = puVar1;
  unaff_x19[7] = *(undefined8 *)(param_3 + 0x38);
  switch(uVar3) {
  case 3:
    func_0x004ecbac();
    func_0x004ec024();
    break;
  case 4:
    func_0x004ecbac();
    FUN_004ec130();
    break;
  case 5:
    func_0x004ecbac();
    FUN_004ec1e4();
    break;
  case 6:
    func_0x004ecbac();
    func_0x004ec0a4();
    break;
  case 7:
    func_0x004ecbac();
    FUN_004ec240();
    break;
  default:
    goto LAB_004ec73c;
  case 9:
    func_0x004ecbac();
    FUN_004ec27c();
    break;
  case 0xb:
    func_0x004ecbac();
    func_0x004ec2cc();
    break;
  case 0xc:
    func_0x004ecbac();
    func_0x004ec328();
    break;
  case 0xd:
    func_0x004ecbac();
    FUN_004ec384();
  }
  unaff_x19[8] = puVar1;
LAB_004ec73c:
  return;
}



/* Entry: 004e7820; end: 004e784b;  */

undefined8 FUN_004e7820(undefined8 param_1)

{
  func_0x004ec990();
  FUN_004e784c(param_1);
  return param_1;
}



/* Entry: 004e784c; end: 004e788b;  */

long * FUN_004e784c(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_004e756c(param_1);
  }
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    FUN_0054cf94(plVar1);
  }
  return plVar1;
}



/* Entry: 004e788c; end: 004e788f;  */

undefined8 FUN_004e788c(undefined8 param_1)

{
  func_0x004ec990();
  FUN_004e784c(param_1);
  return param_1;
}



/* Entry: 004e7890; end: 004e78a3;  */

void FUN_004e7890(void)

{
  FUN_004e7820();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e78a4; end: 004e78bf;  */

long FUN_004e78a4(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_004e35ac();
  }
  __ZdlPv();
  FUN_004eb284(param_1 + 0x30);
  FUN_004e4358(param_1 + 0x18);
  return param_1;
}



/* Entry: 004e78c0; end: 004e7907;  */

void FUN_004e78c0(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x004ecc18();
  FUN_004ebfd4();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x004ecd7c();
  }
  unaff_x19[7] = 0;
  FUN_004e756c();
  func_0x004eca84();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004e7908; end: 004e79ff;  */

long * FUN_004e7908(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar4;
  int iVar5;
  
  func_0x004ec6d8();
  if ((extraout_x8 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x30);
    func_0x004ec690();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x004ec774();
    unaff_w21 = (int)*(undefined8 *)(unaff_x20 + 0x38);
    param_2 = param_1;
    func_0x004eca68();
    func_0x004ec880();
    param_4 = param_1;
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x48);
  if (*(uint *)(unaff_x20 + 0x48) - 3 < 5) {
    param_2 = *(long **)(unaff_x20 + 0x40);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x004ec988();
    param_4 = plVar2;
  }
  func_0x004ecbc4();
  while (unaff_w22 != unaff_w21) {
    func_0x004ec758();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x004ec988(8);
    func_0x004ecd00();
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x48);
  uVar1 = *(uint *)(unaff_x20 + 0x48) - 9;
  if ((uVar1 < 5) && ((0x1dU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) +
                              *(long *)(&UNK_0080c3d0 + (ulong)uVar1 * 8));
    func_0x004ec988();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec9c4();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004e7a00; end: 004e7b0b;  */

void FUN_004e7a00(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x004ec66c();
  while (unaff_x22 != 0) {
    FUN_004dff90(*unaff_x21);
    func_0x004ecb7c();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x004ecd84();
    func_0x004eca54();
  }
  func_0x004ecc4c(*(undefined8 *)(unaff_x19 + 0x38));
  switch(*(undefined4 *)(unaff_x19 + 0x48)) {
  case 3:
    func_0x004e5cd4(*(undefined8 *)(unaff_x19 + 0x40));
    goto LAB_004e7ae4;
  case 4:
    FUN_004e9df0(*(undefined8 *)(unaff_x19 + 0x40));
    break;
  case 5:
    func_0x004ea258(*(undefined8 *)(unaff_x19 + 0x40));
    break;
  case 6:
    func_0x004e5cf0(*(undefined8 *)(unaff_x19 + 0x40));
    goto LAB_004e7ae4;
  case 7:
    FUN_004e7b0c(*(undefined8 *)(unaff_x19 + 0x40));
  default:
    goto LAB_004e7ae4;
  case 9:
    func_0x004e8af0(*(undefined8 *)(unaff_x19 + 0x40));
    break;
  case 0xb:
    func_0x004e96cc(*(undefined8 *)(unaff_x19 + 0x40));
    break;
  case 0xc:
    FUN_004e73e8(*(undefined8 *)(unaff_x19 + 0x40));
    break;
  case 0xd:
    func_0x004e753c(*(undefined8 *)(unaff_x19 + 0x40));
  }
  func_0x004ec6a0();
  func_0x004ecde0();
LAB_004e7ae4:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004ecd58();
  }
  func_0x004ecb34();
  return;
}



/* Entry: 004e7b0c; end: 004e7b27;  */

long FUN_004e7b0c(long param_1)

{
  long extraout_x8;
  
  func_0x005127dc();
  func_0x004ec6a0();
  return param_1 + extraout_x8;
}



/* Entry: 004e7b28; end: 004e7b2b;  */

void FUN_004e7b28(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x004ec6ec();
  if ((unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  func_0x004ecd70();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[6];
    if (param_1 == (ulong *)0x0) {
      func_0x004ec9f4();
      unaff_x21[6] = (ulong)param_1;
    }
    else {
      FUN_004d9d18();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x38) != 0) {
    unaff_x21[7] = *(ulong *)(unaff_x20 + 0x38);
  }
  func_0x004ec82c();
  iVar1 = *(int *)(unaff_x20 + 0x48);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[9];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_004e756c();
      }
      *(int *)(unaff_x21 + 9) = iVar1;
    }
    switch(iVar1) {
    case 3:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        func_0x004e5d0c();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      func_0x004ec024();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        func_0x004e7d98();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      FUN_004ec130();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        FUN_004e7e34();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      FUN_004ec1e4();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        func_0x004e5ee0();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      func_0x004ec0a4();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        FUN_005128ec();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      FUN_004ec240();
      break;
    default:
      goto LAB_004e7d7c;
    case 9:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        func_0x004ecce8();
        FUN_004e7e8c();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      FUN_004ec27c();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        FUN_004e7e98();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      func_0x004ec2cc();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        FUN_004e7444();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      func_0x004ec328();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        func_0x004ecce8();
        FUN_004e74a8();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      FUN_004ec384();
    }
    unaff_x21[8] = (ulong)param_1;
  }
LAB_004e7d7c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e7b2c; end: 004e7e33;  */

void FUN_004e7b2c(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x004ec6ec();
  if ((unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  func_0x004ecd70();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[6];
    if (param_1 == (ulong *)0x0) {
      func_0x004ec9f4();
      unaff_x21[6] = (ulong)param_1;
    }
    else {
      FUN_004d9d18();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x38) != 0) {
    unaff_x21[7] = *(ulong *)(unaff_x20 + 0x38);
  }
  func_0x004ec82c();
  iVar1 = *(int *)(unaff_x20 + 0x48);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[9];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_004e756c();
      }
      *(int *)(unaff_x21 + 9) = iVar1;
    }
    switch(iVar1) {
    case 3:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        func_0x004e5d0c();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      func_0x004ec024();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        func_0x004e7d98();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      FUN_004ec130();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        FUN_004e7e34();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      FUN_004ec1e4();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        func_0x004e5ee0();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      func_0x004ec0a4();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        FUN_005128ec();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      FUN_004ec240();
      break;
    default:
      goto LAB_004e7d7c;
    case 9:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        func_0x004ecce8();
        FUN_004e7e8c();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      FUN_004ec27c();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        FUN_004e7e98();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      func_0x004ec2cc();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        FUN_004e7444();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      func_0x004ec328();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x004ec798();
        func_0x004ecce8();
        FUN_004e74a8();
        goto LAB_004e7d7c;
      }
      func_0x004ec9dc();
      FUN_004ec384();
    }
    unaff_x21[8] = (ulong)param_1;
  }
LAB_004e7d7c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004e7e34; end: 004e7e8b;  */

void FUN_004e7e34(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}


