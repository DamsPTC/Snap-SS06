/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088d40b8; end: 1088d413f;  */

void FUN_1088d40b8(long param_1)

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
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088dd7a8();
  return;
}



/* Entry: 1088d4140; end: 1088d4143;  */

void FUN_1088d4140(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
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
  func_0x0001088dd020();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd61c();
  }
  func_0x0001088dd0d8();
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd6b0();
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



/* Entry: 1088d4144; end: 1088d4187;  */

void FUN_1088d4144(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001088dcef0();
  func_0x0001088dd608(&PTR_FUN_110a84518);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  lVar1 = unaff_x21 + 0x10;
  func_0x0001088dd464();
  *(long *)(unaff_x19 + 0x10) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  return;
}



/* Entry: 1088d4188; end: 1088d41af;  */

undefined8 FUN_1088d4188(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  return param_1;
}



/* Entry: 1088d41b0; end: 1088d41b3;  */

undefined8 FUN_1088d41b0(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  return param_1;
}



/* Entry: 1088d41b4; end: 1088d41c7;  */

void FUN_1088d41b4(void)

{
  FUN_1088d4188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d41c8; end: 1088d41d3;  */

undefined ** FUN_1088d41c8(void)

{
  return &PTR_DAT_110a87020;
}



/* Entry: 1088d41d4; end: 1088d42bb;  */

void FUN_1088d41d4(void)

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



/* Entry: 1088d42bc; end: 1088d42bf;  */

void FUN_1088d42bc(ulong *param_1,long param_2)

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



/* Entry: 1088d42c0; end: 1088d4307;  */

void FUN_1088d42c0(ulong *param_1,long param_2)

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



/* Entry: 1088d4308; end: 1088d4317;  */

void FUN_1088d4308(long param_1,long param_2)

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



/* Entry: 1088d4318; end: 1088d433b;  */

undefined8 FUN_1088d4318(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088d433c; end: 1088d437f;  */

undefined8 * FUN_1088d433c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a84018;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1088d4308(param_1,param_3);
  return param_1;
}



/* Entry: 1088d4380; end: 1088d4383;  */

undefined8 FUN_1088d4380(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088d4384; end: 1088d4397;  */

void FUN_1088d4384(void)

{
  FUN_1088d4318();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d4398; end: 1088d440f;  */

undefined ** FUN_1088d4398(void)

{
  return &PTR_DAT_110a87070;
}



/* Entry: 1088d4410; end: 1088d444f;  */

long FUN_1088d4410(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd73c();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_1088d2914();
  }
  __ZdlPv();
  FUN_1088d9538(param_1 + 0x18);
  return param_1;
}



/* Entry: 1088d4450; end: 1088d4463;  */

void FUN_1088d4450(void)

{
  FUN_1088d4410();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d4464; end: 1088d446f;  */

undefined ** FUN_1088d4464(void)

{
  return &PTR_DAT_110a870b8;
}



/* Entry: 1088d4470; end: 1088d44bf;  */

void FUN_1088d4470(void)

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
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_1088d2968(*(undefined8 *)(unaff_x19 + 0x38));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
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



/* Entry: 1088d44c0; end: 1088d4643;  */

long * FUN_1088d44c0(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  int iVar5;
  
  func_0x0001088dcfe8();
  lVar2 = param_1[4];
  while ((int)lVar2 != 0) {
    func_0x0001088dd094();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x0001088dcf7c();
    func_0x0001088ddb2c();
  }
  if (*(int *)(unaff_x21 + 0x40) != 0) {
    func_0x0001088dd130();
    param_2 = param_1;
    func_0x0001088dd670();
    func_0x0001088dd23c();
    unaff_x20 = param_1;
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x30));
  if ((long)param_2 < 0) {
    plVar3 = plRam0000000000000000;
    if (lRam0000000000000008 == 0) goto LAB_1088d4558;
  }
  else {
    if ((int)param_2 == 0) goto LAB_1088d4558;
    plVar3 = (long *)0x0;
  }
  param_4 = (long *)&UNK_10f4eb291;
  func_0x0001088dd2ec();
  func_0x0001088dcd24();
  param_1 = plVar3;
  unaff_x20 = plVar3;
LAB_1088d4558:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x38) + 0x28);
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
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      param_3 = (ulong)(uint)(iVar4 - iVar5);
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



/* Entry: 1088d4644; end: 1088d4657;  */

void FUN_1088d4644(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088dcd98();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088ddbf8();
  FUN_1088d4644();
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
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x38);
    if (param_1 == (ulong *)0x0) {
      func_0x0001088dc66c();
      *(ulong **)(unaff_x21 + 0x38) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_1088d2b08();
    }
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
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



/* Entry: 1088d4658; end: 1088d46d7;  */

void FUN_1088d4658(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x70) == 0xb) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088d46b4;
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_1088d4ebc();
    }
  }
  else {
    if (*(int *)(param_1 + 0x70) != 10) goto LAB_1088d46b4;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088d46b4;
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_1088d505c();
    }
  }
  __ZdlPv();
