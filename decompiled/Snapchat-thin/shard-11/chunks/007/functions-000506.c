/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088d6580; end: 1088d6593;  */

void FUN_1088d6580(void)

{
  FUN_1088d6514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d6594; end: 1088d659f;  */

undefined ** FUN_1088d6594(void)

{
  return &PTR_DAT_110a87388;
}



/* Entry: 1088d65a0; end: 1088d65f3;  */

void FUN_1088d65a0(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd84c();
  if (in_NG == in_OV) {
    func_0x0001088dda18();
  }
  func_0x0001088dd6ec();
  func_0x0001088dd8c0();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010b5c3b8c(*(undefined8 *)(unaff_x19 + 0x40));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x48) = 0;
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



/* Entry: 1088d65f4; end: 1088d67cf;  */

long * FUN_1088d65f4(long *param_1,long *param_2,ulong param_3,long *param_4)

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
  func_0x0001088dd33c(param_1[6]);
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      unaff_x22 = (long *)*unaff_x22;
      goto LAB_1088d6630;
    }
  }
  else if ((int)param_2 != 0) {
LAB_1088d6630:
    param_4 = (long *)&UNK_10f4eb6a5;
    func_0x0001088dd2ec();
    func_0x0001088dcd10();
    param_1 = unaff_x22;
    unaff_x20 = unaff_x22;
  }
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_2 = *(long **)(unaff_x21 + 0x40);
    func_0x0001088dd790();
    func_0x0001088dcfb4();
    unaff_x20 = param_1;
  }
  iVar3 = *(int *)(unaff_x21 + 0x20);
  while (iVar3 != 0) {
    func_0x0001088dd094();
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x3;
    func_0x0001088dcfb4();
    func_0x0001088ddb2c();
  }
  if (*(int *)(unaff_x21 + 0x48) != 0) {
    func_0x0001088dd130();
    param_2 = param_1;
    func_0x0001088dd99c();
    func_0x0001088dd23c();
    unaff_x20 = param_1;
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x38));
  if ((long)param_2 < 0) {
    plVar2 = plRam0000000000000000;
    if (lRam0000000000000008 == 0) goto LAB_1088d66e4;
  }
  else {
    if ((int)param_2 == 0) goto LAB_1088d66e4;
    plVar2 = (long *)0x0;
  }
  param_4 = (long *)&UNK_10f4eb6ca;
  func_0x0001088dd2ec();
  func_0x0001088dd9f4();
  func_0x0001088dcf10();
  param_1 = plVar2;
  unaff_x20 = plVar2;
LAB_1088d66e4:
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



/* Entry: 1088d67d0; end: 1088d67d3;  */

