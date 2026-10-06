/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b566330; end: 10b566333;  */

void FUN_10b566330(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10b566a20();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    func_0x00010b566b68();
  }
  func_0x00010b566b38(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    func_0x00010b566be0();
  }
  func_0x00010b566b38(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b566ac8();
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



/* Entry: 10b566334; end: 10b566377;  */

long FUN_10b566334(long param_1)

{
  func_0x00010b566b18();
  func_0x00010b566b60();
  func_0x00010b566bb8();
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  return param_1;
}



/* Entry: 10b566378; end: 10b56638b;  */

void FUN_10b566378(void)

{
  FUN_10b566334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56638c; end: 10b566397;  */

undefined ** FUN_10b56638c(void)

{
  return &PTR_DAT_110d090a0;
}



/* Entry: 10b566398; end: 10b5663df;  */

void FUN_10b566398(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b566a9c();
  func_0x00010b566bd8();
  func_0x000107c3025c(unaff_x19 + 0x20);
  func_0x000107c3025c(unaff_x19 + 0x28);
  func_0x000107c3025c(unaff_x19 + 0x30);
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



/* Entry: 10b5663e0; end: 10b566567;  */

long * FUN_10b5663e0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar2 = param_2;
  plVar4 = param_3;
  func_0x00010b566a50();
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b566418;
  }
  else if ((int)plVar2 != 0) {
LAB_10b566418:
    param_4 = (long *)&UNK_10f77b1c7;
    func_0x00010b566af4();
    plVar2 = (long *)0x1;
    param_1 = param_3;
    func_0x00010b566a44();
    param_2 = param_1;
  }
  func_0x00010b566b0c(*(undefined8 *)(unaff_x21 + 0x18));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b566458;
  }
  else if ((int)plVar2 != 0) {
LAB_10b566458:
    param_4 = (long *)&UNK_10f77b21e;
    func_0x00010b566af4();
    plVar2 = (long *)0x2;
    param_1 = param_3;
    func_0x00010b566a44();
    param_2 = param_1;
  }
  func_0x00010b566b0c(*(undefined8 *)(unaff_x21 + 0x20));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b566498;
  }
  else if ((int)plVar2 != 0) {
LAB_10b566498:
    param_4 = (long *)&UNK_10f77b279;
    func_0x00010b566af4();
    plVar2 = (long *)0x3;
    param_1 = param_3;
    func_0x00010b566a44();
    param_2 = param_1;
  }
  func_0x00010b566b0c(*(undefined8 *)(unaff_x21 + 0x28));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5664d8;
  }
  else if ((int)plVar2 != 0) {
LAB_10b5664d8:
    param_4 = (long *)&UNK_10f77b2cd;
    func_0x00010b566af4();
    plVar2 = (long *)0x4;
    param_1 = param_3;
    func_0x00010b566a44();
    param_2 = param_1;
  }
  func_0x00010b566b0c(*(undefined8 *)(unaff_x21 + 0x30));
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b566534;
  }
  else if ((int)plVar2 == 0) goto LAB_10b566534;
  param_4 = (long *)&UNK_10f77b322;
  func_0x00010b566af4();
  func_0x00010b566a44(param_3,5);
  param_1 = param_3;
  param_2 = param_3;