LAB_1088d46b4:
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}



/* Entry: 1088d46d8; end: 1088d4737;  */

long FUN_1088d46d8(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  func_0x0001088dd6fc();
  func_0x0001088dd73c();
  func_0x0001088dd8b8();
  func_0x0001088dd8b0();
  func_0x0001088ddb58();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1088d2b90();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_1088d4658(param_1);
  }
  return param_1;
}



/* Entry: 1088d4738; end: 1088d473b;  */

long FUN_1088d4738(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  func_0x0001088dd6fc();
  func_0x0001088dd73c();
  func_0x0001088dd8b8();
  func_0x0001088dd8b0();
  func_0x0001088ddb58();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1088d2b90();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_1088d4658(param_1);
  }
  return param_1;
}



/* Entry: 1088d473c; end: 1088d474f;  */

void FUN_1088d473c(void)

{
  FUN_1088d46d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d4750; end: 1088d4763;  */

undefined8 FUN_1088d4750(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  return param_1;
}



/* Entry: 1088d4764; end: 1088d47c7;  */

void FUN_1088d4764(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x0001088dd058();
  func_0x0001088dd504();
  func_0x0001088dd614();
  func_0x0001088dd6ec();
  func_0x0001088dd8c0();
  func_0x0001088dd97c();
  func_0x0001088ddb60();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_1088d2be4(unaff_x19[10]);
  }
  *(undefined4 *)(unaff_x19 + 0xc) = 0;
  unaff_x19[0xb] = 0;
  FUN_1088d4658();
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



/* Entry: 1088d47c8; end: 1088d4a4b;  */

long * FUN_1088d47c8(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar6;
  long *unaff_x22;
  int iVar7;
  
  func_0x0001088dd4ec();
  func_0x0001088dd33c(param_1[3]);
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar4 = (long *)*unaff_x22;
      goto LAB_1088d4800;
    }
  }
  else {
    plVar4 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d4800:
      param_4 = (long *)&UNK_10f4eb2c6;
      func_0x0001088dd2ec();
      func_0x0001088dd51c();
      func_0x0001088dd008();
      param_1 = plVar4;
      unaff_x21 = plVar4;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x20));
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar4 = (long *)*unaff_x22;
      goto LAB_1088d483c;
    }
  }
  else {
    plVar4 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d483c:
      param_4 = (long *)&UNK_10f4eb2ed;
      func_0x0001088dd2ec();
      func_0x0001088dd528();
      func_0x0001088dd008();
      param_1 = plVar4;
      unaff_x21 = plVar4;
    }
  }
  if (*(int *)(unaff_x20 + 0x60) != 0) {
    func_0x0001088dd0bc();
    param_2 = param_1;
    func_0x0001088dd6dc();
    func_0x0001088dd164();
    unaff_x21 = param_1;
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar4 = (long *)*unaff_x22;
      goto LAB_1088d4898;
    }
  }
  else {
    plVar4 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d4898:
      param_4 = (long *)&UNK_10f4eb31c;
      func_0x0001088dd2ec();
      func_0x0001088dd724();
      func_0x0001088dd008();
      param_1 = plVar4;
      unaff_x21 = plVar4;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x30));
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar4 = (long *)*unaff_x22;
      goto LAB_1088d48d4;
    }
  }
  else {
    plVar4 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d48d4:
      param_4 = (long *)&UNK_10f4eb34c;
      func_0x0001088dd2ec();
      func_0x0001088dd9f4();
      func_0x0001088dd008();
      param_1 = plVar4;
      unaff_x21 = plVar4;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x38));
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar4 = (long *)*unaff_x22;
      goto LAB_1088d4910;
    }
  }
  else {
    plVar4 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d4910:
      param_4 = (long *)&UNK_10f4eb378;
      func_0x0001088dd2ec();
      func_0x0001088dda0c();
      func_0x0001088dd008();
      param_1 = plVar4;
      unaff_x21 = plVar4;
    }
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    func_0x0001088dd0bc();
    unaff_x22 = *(long **)(unaff_x20 + 0x58);
    puVar3 = (undefined8 *)0x39;
    func_0x000107c280a8();
    unaff_x21 = puVar3 + 1;
    *puVar3 = unaff_x22;
    param_2 = param_1;
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x40));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (unaff_x22[1] != 0) {
      plVar4 = (long *)*unaff_x22;
      goto LAB_1088d4970;
    }
  }
  else {
    plVar4 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d4970:
      param_4 = (long *)&UNK_10f4eb3a6;
      func_0x0001088dd2ec(plVar4);
      param_2 = (long *)0x8;
      unaff_x21 = unaff_x19;
      func_0x0001088dd008();
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x48));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] != 0) {
      unaff_x22 = (long *)*unaff_x22;
      goto LAB_1088d49b0;
    }
  }
  else if ((int)param_2 != 0) {
LAB_1088d49b0:
    param_4 = (long *)&UNK_10f4eb3dc;
    func_0x0001088dd2ec(unaff_x22);
    func_0x0001088dd008();
    unaff_x21 = unaff_x19;
  }
  uVar2 = *(uint *)(unaff_x20 + 0x70);
  plVar4 = (long *)(ulong)uVar2;
  if (uVar2 == 10) {
    lVar5 = 0x28;
  }
  else {
    if (uVar2 != 0xb) goto LAB_1088d49fc;
    lVar5 = 0x20;
  }
  param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + lVar5);
  func_0x0001088dd254();
  unaff_x21 = plVar4;
