/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088d1e1c; end: 1088d1ecf;  */

void FUN_1088d1e1c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
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
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_1088c6d60(*(undefined8 *)(unaff_x19 + 0x38));
    func_0x0001088dd30c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088dd4c8();
  return;
}



/* Entry: 1088d1ed0; end: 1088d1ed3;  */

void FUN_1088d1ed0(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
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
  func_0x0001088dd1ac();
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd8d8();
  }
  func_0x0001088dd260();
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
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
      func_0x0001088dd9dc();
      *(ulong **)(unaff_x21 + 0x38) = param_1;
    }
    else {
      FUN_1088c8390();
    }
  }
  func_0x0001088dcd84();
  if ((extraout_x8_03 & 1) != 0) {
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



/* Entry: 1088d1ed4; end: 1088d1eff;  */

undefined8 FUN_1088d1ed4(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d1f00(param_1);
  return param_1;
}



/* Entry: 1088d1f00; end: 1088d1f27;  */

void FUN_1088d1f00(void)

{
  long unaff_x19;
  
  func_0x0001088dd2ac();
  func_0x0001088dd4fc();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_1088c7e0c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d1f28; end: 1088d1f2b;  */

undefined8 FUN_1088d1f28(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d1f00(param_1);
  return param_1;
}



/* Entry: 1088d1f2c; end: 1088d1f3f;  */

void FUN_1088d1f2c(void)

{
  FUN_1088d1ed4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d1f40; end: 1088d1f4b;  */

undefined ** FUN_1088d1f40(void)

{
  return &PTR_DAT_110a86c40;
}



/* Entry: 1088d1f4c; end: 1088d2017;  */

long * FUN_1088d1f4c(long *param_1,long param_2,ulong param_3,long *param_4)

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
      goto LAB_1088d1f84;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d1f84:
      param_4 = (long *)&UNK_10f4ead1e;
      func_0x0001088dd2ec();
      func_0x0001088dcd10();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x28);
    func_0x0001088dd790();
    func_0x0001088dcfb4();
    unaff_x20 = param_1;
  }
  func_0x0001088dd170();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088d1fe4;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088d1fe4;
  param_4 = (long *)&UNK_10f4ead5b;
  func_0x0001088dd2ec();
  func_0x0001088dcd24();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088d1fe4:
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



/* Entry: 1088d2018; end: 1088d209b;  */

void FUN_1088d2018(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
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
  func_0x0001088dd0c8();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_1088c6d60(*(undefined8 *)(unaff_x19 + 0x28));
    func_0x0001088dd30c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088dd4c8();
  return;
}



/* Entry: 1088d209c; end: 1088d209f;  */

void FUN_1088d209c(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x8_01;
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
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd6d0();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088dd9dc();
      *(ulong **)(unaff_x21 + 0x28) = param_1;
    }
    else {
      FUN_1088c8390();
    }
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



/* Entry: 1088d20a0; end: 1088d20d3;  */

long FUN_1088d20a0(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c7e0c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088d20d4; end: 1088d20e7;  */

void FUN_1088d20d4(void)

{
  FUN_1088d20a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d20e8; end: 1088d20f3;  */

undefined ** FUN_1088d20e8(void)

{
  return &PTR_DAT_110a86c90;
}



/* Entry: 1088d20f4; end: 1088d21c3;  */

void FUN_1088d20f4(void)

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



/* Entry: 1088d21c4; end: 1088d21d7;  */

void FUN_1088d21c4(ulong *param_1)

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



/* Entry: 1088d21d8; end: 1088d21fb;  */

undefined8 FUN_1088d21d8(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088d21fc; end: 1088d223f;  */

undefined8 * FUN_1088d21fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a84978;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1088d21c4(param_1,param_3);
  return param_1;
}



/* Entry: 1088d2240; end: 1088d2243;  */

undefined8 FUN_1088d2240(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088d2244; end: 1088d2257;  */

void FUN_1088d2244(void)

{
  FUN_1088d21d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d2258; end: 1088d22cf;  */

undefined ** FUN_1088d2258(void)

{
  return &PTR_DAT_110a86cd8;
}



/* Entry: 1088d22d0; end: 1088d2317;  */

long FUN_1088d22d0(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd448();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1088c7e0c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088d2318; end: 1088d232b;  */

void FUN_1088d2318(void)

{
  FUN_1088d22d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d232c; end: 1088d2337;  */

undefined ** FUN_1088d232c(void)

{
  return &PTR_DAT_110a86d20;
}



/* Entry: 1088d2338; end: 1088d237f;  */

void FUN_1088d2338(void)

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
      FUN_1088c7efc(unaff_x19[5]);
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



/* Entry: 1088d2380; end: 1088d24a7;  */

long * FUN_1088d2380(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *plVar4;
  int iVar5;
  
  func_0x0001088dcfe8();
  uVar2 = *(uint *)(param_1 + 2);
  plVar4 = (long *)(ulong)uVar2;
  if ((uVar2 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x0001088dcf7c();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x28);
    func_0x0001088dd790();
    func_0x0001088dcfb4();
    unaff_x20 = param_1;
  }
  func_0x0001088dd0f4();
  if (param_2 < 0) {
    if (plVar4[1] == 0) goto LAB_1088d23f4;
    plVar4 = (long *)*plVar4;
  }
  else if ((int)param_2 == 0) goto LAB_1088d23f4;
  param_4 = (long *)&UNK_10f4ead91;
  func_0x0001088dd2ec();
  func_0x0001088dcd24();
  param_1 = plVar4;
  unaff_x20 = plVar4;
LAB_1088d23f4:
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
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1088d24a8; end: 1088d24ab;  */

void FUN_1088d24a8(ulong *param_1,long param_2,ulong param_3)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
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
  func_0x0001088dd654();
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
        func_0x0001088dd9dc();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_1088c8390();
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



/* Entry: 1088d24ac; end: 1088d24df;  */

long FUN_1088d24ac(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088d24e0; end: 1088d24f3;  */

void FUN_1088d24e0(void)

{
  FUN_1088d24ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d24f4; end: 1088d24ff;  */

undefined ** FUN_1088d24f4(void)

{
  return &PTR_DAT_110a86d68;
}



/* Entry: 1088d2500; end: 1088d25cf;  */

void FUN_1088d2500(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088dd450();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dd588();
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



/* Entry: 1088d25d0; end: 1088d25d3;  */

void FUN_1088d25d0(ulong *param_1)

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



/* Entry: 1088d25d4; end: 1088d260b;  */

long FUN_1088d25d4(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd448();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088d260c; end: 1088d261f;  */

void FUN_1088d260c(void)

{
  FUN_1088d25d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d2620; end: 1088d262b;  */

undefined ** FUN_1088d2620(void)

{
  return &PTR_DAT_110a86da8;
}



/* Entry: 1088d262c; end: 1088d2663;  */

void FUN_1088d262c(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x0001088dd058();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x0001088dd660();
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



/* Entry: 1088d2664; end: 1088d26f7;  */

long * FUN_1088d2664(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0001088dcfe8();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x0001088dcf7c();
    unaff_x20 = param_1;
  }
  func_0x0001088dd0f4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088d26c4;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088d26c4;
  param_4 = (long *)&UNK_10f4eadc2;
  func_0x0001088dd2ec();
  func_0x0001088dcce0();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088d26c4:
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



/* Entry: 1088d26f8; end: 1088d275f;  */

void FUN_1088d26f8(long param_1)

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
    func_0x0001088dd668();
    func_0x0001088dd30c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088dd4c8();
  return;
}



/* Entry: 1088d2760; end: 1088d2763;  */

void FUN_1088d2760(ulong *param_1,long param_2,ulong param_3)

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
      func_0x0001088dd4e4();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      FUN_1088bf398();
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



/* Entry: 1088d2764; end: 1088d27a7;  */

long FUN_1088d2764(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088cef3c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088cf088();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088d27a8; end: 1088d27bb;  */

void FUN_1088d27a8(void)

{
  FUN_1088d2764();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d27bc; end: 1088d27c7;  */

undefined ** FUN_1088d27bc(void)

{
  return &PTR_DAT_110a86df0;
}



/* Entry: 1088d27c8; end: 1088d280b;  */

void FUN_1088d27c8(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0001088dd288();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x0001088ddb84();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0001088ce6c0(unaff_x19[4]);
    }
  }
  func_0x0001088dda68();
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



/* Entry: 1088d280c; end: 1088d290f;  */

long * FUN_1088d280c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
    func_0x0001088dce30();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001088dd910();
    func_0x0001088dd0e8();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x0001088dd014();
    func_0x0001088dd6dc();
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



/* Entry: 1088d2910; end: 1088d2913;  */

void FUN_1088d2910(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
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
        func_0x0001088ddbbc();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088ce820();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088dd560();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dc1ac();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088ce8a0();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
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



/* Entry: 1088d2914; end: 1088d2943;  */

undefined8 FUN_1088d2914(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  return param_1;
}



/* Entry: 1088d2944; end: 1088d2947;  */

undefined8 FUN_1088d2944(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  return param_1;
}



/* Entry: 1088d2948; end: 1088d295b;  */

void FUN_1088d2948(void)

{
  FUN_1088d2914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d295c; end: 1088d2967;  */

undefined ** FUN_1088d295c(void)

{
  return &PTR_DAT_110a86e38;
}



/* Entry: 1088d2968; end: 1088d299b;  */

void FUN_1088d2968(void)

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



/* Entry: 1088d299c; end: 1088d2a7b;  */

long * FUN_1088d299c(long *param_1,long param_2,ulong param_3,long *param_4)

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
      goto LAB_1088d29cc;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d29cc:
      param_4 = (long *)&UNK_10f4eadff;
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
      goto LAB_1088d2a00;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d2a00:
      param_4 = (long *)&UNK_10f4eae3e;
      func_0x0001088dd2ec();
      func_0x0001088dcce0();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd170();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088d2a48;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088d2a48;
  param_4 = (long *)&UNK_10f4eae78;
  func_0x0001088dd2ec();
  func_0x0001088dcd24();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088d2a48:
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



/* Entry: 1088d2a7c; end: 1088d2b03;  */

void FUN_1088d2a7c(long param_1)

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



/* Entry: 1088d2b04; end: 1088d2b07;  */

void FUN_1088d2b04(ulong *param_1,long param_2)

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



/* Entry: 1088d2b08; end: 1088d2b8f;  */

void FUN_1088d2b08(ulong *param_1,long param_2)

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



/* Entry: 1088d2b90; end: 1088d2bbf;  */

undefined8 FUN_1088d2b90(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  return param_1;
}



/* Entry: 1088d2bc0; end: 1088d2bc3;  */

undefined8 FUN_1088d2bc0(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  return param_1;
}



/* Entry: 1088d2bc4; end: 1088d2bd7;  */

void FUN_1088d2bc4(void)

{
  FUN_1088d2b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d2bd8; end: 1088d2be3;  */

undefined ** FUN_1088d2bd8(void)

{
  return &PTR_DAT_110a86e80;
}



/* Entry: 1088d2be4; end: 1088d2c17;  */

void FUN_1088d2be4(void)

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



/* Entry: 1088d2c18; end: 1088d2cf7;  */

long * FUN_1088d2c18(long *param_1,long param_2,ulong param_3,long *param_4)

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
      goto LAB_1088d2c48;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d2c48:
      param_4 = (long *)&UNK_10f4eaead;
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
      goto LAB_1088d2c7c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d2c7c:
      param_4 = (long *)&UNK_10f4eaee4;
      func_0x0001088dd2ec();
      func_0x0001088dcce0();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd170();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088d2cc4;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088d2cc4;
  param_4 = (long *)&UNK_10f4eaf1a;
  func_0x0001088dd2ec();
  func_0x0001088dcd24();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088d2cc4:
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



/* Entry: 1088d2cf8; end: 1088d2d7f;  */

void FUN_1088d2cf8(long param_1)

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



/* Entry: 1088d2d80; end: 1088d2d83;  */

void FUN_1088d2d80(ulong *param_1,long param_2)

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



/* Entry: 1088d2d84; end: 1088d2e0b;  */

void FUN_1088d2d84(ulong *param_1,long param_2)

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



/* Entry: 1088d2e0c; end: 1088d2e53;  */

long FUN_1088d2e0c(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd73c();
  func_0x0001088dd8b8();
  func_0x0001088dd8b0();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_1088d2914();
  }
  __ZdlPv();
  FUN_1088d9510(param_1 + 0x18);
  return param_1;
}



/* Entry: 1088d2e54; end: 1088d2e67;  */

void FUN_1088d2e54(void)

{
  FUN_1088d2e0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d2e68; end: 1088d2e73;  */

undefined ** FUN_1088d2e68(void)

{
  return &PTR_DAT_110a86ec8;
}



/* Entry: 1088d2e74; end: 1088d2ecb;  */

void FUN_1088d2e74(void)

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
  func_0x0001088dd97c();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_1088d2968(*(undefined8 *)(unaff_x19 + 0x48));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x50) = 0;
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



/* Entry: 1088d2ecc; end: 1088d30fb;  */

long * FUN_1088d2ecc(long *param_1,long param_2,ulong param_3,long *param_4)

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
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x0001088dcf7c();
    func_0x0001088ddb2c();
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x30));
  if (param_2 < 0) {
    plVar3 = plRam0000000000000000;
    param_2 = lRam0000000000000008;
    if (lRam0000000000000008 != 0) goto LAB_1088d2f30;
  }
  else if ((int)param_2 != 0) {
    plVar3 = (long *)0x0;
LAB_1088d2f30:
    param_4 = (long *)&UNK_10f4eaf58;
    func_0x0001088dd2ec();
    func_0x0001088dcce0();
    param_1 = plVar3;
    unaff_x20 = plVar3;
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x38));
  if (param_2 < 0) {
    plVar3 = plRam0000000000000000;
    param_2 = lRam0000000000000008;
    if (lRam0000000000000008 != 0) goto LAB_1088d2f68;
  }
  else if ((int)param_2 != 0) {
    plVar3 = (long *)0x0;
LAB_1088d2f68:
    param_4 = (long *)&UNK_10f4eaf85;
    func_0x0001088dd2ec();
    func_0x0001088dcd24();
    param_1 = plVar3;
    unaff_x20 = plVar3;
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x40));
  if (param_2 < 0) {
    plVar3 = plRam0000000000000000;
    if (lRam0000000000000008 == 0) goto LAB_1088d2fb8;
  }
  else {
    if ((int)param_2 == 0) goto LAB_1088d2fb8;
    plVar3 = (long *)0x0;
  }
  param_4 = (long *)&UNK_10f4eafac;
  func_0x0001088dd2ec();
  func_0x0001088dd724();
  func_0x0001088dcf10();
  param_1 = plVar3;
  unaff_x20 = plVar3;
LAB_1088d2fb8:
  if (*(int *)(unaff_x21 + 0x50) != 0) {
    func_0x0001088dd130();
    func_0x0001088dd9e4();
    func_0x0001088dd23c();
    unaff_x20 = param_1;
  }
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x48) + 0x28);
    param_1 = (long *)0x6;
    func_0x0001088dcfb4();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
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
  return unaff_x20;
}



/* Entry: 1088d30fc; end: 1088d3113;  */

void FUN_1088d30fc(void)

{
  FUN_1088d2a7c();
  FUN_1088dcc88();
  return;
}



/* Entry: 1088d3114; end: 1088d3127;  */

void FUN_1088d3114(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088dcd98();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088ddbf8();
  FUN_1088d3114();
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
  func_0x0001088dd324(*(undefined8 *)(unaff_x20 + 0x40));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd9ec();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x48);
    if (param_1 == (ulong *)0x0) {
      func_0x0001088dc66c();
      *(ulong **)(unaff_x21 + 0x48) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_1088d2b08();
    }
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  func_0x0001088dcd84();
  if ((extraout_x8_02 & 1) != 0) {
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



/* Entry: 1088d3128; end: 1088d3177;  */

long FUN_1088d3128(long param_1)

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
  return param_1;
}



/* Entry: 1088d3178; end: 1088d317b;  */

long FUN_1088d3178(long param_1)

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
  return param_1;
}



/* Entry: 1088d317c; end: 1088d318f;  */

void FUN_1088d317c(void)

{
  FUN_1088d3128();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d3190; end: 1088d319b;  */

undefined ** FUN_1088d3190(void)

{
  return &PTR_DAT_110a86f08;
}



/* Entry: 1088d319c; end: 1088d31ef;  */

void FUN_1088d319c(void)

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



/* Entry: 1088d31f0; end: 1088d33eb;  */

long * FUN_1088d31f0(long *param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x0001088dcfe8();
  func_0x0001088dd33c(param_1[3]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088d3228;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d3228:
      param_4 = (long *)&UNK_10f4eafde;
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
      goto LAB_1088d325c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d325c:
      param_4 = (long *)&UNK_10f4eb002;
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
      goto LAB_1088d3294;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d3294:
      param_4 = (long *)&UNK_10f4eb02c;
      func_0x0001088dd2ec();
      func_0x0001088dcd24();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x30));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088d32cc;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d32cc:
      param_4 = (long *)&UNK_10f4eb059;
      func_0x0001088dd2ec();
      func_0x0001088dd724();
      func_0x0001088dcf10();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x38));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088d3308;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d3308:
      param_4 = (long *)&UNK_10f4eb080;
      func_0x0001088dd2ec();
      func_0x0001088dd9f4();
      func_0x0001088dcf10();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x40));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088d3344;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d3344:
      param_4 = (long *)&UNK_10f4eb0ae;
      func_0x0001088dd2ec();
      func_0x0001088dda0c();
      func_0x0001088dcf10();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x48));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088d339c;
  }
  else if ((int)param_2 == 0) goto LAB_1088d339c;
  param_4 = (long *)&UNK_10f4eb0d2;
  func_0x0001088dd2ec();
  func_0x0001088dcf10();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_1088d339c:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x50) + 0x28);
    param_1 = (long *)0x8;
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