LAB_10b566534:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b566ba0();
  if ((long)plVar4 < 0) {
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010b566c3c();
  if (*param_1 - (long)param_4 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
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
  return (long *)((long)param_4 + (long)(int)plVar4);
}



/* Entry: 10b566568; end: 10b566633;  */

long FUN_10b566568(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b566a64();
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
  func_0x00010b566b20(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b566bac();
  }
  func_0x00010b566b20(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b566bac();
  }
  func_0x00010b566b20(*(undefined8 *)(unaff_x19 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b566bac();
  }
  func_0x00010b566b20(*(undefined8 *)(unaff_x19 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b566bac();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b566c48();
    lVar1 = extraout_x8_04;
    if (extraout_x8_04 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x38) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b566634; end: 10b566687;  */

void FUN_10b566634(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10b566a20();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    func_0x00010b566b68();
  }
  func_0x00010b566b38(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    func_0x00010b566be0();
  }
  func_0x00010b566b38(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010b566b38(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  func_0x00010b566b38(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b566b2c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b566ac8();
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



/* Entry: 10b566688; end: 10b5666c3;  */

void FUN_10b566688(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b566c34();
  }
  else {
    func_0x00010b566b70();
  }
  *puVar1 = &PTR_DAT_110d08ca0;
  puVar1[1] = param_1;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10b5666c4; end: 10b56672b;  */

undefined8 * FUN_10b5666c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b566c08();
  }
  *puVar1 = &PTR_FUN_110d08b60;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_10b5654dc();
  return puVar1;
}



/* Entry: 10b56672c; end: 10b5667db;  */

void FUN_10b56672c(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x00010b566b44();
  if (param_1 == 0) {
    func_0x00010b566c34();
  }
  else {
    func_0x00010b566b70();
  }
  func_0x00010b566bc0();
  func_0x00010b566bcc(&PTR_DAT_110d08ac0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b566a84();
  }
  func_0x00010b566a90();
  func_0x00010b566ab8();
  *(long *)(unaff_x21 + 0x18) = param_1;
  *(undefined4 *)(unaff_x21 + 0x20) = 0;
  return;
}



/* Entry: 10b5667dc; end: 10b566843;  */

undefined8 * FUN_10b5667dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b566c08();
  }
  *puVar1 = &PTR_DAT_110d08bb0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_10b5655c0();
  return puVar1;
}



/* Entry: 10b566844; end: 10b566a1f;  */

void FUN_10b566844(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010b566b44();
  if (param_1 == 0) {
    func_0x00010b566c14();
  }
  else {
    func_0x00010b566b7c();
  }
  func_0x00010b566bc0();
  func_0x00010b566bcc(&PTR_DAT_110d08a70);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b566a84();
  }
  func_0x00010b566a90();
  func_0x00010b566bf8();
  return;
}



/* Entry: 10b566a20; end: 10b566c53;  */

void FUN_10b566a20(void)

{
  return;
}



/* Entry: 10b566c54; end: 10b566c7f;  */

long FUN_10b566c54(long param_1)

{
  func_0x00010b568f28();
  FUN_10b568898(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b566c80; end: 10b566c83;  */

long FUN_10b566c80(long param_1)

{
  func_0x00010b568f28();
  FUN_10b568898(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b566c84; end: 10b566c97;  */

void FUN_10b566c84(void)

{
  FUN_10b566c54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b566c98; end: 10b566ca3;  */

undefined ** FUN_10b566c98(void)

{
  return &PTR_DAT_110d094d0;
}



/* Entry: 10b566ca4; end: 10b566ce3;  */

void FUN_10b566ca4(long param_1)

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



/* Entry: 10b566ce4; end: 10b566dc3;  */

long * FUN_10b566ce4(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b568f6c();
  iVar4 = *(int *)(param_1 + 0x18);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x00010b568e8c();
    param_3 = (ulong)*(uint *)(param_2 + 0x40);
    param_4 = (long *)0x1;
    func_0x00010b568f30();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b568f88();
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



/* Entry: 10b566dc4; end: 10b566e13;  */

void FUN_10b566dc4(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b566e14; end: 10b566e43;  */

long FUN_10b566e14(long param_1)

{
  func_0x00010b568f28();
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10b566e44; end: 10b566e47;  */

long FUN_10b566e44(long param_1)

{
  func_0x00010b568f28();
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10b566e48; end: 10b566e5b;  */

void FUN_10b566e48(void)

{
  FUN_10b566e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b566e5c; end: 10b566e7b;  */

undefined ** FUN_10b566e5c(void)

{
  return &PTR_DAT_110d09540;
}



/* Entry: 10b566e7c; end: 10b567037;  */

long * FUN_10b566e7c(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b568f6c();
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 2:
    func_0x00010b568e30();
    func_0x00010b568f94();
    param_4 = (long *)0x10;
    break;
  case 3:
    func_0x00010b568e30();
    func_0x00010b568f94();
    param_4 = (long *)0x18;
    break;
  case 4:
    func_0x00010b568e30();
    func_0x00010b568f94();
    param_4 = (long *)0x20;
    break;
  case 5:
    func_0x00010b568e30();
    func_0x00010b568f94();
    param_4 = (long *)0x28;
    break;
  case 6:
    func_0x00010b568e30();
    func_0x00010b568f94();
    param_4 = (long *)0x30;
    break;
  case 7:
    func_0x00010b568e30();
    func_0x00010b568f94();
    param_4 = (long *)0x38;
    break;
  case 8:
    func_0x00010b568e30();
    func_0x00010b568f94();
    param_4 = (long *)0x40;
    break;
  case 9:
    func_0x00010b568e30();
    func_0x00010b568f94();
    param_4 = (long *)0x48;
    break;
  case 10:
    func_0x00010b568e30();
    func_0x00010b568f94();
    param_4 = (long *)0x50;
    break;
  default:
    goto LAB_10b567004;
  }
  func_0x000107c280a8();
  func_0x00010b569064();
LAB_10b567004:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b568f88();
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



/* Entry: 10b567038; end: 10b5670e3;  */

long FUN_10b567038(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x18) - 2U < 9) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  else {
    lVar1 = 0;
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



/* Entry: 10b5670e4; end: 10b567117;  */

long FUN_10b5670e4(long param_1)

{
  func_0x00010b568f28();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b566e14();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b567118; end: 10b56711b;  */

long FUN_10b567118(long param_1)

{
  func_0x00010b568f28();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b566e14();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b56711c; end: 10b56712f;  */

void FUN_10b56711c(void)

{
  FUN_10b5670e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b567130; end: 10b56713b;  */

undefined ** FUN_10b567130(void)

{
  return &PTR_DAT_110d095b8;
}



/* Entry: 10b56713c; end: 10b56725f;  */

void FUN_10b56713c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b566e68(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
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



/* Entry: 10b567260; end: 10b56727b;  */

long FUN_10b567260(long param_1)

{
  long extraout_x8;
  
  FUN_10b567038();
  func_0x00010b568f10();
  return param_1 + extraout_x8;
}



/* Entry: 10b56727c; end: 10b56730b;  */

void FUN_10b56727c(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b568ea8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_10b568b9c();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      func_0x00010b56709c();
      puVar2 = puVar3;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b568ed4();
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



/* Entry: 10b56730c; end: 10b567343;  */

long FUN_10b56730c(long param_1)

{
  func_0x00010b568f28();
  func_0x00010b569050();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b566e14();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b567344; end: 10b567347;  */

long FUN_10b567344(long param_1)

{
  func_0x00010b568f28();
  func_0x00010b569050();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b566e14();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b567348; end: 10b56735b;  */

void FUN_10b567348(void)

{
  FUN_10b56730c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56735c; end: 10b567367;  */

undefined ** FUN_10b56735c(void)

{
  return &PTR_DAT_110d09630;
}



/* Entry: 10b567368; end: 10b5673af;  */

void FUN_10b567368(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b566e68(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10b5673b0; end: 10b56745b;  */

long * FUN_10b5673b0(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  plVar2 = param_3;
  func_0x00010b568f60();
  func_0x00010b568ff4(param_1[3]);
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b567408;
  }
  else if ((int)param_2 == 0) goto LAB_10b567408;
  param_4 = (long *)&UNK_10f77b38c;
  func_0x00010b568fa0();
  func_0x00010b568e78(param_3,1);
  param_1 = param_3;
  unaff_x20 = param_3;
LAB_10b567408:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(*(long *)(unaff_x21 + 0x20) + 0x14);
    param_1 = (long *)0x2;
    func_0x00010b568f30();
    param_4 = unaff_x20;
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b568f88();
  if ((long)plVar2 < 0) {
    plVar2 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010b5690b4();
  if (*param_1 - (long)param_4 < (long)(int)plVar2) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)plVar2;
      plVar2 = (long *)(ulong)(uint)(iVar3 - iVar4);
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
  return (long *)((long)param_4 + (long)(int)plVar2);
}



/* Entry: 10b56745c; end: 10b5674d3;  */

long FUN_10b56745c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010b5690cc(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = lVar2 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b567260(*(undefined8 *)(param_1 + 0x20));
    func_0x00010b569038();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b568fa8();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x14) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5674d4; end: 10b56756b;  */

void FUN_10b5674d4(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b568ea8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x00010b5690a8(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010b56909c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      FUN_10b568b9c();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      func_0x00010b56709c();
    }
  }
  func_0x00010b56907c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b568ed4();
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



/* Entry: 10b56756c; end: 10b5675bb;  */

long FUN_10b56756c(long param_1)

{
  func_0x00010b568f28();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b564ae8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c303ac();
  }
  FUN_10b5688c0(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5675bc; end: 10b5675bf;  */

long FUN_10b5675bc(long param_1)

{
  func_0x00010b568f28();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b564ae8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c303ac();
  }
  FUN_10b5688c0(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5675c0; end: 10b5675d3;  */

void FUN_10b5675c0(void)

{
  FUN_10b56756c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5675d4; end: 10b5675df;  */

undefined ** FUN_10b5675d4(void)

{
  return &PTR_DAT_110d096b0;
}



/* Entry: 10b5675e0; end: 10b567647;  */

void FUN_10b5675e0(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b564b84(*(undefined8 *)(param_1 + 0x48));
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10b567648; end: 10b5677b3;  */

long * FUN_10b567648(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b568f6c();
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x48);
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    param_4 = (long *)0x1;
    func_0x00010b568f30();
  }
  iVar4 = *(int *)(unaff_x20 + 0x20);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x00010b568e8c();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0x2;
    func_0x00010b568f30();
  }
  iVar4 = *(int *)(unaff_x20 + 0x38);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x00010b568e8c();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0x3;
    func_0x00010b568f30();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b568f88();
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



/* Entry: 10b5677b4; end: 10b5677b7;  */

void FUN_10b5677b4(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b568ea8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  FUN_10b56783c(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x00010b56784c();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b568c1c();
      *(ulong **)(unaff_x21 + 0x48) = puVar2;
      puVar1 = puVar2;
    }
    else {
      func_0x00010b564aa8();
    }
  }
  func_0x00010b56907c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b568ed4();
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



/* Entry: 10b5677b8; end: 10b56783b;  */

void FUN_10b5677b8(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b568ea8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  FUN_10b56783c(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x00010b56784c();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b568c1c();
      *(ulong **)(unaff_x21 + 0x48) = puVar2;
      puVar1 = puVar2;
    }
    else {
      func_0x00010b564aa8();
    }
  }
  func_0x00010b56907c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b568ed4();
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



/* Entry: 10b56783c; end: 10b56785b;  */

void FUN_10b56783c(long *param_1,long param_2)

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



/* Entry: 10b56785c; end: 10b56788f;  */

long FUN_10b56785c(long param_1)

{
  func_0x00010b568f28();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10b5678a8(param_1);
  }
  return param_1;
}



/* Entry: 10b567890; end: 10b567893;  */

long FUN_10b567890(long param_1)

{
  func_0x00010b568f28();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10b5678a8(param_1);
  }
  return param_1;
}



/* Entry: 10b567894; end: 10b5678a7;  */

void FUN_10b567894(void)

{
  FUN_10b56785c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5678a8; end: 10b5678d3;  */

void FUN_10b5678a8(long param_1)

{
  if (*(int *)(param_1 + 0x24) == 3) {
    func_0x00010b569050();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b5678d4; end: 10b5678df;  */

undefined ** FUN_10b5678d4(void)

{
  return &PTR_DAT_110d09720;
}



/* Entry: 10b5678e0; end: 10b567913;  */

void FUN_10b5678e0(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_10b5678a8();
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



/* Entry: 10b567914; end: 10b5679c7;  */

long * FUN_10b567914(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *plVar3;
  int iVar4;
  
  plVar3 = param_3;
  func_0x00010b568f60();
  if ((int)param_1[2] != 0) {
    param_1 = param_3;
    func_0x000107c282e4();
    plVar3 = unaff_x20;
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x24) == 3) {
    func_0x00010b568ff4(*(undefined8 *)(unaff_x21 + 0x18));
    param_4 = (long *)&UNK_10f77b3f2;
    func_0x00010b568fa0();
    func_0x00010b568e78(param_3,3);
    unaff_x20 = param_3;
  }
  else {
    param_3 = param_1;
    if (*(int *)(unaff_x21 + 0x24) == 2) {
      func_0x00010b569000();
      param_3 = param_1;
      unaff_x20 = param_1;
    }
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b568f88();
  if ((long)plVar3 < 0) {
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010b5690b4();
  if ((long)(int)plVar3 <= *param_3 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)plVar3);
  }
  while( true ) {
    iVar4 = ((int)*param_3 - (int)param_4) + 0x10;
    iVar2 = (int)plVar3;
    plVar3 = (long *)(ulong)(uint)(iVar2 - iVar4);
    if (iVar2 - iVar4 == 0 || iVar2 < iVar4) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)param_4 + (long)iVar4);
    param_4 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar2);
}



/* Entry: 10b5679c8; end: 10b567a5f;  */

ulong FUN_10b5679c8(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  ulong uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    func_0x00010b569044();
    func_0x00010b569038();
  }
  else if (*(int *)(param_1 + 0x24) == 2) {
    uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b568fa8();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    uVar2 = lVar1 + uVar2;
  }
  *(int *)(param_1 + 0x20) = (int)uVar2;
  return uVar2;
}



/* Entry: 10b567a60; end: 10b567b03;  */

void FUN_10b567a60(ulong *param_1)

{
  int iVar1;
  int iVar2;
  ulong extraout_x8;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b568ea8();
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    *(int *)(unaff_x21 + 2) = *(int *)(unaff_x20 + 0x10);
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10b5678a8();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    if (iVar1 == 3) {
      func_0x00010b5690d8();
      if (iVar2 != 3) {
        unaff_x21[3] = extraout_x8;
      }
      func_0x00010b568f40();
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(unaff_x21 + 3) = *(undefined4 *)(unaff_x20 + 0x18);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b568ed4();
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



/* Entry: 10b567b04; end: 10b567b3f;  */

long FUN_10b567b04(long param_1)

{
  func_0x00010b568f28();
  func_0x000107c30258(param_1 + 0x10);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10b567b58(param_1);
  }
  return param_1;
}



/* Entry: 10b567b40; end: 10b567b43;  */

long FUN_10b567b40(long param_1)

{
  func_0x00010b568f28();
  func_0x000107c30258(param_1 + 0x10);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10b567b58(param_1);
  }
  return param_1;
}



/* Entry: 10b567b44; end: 10b567b57;  */

void FUN_10b567b44(void)

{
  FUN_10b567b04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b567b58; end: 10b567b83;  */

void FUN_10b567b58(long param_1)

{
  if (*(int *)(param_1 + 0x24) == 3) {
    func_0x00010b569050();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b567b84; end: 10b567b8f;  */

undefined ** FUN_10b567b84(void)

{
  return &PTR_DAT_110d097a8;
}



/* Entry: 10b567b90; end: 10b567bcb;  */

void FUN_10b567b90(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  FUN_10b567b58(param_1);
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



/* Entry: 10b567bcc; end: 10b567ca7;  */

long * FUN_10b567bcc(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long unaff_x22;
  long *plVar3;
  int iVar4;
  
  plVar3 = param_3;
  func_0x00010b568f60();
  func_0x00010b568ff4(param_1[2]);
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b567c24;
  }
  else if ((int)param_2 == 0) goto LAB_10b567c24;
  param_4 = (long *)&UNK_10f77b46e;
  func_0x00010b568fa0();
  param_1 = param_3;
  func_0x00010b568e78();
  unaff_x20 = param_1;
LAB_10b567c24:
  if (*(int *)(unaff_x21 + 0x24) == 3) {
    func_0x00010b568ff4(*(undefined8 *)(unaff_x21 + 0x18));
    param_4 = (long *)&UNK_10f77b4ef;
    func_0x00010b568fa0();
    func_0x00010b568e78(param_3,3);
    unaff_x20 = param_3;
  }
  else {
    param_3 = param_1;
    if (*(int *)(unaff_x21 + 0x24) == 2) {
      func_0x00010b569000();
      param_3 = param_1;
      unaff_x20 = param_1;
    }
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b568f88();
  if ((long)plVar3 < 0) {
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010b5690b4();
  if ((long)(int)plVar3 <= *param_3 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)plVar3);
  }
  while( true ) {
    iVar4 = ((int)*param_3 - (int)param_4) + 0x10;
    iVar2 = (int)plVar3;
    plVar3 = (long *)(ulong)(uint)(iVar2 - iVar4);
    if (iVar2 - iVar4 == 0 || iVar2 < iVar4) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)param_4 + (long)iVar4);
    param_4 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar2);
}



/* Entry: 10b567ca8; end: 10b567d37;  */

long FUN_10b567ca8(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar1;
  long extraout_x9;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010b5690cc(*(undefined8 *)(param_1 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = lVar2 + 1;
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    func_0x00010b569044();
    func_0x00010b569038();
  }
  else if (*(int *)(param_1 + 0x24) == 2) {
    func_0x00010b569020((long)*(int *)(param_1 + 0x18));
    lVar2 = extraout_x8_00 + lVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b568fa8();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b567d38; end: 10b567dfb;  */

void FUN_10b567d38(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b568ea8();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  func_0x00010b5690a8(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b56909c();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10b567b58();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    if (iVar1 == 3) {
      func_0x00010b5690d8();
      if (iVar2 != 3) {
        unaff_x21[3] = extraout_x8_00;
      }
      func_0x00010b568f40();
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(unaff_x21 + 3) = *(undefined4 *)(unaff_x20 + 0x18);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b568ed4();
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



/* Entry: 10b567dfc; end: 10b567e37;  */

long FUN_10b567dfc(long param_1)

{
  func_0x00010b568f28();
  func_0x000107c30258(param_1 + 0x40);
  FUN_10b5688e8(param_1 + 0x28);
  FUN_10b568910(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b567e38; end: 10b567e3b;  */

long FUN_10b567e38(long param_1)

{
  func_0x00010b568f28();
  func_0x000107c30258(param_1 + 0x40);
  FUN_10b5688e8(param_1 + 0x28);
  FUN_10b568910(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b567e3c; end: 10b567e4f;  */

void FUN_10b567e3c(void)

{
  FUN_10b567dfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b567e50; end: 10b567e5b;  */

undefined ** FUN_10b567e50(void)

{
  return &PTR_DAT_110d09838;
}



/* Entry: 10b567e5c; end: 10b567ebf;  */

void FUN_10b567e5c(long param_1)

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
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
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



/* Entry: 10b567ec0; end: 10b5680db;  */

long * FUN_10b567ec0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long *plVar4;
  int iVar5;
  long *unaff_x22;
  long *plVar6;
  int iVar7;
  
  plVar1 = param_1;
  plVar6 = param_3;
  plVar4 = param_2;
  if ((int)param_1[9] != 0) {
    param_2 = param_1;
    func_0x00010b569058();
    plVar1 = (long *)0x8;
    func_0x000107c280a8();
    func_0x00010b569064();
    plVar4 = plVar1;
  }
  func_0x00010b568ff4(param_1[8]);
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b567f4c;
  }
  else if ((int)param_2 == 0) goto LAB_10b567f4c;
  func_0x00010b568fa0();
  plVar1 = param_3;
  func_0x000107c280a0(param_3,2);
  plVar6 = unaff_x22;
  plVar4 = plVar1;
LAB_10b567f4c:
  if (*(char *)((long)param_1 + 0x4c) == '\x01') {
    func_0x00010b569058();
    plVar4 = (long *)(ulong)*(byte *)((long)param_1 + 0x4c);
    uVar2 = 0x18;
    func_0x000107c280a8(0x18,plVar1);
    func_0x000107c280a8(plVar4,uVar2);
  }
  lVar3 = param_1[3];
  for (iVar5 = 0; (int)lVar3 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00010b568fd4();
    plVar4 = (long *)0x4;
    func_0x00010b568f30();
  }
  lVar3 = param_1[6];
  for (iVar5 = 0; (int)lVar3 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00010b568fd4();
    plVar4 = (long *)0x5;
    func_0x00010b568f30();
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b568f88();
    if ((long)plVar6 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      plVar6 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*param_3 - (long)plVar4 < (long)(int)plVar6) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)plVar4) + 0x10;
        iVar5 = (int)plVar6;
        plVar6 = (long *)(ulong)(uint)(iVar5 - iVar7);
        if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar4 + (long)iVar7;
        plVar4 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar4 + (long)iVar5);
    }
    _memcpy(plVar4,lVar3,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)plVar4 + (long)(int)plVar6);
  }
  return plVar4;
}



/* Entry: 10b5680dc; end: 10b5680df;  */

void FUN_10b5680dc(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  FUN_10b568178(param_1 + 0x10,param_2 + 0x10);
  lVar1 = param_2 + 0x28;
  func_0x00010b568188(param_1 + 0x28);
  func_0x00010b5690a8(*(undefined8 *)(param_2 + 0x40));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b56909c();
    }
    func_0x000107c30248(param_1 + 0x40);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    *(undefined1 *)(param_1 + 0x4c) = 1;
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



/* Entry: 10b5680e0; end: 10b568177;  */

void FUN_10b5680e0(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  FUN_10b568178(param_1 + 0x10,param_2 + 0x10);
  lVar1 = param_2 + 0x28;
  func_0x00010b568188(param_1 + 0x28);
  func_0x00010b5690a8(*(undefined8 *)(param_2 + 0x40));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b56909c();
    }
    func_0x000107c30248(param_1 + 0x40);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    *(undefined1 *)(param_1 + 0x4c) = 1;
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



/* Entry: 10b568178; end: 10b568197;  */

void FUN_10b568178(long *param_1,long param_2)

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



/* Entry: 10b568198; end: 10b56821f;  */

void FUN_10b568198(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x44) == 5) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b5681f4;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10b567dfc();
    }
  }
  else {
    if (*(int *)(param_1 + 0x44) != 4) goto LAB_10b5681f4;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b5681f4;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10b56756c();
    }
  }
  __ZdlPv();
LAB_10b5681f4:
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



/* Entry: 10b568220; end: 10b568257;  */

void FUN_10b568220(undefined8 *param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  *param_1 = &PTR_FUN_110d09440;
  param_1[1] = param_2;
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b5690d8();
  param_1[5] = extraout_x8;
  param_1[8] = CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(
                                                  uVar3,CONCAT11(uVar2,uVar1)))))));
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}



/* Entry: 10b568258; end: 10b568317;  */

undefined8 * FUN_10b568258(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d09440;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b568f04();
  }
  func_0x000107c282d4(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  lVar2 = param_3 + 0x28;
  func_0x000107c2809c(lVar2,param_2);
  param_1[5] = lVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_3 + 0x44);
  *(int *)((long)param_1 + 0x44) = iVar1;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_3 + 0x30);
  if (iVar1 == 5) {
    FUN_10b568d28(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  else {
    if (iVar1 != 4) {
      return param_1;
    }
    FUN_10b568c5c(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = param_2;
  return param_1;
}



/* Entry: 10b568318; end: 10b568343;  */

undefined8 FUN_10b568318(undefined8 param_1)

{
  func_0x00010b568f28();
  FUN_10b568344(param_1);
  return param_1;
}



/* Entry: 10b568344; end: 10b56837b;  */

undefined8 FUN_10b568344(long param_1)

{
  char in_NG;
  char in_OV;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x28);
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_10b568198(param_1);
  }
  func_0x00010006804c(param_1 + 0x10);
  if (in_NG == in_OV) {
    func_0x0001002a998c(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 10b56837c; end: 10b56837f;  */

undefined8 FUN_10b56837c(undefined8 param_1)

{
  func_0x00010b568f28();
  FUN_10b568344(param_1);
  return param_1;
}



/* Entry: 10b568380; end: 10b568393;  */

void FUN_10b568380(void)

{
  FUN_10b568318();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b568394; end: 10b56839f;  */

undefined ** FUN_10b568394(void)

{
  return &PTR_DAT_110d098a8;
}



/* Entry: 10b5683a0; end: 10b5683e3;  */

void FUN_10b5683a0(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  func_0x000107c3025c(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_10b568198(param_1);
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



/* Entry: 10b5683e4; end: 10b56854f;  */

byte * FUN_10b5683e4(byte *param_1,long param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  ulong *puVar2;
  uint uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  long extraout_x8;
  byte *unaff_x20;
  byte *pbVar8;
  long unaff_x21;
  int iVar9;
  ulong *puVar10;
  int iVar11;
  
  pbVar5 = param_3;
  func_0x00010b568f60();
  puVar10 = (ulong *)(ulong)*(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x20) != 0) {
    func_0x00010b568f7c();
    pbVar8 = param_1 + 2;
    *param_1 = 10;
    while( true ) {
      if ((uint)puVar10 < 0x80) break;
      pbVar8[-1] = (byte)puVar10 | 0x80;
      puVar10 = (ulong *)(ulong)((uint)puVar10 >> 7);
      pbVar8 = pbVar8 + 1;
    }
    pbVar8[-1] = (byte)puVar10;
    puVar10 = *(ulong **)(unaff_x21 + 0x18);
    puVar2 = (ulong *)((long)puVar10 + (long)*(int *)(unaff_x21 + 0x10) * 4);
    do {
      func_0x00010b568f7c();
      uVar6 = (ulong)*(int *)puVar10;
      pbVar8 = param_1;
      while( true ) {
        unaff_x20 = pbVar8 + 1;
        if (uVar6 < 0x80) break;
        *pbVar8 = (byte)uVar6 | 0x80;
        uVar6 = uVar6 >> 7;
        pbVar8 = unaff_x20;
      }
      puVar10 = (ulong *)((long)puVar10 + 4);
      *pbVar8 = (byte)uVar6;
    } while (puVar10 < puVar2);
  }
  func_0x00010b568ff4(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    if (puVar10[1] != 0) {
      puVar10 = (ulong *)*puVar10;
      goto LAB_10b5684a0;
    }
  }
  else if ((int)param_2 != 0) {
LAB_10b5684a0:
    param_4 = &UNK_10f77b5c6;
    func_0x00010b568fa0(puVar10);
    func_0x00010b568e78(param_3,2);
    param_1 = param_3;
    unaff_x20 = param_3;
  }
  if (*(int *)(unaff_x21 + 0x30) != 0) {
    func_0x00010b568f7c();
    unaff_x20 = (byte *)(ulong)*(uint *)(unaff_x21 + 0x30);
    uVar4 = 0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x000107c280b8(unaff_x20,uVar4);
  }
  uVar3 = *(uint *)(unaff_x21 + 0x44);
  pbVar8 = (byte *)(ulong)uVar3;
  if (uVar3 == 4) {
    lVar7 = 0x14;
  }
  else {
    if (uVar3 != 5) goto LAB_10b56851c;
    lVar7 = 0x50;
  }
  pbVar5 = (byte *)(ulong)*(uint *)(*(long *)(unaff_x21 + 0x38) + lVar7);
  func_0x00010b568f30();
  param_4 = unaff_x20;
  unaff_x20 = pbVar8;
LAB_10b56851c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b568f88();
  if ((long)pbVar5 < 0) {
    pbVar5 = *(byte **)(extraout_x8 + 0x10);
  }
  func_0x00010b5690b4();
  if (*(long *)pbVar8 - (long)param_4 < (long)(int)pbVar5) {
    while( true ) {
      iVar11 = ((int)*(undefined8 *)pbVar8 - (int)param_4) + 0x10;
      iVar9 = (int)pbVar5;
      pbVar5 = (byte *)(ulong)(uint)(iVar9 - iVar11);
      if (iVar9 - iVar11 == 0 || iVar9 < iVar11) break;
      func_0x00010b4d5738();
      pbVar1 = param_4 + iVar11;
      param_4 = pbVar8;
      func_0x000107c303e4(pbVar8,pbVar1);
    }
    func_0x00010b4d5738();
    return param_4 + iVar9;
  }
  _memcpy(param_4);
  return param_4 + (int)pbVar5;
}



/* Entry: 10b568550; end: 10b568673;  */

long FUN_10b568550(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = 0;
  lVar1 = 0;
  for (lVar3 = (long)*(int *)(param_1 + 0x10); lVar3 != 0; lVar3 = lVar3 + -1) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar2 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar1;
    lVar2 = lVar2 + 0x100000000;
  }
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + (ulong)((int)LZCOUNT((long)(int)lVar1) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  lVar1 = param_1;
  func_0x00010b5690cc(*(undefined8 *)(param_1 + 0x28));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar1 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b569038();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x44) == 5) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010b568014();
  }
  else {
    if (*(int *)(param_1 + 0x44) != 4) goto LAB_10b568648;
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010b567710();
  }
  func_0x00010b568f10();
  lVar2 = lVar2 + lVar1 + extraout_x8_00 + 1;
LAB_10b568648:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b568fa8();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x40) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b568674; end: 10b568677;  */

void FUN_10b568674(void)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar6;
  
  func_0x00010b568ea8();
  puVar6 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar6 & 1) != 0) {
    puVar6 = *(ulong **)((ulong)puVar6 & 0xfffffffffffffffe);
  }
  puVar3 = unaff_x21 + 2;
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c282d0();
  func_0x00010b5690a8(*(undefined8 *)(unaff_x20 + 0x28));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar4 + 8);
  }
  if (lVar5 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b56909c();
    }
    puVar3 = unaff_x21 + 5;
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 6) = *(int *)(unaff_x20 + 0x30);
  }
  iVar1 = *(int *)(unaff_x20 + 0x44);
  if (iVar1 == 0) goto LAB_10b56878c;
  iVar2 = *(int *)((long)unaff_x21 + 0x44);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      puVar3 = unaff_x21;
      FUN_10b568198();
    }
    *(int *)((long)unaff_x21 + 0x44) = iVar1;
  }
  if (iVar1 == 5) {
    if (iVar2 == 5) {
      puVar3 = (ulong *)unaff_x21[7];
      FUN_10b5680e0();
      goto LAB_10b56878c;
    }
    FUN_10b568d28();
    puVar3 = puVar6;
  }
  else {
    if (iVar1 != 4) goto LAB_10b56878c;
    if (iVar2 == 4) {
      puVar3 = (ulong *)unaff_x21[7];
      FUN_10b5677b8();
      goto LAB_10b56878c;
    }
    FUN_10b568c5c();
    puVar3 = puVar6;
  }
  unaff_x21[7] = (ulong)puVar3;
LAB_10b56878c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b568ed4();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 10b568678; end: 10b5687a7;  */

void FUN_10b568678(void)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar6;
  
  func_0x00010b568ea8();
  puVar6 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar6 & 1) != 0) {
    puVar6 = *(ulong **)((ulong)puVar6 & 0xfffffffffffffffe);
  }
  puVar3 = unaff_x21 + 2;
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c282d0();
  func_0x00010b5690a8(*(undefined8 *)(unaff_x20 + 0x28));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar4 + 8);
  }
  if (lVar5 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b56909c();
    }
    puVar3 = unaff_x21 + 5;
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 6) = *(int *)(unaff_x20 + 0x30);
  }
  iVar1 = *(int *)(unaff_x20 + 0x44);
  if (iVar1 == 0) goto LAB_10b56878c;
  iVar2 = *(int *)((long)unaff_x21 + 0x44);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      puVar3 = unaff_x21;
      FUN_10b568198();
    }
    *(int *)((long)unaff_x21 + 0x44) = iVar1;
  }
  if (iVar1 == 5) {
    if (iVar2 == 5) {
      puVar3 = (ulong *)unaff_x21[7];
      FUN_10b5680e0();
      goto LAB_10b56878c;
    }
    FUN_10b568d28();
    puVar3 = puVar6;
  }
  else {
    if (iVar1 != 4) goto LAB_10b56878c;
    if (iVar2 == 4) {
      puVar3 = (ulong *)unaff_x21[7];
      FUN_10b5677b8();
      goto LAB_10b56878c;
    }
    FUN_10b568c5c();
    puVar3 = puVar6;
  }
  unaff_x21[7] = (ulong)puVar3;
LAB_10b56878c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b568ed4();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 10b5687a8; end: 10b56884f;  */

void FUN_10b5687a8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar6;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b569070();
  FUN_10b5683a0();
  func_0x00010b568ea8();
  puVar6 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar6 & 1) != 0) {
    puVar6 = *(ulong **)((ulong)puVar6 & 0xfffffffffffffffe);
  }
  puVar3 = unaff_x21 + 2;
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c282d0();
  func_0x00010b5690a8(*(undefined8 *)(unaff_x20 + 0x28));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar4 + 8);
  }
  if (lVar5 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b56909c();
    }
    puVar3 = unaff_x21 + 5;
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 6) = *(int *)(unaff_x20 + 0x30);
  }
  iVar1 = *(int *)(unaff_x20 + 0x44);
  if (iVar1 == 0) goto LAB_10b56878c;
  iVar2 = *(int *)((long)unaff_x21 + 0x44);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      puVar3 = unaff_x21;
      FUN_10b568198();
    }
    *(int *)((long)unaff_x21 + 0x44) = iVar1;
  }
  if (iVar1 == 5) {
    if (iVar2 == 5) {
      puVar3 = (ulong *)unaff_x21[7];
      FUN_10b5680e0();
      goto LAB_10b56878c;
    }
    FUN_10b568d28();
    puVar3 = puVar6;
  }
  else {
    if (iVar1 != 4) goto LAB_10b56878c;
    if (iVar2 == 4) {
      puVar3 = (ulong *)unaff_x21[7];
      FUN_10b5677b8();
      goto LAB_10b56878c;
    }
    FUN_10b568c5c();
    puVar3 = puVar6;
  }
  unaff_x21[7] = (ulong)puVar3;
