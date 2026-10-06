/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088d8100; end: 1088d8153;  */

void FUN_1088d8100(ulong *param_1,long param_2)

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
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
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



/* Entry: 1088d8154; end: 1088d817b;  */

undefined8 FUN_1088d8154(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  return param_1;
}



/* Entry: 1088d817c; end: 1088d818f;  */

void FUN_1088d817c(void)

{
  FUN_1088d8154();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d8190; end: 1088d819b;  */

undefined ** FUN_1088d8190(void)

{
  return &PTR_DAT_110a87730;
}



/* Entry: 1088d819c; end: 1088d81cb;  */

void FUN_1088d819c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd030();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 1088d81cc; end: 1088d8263;  */

long * FUN_1088d81cc(long *param_1,long param_2,ulong param_3,long *param_4)

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
    if (unaff_x22[1] == 0) goto LAB_1088d8210;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088d8210;
  param_4 = (long *)&UNK_10f4eb7be;
  func_0x0001088dd2ec();
  func_0x0001088dcd10();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088d8210:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x0001088dd130();
    func_0x0001088dd670();
    func_0x0001088dd23c();
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



/* Entry: 1088d8264; end: 1088d82cf;  */

void FUN_1088d8264(long param_1)

{
  int iVar1;
  int extraout_w8;
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
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x0001088dcfc0();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 1088d82d0; end: 1088d82d3;  */

void FUN_1088d82d0(ulong *param_1,long param_2)

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
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
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



/* Entry: 1088d82d4; end: 1088d8323;  */

long FUN_1088d82d4(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  func_0x0001088dd6fc();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1088d8338(param_1);
  }
  return param_1;
}



/* Entry: 1088d8324; end: 1088d8337;  */

void FUN_1088d8324(void)

{
  FUN_1088d82d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d8338; end: 1088d8367;  */

void FUN_1088d8338(long param_1)

{
  if ((*(uint *)(param_1 + 0x48) & 0xfffffffe) == 6) {
    func_0x0001088dd8b0();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 1088d8368; end: 1088d8373;  */

undefined ** FUN_1088d8368(void)

{
  return &PTR_DAT_110a87780;
}



/* Entry: 1088d8374; end: 1088d83c3;  */

void FUN_1088d8374(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x0001088dd058();
  func_0x0001088dd504();
  func_0x0001088dd614();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_1088bf358(unaff_x19[6]);
  }
  *(undefined4 *)(unaff_x19 + 7) = 0;
  FUN_1088d8338();
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



/* Entry: 1088d83c4; end: 1088d8573;  */

long * FUN_1088d83c4(long *param_1,long *param_2,ulong param_3,long *param_4)

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
  if ((int)param_1[7] != 0) {
    func_0x0001088dd0bc();
    param_2 = param_1;
    func_0x0001088dd6e4();
    func_0x0001088dd088();
    unaff_x21 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x30);
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x2;
    func_0x0001088dd254();
    unaff_x21 = param_1;
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_1088d8438;
  }
  else if ((int)param_2 != 0) {
LAB_1088d8438:
    param_4 = (long *)&UNK_10f4eb7f4;
    func_0x0001088dd2ec();
    param_2 = (long *)0x3;
    param_1 = unaff_x19;
    func_0x0001088dd008();
    unaff_x21 = param_1;
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x20));
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088d8478;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d8478:
      param_4 = (long *)&UNK_10f4eb824;
      func_0x0001088dd2ec();
      func_0x0001088dd724();
      func_0x0001088dd008();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088d84b4;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088d84b4:
      param_4 = (long *)&UNK_10f4eb857;
      func_0x0001088dd2ec();
      func_0x0001088dd9f4();
      func_0x0001088dd008();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  if (*(int *)(unaff_x20 + 0x48) == 7) {
    func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x40));
    param_4 = (long *)&UNK_10f4eb8b9;
    func_0x0001088dd2ec();
  }
  else {
    unaff_x19 = param_1;
    if (*(int *)(unaff_x20 + 0x48) != 6) goto LAB_1088d8540;
    func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x40));
    unaff_x19 = unaff_x22;
    if ((long)param_2 < 0) {
      unaff_x19 = (long *)*unaff_x22;
    }
    param_4 = (long *)&UNK_10f4eb889;
    func_0x0001088dd2ec();
    func_0x0001088dda0c();
  }
  func_0x0001088dd008();
  unaff_x21 = unaff_x19;
