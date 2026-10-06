/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5b4478; end: 10b5b44a3;  */

undefined8 FUN_10b5b4478(undefined8 param_1)

{
  func_0x00010b5b892c();
  func_0x00010b5b8c84();
  func_0x00010b5b8bcc();
  return param_1;
}



/* Entry: 10b5b44a4; end: 10b5b44a7;  */

undefined8 FUN_10b5b44a4(undefined8 param_1)

{
  func_0x00010b5b892c();
  func_0x00010b5b8c84();
  func_0x00010b5b8bcc();
  return param_1;
}



/* Entry: 10b5b44a8; end: 10b5b44bb;  */

void FUN_10b5b44a8(void)

{
  FUN_10b5b4478();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b44bc; end: 10b5b44c7;  */

undefined ** FUN_10b5b44bc(void)

{
  return &PTR_DAT_110d17468;
}



/* Entry: 10b5b44c8; end: 10b5b4607;  */

void FUN_10b5b44c8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5b8abc();
  func_0x00010b5b8c74();
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



/* Entry: 10b5b4608; end: 10b5b460b;  */

void FUN_10b5b4608(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5b8988();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    func_0x00010b5b8c7c();
  }
  func_0x00010b5b89fc(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    func_0x00010b5b8c6c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8ad4();
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



/* Entry: 10b5b460c; end: 10b5b4677;  */

void FUN_10b5b460c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5b8988();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    func_0x00010b5b8c7c();
  }
  func_0x00010b5b89fc(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    func_0x00010b5b8c6c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8ad4();
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



/* Entry: 10b5b4678; end: 10b5b46a3;  */

undefined8 FUN_10b5b4678(undefined8 param_1)

{
  func_0x00010b5b892c();
  func_0x00010b5b8c84();
  func_0x00010b5b8bcc();
  return param_1;
}



/* Entry: 10b5b46a4; end: 10b5b46a7;  */

undefined8 FUN_10b5b46a4(undefined8 param_1)

{
  func_0x00010b5b892c();
  func_0x00010b5b8c84();
  func_0x00010b5b8bcc();
  return param_1;
}



/* Entry: 10b5b46a8; end: 10b5b46bb;  */

void FUN_10b5b46a8(void)

{
  FUN_10b5b4678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b46bc; end: 10b5b46c7;  */

undefined ** FUN_10b5b46bc(void)

{
  return &PTR_DAT_110d174c0;
}



/* Entry: 10b5b46c8; end: 10b5b46ff;  */

void FUN_10b5b46c8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5b8abc();
  func_0x00010b5b8c74();
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



/* Entry: 10b5b4700; end: 10b5b4803;  */

long * FUN_10b5b4700(long *param_1,long *param_2,ulong param_3,long *param_4)

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
  
  func_0x00010b5b89a0();
  func_0x00010b5b8a68(param_1[2]);
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b5b4738;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b5b4738:
      param_4 = (long *)&UNK_10f77e0e0;
      func_0x00010b5b89c0();
      func_0x00010b5b8cd0();
      func_0x00010b5b885c();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b5b87bc();
    param_2 = param_1;
    func_0x00010b5b89e8();
    func_0x00010b5b8a88();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5b87bc();
    param_2 = param_1;
    func_0x00010b5b8ba8();
    func_0x00010b5b87d4();
    unaff_x21 = param_1;
  }
  func_0x00010b5b8a68(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5b47d0;
  }
  else if ((int)param_2 == 0) goto LAB_10b5b47d0;
  param_4 = (long *)&UNK_10f77e12d;
  func_0x00010b5b89c0();
  func_0x00010b5b885c();
  param_1 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_10b5b47d0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b5b897c();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5b8c1c();
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



/* Entry: 10b5b4804; end: 10b5b489f;  */

long FUN_10b5b4804(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010b5b8a08(*(undefined8 *)(param_1 + 0x10));
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
  func_0x00010b5b8a08(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5b8a94();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010b5b8c04(0xfffffff7);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x00010b5b8b64();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5b8d14();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5b48a0; end: 10b5b48a3;  */

void FUN_10b5b48a0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5b8988();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    func_0x00010b5b8c7c();
  }
  func_0x00010b5b89fc(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    func_0x00010b5b8c6c();
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x19 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8ad4();
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



/* Entry: 10b5b48a4; end: 10b5b4927;  */

void FUN_10b5b48a4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5b8988();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    func_0x00010b5b8c7c();
  }
  func_0x00010b5b89fc(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    func_0x00010b5b8c6c();
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x19 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8ad4();
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



/* Entry: 10b5b4928; end: 10b5b495f;  */

long FUN_10b5b4928(long param_1)

{
  func_0x00010b5b892c();
  func_0x00010b5b8bcc();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5b4678();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5b4960; end: 10b5b4963;  */

long FUN_10b5b4960(long param_1)

{
  func_0x00010b5b892c();
  func_0x00010b5b8bcc();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5b4678();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5b4964; end: 10b5b4977;  */

void FUN_10b5b4964(void)

{
  FUN_10b5b4928();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b4978; end: 10b5b4983;  */

undefined ** FUN_10b5b4978(void)

{
  return &PTR_DAT_110d17530;
}



/* Entry: 10b5b4984; end: 10b5b49c7;  */

void FUN_10b5b4984(ulong *param_1)

{
  ulong extraout_x8;
  
  func_0x000107c3025c(param_1 + 3);
  if ((param_1[2] & 1) != 0) {
    FUN_10b5b46c8(param_1[4]);
  }
  func_0x00010b5b8cf0();
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



/* Entry: 10b5b49c8; end: 10b5b4a7f;  */

long * FUN_10b5b49c8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  int iVar5;
  long *unaff_x22;
  int iVar6;
  
  plVar2 = param_2;
  plVar4 = param_3;
  func_0x00010b5b8a68(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5b4a28;
    plVar1 = (long *)*unaff_x22;
  }
  else {
    plVar1 = unaff_x22;
    if ((int)plVar2 == 0) goto LAB_10b5b4a28;
  }
  func_0x00010b5b89c0();
  func_0x00010b5b8cd0();
  func_0x000107c280a0();
  plVar4 = unaff_x22;
  param_2 = plVar1;
LAB_10b5b4a28:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x2c);
    param_2 = (long *)0x2;
    func_0x00010b5b8924();
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b5b897c();
  if ((long)plVar4 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar5 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar5);
  }
  _memcpy(param_2,lVar3,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 10b5b4a80; end: 10b5b4afb;  */

void FUN_10b5b4a80(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010b5b8a08(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5b4804(*(undefined8 *)(param_1 + 0x20));
    func_0x00010b5b8798();
    func_0x00010b5b8b48();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5b8d14();
  }
  func_0x00010b5b8cfc();
  return;
}



/* Entry: 10b5b4afc; end: 10b5b4aff;  */

void FUN_10b5b4afc(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5b8934();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x00010b5b89fc(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010b5b89f0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      FUN_10b5b7fb4();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_10b5b48a4();
    }
  }
  func_0x00010b5b8aa0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8944();
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



/* Entry: 10b5b4b00; end: 10b5b4b9b;  */

void FUN_10b5b4b00(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5b8934();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x00010b5b89fc(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010b5b89f0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      FUN_10b5b7fb4();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_10b5b48a4();
    }
  }
  func_0x00010b5b8aa0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8944();
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



/* Entry: 10b5b4b9c; end: 10b5b4d83;  */

void FUN_10b5b4b9c(long param_1)

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
  
  switch(*(undefined4 *)(param_1 + 0xb0)) {
  case 0x1a:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5b8970();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_10b5b4cb4;
    if (*(long *)(param_1 + 0xa0) != 0) {
      FUN_10b5b6924();
    }
    break;
  case 0x1b:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5b8970();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b5b4cb4;
    if (*(long *)(param_1 + 0xa0) != 0) {
      FUN_10b5b6be4();
    }
    break;
  case 0x1c:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5b8970();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10b5b4cb4;
    if (*(long *)(param_1 + 0xa0) != 0) {
      FUN_10b5b6a74();
    }
    break;
  case 0x1d:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5b8970();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_10b5b4cb4;
    if (*(long *)(param_1 + 0xa0) != 0) {
      FUN_10b5b6b2c();
    }
    break;
  case 0x1e:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5b8970();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_10b5b4cb4;
    if (*(long *)(param_1 + 0xa0) != 0) {
      FUN_10b5b7090();
    }
    break;
  default:
    goto LAB_10b5b4cb4;
  case 0x20:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5b8970();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b5b4cb4;
    if (*(long *)(param_1 + 0xa0) != 0) {
      FUN_10b5b7148();
    }
    break;
  case 0x22:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5b8970();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10b5b4cb4;
    if (*(long *)(param_1 + 0xa0) != 0) {
      FUN_10b5b7650();
    }
    break;
  case 0x23:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5b8970();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10b5b4cb4;
    if (*(long *)(param_1 + 0xa0) != 0) {
      FUN_10b5b773c();
    }
  }
  __ZdlPv();
LAB_10b5b4cb4:
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}



/* Entry: 10b5b4d84; end: 10b5b4fef;  */

void FUN_10b5b4d84(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_3;
  func_0x00010b5b8afc();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110d17318;
  if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
    func_0x00010b5b8820();
  }
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)unaff_x19 + 0x1c) = 0;
  *(undefined8 *)((long)unaff_x19 + 0x14) = 0;
  *(undefined4 *)((long)unaff_x19 + 0x24) = 0;
  unaff_x19[5] = unaff_x20;
  FUN_10b5b5f30(unaff_x19 + 3,param_3 + 0x18);
  lVar2 = param_3 + 0x30;
  func_0x00010b5b89b0();
  unaff_x19[6] = lVar2;
  *(undefined4 *)(unaff_x19 + 0x16) = *(undefined4 *)(param_3 + 0xb0);
  *(undefined4 *)((long)unaff_x19 + 0xb4) = *(undefined4 *)(param_3 + 0xb4);
  uVar1 = *(uint *)(unaff_x19 + 2);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010b5b8c5c();
  }
  unaff_x19[7] = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = unaff_x20;
    FUN_10b5b80a8();
  }
  unaff_x19[8] = lVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = unaff_x20;
    func_0x000108904da8();
  }
  unaff_x19[9] = lVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = unaff_x20;
    func_0x000108911c78();
  }
  unaff_x19[10] = lVar2;
  if ((uVar1 >> 4 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010b5b8c5c();
  }
  unaff_x19[0xb] = lVar2;
  if ((uVar1 >> 5 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = unaff_x20;
    FUN_10b5b8104();
  }
  unaff_x19[0xc] = lVar2;
  if ((uVar1 >> 6 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = unaff_x20;
    FUN_10b5b8140();
  }
  unaff_x19[0xd] = lVar2;
  if ((uVar1 >> 7 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = unaff_x20;
    FUN_10b5b8198();
  }
  unaff_x19[0xe] = lVar2;
  if ((uVar1 >> 8 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = unaff_x20;
    FUN_10b5b81f0();
  }
  unaff_x19[0xf] = lVar2;
  if ((uVar1 >> 9 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010b5b8c5c();
  }
  unaff_x19[0x10] = lVar2;
  uVar4 = *(undefined8 *)(param_3 + 0x90);
  uVar3 = *(undefined8 *)(param_3 + 0x88);
  unaff_x19[0x13] = *(undefined8 *)(param_3 + 0x98);
  unaff_x19[0x12] = uVar4;
  unaff_x19[0x11] = uVar3;
  switch(*(undefined4 *)(unaff_x19 + 0x16)) {
  case 0x1a:
    func_0x00010b5b8ae4();
    func_0x00010b5b824c();
    break;
  case 0x1b:
    func_0x00010b5b8ae4();
    func_0x00010b5b82c0();
    break;
  case 0x1c:
    func_0x00010b5b8ae4();
    FUN_10b5b8364();
    break;
  case 0x1d:
    func_0x00010b5b8ae4();
    FUN_10b5b83b4();
    break;
  case 0x1e:
    func_0x00010b5b8ae4();
    FUN_10b5b8404();
    break;
  default:
    goto LAB_10b5b4fa0;
  case 0x20:
    func_0x00010b5b8ae4();
    FUN_10b5b8454();
    break;
  case 0x22:
    func_0x00010b5b8ae4();
    FUN_10b5b8568();
    break;
  case 0x23:
    func_0x00010b5b8ae4();
    func_0x00010b5b85c0();
  }
  unaff_x19[0x14] = lVar2;
LAB_10b5b4fa0:
  if (*(int *)((long)unaff_x19 + 0xb4) == 7) {
    unaff_x20 = param_3 + 0xa8;
    func_0x00010b5b89b0();
  }
  else {
    if (*(int *)((long)unaff_x19 + 0xb4) != 6) {
      return;
    }
    func_0x00010b5b8640();
  }
  unaff_x19[0x15] = unaff_x20;
  return;
}



/* Entry: 10b5b4ff0; end: 10b5b501b;  */

undefined8 FUN_10b5b4ff0(undefined8 param_1)

{
  func_0x00010b5b892c();
  FUN_10b5b501c(param_1);
  return param_1;
}



/* Entry: 10b5b501c; end: 10b5b5103;  */

long * FUN_10b5b501c(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b5b4478();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b5b4338();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x000107c30588();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b5b9250();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b5b4478();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b5a766c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b5b3f9c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b5b40a8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10b5b41c0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_10b5b4478();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_10b5b4b9c(param_1);
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    func_0x00010b5b4d20(param_1);
  }
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b5b5104; end: 10b5b5107;  */

undefined8 FUN_10b5b5104(undefined8 param_1)

{
  func_0x00010b5b892c();
  FUN_10b5b501c(param_1);
  return param_1;
}



/* Entry: 10b5b5108; end: 10b5b511b;  */

void FUN_10b5b5108(void)

{
  FUN_10b5b4ff0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b511c; end: 10b5b5147;  */

long FUN_10b5b511c(long param_1)

{
  func_0x00010b5b892c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5b67c4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5b5148; end: 10b5b5253;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5b5148(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  if (0 < (int)param_1[4]) {
    func_0x0001053936e4(param_1 + 3);
  }
  func_0x000107c3025c(param_1 + 6);
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5b44c8(param_1[7]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5b4380(param_1[8]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b51f4e4(param_1[9]);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b5b92e8(param_1[10]);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10b5b44c8(param_1[0xb]);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x00010b5a7704(param_1[0xc]);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x00010b5b3fe4(param_1[0xd]);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x00010b5b40f0(param_1[0xe]);
    }
  }
  if ((uVar1 & 0x300) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      func_0x00010b5b4208(param_1[0xf]);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_10b5b44c8(param_1[0x10]);
    }
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_10b5b4b9c(param_1);
  func_0x00010b5b4d20(param_1);
  func_0x00010b5b8cf0();
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



/* Entry: 10b5b5254; end: 10b5b5913;  */

long * FUN_10b5b5254(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar9;
  long unaff_x22;
  int iVar10;
  
  func_0x00010b5b89a0();
  if ((int)param_1[0x11] != 0) {
    func_0x00010b5b87bc();
    param_2 = param_1;
    func_0x00010b5b89e8();
    func_0x00010b5b87d4();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    func_0x00010b5b87bc();
    param_2 = param_1;
    func_0x00010b5b8ba8();
    func_0x00010b5b87d4();
    unaff_x21 = param_1;
  }
  uVar3 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar3 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x38);
    param_3 = (ulong)*(uint *)(param_2 + 4);
    param_1 = (long *)0x4;
    func_0x00010b5b87c8();
    unaff_x21 = param_1;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x40);
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x5;
    func_0x00010b5b87c8();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0xb4) == 7) {
    param_3 = *(ulong *)(unaff_x20 + 0xa8) & 0xfffffffffffffffc;
    param_2 = (long *)0x7;
    param_1 = unaff_x19;
    func_0x000107c280a0();
    param_4 = unaff_x21;
    unaff_x21 = param_1;
  }
  else if (*(int *)(unaff_x20 + 0xb4) == 6) {
    param_2 = *(long **)(unaff_x20 + 0xa8);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    param_1 = (long *)0x6;
    func_0x00010b5b87c8(6);
    unaff_x21 = param_1;
  }
  func_0x00010b5b8a68(*(undefined8 *)(unaff_x20 + 0x30));
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5b5348;
  }
  else if ((int)param_2 != 0) {
LAB_10b5b5348:
    param_4 = (long *)&UNK_10f77e1be;
    func_0x00010b5b89c0();
    func_0x00010b5b885c();
    param_1 = unaff_x19;
    unaff_x21 = unaff_x19;
  }
  plVar5 = param_1;
  if (*(char *)(unaff_x20 + 0x90) == '\x01') {
    func_0x00010b5b87bc();
    plVar5 = (long *)0x60;
    func_0x000107c280a8(0x60,param_1);
    func_0x00010b5b87fc();
    unaff_x21 = plVar5;
  }
  plVar6 = plVar5;
  if (*(char *)(unaff_x20 + 0x91) == '\x01') {
    func_0x00010b5b87bc();
    plVar6 = (long *)0x68;
    func_0x000107c280a8(0x68,plVar5);
    func_0x00010b5b87fc();
    unaff_x21 = plVar6;
  }
  plVar5 = plVar6;
  if (*(char *)(unaff_x20 + 0x92) == '\x01') {
    func_0x00010b5b87bc();
    plVar5 = (long *)0x70;
    func_0x000107c280a8(0x70,plVar6);
    func_0x00010b5b87fc();
    unaff_x21 = plVar5;
  }
  plVar6 = plVar5;
  if (*(int *)(unaff_x20 + 0x94) != 0) {
    func_0x00010b5b87bc();
    plVar6 = (long *)0x78;
    func_0x000107c280a8(0x78,plVar5);
    func_0x00010b5b87fc();
    unaff_x21 = plVar6;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x48) + 0x14);
    plVar6 = (long *)0x11;
    func_0x00010b5b87c8(0x11);
    unaff_x21 = plVar6;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x18);
    plVar6 = (long *)0x12;
    func_0x00010b5b87c8(0x12);
    unaff_x21 = plVar6;
  }
  if ((uVar3 >> 4 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x20);
    plVar6 = (long *)0x13;
    func_0x00010b5b87c8(0x13);
    unaff_x21 = plVar6;
  }
  plVar5 = plVar6;
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    func_0x00010b5b87bc();
    plVar5 = (long *)0xa0;
    func_0x000107c280a8(0xa0,plVar6);
    func_0x00010b5b87d4();
    unaff_x21 = plVar5;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x14);
    plVar5 = (long *)0x15;
    func_0x00010b5b87c8(0x15);
    unaff_x21 = plVar5;
  }
  if (*(int *)(unaff_x20 + 0x9c) != 0) {
    func_0x00010b5b87bc();
    unaff_x21 = (long *)0xb0;
    func_0x000107c280a8(0xb0,plVar5);
    func_0x00010b5b87d4();
  }
  if ((uVar3 >> 6 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x14);
    unaff_x21 = (long *)0x17;
    func_0x00010b5b87c8(0x17);
  }
  if ((uVar3 >> 7 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x70) + 0x14);
    unaff_x21 = (long *)0x18;
    func_0x00010b5b87c8(0x18);
  }
  if ((uVar3 >> 8 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x78) + 0x18);
    unaff_x21 = (long *)0x19;
    func_0x00010b5b87c8(0x19);
  }
  plVar5 = (long *)(ulong)*(uint *)(unaff_x20 + 0xb0);
  uVar4 = *(uint *)(unaff_x20 + 0xb0) - 0x1a;
  if (uVar4 < 5) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xa0) +
                              *(long *)(&UNK_10e5c2bd8 + (ulong)uVar4 * 8));
    func_0x00010b5b87c8();
    unaff_x21 = plVar5;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x80) + 0x20);
    unaff_x21 = (long *)0x1f;
    func_0x00010b5b87c8(0x1f);
  }
  if (*(int *)(unaff_x20 + 0xb0) == 0x20) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xa0) + 0x14);
    unaff_x21 = (long *)0x20;
    func_0x00010b5b87c8(0x20);
  }
  iVar10 = *(int *)(unaff_x20 + 0x20);
  for (iVar9 = 0; iVar10 != iVar9; iVar9 = iVar9 + 1) {
    uVar7 = *(ulong *)(unaff_x20 + 0x18);
    puVar2 = (ulong *)(unaff_x20 + 0x18);
    if ((uVar7 & 1) != 0) {
      puVar2 = (ulong *)(uVar7 + (long)iVar9 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar2 + 0x18);
    unaff_x21 = (long *)0x21;
    func_0x00010b5b87c8(0x21);
  }
  uVar3 = *(uint *)(unaff_x20 + 0xb0);
  plVar5 = (long *)(ulong)uVar3;
  if (uVar3 == 0x22) {
    lVar8 = 0x14;
  }
  else {
    if (uVar3 != 0x23) goto LAB_10b5b55e0;
    lVar8 = 0x34;
  }
  param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xa0) + lVar8);
  func_0x00010b5b87c8();
  unaff_x21 = plVar5;