/* Entry: 1088d33ec; end: 1088d34f3;  */

void FUN_1088d33ec(long param_1)

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
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088dd4c8();
  return;
}



/* Entry: 1088d34f4; end: 1088d350b;  */

void FUN_1088d34f4(void)

{
  FUN_1088d2cf8();
  FUN_1088dcc88();
  return;
}



/* Entry: 1088d350c; end: 1088d365b;  */

void FUN_1088d350c(ulong *param_1,long param_2,ulong *param_3)

{
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
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088ddc28();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088dc6c0();
      *(ulong **)(unaff_x21 + 0x50) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_1088d2d84();
    }
  }
  func_0x0001088dcd84();
  if ((extraout_x8_06 & 1) != 0) {
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



/* Entry: 1088d365c; end: 1088d373f;  */

void FUN_1088d365c(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088d3704;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_1088d3c18();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088d3704;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_1088d3f54();
    }
    break;
  default:
    goto LAB_1088d3704;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088d3704;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_1088d4410();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_1088d3704;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_1088d529c();
    }
  }
  __ZdlPv();
LAB_1088d3704:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 1088d3740; end: 1088d3773;  */

long FUN_1088d3740(long param_1)

{
  func_0x0001088dd2fc();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1088d365c(param_1);
  }
  return param_1;
}