LAB_1088d8540:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x0001088dd348();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088dda00();
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar3 = (int)param_3;
    param_3 = (ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)param_4 + (long)iVar4);
    param_4 = unaff_x19;
    func_0x000107c303e4(unaff_x19,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar3);
}



/* Entry: 1088d8574; end: 1088d8637;  */

void FUN_1088d8574(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
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
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x000107c2a268(*(undefined8 *)(unaff_x19 + 0x30));
    func_0x0001088dd30c();
  }
  func_0x0001088dd394((long)*(int *)(unaff_x19 + 0x38));
  if ((*(uint *)(unaff_x19 + 0x48) & 0xfffffffe) == 6) {
    func_0x0001088dd9b4(*(undefined8 *)(unaff_x19 + 0x40));
    func_0x0001088dd30c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088dd4c8();
  return;
}



/* Entry: 1088d8638; end: 1088d863b;  */

void FUN_1088d8638(ulong *param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x0001088dcdd0();
  if ((param_3 & 1) != 0) {
    func_0x0001088dd5b0();
  }
  func_0x0001088dd020();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b8();
  }
  func_0x0001088dd0d8();
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd6a0();
  }
  func_0x0001088dd1ac();
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd8d8();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088ddc84();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088dd4e4();
      unaff_x21[6] = (ulong)param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 7) = *(int *)(unaff_x20 + 0x38);
  }
  func_0x0001088dcfd8();
  iVar1 = *(int *)(unaff_x20 + 0x48);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[9];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_1088d8338();
      }
      *(int *)(unaff_x21 + 9) = iVar1;
    }
    func_0x0001088dd3c4();
    if ((iVar1 == 7) || (iVar1 == 6)) {
      if (iVar2 != iVar1) {
        unaff_x21[8] = extraout_x8_02;
      }
      param_1 = unaff_x21 + 8;
      func_0x0001088dd9d4();
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



/* Entry: 1088d863c; end: 1088d866f;  */

long FUN_1088d863c(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088d8670; end: 1088d8683;  */

void FUN_1088d8670(void)

{
  FUN_1088d863c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d8684; end: 1088d868f;  */

undefined ** FUN_1088d8684(void)

{
  return &PTR_DAT_110a877d0;
}



/* Entry: 1088d8690; end: 1088d86cb;  */

void FUN_1088d8690(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd450();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dd588();
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



/* Entry: 1088d86cc; end: 1088d8747;  */

long * FUN_1088d86cc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  if (param_1[4] != 0) {
    func_0x0001088dd014();
    func_0x0001088dd6e4();
    func_0x0001088dd3f0();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dcff8();
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



/* Entry: 1088d8748; end: 1088d87a7;  */

void FUN_1088d8748(int param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088dd450();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088dd590();
    param_1 = param_1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x0001088dd814();
    param_1 = ((uint)(extraout_x8_00 >> 6) & 0x3ffffff) + param_1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088d87a8; end: 1088d87ab;  */

void FUN_1088d87a8(ulong *param_1)

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



/* Entry: 1088d87ac; end: 1088d87df;  */

long FUN_1088d87ac(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088d87e0; end: 1088d87f3;  */

void FUN_1088d87e0(void)

{
  FUN_1088d87ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d87f4; end: 1088d87ff;  */

undefined ** FUN_1088d87f4(void)

{
  return &PTR_DAT_110a87820;
}



/* Entry: 1088d8800; end: 1088d88cf;  */

void FUN_1088d8800(void)

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



/* Entry: 1088d88d0; end: 1088d88d3;  */

void FUN_1088d88d0(ulong *param_1)

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



/* Entry: 1088d88d4; end: 1088d8917;  */

long FUN_1088d88d4(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088bd034();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088d8918; end: 1088d892b;  */

void FUN_1088d8918(void)

{
  FUN_1088d88d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d892c; end: 1088d8937;  */

undefined ** FUN_1088d892c(void)

{
  return &PTR_DAT_110a87868;
}



/* Entry: 1088d8938; end: 1088d897b;  */

void FUN_1088d8938(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0001088dd288();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      FUN_1088bd10c(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0001088dd660();
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



/* Entry: 1088d897c; end: 1088d8a53;  */

long * FUN_1088d897c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
    func_0x0001088dcff8();
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



/* Entry: 1088d8a54; end: 1088d8a57;  */

void FUN_1088d8a54(ulong *param_1)

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
        FUN_1088dcc4c();
        *(ulong **)(unaff_x21 + 0x18) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088bd628();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088dd560();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd4e4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
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



/* Entry: 1088d8a58; end: 1088d8a7b;  */

undefined8 FUN_1088d8a58(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088d8a7c; end: 1088d8a8f;  */

void FUN_1088d8a7c(void)

{
  FUN_1088d8a58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d8a90; end: 1088d8aaf;  */

undefined ** FUN_1088d8a90(void)

{
  return &PTR_DAT_110a878b0;
}



/* Entry: 1088d8ab0; end: 1088d8b0f;  */

long * FUN_1088d8ab0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  if ((int)param_1[2] != 0) {
    func_0x0001088dd014();
    func_0x0001088dd5d4();
    func_0x0001088dd088();
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



/* Entry: 1088d8b10; end: 1088d8b53;  */

long FUN_1088d8b10(long param_1)

{
  int extraout_w8;
  long lVar1;
  long extraout_x9;
  long lVar2;
  ulong uVar3;
  
  func_0x0001088dd498((long)*(int *)(param_1 + 0x10));
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



/* Entry: 1088d8b54; end: 1088d8b7b;  */

undefined8 FUN_1088d8b54(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  return param_1;
}



/* Entry: 1088d8b7c; end: 1088d8b8f;  */

void FUN_1088d8b7c(void)

{
  FUN_1088d8b54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d8b90; end: 1088d8b9b;  */

undefined ** FUN_1088d8b90(void)

{
  return &PTR_DAT_110a878f8;
}



/* Entry: 1088d8b9c; end: 1088d8bcb;  */

void FUN_1088d8b9c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd030();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 1088d8bcc; end: 1088d8c63;  */

long * FUN_1088d8bcc(long *param_1,long param_2,ulong param_3,long *param_4)

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
    if (unaff_x22[1] == 0) goto LAB_1088d8c10;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088d8c10;
  param_4 = (long *)&UNK_10f4eb8f3;
  func_0x0001088dd2ec();
  func_0x0001088dcd10();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088d8c10:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x0001088dd130();
    func_0x0001088dd670();
    func_0x0001088dd23c();
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



/* Entry: 1088d8c64; end: 1088d8ccf;  */

void FUN_1088d8c64(long param_1)

{
  int iVar1;
  int extraout_w8;
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
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x0001088dcfc0();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 1088d8cd0; end: 1088d8cd3;  */

void FUN_1088d8cd0(ulong *param_1,long param_2)

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
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
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



/* Entry: 1088d8cd4; end: 1088d8d2f;  */

void FUN_1088d8cd4(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001088dcef0();
  func_0x0001088dd608(&PTR_FUN_110a844c8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088dda78();
  func_0x00010598fd00();
  lVar1 = unaff_x21 + 0x28;
  func_0x0001088dd464();
  *(long *)(unaff_x19 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  return;
}



/* Entry: 1088d8d30; end: 1088d8d5b;  */

undefined8 FUN_1088d8d30(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d8d5c(param_1);
  return param_1;
}



/* Entry: 1088d8d5c; end: 1088d8d7b;  */

long * FUN_1088d8d5c(void)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x0001088ddbec();
  plVar1 = (long *)(unaff_x19 + 0x10);
  if (*plVar1 != 0) {
    func_0x000100069100(plVar1);
  }
  return plVar1;
}



/* Entry: 1088d8d7c; end: 1088d8d7f;  */

undefined8 FUN_1088d8d7c(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088d8d5c(param_1);
  return param_1;
}



/* Entry: 1088d8d80; end: 1088d8d93;  */

void FUN_1088d8d80(void)

{
  FUN_1088d8d30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d8d94; end: 1088d8d9f;  */

undefined ** FUN_1088d8d94(void)

{
  return &PTR_DAT_110a87940;
}



/* Entry: 1088d8da0; end: 1088d8dd3;  */

void FUN_1088d8da0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd48c();
  func_0x000107c282c0();
  func_0x0001088dd614();
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



/* Entry: 1088d8dd4; end: 1088d8f5b;  */

long * FUN_1088d8dd4(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  ulong *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar7;
  long *unaff_x22;
  long *plVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  func_0x0001088dcfe8();
  func_0x0001088dd33c(param_1[5]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088d8e2c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088d8e2c;
  param_4 = (long *)&UNK_10f4eb927;
  func_0x0001088dd2ec();
  func_0x0001088dcd10();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088d8e2c:
  lVar12 = 8;
  for (uVar11 = (ulong)(*(uint *)(unaff_x21 + 0x18) &
                       ((int)*(uint *)(unaff_x21 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
      uVar11 = uVar11 - 1) {
    uVar6 = *(ulong *)(unaff_x21 + 0x10);
    puVar3 = (ulong *)(unaff_x21 + 0x10);
    if ((uVar6 & 1) != 0) {
      puVar3 = (ulong *)(uVar6 + lVar12 + -1);
    }
    param_3 = (long *)*puVar3;
    lVar4 = (long)*(char *)((long)param_3 + 0x17);
    param_1 = param_3;
    if (lVar4 < 0) {
      lVar4 = param_3[1];
      param_1 = (long *)*param_3;
    }
    plVar5 = (long *)&UNK_10f4eb948;
    func_0x000107c303d4(param_1,lVar4,1);
    plVar10 = (long *)(long)*(char *)((long)param_3 + 0x17);
    if ((((long)plVar10 < 0) && (plVar10 = (long *)param_3[1], 0x7f < (long)plVar10)) ||
       ((*unaff_x19 - (long)unaff_x20) + 0xe < (long)plVar10)) {
      func_0x0001088dd528();
      func_0x00010b4d5120();
      plVar5 = param_1;
    }
    else {
      *(undefined1 *)unaff_x20 = 0x12;
      *(char *)((long)unaff_x20 + 1) = (char)plVar10;
      plVar8 = param_3;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        plVar8 = (long *)*param_3;
      }
      plVar2 = (long *)((long)unaff_x20 + 2);
      param_1 = plVar2;
      param_3 = plVar10;
      _memcpy(plVar2,plVar8);
      unaff_x20 = plVar5;
      plVar5 = (long *)((long)plVar2 + (long)plVar10);
    }
    lVar12 = lVar12 + 8;
    param_4 = unaff_x20;
    unaff_x20 = plVar5;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088dd348();
  if ((long)param_3 < 0) {
    param_3 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x0001088dd474();
  if ((long)(int)param_3 <= *param_1 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar9 = ((int)*param_1 - (int)param_4) + 0x10;
    iVar7 = (int)param_3;
    param_3 = (long *)(ulong)(uint)(iVar7 - iVar9);
    if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)param_4 + (long)iVar9);
    param_4 = param_1;
    func_0x000107c303e4(param_1,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar7);
}



/* Entry: 1088d8f5c; end: 1088d8ff3;  */

void FUN_1088d8f5c(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long extraout_x8;
  ulong uVar3;
  long lVar4;
  
  lVar4 = 8;
  uVar2 = param_1;
  for (uVar3 = (ulong)(*(uint *)(param_1 + 0x18) &
                      ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
      uVar3 = uVar3 - 1) {
    uVar2 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar2 & 1) != 0) {
      puVar1 = (ulong *)(uVar2 + lVar4 + -1);
    }
    uVar2 = *puVar1;
    func_0x000107c282a0();
    lVar4 = lVar4 + 8;
  }
  func_0x0001088dd1bc();
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088ddaf0();
  return;
}



/* Entry: 1088d8ff4; end: 1088d8ff7;  */

void FUN_1088d8ff4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088dd2c8();
  func_0x00010598fce8();
  func_0x0001088dd1ac();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd828();
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



/* Entry: 1088d8ff8; end: 1088d9047;  */

void FUN_1088d8ff8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088dd2c8();
  func_0x00010598fce8();
  func_0x0001088dd1ac();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd828();
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



/* Entry: 1088d9048; end: 1088d906f;  */

undefined8 FUN_1088d9048(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  return param_1;
}



/* Entry: 1088d9070; end: 1088d9083;  */

void FUN_1088d9070(void)

{
  FUN_1088d9048();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088d9084; end: 1088d908f;  */

undefined ** FUN_1088d9084(void)

{
  return &PTR_DAT_110a87978;
}



/* Entry: 1088d9090; end: 1088d90bb;  */

void FUN_1088d9090(void)

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



/* Entry: 1088d90bc; end: 1088d913b;  */

long * FUN_1088d90bc(long *param_1,long *param_2,ulong param_3,long *param_4)

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
    if (unaff_x22[1] == 0) goto LAB_1088d9108;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_1088d9108;
  param_4 = (long *)&UNK_10f4eb968;
  func_0x0001088dd2ec();
  func_0x0001088dd198();
  param_1 = unaff_x22;
  param_2 = unaff_x22;
LAB_1088d9108:
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



/* Entry: 1088d913c; end: 1088d9193;  */

void FUN_1088d913c(long param_1)

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



/* Entry: 1088d9194; end: 1088d94a7;  */

void FUN_1088d9194(ulong *param_1,long param_2)

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



/* Entry: 1088d94a8; end: 1088d94c7;  */

void FUN_1088d94a8(void)

{
  func_0x0001088dd298();
  FUN_1088c8d18();
  return;
}



/* Entry: 1088d94c8; end: 1088d94ef;  */

void FUN_1088d94c8(void)

{
  long extraout_x8;
  
  func_0x0001088dda20();
  if (extraout_x8 != 0) {
    func_0x0001088dd838();
  }
  return;
}



/* Entry: 1088d94f0; end: 1088d950f;  */

void FUN_1088d94f0(void)

{
  func_0x0001088dd298();
  FUN_1088c9edc();
  return;
}



/* Entry: 1088d9510; end: 1088d9537;  */

void FUN_1088d9510(void)

{
  long extraout_x8;
  
  func_0x0001088dda20();
  if (extraout_x8 != 0) {
    func_0x0001088dd838();
  }
  return;
}



/* Entry: 1088d9538; end: 1088d955f;  */

void FUN_1088d9538(void)

{
  long extraout_x8;
  
  func_0x0001088dda20();
  if (extraout_x8 != 0) {
    func_0x0001088dd838();
  }
  return;
}



/* Entry: 1088d9560; end: 1088d957f;  */

void FUN_1088d9560(void)

{
  func_0x0001088dd298();
  FUN_1088d688c();
  return;
}



/* Entry: 1088d9580; end: 1088d95a7;  */

void FUN_1088d9580(void)

{
  long extraout_x8;
  
  func_0x0001088dda20();
  if (extraout_x8 != 0) {
    func_0x0001088dd838();
  }
  return;
}



/* Entry: 1088d95a8; end: 1088d95e7;  */

void FUN_1088d95a8(void)

{
  func_0x0001088dd298();
  FUN_1088d7590();
  return;
}



/* Entry: 1088d95e8; end: 1088d960f;  */

void FUN_1088d95e8(void)

{
  long extraout_x8;
  
  func_0x0001088dda20();
  if (extraout_x8 != 0) {
    func_0x0001088dd838();
  }
  return;
}



/* Entry: 1088d9610; end: 1088d963b;  */

long FUN_1088d9610(long param_1)

{
  FUN_1088d963c(param_1 + 0x20);
  FUN_1088d95e8(param_1 + 8);
  return param_1;
}



/* Entry: 1088d963c; end: 1088d9663;  */

void FUN_1088d963c(void)

{
  long extraout_x8;
  
  func_0x0001088dda20();
  if (extraout_x8 != 0) {
    func_0x0001088dd838();
  }
  return;
}



/* Entry: 1088d9664; end: 1088dac77;  */

void FUN_1088d9664(long param_1)

{
  if (param_1 == 0) {
    func_0x0001088dd4c0();
  }
  else {
    func_0x0001088dd124();
  }
  func_0x0001088dd9c8(&PTR_FUN_110a84018);
  return;
}



/* Entry: 1088dac78; end: 1088daccf;  */

undefined8 * FUN_1088dac78(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x0001088dd63c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088dd354();
  }
  else {
    func_0x0001088ddb70();
  }
  *param_1 = &PTR_FUN_110a843d8;
  param_1[1] = unaff_x21;
  func_0x0001088dda2c();
  func_0x0001088c8d28();
  return param_1;
}



/* Entry: 1088dacd0; end: 1088dad23;  */

long FUN_1088dacd0(long param_1)

{
  func_0x0001088dd63c();
  if (param_1 == 0) {
    func_0x0001088dd4c0();
  }
  else {
    func_0x0001088dd1fc();
  }
  func_0x0001088ddc1c(&PTR_FUN_110a84158);
  FUN_1088c93f4();
  return param_1;
}



/* Entry: 1088dad24; end: 1088dad77;  */

long FUN_1088dad24(long param_1)

{
  func_0x0001088dd63c();
  if (param_1 == 0) {
    func_0x0001088dd4c0();
  }
  else {
    func_0x0001088dd1fc();
  }
  func_0x0001088ddc1c(&PTR_DAT_110a84108);
  func_0x0001088c9410();
  return param_1;
}



/* Entry: 1088dad78; end: 1088dae1f;  */

void FUN_1088dad78(long param_1)

{
  ulong extraout_x8;
  
  func_0x0001088dd480();
  if (param_1 == 0) {
    func_0x0001088dd354();
  }
  else {
    func_0x0001088dd180();
  }
  func_0x0001088dd688();
  func_0x0001088dd648(&PTR_DAT_110a84068);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088dd27c();
  func_0x0001088ddacc();
  return;
}



/* Entry: 1088dae20; end: 1088dae77;  */

undefined8 * FUN_1088dae20(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x0001088dd63c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088dd354();
  }
  else {
    func_0x0001088ddb70();
  }
  *param_1 = &PTR_DAT_110a840b8;
  param_1[1] = unaff_x21;
  func_0x0001088dda2c();
  FUN_1088c94dc();
  return param_1;
}



/* Entry: 1088dae78; end: 1088daed3;  */

void FUN_1088dae78(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  func_0x0001088dd35c();
  if (param_1 == 0) {
    func_0x0001088dd354();
  }
  else {
    func_0x0001088dcf50();
  }
  func_0x0001088dd420();
  func_0x0001088dd414(&PTR_DAT_110a84fb8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088dd574();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dd158();
  }
  func_0x0001088dd6b8();
  return;
}



/* Entry: 1088daed4; end: 1088daf27;  */

long FUN_1088daed4(long param_1)

{
  func_0x0001088dd63c();
  if (param_1 == 0) {
    func_0x0001088dd4c0();
  }
  else {
    func_0x0001088dd1fc();
  }
  func_0x0001088ddc1c(&PTR_DAT_110a84a18);
  FUN_1088c9554();
  return param_1;
}



/* Entry: 1088daf28; end: 1088db013;  */

void FUN_1088daf28(long param_1)

{
  undefined2 uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dd480();
  if (param_1 == 0) {
    func_0x0001088dd8c8();
  }
  else {
    func_0x00010b4d80e0();
    param_1 = unaff_x20;
  }
  func_0x0001088dd688();
  func_0x0001088dd648(&PTR_FUN_110a84888);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088dd27c();
  *(long *)(unaff_x21 + 0x10) = param_1;
  func_0x0001088dd3fc();
  *(long *)(unaff_x21 + 0x18) = param_1;
  lVar2 = unaff_x19 + 0x20;
  func_0x0001088dd464();
  *(long *)(unaff_x21 + 0x20) = lVar2;
  lVar2 = unaff_x19 + 0x28;
  func_0x0001088dd464();
  *(long *)(unaff_x21 + 0x28) = lVar2;
  *(undefined4 *)(unaff_x21 + 0x38) = 0;
  uVar1 = *(undefined2 *)(unaff_x19 + 0x34);
  *(undefined4 *)(unaff_x21 + 0x30) = *(undefined4 *)(unaff_x19 + 0x30);
  *(undefined2 *)(unaff_x21 + 0x34) = uVar1;
  return;
}



/* Entry: 1088db014; end: 1088db043;  */

undefined8 * FUN_1088db014(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  func_0x0001088dd480();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088dd354();
  }
  else {
    func_0x0001088dd180();
  }
  func_0x0001088dd694();
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110a80a68;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 2) {
    param_3 = param_3 + 0x10;
    func_0x000107c2809c(param_3,param_2);
    param_1[2] = param_3;
  }
  else if (iVar1 == 1) {
    param_1[2] = *(undefined8 *)(param_3 + 0x10);
  }
  return param_1;
}



/* Entry: 1088db044; end: 1088db2fb;  */

void FUN_1088db044(long param_1)

{
  ulong extraout_x8;
  
  func_0x0001088dd35c();
  if (param_1 == 0) {
    func_0x0001088dd37c();
  }
  else {
    func_0x0001088dcf8c();
  }
  func_0x0001088dd420();
  func_0x0001088dd414(&PTR_FUN_110a84608);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088dd07c();
  func_0x0001088dcec0();
  func_0x0001088dced0();
  func_0x0001088dd4d4();
  return;
}



/* Entry: 1088db2fc; end: 1088db35b;  */

undefined8 * FUN_1088db2fc(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x0001088dd480();
  if (param_1 == 0) {
    func_0x0001088dd354();
  }
  else {
    func_0x0001088dd180();
  }
  func_0x0001088dd694();
  func_0x0001088c72a0();
  *unaff_x19 = &PTR_FUN_110a83b68;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001088c7294();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  *(uint *)(unaff_x19 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x0001088c723c(unaff_x20,*(undefined8 *)(unaff_x21 + 0x18));
  }
  unaff_x19[3] = unaff_x20;
  return unaff_x19;
}



/* Entry: 1088db35c; end: 1088db3a7;  */

void FUN_1088db35c(long param_1)

{
  ulong extraout_x8;
  
  func_0x0001088dd35c();
  if (param_1 == 0) {
    func_0x0001088dd354();
  }
  else {
    func_0x0001088dcf50();
  }
  func_0x0001088dd420();
  func_0x0001088dd414(&PTR_DAT_110a845b8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088dd07c();
  func_0x0001088dd7b4();
  return;
}



/* Entry: 1088db3a8; end: 1088db41f;  */

void FUN_1088db3a8(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dd35c();
  if (param_1 == 0) {
    func_0x0001088dd598();
  }
  else {
    func_0x0001088dd13c();
  }
  func_0x0001088dd420();
  func_0x0001088dd414(&PTR_DAT_110a85cd8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  FUN_1088d94f0(unaff_x21 + 0x10);
  lVar1 = unaff_x20 + 0x28;
  func_0x0001088dd368();
  *(long *)(unaff_x21 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x30) = 0;
  return;
}



/* Entry: 1088db420; end: 1088db93f;  */

void FUN_1088db420(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  uint unaff_w22;
  
  func_0x0001088dd480();
  if (param_1 == 0) {
    func_0x0001088dd37c();
  }
  else {
    func_0x0001088dd18c();
  }
  func_0x0001088dd688();
  func_0x0001088dd648(&PTR_DAT_110a85198);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088ddc78();
  if ((unaff_w22 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088dd830();
  }
  *(long *)(unaff_x21 + 0x18) = param_1;
  if ((unaff_w22 >> 1 & 1) != 0) {
    func_0x0001088dd830();
  }
  func_0x0001088ddc40();
  return;
}



/* Entry: 1088db940; end: 1088db9f7;  */

undefined8 * FUN_1088db940(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x0001088dd63c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088ddb94();
  }
  else {
    param_1 = unaff_x21;
    func_0x0001088ddb9c();
  }
  param_1[1] = unaff_x21;
  *param_1 = &PTR_DAT_110a853c8;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088dd868();
  FUN_1088d3114();
  lVar1 = unaff_x19 + 0x30;
  func_0x0001088dd704();
  param_1[6] = lVar1;
  lVar1 = unaff_x19 + 0x38;
  func_0x0001088dd704();
  param_1[7] = lVar1;
  lVar1 = unaff_x19 + 0x40;
  func_0x0001088dd704();
  param_1[8] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    func_0x0001088dc66c();
  }
  param_1[9] = unaff_x21;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(unaff_x19 + 0x50);
  return param_1;
}



/* Entry: 1088db9f8; end: 1088dbc33;  */

void FUN_1088db9f8(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  uint unaff_w22;
  
  func_0x0001088dd35c();
  if (param_1 == 0) {
    func_0x0001088dd37c();
  }
  else {
    func_0x0001088dcf8c();
  }
  func_0x0001088dd420();
  func_0x0001088dd414(&PTR_DAT_110a85c88);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088ddaa8();
  if ((unaff_w22 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088dd158();
  }
  *(long *)(unaff_x21 + 0x18) = param_1;
  if ((unaff_w22 >> 1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088dd718();
    func_0x0001088c67e4();
  }
  *(long *)(unaff_x21 + 0x20) = param_1;
  if ((unaff_w22 >> 2 & 1) != 0) {
    func_0x0001088dd85c();
    func_0x0001088c67b0();
  }
  func_0x0001088dd928();
  return;
}



/* Entry: 1088dbc34; end: 1088dbc83;  */

long FUN_1088dbc34(long param_1)

{
  func_0x0001088dd63c();
  if (param_1 == 0) {
    func_0x0001088dd4c0();
  }
  else {
    func_0x0001088dd1fc();
  }
  func_0x0001088dda48(&PTR_DAT_110a84928);
  FUN_1088cce0c();
  return param_1;
}



/* Entry: 1088dbc84; end: 1088dbce3;  */

void FUN_1088dbc84(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  func_0x0001088dd35c();
  if (param_1 == 0) {
    func_0x0001088dd354();
  }
  else {
    func_0x0001088dcf50();
  }
  func_0x0001088dd420();
  func_0x0001088dd414(&PTR_DAT_110a85af8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088dd574();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dd5c8();
    func_0x0001088dca7c();
  }
  func_0x0001088dd6b8();
  return;
}



/* Entry: 1088dbce4; end: 1088dbd33;  */

long FUN_1088dbce4(long param_1)

{
  func_0x0001088dd63c();
  if (param_1 == 0) {
    func_0x0001088dd4c0();
  }
  else {
    func_0x0001088dd1fc();
  }
  func_0x0001088dda48(&PTR_DAT_110a846a8);
  FUN_1088cce78();
  return param_1;
}



/* Entry: 1088dbd34; end: 1088dbeeb;  */

void FUN_1088dbd34(long param_1)

{
  int iVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dd35c();
  if (param_1 == 0) {
    func_0x0001088dd598();
  }
  else {
    func_0x0001088dd13c();
  }
  func_0x0001088dd420();
  func_0x0001088dd414(&PTR_DAT_110a851e8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088dd07c();
  func_0x0001088dcec0();
  func_0x0001088dced0();
  *(long *)(unaff_x21 + 0x20) = param_1;
  *(undefined4 *)(unaff_x21 + 0x30) = 0;
  iVar1 = *(int *)(unaff_x20 + 0x34);
  *(int *)(unaff_x21 + 0x34) = iVar1;
  if (iVar1 == 4) {
    func_0x0001088dd85c();
    func_0x0001088dcc00();
    *(long *)(unaff_x21 + 0x28) = param_1;
  }
  return;
}



/* Entry: 1088dbeec; end: 1088dbf3f;  */

long FUN_1088dbeec(long param_1)

{
  func_0x0001088dd63c();
  if (param_1 == 0) {
    func_0x0001088dd4c0();
  }
  else {
    func_0x0001088dd1fc();
  }
  func_0x0001088ddc1c(&PTR_DAT_110a84798);
  FUN_1088cd0c0();
  return param_1;
}



/* Entry: 1088dbf40; end: 1088dc0e7;  */

void FUN_1088dbf40(long param_1)

{
  ulong extraout_x8;
  
  func_0x0001088dd480();
  if (param_1 == 0) {
    func_0x0001088dd354();
  }
  else {
    func_0x0001088dd180();
  }
  func_0x0001088dd688();
  func_0x0001088dd648(&PTR_DAT_110a84838);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088dd27c();
  func_0x0001088ddab4();
  return;
}



/* Entry: 1088dc0e8; end: 1088dc137;  */

long FUN_1088dc0e8(long param_1)

{
  func_0x0001088dd63c();
  if (param_1 == 0) {
    func_0x0001088dd4c0();
  }
  else {
    func_0x0001088dd1fc();
  }
  func_0x0001088dda48(&PTR_FUN_110a841f8);
  FUN_1088ce00c();
  return param_1;
}



/* Entry: 1088dc138; end: 1088dc20b;  */

void FUN_1088dc138(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  uint unaff_w22;
  
  func_0x0001088dd35c();
  if (param_1 == 0) {
    func_0x0001088dd434();
  }
  else {
    func_0x0001088dd04c();
  }
  func_0x0001088dd420();
  func_0x0001088dd414(&PTR_FUN_110a84ba8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088ddaa8();
  if ((unaff_w22 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088dd5c8();
    func_0x0001088bce88();
  }
  *(long *)(unaff_x21 + 0x18) = param_1;
  if ((unaff_w22 >> 1 & 1) != 0) {
    func_0x0001088dd214();
  }
  func_0x0001088ddc34();
  return;
}