LAB_10b5b55e0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b5b897c();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5b8c1c();
  if (*plVar5 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar10 = ((int)*plVar5 - (int)param_4) + 0x10;
      iVar9 = (int)param_3;
      param_3 = (ulong)(uint)(iVar9 - iVar10);
      if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar10);
      param_4 = plVar5;
      func_0x000107c303e4(plVar5,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar9);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b5b5914; end: 10b5b5a2b;  */

long FUN_10b5b5914(long param_1)

{
  long extraout_x8;
  
  func_0x00010b5b4588();
  FUN_10b5b8798();
  return param_1 + extraout_x8;
}



/* Entry: 10b5b5a2c; end: 10b5b5a2f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5b5a2c(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  ulong extraout_x8_00;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar8;
  
  func_0x00010b5b8934();
  puVar8 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar8 & 1) != 0) {
    func_0x00010b5b8d08();
  }
  puVar4 = unaff_x21 + 3;
  lVar5 = unaff_x20 + 0x18;
  FUN_10b5b5f30();
  func_0x00010b5b89fc(*(undefined8 *)(unaff_x20 + 0x30));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(lVar5 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5b89f0();
    }
    puVar4 = unaff_x21 + 6;
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[7];
      if (puVar4 == (ulong *)0x0) {
        func_0x00010b5b8c40();
        unaff_x21[7] = (ulong)puVar4;
      }
      else {
        FUN_10b5b460c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[8];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = puVar8;
        FUN_10b5b80a8();
        unaff_x21[8] = (ulong)puVar4;
      }
      else {
        func_0x00010b5b4310();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[9];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = puVar8;
        func_0x000108904da8();
        unaff_x21[9] = (ulong)puVar4;
      }
      else {
        func_0x000107c3058c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[10];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = puVar8;
        func_0x000108911c78();
        unaff_x21[10] = (ulong)puVar4;
      }
      else {
        func_0x00010b5b9228();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xb];
      if (puVar4 == (ulong *)0x0) {
        func_0x00010b5b8c40();
        unaff_x21[0xb] = (ulong)puVar4;
      }
      else {
        FUN_10b5b460c();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xc];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = puVar8;
        FUN_10b5b8104();
        unaff_x21[0xc] = (ulong)puVar4;
      }
      else {
        func_0x00010b5a7630();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xd];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = puVar8;
        FUN_10b5b8140();
        unaff_x21[0xd] = (ulong)puVar4;
      }
      else {
        func_0x00010b5b3f80();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xe];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = puVar8;
        FUN_10b5b8198();
        unaff_x21[0xe] = (ulong)puVar4;
      }
      else {
        func_0x00010b5b408c();
      }
    }
  }
  if ((uVar1 & 0x300) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xf];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = puVar8;
        FUN_10b5b81f0();
        unaff_x21[0xf] = (ulong)puVar4;
      }
      else {
        func_0x00010b5b4198();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x10];
      if (puVar4 == (ulong *)0x0) {
        func_0x00010b5b8c40();
        unaff_x21[0x10] = (ulong)puVar4;
      }
      else {
        FUN_10b5b460c();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x88) != 0) {
    *(int *)(unaff_x21 + 0x11) = *(int *)(unaff_x20 + 0x88);
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)((long)unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  if (*(char *)(unaff_x20 + 0x90) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x12) = 1;
  }
  if (*(char *)(unaff_x20 + 0x91) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x91) = 1;
  }
  if (*(char *)(unaff_x20 + 0x92) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x92) = 1;
  }
  if (*(int *)(unaff_x20 + 0x94) != 0) {
    *(int *)((long)unaff_x21 + 0x94) = *(int *)(unaff_x20 + 0x94);
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    *(int *)(unaff_x21 + 0x13) = *(int *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0x9c) != 0) {
    *(int *)((long)unaff_x21 + 0x9c) = *(int *)(unaff_x20 + 0x9c);
  }
  func_0x00010b5b8aa0();
  iVar2 = *(int *)(unaff_x20 + 0xb0);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[0x16];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        puVar4 = unaff_x21;
        FUN_10b5b4b9c();
      }
      *(int *)(unaff_x21 + 0x16) = iVar2;
    }
    switch(iVar2) {
    case 0x1a:
      if (iVar3 == iVar2) {
        func_0x00010b5b88b0();
        FUN_10b5b5f40();
        goto LAB_10b5b5e70;
      }
      func_0x00010b5b8b08();
      func_0x00010b5b824c();
      break;
    case 0x1b:
      if (iVar3 == iVar2) {
        func_0x00010b5b88b0();
        FUN_10b5b5fc4();
        goto LAB_10b5b5e70;
      }
      func_0x00010b5b8b08();
      func_0x00010b5b82c0();
      break;
    case 0x1c:
      if (iVar3 == iVar2) {
        func_0x00010b5b88b0();
        func_0x00010b5b8b9c();
        func_0x00010b5b6054();
        goto LAB_10b5b5e70;
      }
      func_0x00010b5b8b08();
      FUN_10b5b8364();
      break;
    case 0x1d:
      if (iVar3 == iVar2) {
        func_0x00010b5b88b0();
        func_0x00010b5b8b9c();
        func_0x00010b5b6064();
        goto LAB_10b5b5e70;
      }
      func_0x00010b5b8b08();
      FUN_10b5b83b4();
      break;
    case 0x1e:
      if (iVar3 == iVar2) {
        func_0x00010b5b88b0();
        func_0x00010b5b8b9c();
        func_0x00010b5b6074();
        goto LAB_10b5b5e70;
      }
      func_0x00010b5b8b08();
      FUN_10b5b8404();
      break;
    default:
      goto LAB_10b5b5e70;
    case 0x20:
      if (iVar3 == iVar2) {
        func_0x00010b5b88b0();
        FUN_10b5b6084();
        goto LAB_10b5b5e70;
      }
      func_0x00010b5b8b08();
      FUN_10b5b8454();
      break;
    case 0x22:
      if (iVar3 == iVar2) {
        func_0x00010b5b88b0();
        FUN_10b5b618c();
        goto LAB_10b5b5e70;
      }
      func_0x00010b5b8b08();
      FUN_10b5b8568();
      break;
    case 0x23:
      if (iVar3 == iVar2) {
        func_0x00010b5b88b0();
        FUN_10b5b61a8();
        goto LAB_10b5b5e70;
      }
      func_0x00010b5b8b08();
      func_0x00010b5b85c0();
    }
    unaff_x21[0x14] = (ulong)puVar4;
  }
LAB_10b5b5e70:
  iVar2 = *(int *)(unaff_x20 + 0xb4);
  if (iVar2 != 0) {
    iVar3 = *(int *)((long)unaff_x21 + 0xb4);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        puVar4 = unaff_x21;
        func_0x00010b5b4d20();
      }
      *(int *)((long)unaff_x21 + 0xb4) = iVar2;
    }
    if (iVar2 == 7) {
      func_0x00010b5b8b3c();
      if (iVar3 != 7) {
        unaff_x21[0x15] = extraout_x8_00;
      }
      uVar7 = *(ulong *)(unaff_x20 + 0xa8) & 0xfffffffffffffffc;
      if (*(int *)(unaff_x20 + 0xb4) != 7) {
        uVar7 = extraout_x8_00;
      }
      puVar4 = unaff_x21 + 0x15;
      func_0x000107c30248(puVar4,uVar7,puVar8);
    }
    else if (iVar2 == 6) {
      if (iVar3 == 6) {
        puVar4 = (ulong *)unaff_x21[0x15];
        FUN_10b5b4b00();
      }
      else {
        func_0x00010b5b8640();
        unaff_x21[0x15] = (ulong)puVar8;
        puVar4 = puVar8;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8944();
    if ((*puVar4 & 1) == 0) {
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



/* Entry: 10b5b5a30; end: 10b5b5f2f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5b5a30(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  ulong extraout_x8_00;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar8;
  
  func_0x00010b5b8934();
  puVar8 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar8 & 1) != 0) {
    func_0x00010b5b8d08();
  }
  puVar4 = unaff_x21 + 3;
  lVar5 = unaff_x20 + 0x18;
  FUN_10b5b5f30();
  func_0x00010b5b89fc(*(undefined8 *)(unaff_x20 + 0x30));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(lVar5 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5b89f0();
    }
    puVar4 = unaff_x21 + 6;
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[7];
      if (puVar4 == (ulong *)0x0) {
        func_0x00010b5b8c40();
        unaff_x21[7] = (ulong)puVar4;
      }
      else {
        FUN_10b5b460c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[8];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = puVar8;
        FUN_10b5b80a8();
        unaff_x21[8] = (ulong)puVar4;
      }
      else {
        func_0x00010b5b4310();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[9];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = puVar8;
        func_0x000108904da8();
        unaff_x21[9] = (ulong)puVar4;
      }
      else {
        func_0x000107c3058c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[10];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = puVar8;
        func_0x000108911c78();
        unaff_x21[10] = (ulong)puVar4;
      }
      else {
        func_0x00010b5b9228();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xb];
      if (puVar4 == (ulong *)0x0) {
        func_0x00010b5b8c40();
        unaff_x21[0xb] = (ulong)puVar4;
      }
      else {
        FUN_10b5b460c();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xc];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = puVar8;
        FUN_10b5b8104();
        unaff_x21[0xc] = (ulong)puVar4;
      }
      else {
        func_0x00010b5a7630();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xd];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = puVar8;
        FUN_10b5b8140();
        unaff_x21[0xd] = (ulong)puVar4;
      }
      else {
        func_0x00010b5b3f80();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xe];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = puVar8;
        FUN_10b5b8198();
        unaff_x21[0xe] = (ulong)puVar4;
      }
      else {
        func_0x00010b5b408c();
      }
    }
  }
  if ((uVar1 & 0x300) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xf];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = puVar8;
        FUN_10b5b81f0();
        unaff_x21[0xf] = (ulong)puVar4;
      }
      else {
        func_0x00010b5b4198();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x10];
      if (puVar4 == (ulong *)0x0) {
        func_0x00010b5b8c40();
        unaff_x21[0x10] = (ulong)puVar4;
      }
      else {
        FUN_10b5b460c();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x88) != 0) {
    *(int *)(unaff_x21 + 0x11) = *(int *)(unaff_x20 + 0x88);
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)((long)unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  if (*(char *)(unaff_x20 + 0x90) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x12) = 1;
  }
  if (*(char *)(unaff_x20 + 0x91) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x91) = 1;
  }
  if (*(char *)(unaff_x20 + 0x92) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x92) = 1;
  }
  if (*(int *)(unaff_x20 + 0x94) != 0) {
    *(int *)((long)unaff_x21 + 0x94) = *(int *)(unaff_x20 + 0x94);
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    *(int *)(unaff_x21 + 0x13) = *(int *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0x9c) != 0) {
    *(int *)((long)unaff_x21 + 0x9c) = *(int *)(unaff_x20 + 0x9c);
  }
  func_0x00010b5b8aa0();
  iVar2 = *(int *)(unaff_x20 + 0xb0);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[0x16];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        puVar4 = unaff_x21;
        FUN_10b5b4b9c();
      }
      *(int *)(unaff_x21 + 0x16) = iVar2;
    }
    switch(iVar2) {
    case 0x1a:
      if (iVar3 == iVar2) {
        func_0x00010b5b88b0();
        FUN_10b5b5f40();
        goto LAB_10b5b5e70;
      }
      func_0x00010b5b8b08();
      func_0x00010b5b824c();
      break;
    case 0x1b:
      if (iVar3 == iVar2) {
        func_0x00010b5b88b0();
        FUN_10b5b5fc4();
        goto LAB_10b5b5e70;
      }
      func_0x00010b5b8b08();
      func_0x00010b5b82c0();
      break;
    case 0x1c:
      if (iVar3 == iVar2) {
        func_0x00010b5b88b0();
        func_0x00010b5b8b9c();
        func_0x00010b5b6054();
        goto LAB_10b5b5e70;
      }
      func_0x00010b5b8b08();
      FUN_10b5b8364();
      break;
    case 0x1d:
      if (iVar3 == iVar2) {
        func_0x00010b5b88b0();
        func_0x00010b5b8b9c();
        func_0x00010b5b6064();
        goto LAB_10b5b5e70;
      }
      func_0x00010b5b8b08();
      FUN_10b5b83b4();
      break;
    case 0x1e:
      if (iVar3 == iVar2) {
        func_0x00010b5b88b0();
        func_0x00010b5b8b9c();
        func_0x00010b5b6074();
        goto LAB_10b5b5e70;
      }
      func_0x00010b5b8b08();
      FUN_10b5b8404();
      break;
    default:
      goto LAB_10b5b5e70;
    case 0x20:
      if (iVar3 == iVar2) {
        func_0x00010b5b88b0();
        FUN_10b5b6084();
        goto LAB_10b5b5e70;
      }
      func_0x00010b5b8b08();
      FUN_10b5b8454();
      break;
    case 0x22:
      if (iVar3 == iVar2) {
        func_0x00010b5b88b0();
        FUN_10b5b618c();
        goto LAB_10b5b5e70;
      }
      func_0x00010b5b8b08();
      FUN_10b5b8568();
      break;
    case 0x23:
      if (iVar3 == iVar2) {
        func_0x00010b5b88b0();
        FUN_10b5b61a8();
        goto LAB_10b5b5e70;
      }
      func_0x00010b5b8b08();
      func_0x00010b5b85c0();
    }
    unaff_x21[0x14] = (ulong)puVar4;
  }
LAB_10b5b5e70:
  iVar2 = *(int *)(unaff_x20 + 0xb4);
  if (iVar2 != 0) {
    iVar3 = *(int *)((long)unaff_x21 + 0xb4);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        puVar4 = unaff_x21;
        func_0x00010b5b4d20();
      }
      *(int *)((long)unaff_x21 + 0xb4) = iVar2;
    }
    if (iVar2 == 7) {
      func_0x00010b5b8b3c();
      if (iVar3 != 7) {
        unaff_x21[0x15] = extraout_x8_00;
      }
      uVar7 = *(ulong *)(unaff_x20 + 0xa8) & 0xfffffffffffffffc;
      if (*(int *)(unaff_x20 + 0xb4) != 7) {
        uVar7 = extraout_x8_00;
      }
      puVar4 = unaff_x21 + 0x15;
      func_0x000107c30248(puVar4,uVar7,puVar8);
    }
    else if (iVar2 == 6) {
      if (iVar3 == 6) {
        puVar4 = (ulong *)unaff_x21[0x15];
        FUN_10b5b4b00();
      }
      else {
        func_0x00010b5b8640();
        unaff_x21[0x15] = (ulong)puVar8;
        puVar4 = puVar8;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8944();
    if ((*puVar4 & 1) == 0) {
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



/* Entry: 10b5b5f30; end: 10b5b5f3f;  */