LAB_1088d49fc:
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x28);
    plVar4 = (long *)0xc;
    func_0x0001088dd254();
    unaff_x21 = plVar4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd348();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x0001088dda00();
    if (*plVar4 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*plVar4 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        param_3 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar7);
        param_4 = plVar4;
        func_0x000107c303e4(plVar4,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x21;
}



/* Entry: 1088d4a4c; end: 1088d4baf;  */

void FUN_1088d4a4c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long unaff_x19;
  
  func_0x0001088dce1c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  func_0x0001088dd0c8();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  func_0x0001088dd1bc();
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  func_0x0001088dd22c();
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  func_0x0001088dd330(*(undefined8 *)(unaff_x19 + 0x38));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  func_0x0001088dd330(*(undefined8 *)(unaff_x19 + 0x40));
  lVar1 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  func_0x0001088dd330(*(undefined8 *)(unaff_x19 + 0x48));
  lVar1 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_1088d34f4(*(undefined8 *)(unaff_x19 + 0x50));
    func_0x0001088dd30c();
  }
  if (*(int *)(unaff_x19 + 0x70) == 0xb) {
    FUN_1088d4fe4(*(undefined8 *)(unaff_x19 + 0x68));
  }
  else {
    if (*(int *)(unaff_x19 + 0x70) != 10) goto LAB_1088d4b88;
    FUN_1088d51c0(*(undefined8 *)(unaff_x19 + 0x68));
  }
  func_0x0001088dcca4();
LAB_1088d4b88:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088dd4c8();
  return;
}



/* Entry: 1088d4bb0; end: 1088d4dcb;  */

void FUN_1088d4bb0(ulong *param_1,long param_2,ulong *param_3)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088dcdd0();
  puVar3 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x0001088dd5b0();
    puVar3 = unaff_x22;
  }
  func_0x0001088dd020();
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b8();
  }
  func_0x0001088dd0d8();
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd6a0();
  }
  func_0x0001088dd1ac();
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd8d8();
  }
  func_0x0001088dd260();
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd74c();
  }
  func_0x0001088dd324(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd8d0();
  }
  func_0x0001088dd324(*(undefined8 *)(unaff_x20 + 0x40));
  lVar4 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd9ec();
  }
  func_0x0001088dd324(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088ddb44();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088ddc28();
    if (param_1 == (ulong *)0x0) {
      param_1 = puVar3;
      func_0x0001088dc6c0();
      unaff_x21[10] = (ulong)param_1;
    }
    else {
      FUN_1088d2d84();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x58) != 0) {
    unaff_x21[0xb] = *(ulong *)(unaff_x20 + 0x58);
  }
  if (*(int *)(unaff_x20 + 0x60) != 0) {
    *(int *)(unaff_x21 + 0xc) = *(int *)(unaff_x20 + 0x60);
  }
  func_0x0001088dcfd8();
  iVar1 = *(int *)(unaff_x20 + 0x70);
  if (iVar1 == 0) goto LAB_1088d4da8;
  iVar2 = (int)unaff_x21[0xe];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_1088d4658();
    }
    *(int *)(unaff_x21 + 0xe) = iVar1;
  }
  if (iVar1 == 0xb) {
    if (iVar2 == 0xb) {
      param_1 = (ulong *)unaff_x21[0xd];
      func_0x0001088d4e54();
      goto LAB_1088d4da8;
    }
    func_0x0001088dc964();
    param_1 = puVar3;
  }
  else {
    if (iVar1 != 10) goto LAB_1088d4da8;
    if (iVar2 == 10) {
      param_1 = (ulong *)unaff_x21[0xd];
      FUN_1088d4dcc();
      goto LAB_1088d4da8;
    }
    func_0x0001088dc910();
    param_1 = puVar3;
  }
  unaff_x21[0xd] = (ulong)param_1;
