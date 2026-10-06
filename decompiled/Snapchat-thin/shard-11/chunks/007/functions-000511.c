/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088e6328; end: 1088e632b;  */

void FUN_1088e6328(void)

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



/* Entry: 1088e632c; end: 1088e6373;  */

long FUN_1088e632c(long param_1)

{
  func_0x0001088e9a50();
  func_0x0001088e9d84();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e6374; end: 1088e6387;  */

void FUN_1088e6374(void)

{
  FUN_1088e632c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e6388; end: 1088e6393;  */

undefined ** FUN_1088e6388(void)

{
  return &PTR_DAT_110a8a130;
}



/* Entry: 1088e6394; end: 1088e63db;  */

void FUN_1088e6394(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0001088e9b70();
  func_0x0001088e9fa4();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x0001088e9f28();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_1088bf358(unaff_x19[5]);
    }
  }
  func_0x0001088e9ea8();
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



/* Entry: 1088e63dc; end: 1088e6493;  */

long * FUN_1088e63dc(long *param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x0001088e9a14();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x20);
    func_0x0001088e9894();
    unaff_x20 = param_1;
  }
  func_0x0001088e9c68(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_1088e6448;
  }
  else if ((int)param_2 == 0) goto LAB_1088e6448;
  param_4 = (long *)&UNK_10f4ebe96;
  func_0x0001088e9b90();
  func_0x0001088e9984();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_1088e6448:
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x18);
    param_1 = (long *)0x3;
    func_0x0001088e9990();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088e9a9c();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088e9d5c();
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



/* Entry: 1088e6494; end: 1088e6517;  */

void FUN_1088e6494(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x0001088e9abc();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  func_0x0001088e9f98();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      func_0x0001088e9f20();
      func_0x0001088e9b2c();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(unaff_x19 + 0x28));
      func_0x0001088e9b2c();
    }
  }
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar2 & 0xfffffffffffffffe;
    uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar2 < 0) {
      uVar2 = *(ulong *)(uVar3 + 0x10);
    }
  }
  func_0x0001088e9d18(uVar2);
  return;
}



/* Entry: 1088e6518; end: 1088e651b;  */