void FUN_10b5b5f30(long *param_1,long param_2)

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



/* Entry: 10b5b5f40; end: 10b5b5fc3;  */

void FUN_10b5b5f40(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5b8934();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_10b5b86c0();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      FUN_10b5b6788();
      puVar2 = puVar3;
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8944();
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



/* Entry: 10b5b5fc4; end: 10b5b6053;  */

void FUN_10b5b5fc4(void)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b5b8934();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b5b8d08();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  func_0x00010598fce8();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x30);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b5b8724();
      *(ulong **)(unaff_x21 + 0x30) = puVar2;
      puVar1 = puVar2;
    }
    else {
      FUN_10b5b6e84();
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  func_0x00010b5b8aa0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8944();
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



/* Entry: 10b5b6054; end: 10b5b6083;  */

void FUN_10b5b6054(long param_1,ulong param_2)

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



/* Entry: 10b5b6084; end: 10b5b618b;  */

void FUN_10b5b6084(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar4;
  
  func_0x00010b5b8934();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00010b5b8d08();
  }
  func_0x000107c282d0(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x00010598fce8(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar1 = (ulong *)(unaff_x21 + 0x48);
  lVar2 = unaff_x20 + 0x48;
  func_0x00010598fce8();
  func_0x00010b5b89fc(*(undefined8 *)(unaff_x20 + 0x60));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x60);
    func_0x000107c30248();
  }
  func_0x00010b5b89fc(*(undefined8 *)(unaff_x20 + 0x68));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x68);
    func_0x000107c30248();
  }
  func_0x00010b5b89fc(*(undefined8 *)(unaff_x20 + 0x70));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x70);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x78);
    if (puVar1 == (ulong *)0x0) {
      func_0x000108c6f470();
      *(ulong **)(unaff_x21 + 0x78) = puVar4;
      puVar1 = puVar4;
    }
    else {
      func_0x00010b535e30();
    }
  }
  func_0x00010b5b8aa0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8944();
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