LAB_10b56878c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b568ed4();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 10b568850; end: 10b568897;  */

void FUN_10b568850(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010b569010();
  }
  else {
    func_0x00010b568ef8();
  }
  *puVar1 = &PTR_FUN_110d09210;
  puVar1[1] = param_2;
  func_0x00010b5690d8();
  puVar1[2] = extraout_x8;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b568898; end: 10b5688bf;  */

void FUN_10b568898(void)

{
  long extraout_x8;
  
  func_0x00010b5690c0();
  if (extraout_x8 != 0) {
    func_0x00010b569018();
  }
  return;
}



/* Entry: 10b5688c0; end: 10b5688e7;  */

void FUN_10b5688c0(void)

{
  long extraout_x8;
  
  func_0x00010b5690c0();
  if (extraout_x8 != 0) {
    func_0x00010b569018();
  }
  return;
}



/* Entry: 10b5688e8; end: 10b56890f;  */

void FUN_10b5688e8(void)

{
  long extraout_x8;
  
  func_0x00010b5690c0();
  if (extraout_x8 != 0) {
    func_0x00010b569018();
  }
  return;
}



/* Entry: 10b568910; end: 10b568937;  */

void FUN_10b568910(void)

{
  long extraout_x8;
  
  func_0x00010b5690c0();
  if (extraout_x8 != 0) {
    func_0x00010b569018();
  }
  return;
}



/* Entry: 10b568938; end: 10b568b9b;  */

void FUN_10b568938(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b569010();
  }
  else {
    func_0x00010b568ef8();
  }
  *puVar1 = &PTR_FUN_110d09210;
  puVar1[1] = param_1;
  func_0x00010b5690d8();
  puVar1[2] = extraout_x8;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b568b9c; end: 10b568c1b;  */

undefined8 * FUN_10b568b9c(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d092b0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b568f04();
  }
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  *(int *)(puVar2 + 3) = iVar1;
  if (iVar1 - 2U < 9) {
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  }
  return puVar2;
}



/* Entry: 10b568c1c; end: 10b568c5b;  */

undefined8 * FUN_10b568c1c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  
  func_0x00010b569070();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = unaff_x20;
    FUN_10b4d80e0();
  }
  *puVar1 = &PTR_FUN_110d08918;
  puVar1[1] = unaff_x20;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  func_0x00010b564aa8();
  return puVar1;
}