void FUN_1088d67d0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088ddbf8();
  FUN_1088d688c();
  func_0x0001088dd260();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd74c();
  }
  func_0x0001088dd324(*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd8d0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x40);
    if (param_1 == (ulong *)0x0) {
      func_0x0001088dd6f4();
      *(ulong **)(unaff_x21 + 0x40) = param_1;
    }
    else {
      func_0x00010b5c4808();
    }
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  func_0x0001088dcd84();
  if ((extraout_x8_01 & 1) != 0) {
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



/* Entry: 1088d67d4; end: 1088d688b;  */

void FUN_1088d67d4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088ddbf8();
  FUN_1088d688c();
  func_0x0001088dd260();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd74c();
  }
  func_0x0001088dd324(*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd8d0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x40);
    if (param_1 == (ulong *)0x0) {
      func_0x0001088dd6f4();
      *(ulong **)(unaff_x21 + 0x40) = param_1;
    }
    else {
      func_0x00010b5c4808();
    }
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  func_0x0001088dcd84();
  if ((extraout_x8_01 & 1) != 0) {
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



/* Entry: 1088d688c; end: 1088d689b;  */

void FUN_1088d688c(long *param_1,long param_2)

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



/* Entry: 1088d689c; end: 1088d68bf;  */

undefined8 FUN_1088d689c(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088d68c0; end: 1088d68d3;  */

void FUN_1088d68c0(void)

{
  FUN_1088d689c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d68d4; end: 1088d694f;  */

undefined ** FUN_1088d68d4(void)

{
  return &PTR_DAT_110a873c8;
}



/* Entry: 1088d6950; end: 1088d69a3;  */

void FUN_1088d6950(undefined8 param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001088dcef0();
  func_0x0001088dd608(&PTR_FUN_110a85b48);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088dd88c();
    func_0x0001088dca7c();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  return;
}



/* Entry: 1088d69a4; end: 1088d69cf;  */

undefined8 FUN_1088d69a4(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d69d0(param_1);
  return param_1;
}



/* Entry: 1088d69d0; end: 1088d69eb;  */

void FUN_1088d69d0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b4f2c64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d69ec; end: 1088d69ef;  */

undefined8 FUN_1088d69ec(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d69d0(param_1);
  return param_1;
}



/* Entry: 1088d69f0; end: 1088d6a03;  */

void FUN_1088d69f0(void)

{
  FUN_1088d69a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d6a04; end: 1088d6a0f;  */

undefined ** FUN_1088d6a04(void)

{
  return &PTR_DAT_110a87418;
}



/* Entry: 1088d6a10; end: 1088d6aef;  */

void FUN_1088d6a10(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088dd450();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b4f2cdc(unaff_x19[3]);
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



/* Entry: 1088d6af0; end: 1088d6b07;  */

void FUN_1088d6af0(void)

{
  func_0x00010b4f2dcc();
  FUN_1088dcc88();
  return;
}



/* Entry: 1088d6b08; end: 1088d6b0b;  */

void FUN_1088d6b08(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dce6c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001088dd630();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd624();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x0001088dca7c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      func_0x00010b4f2e6c();
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



/* Entry: 1088d6b0c; end: 1088d6b67;  */

void FUN_1088d6b0c(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dce6c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001088dd630();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd624();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x0001088dca7c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      func_0x00010b4f2e6c();
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



/* Entry: 1088d6b68; end: 1088d6b9b;  */

long FUN_1088d6b68(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b4f2c64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088d6b9c; end: 1088d6baf;  */

void FUN_1088d6b9c(void)

{
  FUN_1088d6b68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d6bb0; end: 1088d6bbb;  */

undefined ** FUN_1088d6bb0(void)

{
  return &PTR_DAT_110a87460;
}



/* Entry: 1088d6bbc; end: 1088d6c9b;  */

void FUN_1088d6bbc(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088dd450();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b4f2cdc(unaff_x19[3]);
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



/* Entry: 1088d6c9c; end: 1088d6c9f;  */

void FUN_1088d6c9c(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dce6c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001088dd630();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd624();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x0001088dca7c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      func_0x00010b4f2e6c();
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



/* Entry: 1088d6ca0; end: 1088d6d03;  */

void FUN_1088d6ca0(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001088dcef0();
  func_0x0001088dd608(&PTR_FUN_110a854b8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  lVar1 = unaff_x21 + 0x18;
  func_0x0001088dd464();
  *(long *)(unaff_x19 + 0x18) = lVar1;
  if ((*(byte *)(unaff_x19 + 0x10) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    func_0x0001088dd408();
    FUN_1088dcab0();
  }
  *(long *)(unaff_x19 + 0x20) = lVar1;
  return;
}



/* Entry: 1088d6d04; end: 1088d6d2f;  */

undefined8 FUN_1088d6d04(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d6d30(param_1);
  return param_1;
}



/* Entry: 1088d6d30; end: 1088d6d53;  */

void FUN_1088d6d30(void)

{
  long unaff_x19;
  
  func_0x0001088dd2ac();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_1088d6fc4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d6d54; end: 1088d6d57;  */

undefined8 FUN_1088d6d54(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d6d30(param_1);
  return param_1;
}



/* Entry: 1088d6d58; end: 1088d6d6b;  */

void FUN_1088d6d58(void)

{
  FUN_1088d6d04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d6d6c; end: 1088d6d77;  */

undefined ** FUN_1088d6d6c(void)

{
  return &PTR_DAT_110a874b0;
}



/* Entry: 1088d6d78; end: 1088d6ecb;  */

void FUN_1088d6d78(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x0001088dd058();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x0001088d6db4(unaff_x19[4]);
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



/* Entry: 1088d6ecc; end: 1088d6ee3;  */

void FUN_1088d6ecc(void)

{
  func_0x0001088d7080();
  FUN_1088dcc88();
  return;
}



/* Entry: 1088d6ee4; end: 1088d6ee7;  */

void FUN_1088d6ee4(ulong *param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
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
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd560();
    if (param_1 == (ulong *)0x0) {
      FUN_1088dcab0();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_1088d6f6c();
    }
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



/* Entry: 1088d6ee8; end: 1088d6f6b;  */

void FUN_1088d6ee8(ulong *param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
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
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd560();
    if (param_1 == (ulong *)0x0) {
      FUN_1088dcab0();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_1088d6f6c();
    }
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



/* Entry: 1088d6f6c; end: 1088d6fc3;  */

void FUN_1088d6f6c(ulong *param_1)

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



/* Entry: 1088d6fc4; end: 1088d6fef;  */

undefined8 FUN_1088d6fc4(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d6ff0(param_1);
  return param_1;
}



/* Entry: 1088d6ff0; end: 1088d700b;  */

void FUN_1088d6ff0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d700c; end: 1088d700f;  */

undefined8 FUN_1088d700c(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d6ff0(param_1);
  return param_1;
}



/* Entry: 1088d7010; end: 1088d7023;  */

void FUN_1088d7010(void)

{
  FUN_1088d6fc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d7024; end: 1088d702f;  */

undefined ** FUN_1088d7024(void)

{
  return &PTR_DAT_110a874f8;
}



/* Entry: 1088d7030; end: 1088d70cb;  */

long * FUN_1088d7030(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dce08();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcd70();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088dd348();
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



/* Entry: 1088d70cc; end: 1088d70cf;  */

void FUN_1088d70cc(ulong *param_1)

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



/* Entry: 1088d70d0; end: 1088d716f;  */

void FUN_1088d70d0(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0001088dd540();
  func_0x0001088dd608(&PTR_FUN_110a85558);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088ddb14();
  FUN_1088d95a8();
  func_0x0001088d95c8(unaff_x19 + 0x30);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x0001088dcb0c();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x0001088dcb58();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
  return;
}



/* Entry: 1088d7170; end: 1088d719b;  */

undefined8 FUN_1088d7170(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d719c(param_1);
  return param_1;
}



/* Entry: 1088d719c; end: 1088d71db;  */

long FUN_1088d719c(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_1088d7660();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1088d7c10();
  }
  __ZdlPv();
  FUN_1088d963c(param_1 + 0x30);
  FUN_1088d95e8(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 1088d71dc; end: 1088d71df;  */

undefined8 FUN_1088d71dc(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d719c(param_1);
  return param_1;
}



/* Entry: 1088d71e0; end: 1088d71f3;  */

void FUN_1088d71e0(void)

{
  FUN_1088d7170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d71f4; end: 1088d71ff;  */

undefined ** FUN_1088d71f4(void)

{
  return &PTR_DAT_110a87540;
}



/* Entry: 1088d7200; end: 1088d72d3;  */

void FUN_1088d7200(void)

{
  char in_NG;
  char in_OV;
  undefined1 uVar1;
  long unaff_x19;
  ulong *puVar2;
  uint unaff_w20;
  
  func_0x0001088dd84c();
  if (in_NG == in_OV) {
    func_0x0001088dda18();
  }
  uVar1 = *(int *)(unaff_x19 + 0x38) == 1;
  if (0 < *(int *)(unaff_x19 + 0x38)) {
    func_0x0001053936e4(unaff_x19 + 0x30);
  }
  func_0x0001088dd904();
  if (!(bool)uVar1) {
    if ((unaff_w20 & 1) != 0) {
      func_0x0001088d7270(*(undefined8 *)(unaff_x19 + 0x48));
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0001088d72a0(*(undefined8 *)(unaff_x19 + 0x50));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 1088d72d4; end: 1088d74d3;  */

long * FUN_1088d72d4(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  if ((int)param_1[0xb] != 0) {
    func_0x0001088dd014();
    param_2 = param_1;
    func_0x0001088dd6e4();
    func_0x0001088dd088();
    param_4 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x20);
  while (iVar3 != 0) {
    func_0x0001088dd1cc();
    func_0x0001088dcff8();
    func_0x0001088ddc6c();
  }
  iVar3 = *(int *)(unaff_x20 + 0x38);
  while (iVar3 != 0) {
    func_0x0001088dd1cc();
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x3;
    func_0x0001088dd2f4();
    func_0x0001088ddc6c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x48) + 0x1c);
    param_1 = (long *)0x4;
    func_0x0001088dd2f4();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x14);
    param_1 = (long *)0x5;
    func_0x0001088dd2f4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x5c) != 0) {
    func_0x0001088dd014();
    param_4 = (long *)0x30;
    func_0x000107c280a8(0x30,param_1);
    func_0x0001088dd088();
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



/* Entry: 1088d74d4; end: 1088d74d7;  */

void FUN_1088d74d4(void)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcd98();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088ddbf8();
  FUN_1088d7590();
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x0001088d75a0();
  func_0x0001088dd654();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      puVar1 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar1 == (ulong *)0x0) {
        puVar1 = unaff_x22;
        func_0x0001088dcb0c();
        *(ulong **)(unaff_x21 + 0x48) = puVar1;
      }
      else {
        FUN_1088d75b0();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088ddc28();
      if (puVar1 == (ulong *)0x0) {
        func_0x0001088dcb58();
        *(ulong **)(unaff_x21 + 0x50) = unaff_x22;
        puVar1 = unaff_x22;
      }
      else {
        FUN_1088d7608();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    *(int *)(unaff_x21 + 0x58) = *(int *)(unaff_x20 + 0x58);
  }
  if (*(int *)(unaff_x20 + 0x5c) != 0) {
    *(int *)(unaff_x21 + 0x5c) = *(int *)(unaff_x20 + 0x5c);
  }
  func_0x0001088dcd84();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088dcf5c();
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088d74d8; end: 1088d758f;  */

void FUN_1088d74d8(void)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcd98();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088ddbf8();
  FUN_1088d7590();
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x0001088d75a0();
  func_0x0001088dd654();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      puVar1 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar1 == (ulong *)0x0) {
        puVar1 = unaff_x22;
        func_0x0001088dcb0c();
        *(ulong **)(unaff_x21 + 0x48) = puVar1;
      }
      else {
        FUN_1088d75b0();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088ddc28();
      if (puVar1 == (ulong *)0x0) {
        func_0x0001088dcb58();
        *(ulong **)(unaff_x21 + 0x50) = unaff_x22;
        puVar1 = unaff_x22;
      }
      else {
        FUN_1088d7608();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    *(int *)(unaff_x21 + 0x58) = *(int *)(unaff_x20 + 0x58);
  }
  if (*(int *)(unaff_x20 + 0x5c) != 0) {
    *(int *)(unaff_x21 + 0x5c) = *(int *)(unaff_x20 + 0x5c);
  }
  func_0x0001088dcd84();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088dcf5c();
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088d7590; end: 1088d75af;  */

void FUN_1088d7590(long *param_1,long param_2)

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



/* Entry: 1088d75b0; end: 1088d7607;  */

void FUN_1088d75b0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088dcd38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b0();
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x18) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd03c();
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



/* Entry: 1088d7608; end: 1088d765f;  */

void FUN_1088d7608(ulong *param_1)

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



/* Entry: 1088d7660; end: 1088d7687;  */

undefined8 FUN_1088d7660(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  return param_1;
}



/* Entry: 1088d7688; end: 1088d768b;  */

undefined8 FUN_1088d7688(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  return param_1;
}



/* Entry: 1088d768c; end: 1088d769f;  */

void FUN_1088d768c(void)

{
  FUN_1088d7660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d76a0; end: 1088d76ab;  */

undefined ** FUN_1088d76a0(void)

{
  return &PTR_DAT_110a87580;
}



/* Entry: 1088d76ac; end: 1088d7747;  */

long * FUN_1088d76ac(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0001088dccf4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088d76f0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088d76f0;
  param_4 = (long *)&UNK_10f4eb6f2;
  func_0x0001088dd2ec();
  func_0x0001088dcd10();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088d76f0:
  if (*(char *)(unaff_x21 + 0x18) == '\x01') {
    func_0x0001088dd130();
    func_0x0001088dd670();
    func_0x0001088dd808();
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



/* Entry: 1088d7748; end: 1088d7797;  */

void FUN_1088d7748(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088dcdac();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
  }
  iVar1 = (int)param_1;
  func_0x0001088ddc10();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dd730();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 1088d7798; end: 1088d779b;  */

void FUN_1088d7798(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088dcd38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b0();
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x18) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd03c();
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



/* Entry: 1088d779c; end: 1088d77e7;  */

void FUN_1088d779c(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x0001088dd70c();
  if (extraout_w8 == 1) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_1088d7d1c();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088d77e8; end: 1088d781b;  */

long FUN_1088d77e8(long param_1)

{
  func_0x0001088dd2fc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1088d779c(param_1);
  }
  return param_1;
}



/* Entry: 1088d781c; end: 1088d781f;  */

long FUN_1088d781c(long param_1)

{
  func_0x0001088dd2fc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1088d779c(param_1);
  }
  return param_1;
}



/* Entry: 1088d7820; end: 1088d7833;  */

void FUN_1088d7820(void)

{
  FUN_1088d77e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d7834; end: 1088d7843;  */

undefined8 FUN_1088d7834(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  return param_1;
}



/* Entry: 1088d7844; end: 1088d7923;  */

void FUN_1088d7844(long param_1)

{
  ulong *puVar1;
  
  FUN_1088d779c();
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



/* Entry: 1088d7924; end: 1088d793b;  */

void FUN_1088d7924(void)

{
  FUN_1088d7e10();
  FUN_1088dcc88();
  return;
}



/* Entry: 1088d793c; end: 1088d79bf;  */

void FUN_1088d793c(ulong *param_1)

{
  int iVar1;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        func_0x0001088ddb4c();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_1088d779c();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x0001088dd898();
        func_0x0001088dcbb4();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
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



/* Entry: 1088d79c0; end: 1088d7a53;  */

void FUN_1088d79c0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088dcd38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd03c();
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



/* Entry: 1088d7a54; end: 1088d7a87;  */

long FUN_1088d7a54(long param_1)

{
  func_0x0001088dd2fc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x0001088d7a08(param_1);
  }
  return param_1;
}



/* Entry: 1088d7a88; end: 1088d7a8b;  */

long FUN_1088d7a88(long param_1)

{
  func_0x0001088dd2fc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x0001088d7a08(param_1);
  }
  return param_1;
}



/* Entry: 1088d7a8c; end: 1088d7a9f;  */

void FUN_1088d7a8c(void)

{
  FUN_1088d7a54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d7aa0; end: 1088d7aab;  */

undefined ** FUN_1088d7aa0(void)

{
  return &PTR_DAT_110a87610;
}



/* Entry: 1088d7aac; end: 1088d7b8b;  */

void FUN_1088d7aac(long param_1)

{
  ulong *puVar1;
  
  func_0x0001088d7a08();
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



/* Entry: 1088d7b8c; end: 1088d7c0f;  */

void FUN_1088d7b8c(ulong *param_1)

{
  int iVar1;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        func_0x0001088ddb4c();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        func_0x0001088d7a08();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x0001088dd898();
        func_0x0001088dcbb4();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
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



/* Entry: 1088d7c10; end: 1088d7c3b;  */

undefined8 FUN_1088d7c10(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d7c3c(param_1);
  return param_1;
}



/* Entry: 1088d7c3c; end: 1088d7c57;  */

void FUN_1088d7c3c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d7c58; end: 1088d7c5b;  */

undefined8 FUN_1088d7c58(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d7c3c(param_1);
  return param_1;
}



/* Entry: 1088d7c5c; end: 1088d7c6f;  */

void FUN_1088d7c5c(void)

{
  FUN_1088d7c10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d7c70; end: 1088d7c7b;  */

undefined ** FUN_1088d7c70(void)

{
  return &PTR_DAT_110a87658;
}



/* Entry: 1088d7c7c; end: 1088d7d17;  */

long * FUN_1088d7c7c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dce08();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcd70();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088dd348();
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



/* Entry: 1088d7d18; end: 1088d7d1b;  */

void FUN_1088d7d18(ulong *param_1)

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



/* Entry: 1088d7d1c; end: 1088d7d43;  */

undefined8 FUN_1088d7d1c(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  return param_1;
}



/* Entry: 1088d7d44; end: 1088d7d57;  */

void FUN_1088d7d44(void)

{
  FUN_1088d7d1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d7d58; end: 1088d7d63;  */

undefined ** FUN_1088d7d58(void)

{
  return &PTR_DAT_110a876a8;
}



/* Entry: 1088d7d64; end: 1088d7d8f;  */

void FUN_1088d7d64(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd030();
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



/* Entry: 1088d7d90; end: 1088d7e0f;  */

long * FUN_1088d7d90(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  plVar2 = param_2;
  func_0x0001088dcdf4();
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088d7ddc;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_1088d7ddc;
  param_4 = (long *)&UNK_10f4eb71e;
  func_0x0001088dd2ec();
  func_0x0001088dd198();
  param_1 = unaff_x22;
  param_2 = unaff_x22;
LAB_1088d7ddc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x0001088dd348();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088ddc90();
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



/* Entry: 1088d7e10; end: 1088d7e67;  */

void FUN_1088d7e10(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088dcdac();
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
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 1088d7e68; end: 1088d7e6b;  */

void FUN_1088d7e68(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088dcd38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd03c();
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



/* Entry: 1088d7e6c; end: 1088d7ebb;  */

void FUN_1088d7e6c(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  
  if (*(int *)(param_1 + 0x34) == 4) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_1088d8154();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 1088d7ebc; end: 1088d7efb;  */

long FUN_1088d7ebc(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_1088d7e6c(param_1);
  }
  return param_1;
}



/* Entry: 1088d7efc; end: 1088d7f0f;  */

void FUN_1088d7efc(void)

{
  FUN_1088d7ebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d7f10; end: 1088d7f1f;  */

undefined8 FUN_1088d7f10(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  return param_1;
}



/* Entry: 1088d7f20; end: 1088d7f5b;  */

void FUN_1088d7f20(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd030();
  func_0x0001088dd5a8();
  func_0x0001088dd504();
  FUN_1088d7e6c();
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



/* Entry: 1088d7f5c; end: 1088d805b;  */

long * FUN_1088d7f5c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x0001088dccf4();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088d7f8c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d7f8c:
      param_4 = (long *)&UNK_10f4eb74a;
      func_0x0001088dd2ec();
      func_0x0001088dcd10();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd0f4();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088d7fc0;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d7fc0:
      param_4 = (long *)&UNK_10f4eb76e;
      func_0x0001088dd2ec();
      func_0x0001088dcce0();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd170();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088d8008;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088d8008;
  param_4 = (long *)&UNK_10f4eb798;
  func_0x0001088dd2ec();
  func_0x0001088dcd24();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088d8008:
  if (*(int *)(unaff_x21 + 0x34) == 4) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x1c);
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



/* Entry: 1088d805c; end: 1088d80fb;  */

void FUN_1088d805c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long unaff_x19;
  
  func_0x0001088dcdac();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  func_0x0001088dd148();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  func_0x0001088dd0c8();
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  if (*(int *)(unaff_x19 + 0x34) == 4) {
    FUN_1088d8264(*(undefined8 *)(unaff_x19 + 0x28));
    func_0x0001088dcca4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088ddaf0();
  return;
}



/* Entry: 1088d80fc; end: 1088d80ff;  */

void FUN_1088d80fc(ulong *param_1,long param_2,ulong *param_3)

{
  int iVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088dcdd0();
  puVar2 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x0001088dd5b0();
    puVar2 = unaff_x22;
  }
  func_0x0001088dd324(*(undefined8 *)(unaff_x20 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x0001088dd318();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  func_0x0001088dd020();
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b8();
  }
  func_0x0001088dd0d8();
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd6a0();
  }
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x34) == iVar1) {
      if (iVar1 == 4) {
        func_0x0001088dd6d0();
        FUN_1088d8100();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x34) != 0) {
        param_1 = unaff_x21;
        FUN_1088d7e6c();
      }
      *(int *)((long)unaff_x21 + 0x34) = iVar1;
      if (iVar1 == 4) {
        func_0x0001088dcc00();
        unaff_x21[5] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
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