/* Entry: 10b5b618c; end: 10b5b61a7;  */

void FUN_10b5b618c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
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



/* Entry: 10b5b61a8; end: 10b5b63cb;  */

void FUN_10b5b61a8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5b8988();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    func_0x00010b5b8c7c();
  }
  func_0x00010b5b89fc(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    func_0x00010b5b8c6c();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(char *)(unaff_x20 + 0x2c) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x2c) = 1;
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8ad4();
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



/* Entry: 10b5b63cc; end: 10b5b63ff;  */

long FUN_10b5b63cc(long param_1)

{
  func_0x00010b5b892c();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x00010b5b6254(param_1);
  }
  return param_1;
}



/* Entry: 10b5b6400; end: 10b5b6403;  */

long FUN_10b5b6400(long param_1)

{
  func_0x00010b5b892c();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x00010b5b6254(param_1);
  }
  return param_1;
}



/* Entry: 10b5b6404; end: 10b5b6417;  */

void FUN_10b5b6404(void)

{
  FUN_10b5b63cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b6418; end: 10b5b6423;  */

undefined ** FUN_10b5b6418(void)

{
  return &PTR_DAT_110d175c8;
}



/* Entry: 10b5b6424; end: 10b5b657f;  */

void FUN_10b5b6424(long param_1)

{
  ulong *puVar1;
  
  func_0x00010b5b6254();
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



/* Entry: 10b5b6580; end: 10b5b6787;  */

void FUN_10b5b6580(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b5b8934();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5b8d08();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        func_0x00010b5b6254();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010b5b88a0();
        FUN_10b5b5f40();
        goto LAB_10b5b676c;
      }
      func_0x00010b5b8af0();
      func_0x00010b5b824c();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010b5b88a0();
        FUN_10b5b5fc4();
        goto LAB_10b5b676c;
      }
      func_0x00010b5b8af0();
      func_0x00010b5b82c0();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010b5b88a0();
        func_0x00010b5b8b9c();
        func_0x00010b5b6054();
        goto LAB_10b5b676c;
      }
      func_0x00010b5b8af0();
      FUN_10b5b8364();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b5b88a0();
        func_0x00010b5b8b9c();
        func_0x00010b5b6064();
        goto LAB_10b5b676c;
      }
      func_0x00010b5b8af0();
      FUN_10b5b83b4();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x00010b5b88a0();
        func_0x00010b5b8b9c();
        func_0x00010b5b6074();
        goto LAB_10b5b676c;
      }
      func_0x00010b5b8af0();
      FUN_10b5b8404();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00010b5b88a0();
        FUN_10b5b6084();
        goto LAB_10b5b676c;
      }
      func_0x00010b5b8af0();
      FUN_10b5b8454();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x00010b5b88a0();
        FUN_10b5b618c();
        goto LAB_10b5b676c;
      }
      func_0x00010b5b8af0();
      FUN_10b5b8568();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x00010b5b88a0();
        func_0x00010b5b61a8();
        goto LAB_10b5b676c;
      }
      func_0x00010b5b8af0();
      FUN_10b5b85c0();
      break;
    default:
      goto LAB_10b5b676c;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_10b5b676c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8944();
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