void FUN_1088e6518(ulong *param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x21;
  uint unaff_w23;
  
  func_0x0001088e98cc();
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    func_0x0001088e9f48();
  }
  func_0x0001088e9ba0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088e9c20();
    }
    func_0x0001088e9df8();
  }
  func_0x0001088e9e9c();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088e9fb0();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088e9b0c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088e9b0c();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  func_0x0001088e9824();
  if ((extraout_x8_00 & 1) == 0) {
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



/* Entry: 1088e651c; end: 1088e6547;  */

undefined8 FUN_1088e651c(undefined8 param_1)

{
  func_0x0001088e9a50();
  func_0x0001088e9e84();
  func_0x0001088e9d84();
  return param_1;
}



/* Entry: 1088e6548; end: 1088e654b;  */

undefined8 FUN_1088e6548(undefined8 param_1)

{
  func_0x0001088e9a50();
  func_0x0001088e9e84();
  func_0x0001088e9d84();
  return param_1;
}



/* Entry: 1088e654c; end: 1088e655f;  */

void FUN_1088e654c(void)

{
  FUN_1088e651c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e6560; end: 1088e656b;  */

undefined ** FUN_1088e6560(void)

{
  return &PTR_DAT_110a8a198;
}



/* Entry: 1088e656c; end: 1088e659f;  */

void FUN_1088e656c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088e9b7c();
  func_0x000107c3025c(unaff_x19 + 0x18);
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



/* Entry: 1088e65a0; end: 1088e6663;  */

long * FUN_1088e65a0(long *param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x0001088e9a14();
  func_0x0001088e9c68(param_1[2]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088e65d8;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088e65d8:
      param_4 = (long *)&UNK_10f4ebee9;
      func_0x0001088e9b90();
      func_0x0001088e9eb4();
      func_0x0001088e9984();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088e9c68(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088e6630;
  }
  else if ((int)param_2 == 0) goto LAB_1088e6630;
  param_4 = (long *)&UNK_10f4ebf18;
  func_0x0001088e9b90();
  func_0x0001088e9984();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_1088e6630:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088e9a9c();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088e9d5c();
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



/* Entry: 1088e6664; end: 1088e66df;  */

long FUN_1088e6664(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  
  func_0x0001088e9ad0();
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
  func_0x0001088e9c38(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088e9b2c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar1 + lVar3;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 1088e66e0; end: 1088e66e3;  */

void FUN_1088e66e0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e9a30();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e9c20();
    }
    func_0x0001088e9e7c();
  }
  func_0x0001088e9ba0();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e9c20();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9bf0();
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



/* Entry: 1088e66e4; end: 1088e674f;  */

void FUN_1088e66e4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e9a30();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e9c20();
    }
    func_0x0001088e9e7c();
  }
  func_0x0001088e9ba0();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e9c20();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9bf0();
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



/* Entry: 1088e6750; end: 1088e679f;  */

long FUN_1088e6750(long param_1)

{
  func_0x0001088e9a50();
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_1088e651c();
  }
  __ZdlPv();
  func_0x0001088e9d8c();
  return param_1;
}



/* Entry: 1088e67a0; end: 1088e67b3;  */

void FUN_1088e67a0(void)

{
  FUN_1088e6750();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e67b4; end: 1088e67bf;  */

undefined ** FUN_1088e67b4(void)

{
  return &PTR_DAT_110a8a1e8;
}



/* Entry: 1088e67c0; end: 1088e680f;  */

void FUN_1088e67c0(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0001088e9d44();
  func_0x000107c3025c(unaff_x19 + 6);
  func_0x0001088e9fa4();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x0001088e9e54();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_1088e656c(unaff_x19[8]);
    }
  }
  func_0x0001088e9ea8();
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



/* Entry: 1088e6810; end: 1088e692f;  */

long * FUN_1088e6810(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  func_0x0001088e9a14();
  uVar3 = *(uint *)(param_1 + 2);
  if ((uVar3 & 1) != 0) {
    param_2 = *(ulong *)(unaff_x21 + 0x38);
    func_0x0001088e9894();
    unaff_x20 = param_1;
  }
  iVar5 = *(int *)(unaff_x21 + 0x20);
  puVar6 = (undefined8 *)0x0;
  while (iVar7 = (int)puVar6, iVar5 != iVar7) {
    uVar4 = *(ulong *)(unaff_x21 + 0x18);
    puVar2 = (ulong *)(unaff_x21 + 0x18);
    if ((uVar4 & 1) != 0) {
      puVar2 = (ulong *)(uVar4 + (long)iVar7 * 8 + 7);
    }
    param_2 = *puVar2;
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    param_1 = (long *)0x2;
    func_0x0001088e9990();
    unaff_x20 = param_1;
    puVar6 = (undefined8 *)(ulong)(iVar7 + 1);
  }
  func_0x0001088e9c68(*(undefined8 *)(unaff_x21 + 0x30));
  if ((long)param_2 < 0) {
    if (puVar6[1] == 0) goto LAB_1088e68c4;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if ((int)param_2 == 0) goto LAB_1088e68c4;
  param_4 = (long *)&UNK_10f4ebf4a;
  func_0x0001088e9b90(puVar6);
  func_0x0001088e9984();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_1088e68c4:
  if ((uVar3 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x40) + 0x20);
    param_1 = (long *)0x4;
    func_0x0001088e9990();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0001088e9a9c();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x0001088e9d5c();
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
  return unaff_x20;
}



/* Entry: 1088e6930; end: 1088e69cb;  */

void FUN_1088e6930(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  uint unaff_w21;
  long unaff_x22;
  
  func_0x0001088e97d8();
  while (unaff_x22 != 0) {
    func_0x0001088e9e28();
    func_0x0001088e9f8c();
  }
  func_0x0001088e9c38(*(undefined8 *)(unaff_x19 + 0x30));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088e9b2c();
  }
  func_0x0001088e9f98();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      func_0x0001088e9e4c();
      func_0x0001088e9b2c();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      FUN_1088e6664(*(undefined8 *)(unaff_x19 + 0x40));
      func_0x0001088e99fc();
    }
  }
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar2 & 0xfffffffffffffffe;
    uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar2 < 0) {
      uVar2 = *(ulong *)(uVar3 + 0x10);
    }
  }
  func_0x0001088e9d18(uVar2);
  return;
}