LAB_1088d4da8:
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



/* Entry: 1088d4dcc; end: 1088d4ebb;  */

void FUN_1088d4dcc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
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
  func_0x0001088dd020();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd61c();
  }
  func_0x0001088dd0d8();
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd6b0();
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



/* Entry: 1088d4ebc; end: 1088d4ee7;  */

undefined8 FUN_1088d4ebc(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  return param_1;
}



/* Entry: 1088d4ee8; end: 1088d4efb;  */

void FUN_1088d4ee8(void)

{
  FUN_1088d4ebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d4efc; end: 1088d4f07;  */

undefined ** FUN_1088d4efc(void)

{
  return &PTR_DAT_110a87148;
}



/* Entry: 1088d4f08; end: 1088d4f37;  */

void FUN_1088d4f08(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd030();
  func_0x0001088dd5a8();
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



/* Entry: 1088d4f38; end: 1088d4fe3;  */

long * FUN_1088d4f38(long *param_1,long param_2,ulong param_3,long *param_4)

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
      goto LAB_1088d4f68;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d4f68:
      param_4 = (long *)&UNK_10f4eb40f;
      func_0x0001088dd2ec();
      func_0x0001088dcd10();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd0f4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088d4fb0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088d4fb0;
  param_4 = (long *)&UNK_10f4eb43b;
  func_0x0001088dd2ec();
  func_0x0001088dcce0();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088d4fb0:
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



/* Entry: 1088d4fe4; end: 1088d5057;  */

long FUN_1088d4fe4(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x0001088dcdac();
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
  func_0x0001088dd148();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 1088d5058; end: 1088d505b;  */

void FUN_1088d5058(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
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
  func_0x0001088dd020();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd61c();
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



/* Entry: 1088d505c; end: 1088d508b;  */

undefined8 FUN_1088d505c(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  return param_1;
}



/* Entry: 1088d508c; end: 1088d509f;  */

void FUN_1088d508c(void)

{
  FUN_1088d505c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d50a0; end: 1088d50ab;  */

undefined ** FUN_1088d50a0(void)

{
  return &PTR_DAT_110a87190;
}



/* Entry: 1088d50ac; end: 1088d50df;  */

void FUN_1088d50ac(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd030();
  func_0x0001088dd5a8();
  func_0x0001088dd504();
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



/* Entry: 1088d50e0; end: 1088d51bf;  */

long * FUN_1088d50e0(long *param_1,long param_2,ulong param_3,long *param_4)

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
      goto LAB_1088d5110;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d5110:
      param_4 = (long *)&UNK_10f4eb46c;
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
      goto LAB_1088d5144;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d5144:
      param_4 = (long *)&UNK_10f4eb4b4;
      func_0x0001088dd2ec();
      func_0x0001088dcce0();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd170();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088d518c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088d518c;
  param_4 = (long *)&UNK_10f4eb4f8;
  func_0x0001088dd2ec();
  func_0x0001088dcd24();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088d518c:
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



/* Entry: 1088d51c0; end: 1088d5247;  */

void FUN_1088d51c0(long param_1)

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
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088dd7a8();
  return;
}



/* Entry: 1088d5248; end: 1088d524b;  */

void FUN_1088d5248(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
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
  func_0x0001088dd020();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd61c();
  }
  func_0x0001088dd0d8();
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd6b0();
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



/* Entry: 1088d524c; end: 1088d529b;  */

void FUN_1088d524c(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  
  if (*(int *)(param_1 + 0x2c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_1088d5494();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}



/* Entry: 1088d529c; end: 1088d52d7;  */

long FUN_1088d529c(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1088d524c(param_1);
  }
  return param_1;
}



/* Entry: 1088d52d8; end: 1088d52eb;  */

void FUN_1088d52d8(void)

{
  FUN_1088d529c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d52ec; end: 1088d52fb;  */

long FUN_1088d52ec(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1088d52fc; end: 1088d545f;  */

void FUN_1088d52fc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd030();
  func_0x0001088dd5a8();
  FUN_1088d524c();
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



/* Entry: 1088d5460; end: 1088d5463;  */

void FUN_1088d5460(ulong *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x0001088dcdd0();
  if ((param_3 & 1) != 0) {
    func_0x0001088dd5b0();
  }
  func_0x0001088dd324(*(undefined8 *)(unaff_x20 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x0001088dd318();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  func_0x0001088dd020();
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b8();
  }
  iVar1 = *(int *)(unaff_x20 + 0x2c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x2c) == iVar1) {
      if (iVar1 == 1) {
        func_0x0001088dd560();
        FUN_1088d5464();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x2c) != 0) {
        param_1 = unaff_x21;
        FUN_1088d524c();
      }
      *(int *)((long)unaff_x21 + 0x2c) = iVar1;
      if (iVar1 == 1) {
        func_0x0001088dd3d0();
        func_0x0001088dc9bc();
        unaff_x21[4] = (ulong)param_1;
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



/* Entry: 1088d5464; end: 1088d5493;  */

void FUN_1088d5464(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001088dd2c8();
  FUN_1088d5600();
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



/* Entry: 1088d5494; end: 1088d54cb;  */

long FUN_1088d5494(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1088d54cc; end: 1088d54df;  */

void FUN_1088d54cc(void)

{
  FUN_1088d5494();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d54e0; end: 1088d54eb;  */

undefined ** FUN_1088d54e0(void)

{
  return &PTR_DAT_110a87228;
}



/* Entry: 1088d54ec; end: 1088d552b;  */

void FUN_1088d54ec(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
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



/* Entry: 1088d552c; end: 1088d55ff;  */

long * FUN_1088d552c(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x0001088dd1cc();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x0001088dcfa8();
    func_0x0001088ddc6c();
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



/* Entry: 1088d5600; end: 1088d5613;  */

void FUN_1088d5600(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001088dd2c8();
  FUN_1088d5600();
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



/* Entry: 1088d5614; end: 1088d5673;  */

long FUN_1088d5614(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  func_0x0001088dd6fc();
  func_0x0001088dd73c();
  func_0x0001088dd8b8();
  func_0x0001088dd8b0();
  func_0x0001088ddb58();
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010bceb348();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010bceb968();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088d5674; end: 1088d5677;  */

long FUN_1088d5674(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  func_0x0001088dd6fc();
  func_0x0001088dd73c();
  func_0x0001088dd8b8();
  func_0x0001088dd8b0();
  func_0x0001088ddb58();
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010bceb348();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010bceb968();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088d5678; end: 1088d568b;  */

void FUN_1088d5678(void)

{
  FUN_1088d5614();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d568c; end: 1088d5697;  */

undefined ** FUN_1088d568c(void)

{
  return &PTR_DAT_110a87270;
}



/* Entry: 1088d5698; end: 1088d56fb;  */

void FUN_1088d5698(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0001088dd058();
  func_0x0001088dd504();
  func_0x0001088dd614();
  func_0x0001088dd6ec();
  func_0x0001088dd8c0();
  func_0x0001088dd97c();
  func_0x0001088ddb60();
  func_0x0001088dd904();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010bceb3ec(unaff_x19[10]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010bceba0c(unaff_x19[0xb]);
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



/* Entry: 1088d56fc; end: 1088d5a33;  */

long * FUN_1088d56fc(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar5;
  long *unaff_x22;
  undefined8 *puVar6;
  int iVar7;
  
  func_0x0001088dcfe8();
  func_0x0001088dd33c(param_1[3]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar3 = (long *)*unaff_x22;
      goto LAB_1088d5734;
    }
  }
  else {
    plVar3 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d5734:
      param_4 = (long *)&UNK_10f4eb535;
      func_0x0001088dd2ec();
      func_0x0001088dcd10();
      param_1 = plVar3;
      unaff_x20 = plVar3;
    }
  }
  func_0x0001088dd170();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar3 = (long *)*unaff_x22;
      goto LAB_1088d5768;
    }
  }
  else {
    plVar3 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d5768:
      param_4 = (long *)&UNK_10f4eb55f;
      func_0x0001088dd2ec();
      func_0x0001088dcce0();
      param_1 = plVar3;
      unaff_x20 = plVar3;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar3 = (long *)*unaff_x22;
      goto LAB_1088d57a0;
    }
  }
  else {
    plVar3 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d57a0:
      param_4 = (long *)&UNK_10f4eb58c;
      func_0x0001088dd2ec();
      func_0x0001088dcd24();
      param_1 = plVar3;
      unaff_x20 = plVar3;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x30));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar3 = (long *)*unaff_x22;
      goto LAB_1088d57d8;
    }
  }
  else {
    plVar3 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d57d8:
      param_4 = (long *)&UNK_10f4eb5be;
      func_0x0001088dd2ec();
      func_0x0001088dd724();
      func_0x0001088dcf10();
      param_1 = plVar3;
      unaff_x20 = plVar3;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x38));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      unaff_x22 = (long *)*unaff_x22;
      goto LAB_1088d5814;
    }
  }
  else if ((int)param_2 != 0) {
LAB_1088d5814:
    param_4 = (long *)&UNK_10f4eb5ea;
    func_0x0001088dd2ec();
    func_0x0001088dd9f4();
    func_0x0001088dcf10();
    param_1 = unaff_x22;
    unaff_x20 = unaff_x22;
  }
  uVar2 = *(uint *)(unaff_x21 + 0x10);
  puVar6 = (undefined8 *)(ulong)uVar2;
  if ((uVar2 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x50);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    param_1 = (long *)0x6;
    func_0x0001088dcfb4();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x58);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_1 = (long *)0x7;
    func_0x0001088dcfb4();
    unaff_x20 = param_1;
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x40));
  if (param_2 < 0) {
    param_2 = 0;
    if (puVar6[1] != 0) {
      puVar4 = (undefined8 *)*puVar6;
      goto LAB_1088d5884;
    }
  }
  else {
    puVar4 = puVar6;
    if ((int)param_2 != 0) {
LAB_1088d5884:
      param_4 = (long *)&UNK_10f4eb617;
      func_0x0001088dd2ec(puVar4);
      param_2 = 8;
      param_1 = unaff_x19;
      func_0x0001088dcf10();
      unaff_x20 = param_1;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x48));
  if (param_2 < 0) {
    if (puVar6[1] == 0) goto LAB_1088d58e0;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if ((int)param_2 == 0) goto LAB_1088d58e0;
  param_4 = (long *)&UNK_10f4eb649;
  func_0x0001088dd2ec(puVar6);
  func_0x0001088dcf10();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_1088d58e0:
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
      iVar7 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      param_3 = (ulong)(uint)(iVar5 - iVar7);
      if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar7);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1088d5a34; end: 1088d5a4b;  */

void FUN_1088d5a34(void)

{
  func_0x00010bceb458();
  FUN_1088dcc88();
  return;
}



/* Entry: 1088d5a4c; end: 1088d5bc7;  */

void FUN_1088d5a4c(ulong *param_1,long param_2,ulong *param_3)

{
  undefined1 in_ZR;
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong extraout_x8_06;
  long unaff_x20;
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
  func_0x0001088dd0d8();
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd6a0();
  }
  func_0x0001088dd1ac();
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd8d8();
  }
  func_0x0001088dd260();
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd74c();
  }
  func_0x0001088dd324(*(undefined8 *)(unaff_x20 + 0x38));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd8d0();
  }
  func_0x0001088dd324(*(undefined8 *)(unaff_x20 + 0x40));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd9ec();
  }
  func_0x0001088dd324(*(undefined8 *)(unaff_x20 + 0x48));
  lVar2 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088ddb44();
  }
  func_0x0001088dd654();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088ddc28();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar1;
        func_0x0001088dca1c();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        func_0x00010bceb3cc();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x58);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dca4c();
        *(ulong **)(unaff_x21 + 0x58) = puVar1;
        param_1 = puVar1;
      }
      else {
        func_0x00010bceb9f0();
      }
    }
  }
  func_0x0001088dcd84();
  if ((extraout_x8_06 & 1) == 0) {
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



/* Entry: 1088d5bc8; end: 1088d5c57;  */

void FUN_1088d5bc8(void)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088dd540();
  func_0x0001088dd608(&PTR_FUN_110a84e78);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  lVar2 = unaff_x20 + 0x18;
  func_0x0001088dd704();
  *(long *)(unaff_x19 + 0x18) = lVar2;
  lVar2 = unaff_x20 + 0x20;
  func_0x0001088dd704();
  *(long *)(unaff_x19 + 0x20) = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001088ddb68();
  }
  *(long *)(unaff_x19 + 0x28) = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001088ddb68();
  }
  *(long *)(unaff_x19 + 0x30) = lVar2;
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  return;
}