/* Entry: 10b5b6788; end: 10b5b67c3;  */

void FUN_10b5b6788(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if (*(char *)(param_2 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 0x19) = 1;
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



/* Entry: 10b5b67c4; end: 10b5b67e7;  */

undefined8 FUN_10b5b67c4(undefined8 param_1)

{
  func_0x00010b5b892c();
  return param_1;
}



/* Entry: 10b5b67e8; end: 10b5b67eb;  */

undefined8 FUN_10b5b67e8(undefined8 param_1)

{
  func_0x00010b5b892c();
  return param_1;
}



/* Entry: 10b5b67ec; end: 10b5b67ff;  */

void FUN_10b5b67ec(void)

{
  FUN_10b5b67c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b6800; end: 10b5b6823;  */

undefined ** FUN_10b5b6800(void)

{
  return &PTR_DAT_110d17608;
}



/* Entry: 10b5b6824; end: 10b5b68cb;  */

long * FUN_10b5b6824(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5b8868();
  if (param_1[2] != 0) {
    param_1 = unaff_x19;
    func_0x000105991a14();
    param_3 = param_4;
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    func_0x00010b5b87e0();
    func_0x00010b5b89e8();
    func_0x00010b5b87fc();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x19) == '\x01') {
    func_0x00010b5b87e0();
    func_0x00010b5b8ba8();
    func_0x00010b5b87fc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b897c();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,(ulong)param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5b68cc; end: 10b5b6923;  */

long FUN_10b5b68cc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  lVar1 = uVar3 + (ulong)*(byte *)(param_1 + 0x18) * 2 + (ulong)*(byte *)(param_1 + 0x19) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5b6924; end: 10b5b6957;  */

long FUN_10b5b6924(long param_1)

{
  func_0x00010b5b892c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5b67c4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5b6958; end: 10b5b696b;  */

void FUN_10b5b6958(void)

{
  FUN_10b5b6924();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b696c; end: 10b5b6977;  */

undefined ** FUN_10b5b696c(void)

{
  return &PTR_DAT_110d17648;
}



/* Entry: 10b5b6978; end: 10b5b6a6f;  */

void FUN_10b5b6978(ulong *param_1)

{
  ulong extraout_x8;
  
  if ((param_1[2] & 1) != 0) {
    func_0x00010b5b680c(param_1[3]);
  }
  func_0x00010b5b8cf0();
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



/* Entry: 10b5b6a70; end: 10b5b6a73;  */

void FUN_10b5b6a70(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5b8934();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_10b5b86c0();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      FUN_10b5b6788();
      puVar2 = puVar3;
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8944();
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



/* Entry: 10b5b6a74; end: 10b5b6a97;  */

undefined8 FUN_10b5b6a74(undefined8 param_1)

{
  func_0x00010b5b892c();
  return param_1;
}



/* Entry: 10b5b6a98; end: 10b5b6aab;  */

void FUN_10b5b6a98(void)

{
  FUN_10b5b6a74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b6aac; end: 10b5b6b2b;  */

undefined ** FUN_10b5b6aac(void)

{
  return &PTR_DAT_110d17690;
}



/* Entry: 10b5b6b2c; end: 10b5b6b4f;  */

undefined8 FUN_10b5b6b2c(undefined8 param_1)

{
  func_0x00010b5b892c();
  return param_1;
}



/* Entry: 10b5b6b50; end: 10b5b6b63;  */

void FUN_10b5b6b50(void)

{
  FUN_10b5b6b2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b6b64; end: 10b5b6be3;  */

undefined ** FUN_10b5b6b64(void)

{
  return &PTR_DAT_110d176d8;
}



/* Entry: 10b5b6be4; end: 10b5b6c1f;  */

long FUN_10b5b6be4(long param_1)

{
  func_0x00010b5b892c();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5b6ec8();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5b6c20; end: 10b5b6c33;  */

void FUN_10b5b6c20(void)

{
  FUN_10b5b6be4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b6c34; end: 10b5b6c3f;  */

undefined ** FUN_10b5b6c34(void)

{
  return &PTR_DAT_110d17720;
}



/* Entry: 10b5b6c40; end: 10b5b6c8f;  */

void FUN_10b5b6c40(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5b6c90(*(undefined8 *)(param_1 + 0x30));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x40) = 0;
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



/* Entry: 10b5b6c90; end: 10b5b6ca7;  */

void FUN_10b5b6c90(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b5b6ca8; end: 10b5b6de7;  */

long * FUN_10b5b6ca8(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  char in_NG;
  char in_OV;
  long *plVar1;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar2;
  long *unaff_x23;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  func_0x00010b5b89a0();
  plVar1 = param_1;
  if (param_1[7] != 0) {
    func_0x00010b5b87bc();
    plVar1 = (long *)0x8;
    func_0x000107c280a8();
    func_0x00010b5b8a88();
    param_2 = param_1;
    unaff_x21 = plVar1;
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    func_0x00010b5b87bc();
    param_2 = plVar1;
    func_0x00010b5b89e8();
    func_0x00010b5b87d4();
    unaff_x21 = plVar1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x30);
    param_3 = (ulong)*(uint *)(param_2 + 6);
    plVar1 = (long *)0x5;
    func_0x00010b5b87c8();
    unaff_x21 = plVar1;
  }
  uVar5 = (ulong)(*(uint *)(unaff_x20 + 0x20) &
                 ((int)*(uint *)(unaff_x20 + 0x20) >> 0x1f ^ 0xffffffffU));
  do {
    if (uVar5 == 0) {
      if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
        return unaff_x21;
      }
      func_0x00010b5b897c();
      if ((long)param_3 < 0) {
        param_3 = *(ulong *)(extraout_x8 + 0x10);
      }
      func_0x00010b5b8c1c();
      if ((long)(int)param_3 <= *plVar1 - (long)param_4) {
        _memcpy(param_4);
        return (long *)((long)param_4 + (long)(int)param_3);
      }
      while( true ) {
        iVar3 = ((int)*plVar1 - (int)param_4) + 0x10;
        iVar2 = (int)param_3;
        param_3 = (ulong)(uint)(iVar2 - iVar3);
        if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_4 + (long)iVar3;
        param_4 = plVar1;
        func_0x000107c303e4(plVar1,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar2);
    }
    func_0x00010b5b88f0();
    plVar1 = unaff_x23;
    if ((long)param_2 < 0) {
      param_2 = (long *)unaff_x23[1];
      plVar1 = (long *)*unaff_x23;
    }
    func_0x00010b5b8a5c();
    lVar4 = (long)*(char *)((long)unaff_x23 + 0x17);
    if (lVar4 < 0) {
      lVar4 = unaff_x23[1];
      in_OV = SBORROW8(lVar4,0x7f);
      in_NG = lVar4 + -0x7f < 0;
      if (lVar4 < 0x80) goto LAB_10b5b6d74;
LAB_10b5b6da0:
      param_2 = (long *)0x6;
      plVar1 = unaff_x19;
      func_0x00010b5b8a50();
      unaff_x21 = plVar1;
    }
    else {
LAB_10b5b6d74:
      func_0x00010b5b8a74();
      if (in_NG != in_OV) goto LAB_10b5b6da0;
      func_0x00010b5b8be4();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x00010b5b8910();
      unaff_x21 = (long *)((long)unaff_x21 + lVar4);
    }
    uVar5 = uVar5 - 1;
  } while( true );
}



/* Entry: 10b5b6de8; end: 10b5b6e7f;  */

void FUN_10b5b6de8(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x00010b5b8878();
    func_0x00010b5b8bd4();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5b7000(*(undefined8 *)(param_1 + 0x30));
    func_0x00010b5b8798();
    func_0x00010b5b8b48();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010b5b8c04(0xfffffff7);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x00010b5b8b64();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5b8d14();
  }
  func_0x00010b5b8cfc();
  return;
}



/* Entry: 10b5b6e80; end: 10b5b6e83;  */

void FUN_10b5b6e80(void)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b5b8934();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b5b8d08();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  func_0x00010598fce8();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x30);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b5b8724();
      *(ulong **)(unaff_x21 + 0x30) = puVar2;
      puVar1 = puVar2;
    }
    else {
      FUN_10b5b6e84();
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  func_0x00010b5b8aa0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8944();
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



/* Entry: 10b5b6e84; end: 10b5b6ec7;  */

void FUN_10b5b6e84(long param_1)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5b8afc();
  puVar1 = (ulong *)(param_1 + 0x10);
  func_0x0001088f1584();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8ad4();
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



/* Entry: 10b5b6ec8; end: 10b5b6ef3;  */

long FUN_10b5b6ec8(long param_1)

{
  func_0x00010b5b892c();
  func_0x0001088f2648(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5b6ef4; end: 10b5b6ef7;  */

long FUN_10b5b6ef4(long param_1)

{
  func_0x00010b5b892c();
  func_0x0001088f2648(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5b6ef8; end: 10b5b6f0b;  */

void FUN_10b5b6ef8(void)

{
  FUN_10b5b6ec8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b6f0c; end: 10b5b6f17;  */

undefined ** FUN_10b5b6f0c(void)

{
  return &PTR_DAT_110d17770;
}



/* Entry: 10b5b6f18; end: 10b5b6fff;  */

byte * FUN_10b5b6f18(byte *param_1,undefined8 param_2,ulong param_3,byte *param_4)

{
  ulong *puVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  long extraout_x8;
  byte *unaff_x19;
  long unaff_x20;
  uint uVar5;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  
  func_0x00010b5b8868();
  uVar5 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar5) {
    func_0x00010b5b87e0();
    pbVar3 = param_1 + 2;
    *param_1 = 10;
    for (; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
      pbVar3[-1] = (byte)uVar5 | 0x80;
      pbVar3 = pbVar3 + 1;
    }
    pbVar3[-1] = (byte)uVar5;
    puVar6 = *(ulong **)(unaff_x20 + 0x18);
    puVar1 = puVar6 + *(int *)(unaff_x20 + 0x10);
    do {
      func_0x00010b5b87e0();
      uVar4 = *puVar6;
      pbVar3 = param_1;
      while( true ) {
        param_4 = pbVar3 + 1;
        if (uVar4 < 0x80) break;
        *pbVar3 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        pbVar3 = param_4;
      }
      puVar6 = puVar6 + 1;
      *pbVar3 = (byte)uVar4;
    } while (puVar6 < puVar1);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5b87e0();
    func_0x00010b5b89e8();
    func_0x00010b5b8a88();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b897c();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)param_3;
        uVar5 = iVar7 - iVar8;
        param_3 = (ulong)uVar5;
        if (uVar5 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return param_4 + iVar7;
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return param_4 + (int)param_3;
  }
  return param_4;
}



/* Entry: 10b5b7000; end: 10b5b708b;  */

void FUN_10b5b7000(long param_1)

{
  int iVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1 + 0x10;
  func_0x00010b4d3edc();
  iVar1 = (int)lVar3;
  *(int *)(param_1 + 0x20) = iVar1;
  if (lVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = ((int)LZCOUNT((long)iVar1) * -9 + 0x280U >> 6) + 1;
  }
  iVar2 = iVar2 + iVar1;
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar2 = ((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5b8d14();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x30) = iVar2;
  return;
}



/* Entry: 10b5b708c; end: 10b5b708f;  */

void FUN_10b5b708c(long param_1)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5b8afc();
  puVar1 = (ulong *)(param_1 + 0x10);
  func_0x0001088f1584();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8ad4();
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



/* Entry: 10b5b7090; end: 10b5b70b3;  */

undefined8 FUN_10b5b7090(undefined8 param_1)

{
  func_0x00010b5b892c();
  return param_1;
}



/* Entry: 10b5b70b4; end: 10b5b70c7;  */

void FUN_10b5b70b4(void)

{
  FUN_10b5b7090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b70c8; end: 10b5b7147;  */

undefined ** FUN_10b5b70c8(void)

{
  return &PTR_DAT_110d177b8;
}



/* Entry: 10b5b7148; end: 10b5b71ab;  */

long FUN_10b5b7148(long param_1)

{
  func_0x00010b5b892c();
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c30258(param_1 + 0x68);
  func_0x000107c30258(param_1 + 0x70);
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x48);
  func_0x000107c282b4(param_1 + 0x30);
  func_0x000107c282dc(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5b71ac; end: 10b5b71bf;  */

void FUN_10b5b71ac(void)

{
  FUN_10b5b7148();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b71c0; end: 10b5b71cb;  */

undefined ** FUN_10b5b71c0(void)

{
  return &PTR_DAT_110d177f8;
}



/* Entry: 10b5b71cc; end: 10b5b7233;  */

void FUN_10b5b71cc(ulong *param_1)

{
  ulong extraout_x8;
  
  *(undefined4 *)(param_1 + 3) = 0;
  func_0x000107c282c0(param_1 + 6);
  func_0x000107c282c0(param_1 + 9);
  func_0x000107c3025c(param_1 + 0xc);
  func_0x000107c3025c(param_1 + 0xd);
  func_0x000107c3025c(param_1 + 0xe);
  if ((param_1[2] & 1) != 0) {
    func_0x00010b535efc(param_1[0xf]);
  }
  func_0x00010b5b8cf0();
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



/* Entry: 10b5b7234; end: 10b5b74f3;  */

byte * FUN_10b5b7234(byte *param_1,long param_2,ulong param_3,byte *param_4)

{
  char in_NG;
  char in_OV;
  int extraout_w8;
  int extraout_w8_00;
  ulong uVar1;
  long extraout_x8;
  byte *unaff_x19;
  long unaff_x20;
  byte *unaff_x21;
  byte *pbVar2;
  int iVar3;
  byte *unaff_x22;
  byte *pbVar4;
  byte *unaff_x23;
  int iVar5;
  long lVar6;
  
  func_0x00010b5b89a0();
  func_0x00010b5b8a68(*(undefined8 *)(param_1 + 0x60));
  if (param_2 < 0) {
    param_2 = *(long *)(unaff_x22 + 8);
    if (param_2 != 0) {
      pbVar4 = *(byte **)unaff_x22;
      goto LAB_10b5b7278;
    }
  }
  else {
    pbVar4 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b5b7278:
      param_4 = &UNK_10f77e226;
      func_0x00010b5b89c0();
      func_0x00010b5b8cd0();
      func_0x00010b5b885c();
      param_1 = pbVar4;
      unaff_x21 = pbVar4;
    }
  }
  func_0x00010b5b8a68(*(undefined8 *)(unaff_x20 + 0x68));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5b72b4;
  }
  else if ((int)param_2 != 0) {
LAB_10b5b72b4:
    param_4 = &UNK_10f77e24e;
    func_0x00010b5b89c0();
    param_2 = 2;
    param_1 = unaff_x19;
    func_0x00010b5b885c();
    unaff_x21 = param_1;
  }
  pbVar4 = (byte *)(ulong)*(uint *)(unaff_x20 + 0x28);
  if (*(uint *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5b87bc();
    pbVar2 = param_1 + 2;
    *param_1 = 0x1a;
    while( true ) {
      if ((uint)pbVar4 < 0x80) break;
      pbVar2[-1] = (byte)pbVar4 | 0x80;
      pbVar4 = (byte *)(ulong)((uint)pbVar4 >> 7);
      pbVar2 = pbVar2 + 1;
    }
    pbVar2[-1] = (byte)pbVar4;
    pbVar4 = *(byte **)(unaff_x20 + 0x20);
    unaff_x23 = pbVar4 + (long)*(int *)(unaff_x20 + 0x18) * 4;
    do {
      func_0x00010b5b87bc();
      uVar1 = (ulong)*(int *)pbVar4;
      pbVar2 = param_1;
      while( true ) {
        unaff_x21 = pbVar2 + 1;
        if (uVar1 < 0x80) break;
        *pbVar2 = (byte)uVar1 | 0x80;
        uVar1 = uVar1 >> 7;
        pbVar2 = unaff_x21;
      }
      pbVar4 = pbVar4 + 4;
      *pbVar2 = (byte)uVar1;
      in_OV = SBORROW8((long)pbVar4,(long)unaff_x23);
      in_NG = (long)pbVar4 - (long)unaff_x23 < 0;
    } while (pbVar4 < unaff_x23);
  }
  func_0x00010b5b8a68(*(undefined8 *)(unaff_x20 + 0x70));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(pbVar4 + 8) == 0) goto LAB_10b5b738c;
    pbVar4 = *(byte **)pbVar4;
  }
  else if ((int)param_2 == 0) goto LAB_10b5b738c;
  param_4 = &UNK_10f77e27a;
  func_0x00010b5b89c0(pbVar4);
  param_2 = 4;
  param_1 = unaff_x19;
  func_0x00010b5b885c();
  unaff_x21 = param_1;
LAB_10b5b738c:
  for (uVar1 = (ulong)(*(uint *)(unaff_x20 + 0x38) &
                      ((int)*(uint *)(unaff_x20 + 0x38) >> 0x1f ^ 0xffffffffU)); uVar1 != 0;
      uVar1 = uVar1 - 1) {
    func_0x00010b5b88f0();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = *(long *)(unaff_x23 + 8);
      param_1 = *(byte **)unaff_x23;
    }
    func_0x00010b5b8a5c();
    lVar6 = (long)(char)unaff_x23[0x17];
    if (lVar6 < 0) {
      lVar6 = *(long *)(unaff_x23 + 8);
      in_OV = SBORROW8(lVar6,0x7f);
      in_NG = lVar6 + -0x7f < 0;
      if (lVar6 < 0x80) goto LAB_10b5b73d8;
LAB_10b5b7404:
      param_2 = 5;
      param_1 = unaff_x19;
      func_0x00010b5b8a50();
      unaff_x21 = param_1;
    }
    else {
LAB_10b5b73d8:
      func_0x00010b5b8a74();
      if (in_NG != in_OV) goto LAB_10b5b7404;
      func_0x00010b5b8be4();
      if (extraout_w8 < 0) {
        unaff_x23 = *(byte **)unaff_x23;
      }
      func_0x00010b5b8910();
      unaff_x21 = unaff_x21 + lVar6;
    }
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x78);
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    param_1 = (byte *)0x6;
    func_0x00010b5b87c8();
    unaff_x21 = param_1;
  }
  uVar1 = (ulong)(*(uint *)(unaff_x20 + 0x50) &
                 ((int)*(uint *)(unaff_x20 + 0x50) >> 0x1f ^ 0xffffffffU));
  do {
    if (uVar1 == 0) {
      if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
        return unaff_x21;
      }
      func_0x00010b5b897c();
      if ((long)param_3 < 0) {
        param_3 = *(ulong *)(extraout_x8 + 0x10);
      }
      func_0x00010b5b8c1c();
      if ((long)(int)param_3 <= *(long *)param_1 - (long)param_4) {
        _memcpy(param_4);
        return param_4 + (int)param_3;
      }
      while( true ) {
        iVar5 = ((int)*(undefined8 *)param_1 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        param_3 = (ulong)(uint)(iVar3 - iVar5);
        if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
        func_0x00010b4d5738();
        pbVar4 = param_4 + iVar5;
        param_4 = param_1;
        func_0x000107c303e4(param_1,pbVar4);
      }
      func_0x00010b4d5738();
      return param_4 + iVar3;
    }
    func_0x00010b5b88f0();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = *(long *)(unaff_x23 + 8);
      param_1 = *(byte **)unaff_x23;
    }
    func_0x00010b5b8a5c();
    lVar6 = (long)(char)unaff_x23[0x17];
    if (lVar6 < 0) {
      lVar6 = *(long *)(unaff_x23 + 8);
      in_OV = SBORROW8(lVar6,0x7f);
      in_NG = lVar6 + -0x7f < 0;
      if (lVar6 < 0x80) goto LAB_10b5b7480;
LAB_10b5b74ac:
      param_2 = 7;
      param_1 = unaff_x19;
      func_0x00010b5b8a50();
      unaff_x21 = param_1;
    }
    else {
LAB_10b5b7480:
      func_0x00010b5b8a74();
      if (in_NG != in_OV) goto LAB_10b5b74ac;
      func_0x00010b5b8be4();
      if (extraout_w8_00 < 0) {
        unaff_x23 = *(byte **)unaff_x23;
      }
      func_0x00010b5b8910();
      unaff_x21 = unaff_x21 + lVar6;
    }
    uVar1 = uVar1 - 1;
  } while( true );
}



/* Entry: 10b5b74f4; end: 10b5b764b;  */

void FUN_10b5b74f4(long param_1)

{
  uint uVar1;
  int iVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar3;
  long lVar4;
  
  lVar3 = 0;
  iVar2 = 0;
  for (lVar4 = (long)*(int *)(param_1 + 0x18); lVar4 != 0; lVar4 = lVar4 + -1) {
    iVar2 = ((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x20) + (lVar3 >> 0x1e))) * -9 + 0x280U
            >> 6) + iVar2;
    lVar3 = lVar3 + 0x100000000;
  }
  *(int *)(param_1 + 0x28) = iVar2;
  uVar1 = *(uint *)(param_1 + 0x38);
  lVar3 = param_1;
  while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x00010b5b8878();
    func_0x00010b5b8bd4();
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x00010b5b8878();
    func_0x00010b5b8bd4();
  }
  func_0x00010b5b8a08(*(undefined8 *)(param_1 + 0x60));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    func_0x00010b5b8a94();
  }
  func_0x00010b5b8a08(*(undefined8 *)(param_1 + 0x68));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    func_0x00010b5b8a94();
  }
  func_0x00010b5b8a08(*(undefined8 *)(param_1 + 0x70));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    func_0x00010b5b8a94();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000108c6cd50(*(undefined8 *)(param_1 + 0x78));
    func_0x00010b5b8a94();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5b8d14();
  }
  func_0x00010b5b8cfc();
  return;
}



/* Entry: 10b5b764c; end: 10b5b764f;  */

void FUN_10b5b764c(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar4;
  
  func_0x00010b5b8934();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00010b5b8d08();
  }
  func_0x000107c282d0(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x00010598fce8(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar1 = (ulong *)(unaff_x21 + 0x48);
  lVar2 = unaff_x20 + 0x48;
  func_0x00010598fce8();
  func_0x00010b5b89fc(*(undefined8 *)(unaff_x20 + 0x60));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x60);
    func_0x000107c30248();
  }
  func_0x00010b5b89fc(*(undefined8 *)(unaff_x20 + 0x68));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x68);
    func_0x000107c30248();
  }
  func_0x00010b5b89fc(*(undefined8 *)(unaff_x20 + 0x70));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5b89f0();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x70);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x78);
    if (puVar1 == (ulong *)0x0) {
      func_0x000108c6f470();
      *(ulong **)(unaff_x21 + 0x78) = puVar4;
      puVar1 = puVar4;
    }
    else {
      func_0x00010b535e30();
    }
  }
  func_0x00010b5b8aa0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b8944();
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



/* Entry: 10b5b7650; end: 10b5b7673;  */

undefined8 FUN_10b5b7650(undefined8 param_1)

{
  func_0x00010b5b892c();
  return param_1;
}



/* Entry: 10b5b7674; end: 10b5b7687;  */

void FUN_10b5b7674(void)

{
  FUN_10b5b7650();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b7688; end: 10b5b76a7;  */

undefined ** FUN_10b5b7688(void)

{
  return &PTR_DAT_110d17838;
}



/* Entry: 10b5b76a8; end: 10b5b7707;  */

long * FUN_10b5b76a8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5b8868();
  if ((int)param_1[2] != 0) {
    func_0x00010b5b87e0();
    func_0x00010b5b882c();
    func_0x00010b5b87d4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5b897c();
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



/* Entry: 10b5b7708; end: 10b5b773b;  */

long FUN_10b5b7708(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00010b5b8b14();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5b773c; end: 10b5b7767;  */

undefined8 FUN_10b5b773c(undefined8 param_1)

{
  func_0x00010b5b892c();
  func_0x00010b5b8c84();
  func_0x00010b5b8bcc();
  return param_1;
}