/* Entry: 1088d3774; end: 1088d3787;  */

void FUN_1088d3774(void)

{
  FUN_1088d3740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d3788; end: 1088d37a3;  */

undefined8 FUN_1088d3788(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  func_0x0001088dd6fc();
  func_0x0001088dd73c();
  return param_1;
}



/* Entry: 1088d37a4; end: 1088d37d7;  */

void FUN_1088d37a4(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_1088d365c();
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



/* Entry: 1088d37d8; end: 1088d3897;  */

long * FUN_1088d37d8(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x0001088dcf6c();
  uVar1 = *(uint *)(param_1 + 0x24);
  plVar2 = (long *)(ulong)uVar1;
  if (uVar1 == 1) {
    uVar4 = 0x40;
LAB_1088d380c:
    func_0x0001088dd208(uVar4,plVar2,*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = plVar2;
  }
  else if (uVar1 == 2) {
    uVar4 = 0x28;
    goto LAB_1088d380c;
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    func_0x0001088dd014();
    func_0x0001088dd6dc();
    func_0x0001088dd088();
    param_4 = plVar2;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x24);
  plVar2 = (long *)(ulong)uVar1;
  if (uVar1 == 4) {
    uVar4 = 0x14;
  }
  else {
    if (uVar1 != 5) goto LAB_1088d3864;
    uVar4 = 0x28;
  }
  func_0x0001088dd208(uVar4,plVar2,*(undefined8 *)(unaff_x20 + 0x18));
  param_4 = plVar2;
LAB_1088d3864:
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
  _memcpy(param_4,lVar3,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1088d3898; end: 1088d393b;  */

long FUN_1088d3898(long param_1)

{
  int extraout_w8;
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long extraout_x9_00;
  long lVar2;
  
  lVar1 = param_1;
  func_0x0001088dd498((long)*(int *)(param_1 + 0x10));
  lVar2 = 0;
  if (extraout_w8 != 0) {
    lVar2 = extraout_x9 + 1;
  }
  switch(*(undefined4 *)(lVar1 + 0x24)) {
  case 1:
    FUN_1088d3e68(*(undefined8 *)(param_1 + 0x18));
    break;
  case 2:
    FUN_1088d40b8(*(undefined8 *)(param_1 + 0x18));
    break;
  default:
    goto LAB_1088d3910;
  case 4:
    func_0x0001088d45a8(*(undefined8 *)(param_1 + 0x18));
    break;
  case 5:
    func_0x0001088d53d8(*(undefined8 *)(param_1 + 0x18));
  }
  func_0x0001088dcca4();
LAB_1088d3910:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088dd730();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9_00 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 1088d393c; end: 1088d393f;  */

void FUN_1088d393c(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    *(int *)(unaff_x21 + 2) = *(int *)(unaff_x20 + 0x10);
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_1088d365c();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x0001088dd7e8();
        func_0x0001088ddb08();
        func_0x0001088d3940();
        goto LAB_1088ccd60;
      }
      func_0x0001088ddc60();
      func_0x0001088dc714();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x0001088dd7e8();
        func_0x0001088dd968();
        func_0x0001088d3a24();
        goto LAB_1088ccd60;
      }
      func_0x0001088ddc60();
      func_0x0001088dc7a4();
      break;
    default:
      goto LAB_1088ccd60;
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001088dd7e8();
        func_0x0001088d3aac();
        goto LAB_1088ccd60;
      }
      func_0x0001088ddc60();
      FUN_1088dc7f8();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0001088dd7e8();
        func_0x0001088d3b44();
        goto LAB_1088ccd60;
      }
      func_0x0001088ddc60();
      FUN_1088dc89c();
    }
    unaff_x21[3] = (ulong)param_1;
  }
LAB_1088ccd60:
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



/* Entry: 1088d3940; end: 1088d3aab;  */

void FUN_1088d3940(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
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
  func_0x0001088dd1ac();
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd828();
  }
  func_0x0001088dd260();
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x19 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
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



/* Entry: 1088d3aac; end: 1088d3c17;  */

void FUN_1088d3aac(ulong *param_1,long param_2)

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



/* Entry: 1088d3c18; end: 1088d3c4f;  */

undefined8 FUN_1088d3c18(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  func_0x0001088dd6fc();
  func_0x0001088dd73c();
  return param_1;
}



/* Entry: 1088d3c50; end: 1088d3c63;  */

void FUN_1088d3c50(void)

{
  FUN_1088d3c18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d3c64; end: 1088d3c6f;  */

undefined ** FUN_1088d3c64(void)

{
  return &PTR_DAT_110a86f88;
}



/* Entry: 1088d3c70; end: 1088d3caf;  */

void FUN_1088d3c70(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd030();
  func_0x0001088dd5a8();
  func_0x0001088dd504();
  func_0x0001088dd614();
  func_0x0001088dd6ec();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
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



/* Entry: 1088d3cb0; end: 1088d3e67;  */

long * FUN_1088d3cb0(long *param_1,long *param_2,ulong param_3,long *param_4)

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
  
  func_0x0001088dd4ec();
  func_0x0001088dd33c(param_1[2]);
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088d3ce8;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d3ce8:
      param_4 = (long *)&UNK_10f4eb0fe;
      func_0x0001088dd2ec();
      func_0x0001088dd51c();
      func_0x0001088dd008();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088d3d24;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d3d24:
      param_4 = (long *)&UNK_10f4eb128;
      func_0x0001088dd2ec();
      func_0x0001088dd528();
      func_0x0001088dd008();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x20));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_1088d3d60;
  }
  else if ((int)param_2 != 0) {
LAB_1088d3d60:
    param_4 = (long *)&UNK_10f4eb15b;
    func_0x0001088dd2ec();
    param_2 = (long *)0x3;
    func_0x0001088dd008();
    param_1 = unaff_x19;
    unaff_x21 = unaff_x19;
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088d3da0;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d3da0:
      param_4 = (long *)&UNK_10f4eb18d;
      func_0x0001088dd2ec();
      func_0x0001088dd724();
      func_0x0001088dd008();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    func_0x0001088dd0bc();
    param_2 = param_1;
    func_0x0001088dd9e4();
    func_0x0001088dd088();
    unaff_x21 = param_1;
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x30));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088d3e14;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088d3e14;
  param_4 = (long *)&UNK_10f4eb1b9;
  func_0x0001088dd2ec();
  func_0x0001088dda0c();
  func_0x0001088dd008();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_1088d3e14:
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    func_0x0001088dd0bc();
    func_0x0001088ddbc4();
    func_0x0001088dd088();
    unaff_x21 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x0001088dd348();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088dda00();
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