/* Entry: 1088e69cc; end: 1088e69cf;  */

void FUN_1088e69cc(ulong *param_1,long param_2)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  uint unaff_w23;
  
  func_0x0001088e98cc();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
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
  func_0x0001088e9e9c();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088e9f54();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088e9b0c();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088e9730();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_1088e66e4();
      }
    }
  }
  func_0x0001088e9824();
  if ((extraout_x8_00 & 1) == 0) {
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



/* Entry: 1088e69d0; end: 1088e6a03;  */

long FUN_1088e69d0(long param_1)

{
  func_0x0001088e9a50();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e6a04; end: 1088e6a17;  */

void FUN_1088e6a04(void)

{
  FUN_1088e69d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e6a18; end: 1088e6a23;  */

undefined ** FUN_1088e6a18(void)

{
  return &PTR_DAT_110a8a240;
}



/* Entry: 1088e6a24; end: 1088e6a57;  */

void FUN_1088e6a24(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088e9c00();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9c60();
  }
  func_0x0001088e9e8c();
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



/* Entry: 1088e6a58; end: 1088e6ac3;  */

long * FUN_1088e6a58(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e98a8();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9794();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9914();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9a9c();
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
  return param_4;
}



/* Entry: 1088e6ac4; end: 1088e6b1f;  */

void FUN_1088e6ac4(int param_1)

{
  ulong extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x0001088e9c00();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088e9c58();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0001088e993c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088e6b20; end: 1088e6b23;  */

void FUN_1088e6b20(void)

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



/* Entry: 1088e6b24; end: 1088e6b47;  */

undefined8 FUN_1088e6b24(undefined8 param_1)

{
  func_0x0001088e9a50();
  return param_1;
}



/* Entry: 1088e6b48; end: 1088e6b5b;  */

void FUN_1088e6b48(void)

{
  FUN_1088e6b24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e6b5c; end: 1088e6bcf;  */

undefined ** FUN_1088e6b5c(void)

{
  return &PTR_DAT_110a8a2a0;
}



/* Entry: 1088e6bd0; end: 1088e6bf3;  */

undefined8 FUN_1088e6bd0(undefined8 param_1)

{
  func_0x0001088e9a50();
  return param_1;
}



/* Entry: 1088e6bf4; end: 1088e6c07;  */

void FUN_1088e6bf4(void)

{
  FUN_1088e6bd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e6c08; end: 1088e6c7b;  */

undefined ** FUN_1088e6c08(void)

{
  return &PTR_DAT_110a8a2f0;
}



/* Entry: 1088e6c7c; end: 1088e6c9f;  */

undefined8 FUN_1088e6c7c(undefined8 param_1)

{
  func_0x0001088e9a50();
  return param_1;
}



/* Entry: 1088e6ca0; end: 1088e6cb3;  */

void FUN_1088e6ca0(void)

{
  FUN_1088e6c7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e6cb4; end: 1088e6d27;  */

undefined ** FUN_1088e6cb4(void)

{
  return &PTR_DAT_110a8a350;
}



/* Entry: 1088e6d28; end: 1088e6d4b;  */

undefined8 FUN_1088e6d28(undefined8 param_1)

{
  func_0x0001088e9a50();
  return param_1;
}



/* Entry: 1088e6d4c; end: 1088e6d5f;  */

void FUN_1088e6d4c(void)

{
  FUN_1088e6d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e6d60; end: 1088e6dd3;  */

undefined ** FUN_1088e6d60(void)

{
  return &PTR_DAT_110a8a3a8;
}



/* Entry: 1088e6dd4; end: 1088e6df7;  */

undefined8 FUN_1088e6dd4(undefined8 param_1)

{
  func_0x0001088e9a50();
  return param_1;
}



/* Entry: 1088e6df8; end: 1088e6e0b;  */

void FUN_1088e6df8(void)

{
  FUN_1088e6dd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e6e0c; end: 1088e6e7f;  */

undefined ** FUN_1088e6e0c(void)

{
  return &PTR_DAT_110a8a3f8;
}



/* Entry: 1088e6e80; end: 1088e6ea3;  */

undefined8 FUN_1088e6e80(undefined8 param_1)

{
  func_0x0001088e9a50();
  return param_1;
}



/* Entry: 1088e6ea4; end: 1088e6eb7;  */

void FUN_1088e6ea4(void)

{
  FUN_1088e6e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e6eb8; end: 1088e6ed7;  */

undefined ** FUN_1088e6eb8(void)

{
  return &PTR_DAT_110a8a448;
}



/* Entry: 1088e6ed8; end: 1088e6f37;  */

long * FUN_1088e6ed8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e98bc();
  if ((int)param_1[2] != 0) {
    func_0x0001088e9818();
    func_0x0001088e9b60();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088e9a9c();
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



/* Entry: 1088e6f38; end: 1088e6f7b;  */

long FUN_1088e6f38(long param_1)

{
  int extraout_w8;
  long lVar1;
  long extraout_x9;
  long lVar2;
  ulong uVar3;
  
  func_0x0001088e9f30((long)*(int *)(param_1 + 0x10));
  lVar1 = 0;
  if (extraout_w8 != 0) {
    lVar1 = extraout_x9 + 1;
  }
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



/* Entry: 1088e6f7c; end: 1088e6f9f;  */

undefined8 FUN_1088e6f7c(undefined8 param_1)

{
  func_0x0001088e9a50();
  return param_1;
}



/* Entry: 1088e6fa0; end: 1088e6fb3;  */

void FUN_1088e6fa0(void)

{
  FUN_1088e6f7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e6fb4; end: 1088e7027;  */

undefined ** FUN_1088e6fb4(void)

{
  return &PTR_DAT_110a8a4a0;
}



/* Entry: 1088e7028; end: 1088e704b;  */

undefined8 FUN_1088e7028(undefined8 param_1)

{
  func_0x0001088e9a50();
  return param_1;
}



/* Entry: 1088e704c; end: 1088e705f;  */

void FUN_1088e704c(void)

{
  FUN_1088e7028();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e7060; end: 1088e707f;  */

undefined ** FUN_1088e7060(void)

{
  return &PTR_DAT_110a8a4f0;
}



/* Entry: 1088e7080; end: 1088e70ff;  */

long * FUN_1088e7080(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e98bc();
  if ((int)param_1[2] != 0) {
    func_0x0001088e9818();
    func_0x0001088e9b60();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9b04();
    func_0x0001088e9d38();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9a9c();
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



/* Entry: 1088e7100; end: 1088e716f;  */

long FUN_1088e7100(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
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



/* Entry: 1088e7170; end: 1088e7193;  */

undefined8 FUN_1088e7170(undefined8 param_1)

{
  func_0x0001088e9a50();
  return param_1;
}



/* Entry: 1088e7194; end: 1088e71a7;  */

void FUN_1088e7194(void)

{
  FUN_1088e7170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e71a8; end: 1088e721b;  */

undefined ** FUN_1088e71a8(void)

{
  return &PTR_DAT_110a8a538;
}



/* Entry: 1088e721c; end: 1088e723f;  */

undefined8 FUN_1088e721c(undefined8 param_1)

{
  func_0x0001088e9a50();
  return param_1;
}



/* Entry: 1088e7240; end: 1088e7253;  */

void FUN_1088e7240(void)

{
  FUN_1088e721c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e7254; end: 1088e72c7;  */

undefined ** FUN_1088e7254(void)

{
  return &PTR_DAT_110a8a588;
}



/* Entry: 1088e72c8; end: 1088e72ff;  */

long FUN_1088e72c8(long param_1)

{
  func_0x0001088e9a50();
  func_0x0001088e9d84();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e7300; end: 1088e7313;  */

void FUN_1088e7300(void)

{
  FUN_1088e72c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e7314; end: 1088e731f;  */

undefined ** FUN_1088e7314(void)

{
  return &PTR_DAT_110a8a5e0;
}



/* Entry: 1088e7320; end: 1088e735f;  */

void FUN_1088e7320(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088e9b70();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001088e9f28();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 1088e7360; end: 1088e741b;  */

long * FUN_1088e7360(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long unaff_x22;
  int iVar3;
  
  func_0x0001088e9a14();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = *(long **)(unaff_x21 + 0x20);
    func_0x0001088e9894();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x28) != 0) {
    func_0x0001088e9ecc();
    param_2 = param_1;
    func_0x0001088e9b04();
    func_0x0001088e9f0c();
    unaff_x20 = param_1;
  }
  func_0x0001088e9c68(*(undefined8 *)(unaff_x21 + 0x18));
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_1088e73e8;
  }
  else if ((int)param_2 == 0) goto LAB_1088e73e8;
  param_4 = (long *)&UNK_10f4ebf8a;
  func_0x0001088e9b90();
  func_0x0001088e9984();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_1088e73e8:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088e9a9c();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088e9d5c();
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



/* Entry: 1088e741c; end: 1088e74ab;  */

void FUN_1088e741c(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x0001088e9abc();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001088e9f20();
    func_0x0001088e9b2c();
  }
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar2 & 0xfffffffffffffffe;
    uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar2 < 0) {
      uVar2 = *(ulong *)(uVar3 + 0x10);
    }
  }
  func_0x0001088e9d18(uVar2);
  return;
}



/* Entry: 1088e74ac; end: 1088e74af;  */

void FUN_1088e74ac(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    func_0x0001088e9f48();
  }
  func_0x0001088e9ba0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088e9c20();
    }
    func_0x0001088e9df8();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9fb0();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088e9b0c();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
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



/* Entry: 1088e74b0; end: 1088e74d3;  */

undefined8 FUN_1088e74b0(undefined8 param_1)

{
  func_0x0001088e9a50();
  return param_1;
}



/* Entry: 1088e74d4; end: 1088e74e7;  */

void FUN_1088e74d4(void)

{
  FUN_1088e74b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e74e8; end: 1088e755b;  */

undefined ** FUN_1088e74e8(void)

{
  return &PTR_DAT_110a8a630;
}



/* Entry: 1088e755c; end: 1088e757f;  */

undefined8 FUN_1088e755c(undefined8 param_1)

{
  func_0x0001088e9a50();
  return param_1;
}



/* Entry: 1088e7580; end: 1088e7593;  */

void FUN_1088e7580(void)

{
  FUN_1088e755c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e7594; end: 1088e7607;  */

undefined ** FUN_1088e7594(void)

{
  return &PTR_DAT_110a8a680;
}



/* Entry: 1088e7608; end: 1088e763f;  */

long FUN_1088e7608(long param_1)

{
  func_0x0001088e9a50();
  func_0x0001088e9d84();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e7640; end: 1088e7653;  */

void FUN_1088e7640(void)

{
  FUN_1088e7608();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e7654; end: 1088e765f;  */

undefined ** FUN_1088e7654(void)

{
  return &PTR_DAT_110a8a6d0;
}



/* Entry: 1088e7660; end: 1088e769f;  */

void FUN_1088e7660(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088e9b70();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001088e9f28();
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



/* Entry: 1088e76a0; end: 1088e779b;  */

long * FUN_1088e76a0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  int iVar5;
  long *unaff_x22;
  int iVar6;
  
  plVar1 = param_1;
  plVar4 = param_3;
  plVar2 = param_2;
  if ((int)param_1[5] != 0) {
    func_0x0001088e9ee4();
    param_2 = plVar1;
    func_0x0001088e9d10();
    func_0x0001088e9854();
    plVar2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    func_0x0001088e9ee4();
    param_2 = plVar1;
    func_0x0001088e9b04();
    func_0x0001088e9854();
    plVar2 = plVar1;
  }
  func_0x0001088e9c68(param_1[3]);
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088e7744;
  }
  else if ((int)param_2 == 0) goto LAB_1088e7744;
  func_0x0001088e9b90();
  plVar2 = param_3;
  func_0x000107c280a0(param_3,3);
  plVar4 = unaff_x22;
LAB_1088e7744:
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(param_1[4] + 0x18);
    plVar2 = (long *)0x4;
    func_0x0001088e9a58();
  }
  if ((param_1[1] & 1U) == 0) {
    return plVar2;
  }
  func_0x0001088e9a9c();
  if ((long)plVar4 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*param_3 - (long)plVar2 < (long)(int)plVar4) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)plVar2) + 0x10;
      iVar5 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar3 = (long)plVar2 + (long)iVar6;
      plVar2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar2 + (long)iVar5);
  }
  _memcpy(plVar2,lVar3,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)plVar2 + (long)(int)plVar4);
}



/* Entry: 1088e779c; end: 1088e7833;  */

void FUN_1088e779c(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x0001088e9abc();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001088e9f20();
    func_0x0001088e9b2c();
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x0001088e9970(0xfffffff7);
  }
  if (*(int *)(unaff_x19 + 0x2c) != 0) {
    func_0x0001088e99d0();
  }
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar2 & 0xfffffffffffffffe;
    uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar2 < 0) {
      uVar2 = *(ulong *)(uVar3 + 0x10);
    }
  }
  func_0x0001088e9d18(uVar2);
  return;
}



/* Entry: 1088e7834; end: 1088e7837;  */

void FUN_1088e7834(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    func_0x0001088e9f48();
  }
  func_0x0001088e9ba0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088e9c20();
    }
    func_0x0001088e9df8();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9fb0();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088e9b0c();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x21 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
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



/* Entry: 1088e7838; end: 1088e785b;  */

undefined8 FUN_1088e7838(undefined8 param_1)

{
  func_0x0001088e9a50();
  return param_1;
}



/* Entry: 1088e785c; end: 1088e786f;  */

void FUN_1088e785c(void)

{
  FUN_1088e7838();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e7870; end: 1088e78e3;  */

undefined ** FUN_1088e7870(void)

{
  return &PTR_DAT_110a8a728;
}



/* Entry: 1088e78e4; end: 1088e790b;  */

undefined8 FUN_1088e78e4(undefined8 param_1)

{
  func_0x0001088e9a50();
  func_0x0001088e9e84();
  return param_1;
}



/* Entry: 1088e790c; end: 1088e791f;  */

void FUN_1088e790c(void)

{
  FUN_1088e78e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e7920; end: 1088e792b;  */

undefined ** FUN_1088e7920(void)

{
  return &PTR_DAT_110a8a780;
}



/* Entry: 1088e792c; end: 1088e7a1b;  */

void FUN_1088e792c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088e9b7c();
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



/* Entry: 1088e7a1c; end: 1088e7a1f;  */

void FUN_1088e7a1c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e9a30();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e9c20();
    }
    func_0x0001088e9e7c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9bf0();
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



/* Entry: 1088e7a20; end: 1088e7a47;  */

undefined8 FUN_1088e7a20(undefined8 param_1)

{
  func_0x0001088e9a50();
  func_0x0001088e9e84();
  return param_1;
}



/* Entry: 1088e7a48; end: 1088e7a5b;  */

void FUN_1088e7a48(void)

{
  FUN_1088e7a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e7a5c; end: 1088e7a67;  */

undefined ** FUN_1088e7a5c(void)

{
  return &PTR_DAT_110a8a7d0;
}



/* Entry: 1088e7a68; end: 1088e7b57;  */

void FUN_1088e7a68(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088e9b7c();
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



/* Entry: 1088e7b58; end: 1088e7b5b;  */

void FUN_1088e7b58(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e9a30();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e9c20();
    }
    func_0x0001088e9e7c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9bf0();
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



/* Entry: 1088e7b5c; end: 1088e7b7f;  */

undefined8 FUN_1088e7b5c(undefined8 param_1)

{
  func_0x0001088e9a50();
  return param_1;
}



/* Entry: 1088e7b80; end: 1088e7b93;  */

void FUN_1088e7b80(void)

{
  FUN_1088e7b5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