/* Entry: 1088d5c58; end: 1088d5c83;  */

undefined8 FUN_1088d5c58(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d5c84(param_1);
  return param_1;
}



/* Entry: 1088d5c84; end: 1088d5cbb;  */

void FUN_1088d5c84(void)

{
  long unaff_x19;
  
  func_0x0001088dd2ac();
  func_0x0001088dd4fc();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d5cbc; end: 1088d5cbf;  */

undefined8 FUN_1088d5cbc(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d5c84(param_1);
  return param_1;
}



/* Entry: 1088d5cc0; end: 1088d5cd3;  */

void FUN_1088d5cc0(void)

{
  FUN_1088d5c58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d5cd4; end: 1088d5cdf;  */

undefined ** FUN_1088d5cd4(void)

{
  return &PTR_DAT_110a872b8;
}



/* Entry: 1088d5ce0; end: 1088d5d37;  */

void FUN_1088d5ce0(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x0001088dd058();
  func_0x0001088dd504();
  func_0x0001088dd904();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(unaff_x19 + 0x28));
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(unaff_x19 + 0x30));
    }
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
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



/* Entry: 1088d5d38; end: 1088d5ea3;  */

long * FUN_1088d5d38(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0001088dcde4();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001088dcff8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x0001088ddbe0();
    param_4 = param_1;
  }
  func_0x0001088dd934(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001088dd724();
    func_0x000107c280a0();
    param_4 = param_1;
  }
  func_0x0001088dd934(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001088dd9f4();
    func_0x000107c280a0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd348();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_01 + 8);
      param_3 = *(ulong *)(extraout_x8_01 + 0x10);
    }
    else {
      lVar2 = extraout_x8_01 + 8;
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



/* Entry: 1088d5ea4; end: 1088d5ea7;  */

void FUN_1088d5ea4(ulong *param_1,long param_2,ulong param_3)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  
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
  func_0x0001088dd0d8();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd6a0();
  }
  func_0x0001088dd654();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd6d0();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd4e4();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088ddc84();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd4e4();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  func_0x0001088dcd84();
  if ((extraout_x8_01 & 1) == 0) {
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



/* Entry: 1088d5ea8; end: 1088d5f77;  */

void FUN_1088d5ea8(ulong *param_1,long param_2,ulong param_3)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  
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
  func_0x0001088dd0d8();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd6a0();
  }
  func_0x0001088dd654();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd6d0();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd4e4();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088ddc84();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd4e4();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  func_0x0001088dcd84();
  if ((extraout_x8_01 & 1) == 0) {
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



/* Entry: 1088d5f78; end: 1088d5fe3;  */

void FUN_1088d5f78(undefined8 param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001088dcef0();
  func_0x0001088dd608(&PTR_FUN_110a85be8);
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
    func_0x0001088dc364();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088dd408();
    func_0x0001088c67e4();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  return;
}



/* Entry: 1088d5fe4; end: 1088d600f;  */

undefined8 FUN_1088d5fe4(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d6010(param_1);
  return param_1;
}



/* Entry: 1088d6010; end: 1088d6043;  */

void FUN_1088d6010(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c8ad8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010b5c3924();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d6044; end: 1088d6047;  */

undefined8 FUN_1088d6044(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d6010(param_1);
  return param_1;
}



/* Entry: 1088d6048; end: 1088d605b;  */

void FUN_1088d6048(void)

{
  FUN_1088d5fe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d605c; end: 1088d6067;  */

undefined ** FUN_1088d605c(void)

{
  return &PTR_DAT_110a87300;
}



/* Entry: 1088d6068; end: 1088d60ab;  */

void FUN_1088d6068(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0001088dd288();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      FUN_1088c8b48(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0001088ddba4();
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



/* Entry: 1088d60ac; end: 1088d618b;  */

long * FUN_1088d60ac(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x30);
    func_0x0001088dcfa8();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001088dd910();
    func_0x0001088dd0e8();
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



/* Entry: 1088d618c; end: 1088d618f;  */

void FUN_1088d618c(ulong *param_1)

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
  func_0x0001088dd654();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd6c4();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dc364();
        *(ulong **)(unaff_x21 + 0x18) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088c8cc8();
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



/* Entry: 1088d6190; end: 1088d6213;  */

void FUN_1088d6190(ulong *param_1)

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
  func_0x0001088dd654();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd6c4();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dc364();
        *(ulong **)(unaff_x21 + 0x18) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088c8cc8();
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



/* Entry: 1088d6214; end: 1088d6247;  */

long FUN_1088d6214(long param_1)

{
  func_0x0001088dd2fc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1088d6260(param_1);
  }
  return param_1;
}



/* Entry: 1088d6248; end: 1088d624b;  */

long FUN_1088d6248(long param_1)

{
  func_0x0001088dd2fc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1088d6260(param_1);
  }
  return param_1;
}



/* Entry: 1088d624c; end: 1088d625f;  */

void FUN_1088d624c(void)

{
  FUN_1088d6214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d6260; end: 1088d6283;  */

void FUN_1088d6260(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001088dd50c();
  if ((bool)in_ZR) {
    func_0x0001088dd46c();
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088d6284; end: 1088d628f;  */

undefined ** FUN_1088d6284(void)

{
  return &PTR_DAT_110a87340;
}



/* Entry: 1088d6290; end: 1088d62bf;  */

void FUN_1088d6290(long param_1)

{
  ulong *puVar1;
  
  FUN_1088d6260();
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



/* Entry: 1088d62c0; end: 1088d637b;  */

long * FUN_1088d62c0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0001088dcfe8();
  if (*(int *)((long)param_1 + 0x1c) == 2) {
    func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x10));
    if (param_2 < 0) {
      unaff_x22 = (long *)*unaff_x22;
    }
    param_4 = (long *)&UNK_10f4eb67c;
    func_0x0001088dd2ec();
    func_0x0001088dcce0();
    unaff_x20 = unaff_x22;
  }
  else {
    unaff_x22 = param_1;
    if (*(int *)((long)param_1 + 0x1c) == 1) {
      func_0x0001088dd130();
      if (*(int *)(unaff_x21 + 0x1c) == 1) {
        unaff_x22 = *(long **)(unaff_x21 + 0x10);
      }
      else {
        unaff_x22 = (long *)0x0;
      }
      func_0x0001088dd6e4();
      func_0x000107c280ac(unaff_x22,param_1);
      unaff_x20 = unaff_x22;
    }
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0001088dd348();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x0001088dd474();
    if (*unaff_x22 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar3 = ((int)*unaff_x22 - (int)param_4) + 0x10;
        iVar2 = (int)param_3;
        param_3 = (ulong)(uint)(iVar2 - iVar3);
        if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar3);
        param_4 = unaff_x22;
        func_0x000107c303e4(unaff_x22,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar2);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 1088d637c; end: 1088d63e3;  */

void FUN_1088d637c(int param_1)

{
  undefined1 in_ZR;
  uint uVar1;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088dd50c();
  if ((bool)in_ZR) {
    func_0x0001088dd9b4(*(undefined8 *)(unaff_x19 + 0x10));
    uVar1 = param_1 + 1;
  }
  else if (extraout_w8 == 1) {
    func_0x0001088dd814(*(undefined8 *)(unaff_x19 + 0x10));
    uVar1 = (uint)(extraout_x8 >> 6) & 0x3ffffff;
  }
  else {
    uVar1 = 0;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    uVar1 = (int)lVar2 + uVar1;
  }
  *(uint *)(unaff_x19 + 0x18) = uVar1;
  return;
}



/* Entry: 1088d63e4; end: 1088d6487;  */

void FUN_1088d63e4(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x0001088ddc9c();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        FUN_1088d6260();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    if (iVar1 == 2) {
      func_0x0001088dd3c4();
      if (unaff_w24 != 2) {
        unaff_x21[2] = extraout_x8;
      }
      param_1 = unaff_x21 + 2;
      func_0x0001088dd9d4();
    }
    else if (iVar1 == 1) {
      unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
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



/* Entry: 1088d6488; end: 1088d6513;  */

void FUN_1088d6488(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0001088dd540();
  func_0x0001088dd608(&PTR_FUN_110a85d28);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088ddb14();
  FUN_1088d9560();
  lVar1 = unaff_x20 + 0x30;
  func_0x0001088dd704();
  *(long *)(unaff_x19 + 0x30) = lVar1;
  lVar1 = unaff_x20 + 0x38;
  func_0x0001088dd704();
  *(long *)(unaff_x19 + 0x38) = lVar1;
  if ((*(byte *)(unaff_x19 + 0x10) & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x0001088c67e4();
  }
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x21;
  *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(unaff_x20 + 0x48);
  return;
}



/* Entry: 1088d6514; end: 1088d653f;  */

undefined8 FUN_1088d6514(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d6540(param_1);
  return param_1;
}



/* Entry: 1088d6540; end: 1088d657b;  */

undefined8 FUN_1088d6540(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x30);
  func_0x0001088dd8b8();
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010b5c3924();
  }
  __ZdlPv();
  func_0x0001088dda20(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x0001088dd838();
  }
  return unaff_x19;
}



/* Entry: 1088d657c; end: 1088d657f;  */

undefined8 FUN_1088d657c(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d6540(param_1);
  return param_1;
}