/* Entry: 1088d3e68; end: 1088d3f4f;  */

long FUN_1088d3e68(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x9;
  long unaff_x19;
  long lVar3;
  
  func_0x0001088dcdac();
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
  func_0x0001088dd148();
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  func_0x0001088dd0c8();
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  func_0x0001088dd1bc();
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  func_0x0001088dd22c();
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  iVar1 = -9;
  if (*(int *)(unaff_x19 + 0x38) != 0) {
    func_0x0001088dd94c();
    iVar1 = extraout_w8;
  }
  if (*(int *)(unaff_x19 + 0x3c) != 0) {
    func_0x0001088dd91c((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x3c)) * iVar1 + 0x280U >> 6);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
    lVar2 = extraout_x8_04;
    if (extraout_x8_04 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(unaff_x19 + 0x40) = (int)lVar3;
  return lVar3;
}



/* Entry: 1088d3f50; end: 1088d3f53;  */

void FUN_1088d3f50(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
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
  func_0x0001088dd1ac();
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd828();
  }
  func_0x0001088dd260();
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x19 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
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



/* Entry: 1088d3f54; end: 1088d3f83;  */

undefined8 FUN_1088d3f54(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  return param_1;
}



/* Entry: 1088d3f84; end: 1088d3f97;  */

void FUN_1088d3f84(void)

{
  FUN_1088d3f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d3f98; end: 1088d3fa3;  */

undefined ** FUN_1088d3f98(void)

{
  return &PTR_DAT_110a86fd0;
}



/* Entry: 1088d3fa4; end: 1088d3fd7;  */

void FUN_1088d3fa4(void)

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



/* Entry: 1088d3fd8; end: 1088d40b7;  */

long * FUN_1088d3fd8(long *param_1,long param_2,ulong param_3,long *param_4)

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
      goto LAB_1088d4008;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d4008:
      param_4 = (long *)&UNK_10f4eb1f2;
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
      goto LAB_1088d403c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d403c:
      param_4 = (long *)&UNK_10f4eb220;
      func_0x0001088dd2ec();
      func_0x0001088dcce0();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd170();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088d4084;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088d4084;
  param_4 = (long *)&UNK_10f4eb253;
  func_0x0001088dd2ec();
  func_0x0001088dcd24();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088d4084:
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


