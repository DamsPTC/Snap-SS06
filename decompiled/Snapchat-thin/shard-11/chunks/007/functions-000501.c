/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088ca13c; end: 1088ca1b7;  */

void FUN_1088ca13c(int param_1)

{
  int extraout_w8;
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088dd70c();
  if (extraout_w8 == 3) {
    func_0x0001088dd9b4(*(undefined8 *)(unaff_x19 + 0x10));
  }
  else if (extraout_w8 == 2) {
    param_1 = (int)*(undefined8 *)(unaff_x19 + 0x10);
    func_0x0001088ca1d0();
  }
  else {
    if (extraout_w8 != 1) {
      param_1 = 0;
      goto LAB_1088ca190;
    }
    param_1 = (int)*(undefined8 *)(unaff_x19 + 0x10);
    FUN_1088ca1b8();
  }
  param_1 = param_1 + 1;
LAB_1088ca190:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x18) = param_1;
  return;
}



/* Entry: 1088ca1b8; end: 1088ca1e7;  */

void FUN_1088ca1b8(void)

{
  FUN_1088ca67c();
  FUN_1088dcc88();
  return;
}



/* Entry: 1088ca1e8; end: 1088ca1eb;  */

void FUN_1088ca1e8(ulong *param_1)

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
        FUN_1088c9eec();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    if (iVar1 == 3) {
      func_0x0001088dd3c4();
      if (unaff_w24 != 3) {
        unaff_x21[2] = extraout_x8;
      }
      param_1 = unaff_x21 + 2;
      func_0x0001088dd9d4();
    }
    else {
      if (iVar1 == 2) {
        if (unaff_w24 == 2) {
          param_1 = (ulong *)unaff_x21[2];
          func_0x0001088dd968(*(undefined4 *)(unaff_x20 + 0x1c));
          FUN_1088ca3cc();
          goto LAB_1088ca2dc;
        }
        func_0x0001088dd898();
        func_0x0001088dafb4();
      }
      else {
        if (iVar1 != 1) goto LAB_1088ca2dc;
        if (unaff_w24 == 1) {
          param_1 = (ulong *)unaff_x21[2];
          func_0x0001088ddb08(*(undefined4 *)(unaff_x20 + 0x1c));
          FUN_1088ca2f8();
          goto LAB_1088ca2dc;
        }
        func_0x0001088dd898();
        FUN_1088daf28();
      }
      unaff_x21[2] = (ulong)param_1;
    }
  }
LAB_1088ca2dc:
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



/* Entry: 1088ca1ec; end: 1088ca2f7;  */

void FUN_1088ca1ec(ulong *param_1)

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
        FUN_1088c9eec();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    if (iVar1 == 3) {
      func_0x0001088dd3c4();
      if (unaff_w24 != 3) {
        unaff_x21[2] = extraout_x8;
      }
      param_1 = unaff_x21 + 2;
      func_0x0001088dd9d4();
    }
    else {
      if (iVar1 == 2) {
        if (unaff_w24 == 2) {
          param_1 = (ulong *)unaff_x21[2];
          func_0x0001088dd968(*(undefined4 *)(unaff_x20 + 0x1c));
          FUN_1088ca3cc();
          goto LAB_1088ca2dc;
        }
        func_0x0001088dd898();
        func_0x0001088dafb4();
      }
      else {
        if (iVar1 != 1) goto LAB_1088ca2dc;
        if (unaff_w24 == 1) {
          param_1 = (ulong *)unaff_x21[2];
          func_0x0001088ddb08(*(undefined4 *)(unaff_x20 + 0x1c));
          FUN_1088ca2f8();
          goto LAB_1088ca2dc;
        }
        func_0x0001088dd898();
        FUN_1088daf28();
      }
      unaff_x21[2] = (ulong)param_1;
    }
  }
LAB_1088ca2dc:
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



/* Entry: 1088ca2f8; end: 1088ca3cb;  */

void FUN_1088ca2f8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
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
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x34) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x34) = 1;
  }
  if (*(char *)(unaff_x20 + 0x35) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x35) = 1;
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



/* Entry: 1088ca3cc; end: 1088ca423;  */

void FUN_1088ca3cc(ulong *param_1)

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



/* Entry: 1088ca424; end: 1088ca44f;  */

undefined8 FUN_1088ca424(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088ca450(param_1);
  return param_1;
}



/* Entry: 1088ca450; end: 1088ca47b;  */

/* WARNING: Possible PIC construction at 0x0001088ca460: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001088ca464) */

void FUN_1088ca450(ulong *param_1)

{
  ulong uVar1;
  
  func_0x0001088dd48c();
  uVar1 = *param_1 ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 1088ca47c; end: 1088ca48f;  */

void FUN_1088ca47c(void)

{
  FUN_1088ca424();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ca490; end: 1088ca49b;  */

undefined ** FUN_1088ca490(void)

{
  return &PTR_DAT_110a861f8;
}



/* Entry: 1088ca49c; end: 1088ca4db;  */

void FUN_1088ca49c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd030();
  func_0x0001088dd5a8();
  func_0x0001088dd504();
  func_0x0001088dd614();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined2 *)(unaff_x19 + 0x34) = 0;
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
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



/* Entry: 1088ca4dc; end: 1088ca67b;  */

long * FUN_1088ca4dc(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
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
      goto LAB_1088ca514;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088ca514:
      param_4 = (long *)&UNK_10f4ea7a8;
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
      goto LAB_1088ca550;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088ca550:
      param_4 = (long *)&UNK_10f4ea7d3;
      func_0x0001088dd2ec();
      func_0x0001088dd528();
      func_0x0001088dd008();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  if (*(char *)(unaff_x20 + 0x34) == '\x01') {
    func_0x0001088dd0bc();
    param_2 = param_1;
    func_0x0001088dd6dc();
    func_0x0001088dd164();
    unaff_x21 = param_1;
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x20));
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088ca5b0;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088ca5b0:
      param_4 = (long *)&UNK_10f4ea801;
      func_0x0001088dd2ec();
      func_0x0001088dd724();
      func_0x0001088dd008();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    func_0x0001088dd0bc();
    param_2 = param_1;
    func_0x0001088dd9e4();
    func_0x0001088dd088();
    unaff_x21 = param_1;
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088ca624;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088ca624;
  param_4 = (long *)&UNK_10f4ea835;
  func_0x0001088dd2ec();
  func_0x0001088dda0c();
  func_0x0001088dd008();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_1088ca624:
  if (*(char *)(unaff_x20 + 0x35) == '\x01') {
    func_0x0001088dd0bc();
    func_0x0001088ddbc4();
    func_0x0001088dd164();
    unaff_x21 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return unaff_x21;
}



/* Entry: 1088ca67c; end: 1088ca737;  */

void FUN_1088ca67c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long lVar3;
  long extraout_x9;
  long unaff_x19;
  
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
  iVar1 = (int)param_1;
  if (*(int *)(unaff_x19 + 0x30) != 0) {
    func_0x0001088dcfc0();
    func_0x0001088dd91c();
  }
  func_0x0001088ddc10(lVar3 + (ulong)*(byte *)(unaff_x19 + 0x34) * 2);
  if ((extraout_x8_03 & 1) != 0) {
    func_0x0001088dd730();
    lVar3 = extraout_x8_04;
    if (extraout_x8_04 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(unaff_x19 + 0x38) = iVar1;
  return;
}



/* Entry: 1088ca738; end: 1088ca73b;  */

void FUN_1088ca738(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
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
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x34) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x34) = 1;
  }
  if (*(char *)(unaff_x20 + 0x35) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x35) = 1;
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



/* Entry: 1088ca73c; end: 1088ca767;  */

undefined8 FUN_1088ca73c(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088ca768(param_1);
  return param_1;
}



/* Entry: 1088ca768; end: 1088ca797;  */

void FUN_1088ca768(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c7e0c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ca798; end: 1088ca7a3;  */

undefined ** FUN_1088ca798(void)

{
  return &PTR_DAT_110a86240;
}



/* Entry: 1088ca7a4; end: 1088ca873;  */

void FUN_1088ca7a4(void)

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



/* Entry: 1088ca874; end: 1088ca877;  */

void FUN_1088ca874(ulong *param_1)

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



/* Entry: 1088ca878; end: 1088ca8ab;  */

long FUN_1088ca878(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088b8278();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088ca8ac; end: 1088ca8af;  */

long FUN_1088ca8ac(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088b8278();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088ca8b0; end: 1088ca8c3;  */

void FUN_1088ca8b0(void)

{
  FUN_1088ca878();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ca8c4; end: 1088ca8cf;  */

undefined ** FUN_1088ca8c4(void)

{
  return &PTR_DAT_110a86288;
}



/* Entry: 1088ca8d0; end: 1088ca9a7;  */

void FUN_1088ca8d0(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088dd450();
  if ((extraout_x8 & 1) != 0) {
    FUN_1088b8314(unaff_x19[3]);
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



/* Entry: 1088ca9a8; end: 1088ca9bf;  */

void FUN_1088ca9a8(void)

{
  FUN_1088b8444();
  FUN_1088dcc88();
  return;
}



/* Entry: 1088ca9c0; end: 1088ca9c3;  */

void FUN_1088ca9c0(ulong *param_1)

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
      FUN_1088db014();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_1088b84d0();
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



/* Entry: 1088ca9c4; end: 1088caa1f;  */

void FUN_1088ca9c4(ulong *param_1)

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
      FUN_1088db014();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_1088b84d0();
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



/* Entry: 1088caa20; end: 1088cb07b;  */

void FUN_1088caa20(long param_1)

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
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x8_15;
  ulong extraout_x8_16;
  ulong extraout_x8_17;
  ulong extraout_x8_18;
  ulong extraout_x8_19;
  ulong extraout_x8_20;
  ulong extraout_x8_21;
  ulong extraout_x8_22;
  ulong extraout_x8_23;
  ulong extraout_x8_24;
  ulong extraout_x8_25;
  ulong extraout_x8_26;
  ulong extraout_x8_27;
  ulong extraout_x8_28;
  ulong extraout_x8_29;
  ulong extraout_x8_30;
  ulong extraout_x8_31;
  ulong extraout_x8_32;
  ulong extraout_x8_33;
  ulong extraout_x8_34;
  ulong extraout_x8_35;
  ulong extraout_x8_36;
  ulong extraout_x8_37;
  
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_11;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cd4bc();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_17;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cd7fc();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_18;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cda48();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_22;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088ce42c();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_19;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cdd88();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_21;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cdb98();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_27;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088ce8f8();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_28;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c6bdc();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c6e94();
    }
    break;
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_30;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cd6ac();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_09;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088ce280();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_20;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cd328();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_13;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cead4();
    }
    break;
  case 0xe:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cebfc();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_25;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d20a0();
    }
    break;
  case 0x10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_26;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088ce0c8();
    }
    break;
  case 0x11:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_33;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cf180();
    }
    break;
  case 0x12:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_31;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d12dc();
    }
    break;
  case 0x13:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d22d0();
    }
    break;
  case 0x14:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_14;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d24ac();
    }
    break;
  case 0x15:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_34;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cedc0();
    }
    break;
  case 0x16:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d2764();
    }
    break;
  case 0x17:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_12;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d2e0c();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_08;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cfa8c();
    }
    break;
  case 0x19:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_23;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cfc5c();
    }
    break;
  case 0x1a:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d3740();
    }
    break;
  case 0x1b:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_36;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088ce5cc();
    }
    break;
  case 0x1c:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_35;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d689c();
    }
    break;
  case 0x1d:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_10;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d6b68();
    }
    break;
  case 0x1e:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_15;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d1228();
    }
    break;
  case 0x1f:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_29;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d7ebc();
    }
    break;
  case 0x20:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_16;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d863c();
    }
    break;
  case 0x21:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d87ac();
    }
    break;
  default:
    goto LAB_1088cae9c;
  case 0x23:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d88d4();
    }
    break;
  case 0x24:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_32;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d8a58();
    }
    break;
  case 0x25:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_37;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d8b54();
    }
    break;
  case 0x26:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d25d4();
    }
    break;
  case 0x27:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_24;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d82d4();
    }
    break;
  case 0x28:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d9048();
    }
  }
  __ZdlPv();
LAB_1088cae9c:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 1088cb07c; end: 1088cb2d3;  */

void FUN_1088cb07c(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001088dcef0();
  func_0x0001088dd608(&PTR_FUN_110a85e18);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  uVar2 = *(undefined4 *)(unaff_x21 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x28) = uVar2;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088dd830();
    uVar2 = *(undefined4 *)(unaff_x19 + 0x28);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  switch(uVar2) {
  case 1:
    func_0x0001088dd408();
    func_0x0001088db044();
    break;
  case 2:
    func_0x0001088dd408();
    func_0x0001088db098();
    break;
  case 3:
    func_0x0001088dd408();
    func_0x0001088db100();
    break;
  case 4:
    func_0x0001088dd408();
    func_0x0001088db14c();
    break;
  case 5:
    func_0x0001088dd408();
    func_0x0001088db1a4();
    break;
  case 6:
    func_0x0001088dd408();
    func_0x0001088db22c();
    break;
  case 7:
    func_0x0001088dd408();
    func_0x0001088db280();
    break;
  case 8:
    func_0x0001088dd408();
    func_0x0001088db2fc();
    break;
  case 9:
    func_0x0001088dd408();
    func_0x0001088db32c();
    break;
  case 10:
    func_0x0001088dd408();
    FUN_1088db35c();
    break;
  case 0xb:
    func_0x0001088dd408();
    FUN_1088db3a8();
    break;
  case 0xc:
    func_0x0001088dd408();
    func_0x0001088db420();
    break;
  case 0xd:
    func_0x0001088dd408();
    func_0x0001088db498();
    break;
  case 0xe:
    func_0x0001088dd408();
    func_0x0001088db4f4();
    break;
  case 0xf:
    func_0x0001088dd408();
    func_0x0001088db568();
    break;
  case 0x10:
    func_0x0001088dd408();
    func_0x0001088db5c8();
    break;
  case 0x11:
    func_0x0001088dd408();
    func_0x0001088db644();
    break;
  case 0x12:
    func_0x0001088dd408();
    func_0x0001088db6d0();
    break;
  case 0x13:
    func_0x0001088dd408();
    func_0x0001088db780();
    break;
  case 0x14:
    func_0x0001088dd408();
    func_0x0001088db7fc();
    break;
  case 0x15:
    func_0x0001088dd408();
    func_0x0001088db858();
    break;
  case 0x16:
    func_0x0001088dd408();
    func_0x0001088db8cc();
    break;
  case 0x17:
    func_0x0001088dd408();
    FUN_1088db940();
    break;
  case 0x18:
    func_0x0001088dd408();
    func_0x0001088db9f8();
    break;
  case 0x19:
    func_0x0001088dd408();
    func_0x0001088dba84();
    break;
  case 0x1a:
    func_0x0001088dd408();
    func_0x0001088dbb04();
    break;
  case 0x1b:
    func_0x0001088dd408();
    func_0x0001088dbbc0();
    break;
  case 0x1c:
    func_0x0001088dd408();
    FUN_1088dbc34();
    break;
  case 0x1d:
    func_0x0001088dd408();
    FUN_1088dbc84();
    break;
  case 0x1e:
    func_0x0001088dd408();
    FUN_1088dbce4();
    break;
  case 0x1f:
    func_0x0001088dd408();
    func_0x0001088dbd34();
    break;
  case 0x20:
    func_0x0001088dd408();
    func_0x0001088dbdac();
    break;
  case 0x21:
    func_0x0001088dd408();
    func_0x0001088dbe1c();
    break;
  default:
    goto LAB_1088dceb4;
  case 0x23:
    func_0x0001088dd408();
    func_0x0001088dbe78();
    break;
  case 0x24:
    func_0x0001088dd408();
    FUN_1088dbeec();
    break;
  case 0x25:
    func_0x0001088dd408();
    func_0x0001088dbf40();
    break;
  case 0x26:
    func_0x0001088dd408();
    func_0x0001088dbf8c();
    break;
  case 0x27:
    func_0x0001088dd408();
    func_0x0001088dbff0();
    break;
  case 0x28:
    func_0x0001088dd408();
    func_0x0001088dc09c();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
LAB_1088dceb4:
  return;
}



/* Entry: 1088cb2d4; end: 1088cb2ff;  */

undefined8 FUN_1088cb2d4(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088cb300(param_1);
  return param_1;
}



/* Entry: 1088cb300; end: 1088cb33f;  */

void FUN_1088cb300(long param_1)

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
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x8_15;
  ulong extraout_x8_16;
  ulong extraout_x8_17;
  ulong extraout_x8_18;
  ulong extraout_x8_19;
  ulong extraout_x8_20;
  ulong extraout_x8_21;
  ulong extraout_x8_22;
  ulong extraout_x8_23;
  ulong extraout_x8_24;
  ulong extraout_x8_25;
  ulong extraout_x8_26;
  ulong extraout_x8_27;
  ulong extraout_x8_28;
  ulong extraout_x8_29;
  ulong extraout_x8_30;
  ulong extraout_x8_31;
  ulong extraout_x8_32;
  ulong extraout_x8_33;
  ulong extraout_x8_34;
  ulong extraout_x8_35;
  ulong extraout_x8_36;
  ulong extraout_x8_37;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_11;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cd4bc();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_17;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cd7fc();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_18;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cda48();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_22;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088ce42c();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_19;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cdd88();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_21;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cdb98();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_27;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088ce8f8();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_28;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c6bdc();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c6e94();
    }
    break;
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_30;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cd6ac();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_09;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088ce280();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_20;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cd328();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_13;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cead4();
    }
    break;
  case 0xe:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cebfc();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_25;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d20a0();
    }
    break;
  case 0x10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_26;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088ce0c8();
    }
    break;
  case 0x11:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_33;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cf180();
    }
    break;
  case 0x12:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_31;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d12dc();
    }
    break;
  case 0x13:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d22d0();
    }
    break;
  case 0x14:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_14;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d24ac();
    }
    break;
  case 0x15:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_34;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cedc0();
    }
    break;
  case 0x16:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d2764();
    }
    break;
  case 0x17:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_12;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d2e0c();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_08;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cfa8c();
    }
    break;
  case 0x19:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_23;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088cfc5c();
    }
    break;
  case 0x1a:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d3740();
    }
    break;
  case 0x1b:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_36;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088ce5cc();
    }
    break;
  case 0x1c:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_35;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d689c();
    }
    break;
  case 0x1d:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_10;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d6b68();
    }
    break;
  case 0x1e:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_15;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d1228();
    }
    break;
  case 0x1f:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_29;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d7ebc();
    }
    break;
  case 0x20:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_16;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d863c();
    }
    break;
  case 0x21:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d87ac();
    }
    break;
  default:
    goto LAB_1088cae9c;
  case 0x23:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d88d4();
    }
    break;
  case 0x24:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_32;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d8a58();
    }
    break;
  case 0x25:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_37;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d8b54();
    }
    break;
  case 0x26:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d25d4();
    }
    break;
  case 0x27:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_24;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d82d4();
    }
    break;
  case 0x28:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088cae9c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088d9048();
    }
  }
  __ZdlPv();
LAB_1088cae9c:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 1088cb340; end: 1088cb343;  */

undefined8 FUN_1088cb340(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088cb300(param_1);
  return param_1;
}



/* Entry: 1088cb344; end: 1088cb357;  */

void FUN_1088cb344(void)

{
  FUN_1088cb2d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cb358; end: 1088cb3f7;  */

undefined8 FUN_1088cb358(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  return param_1;
}



/* Entry: 1088cb3f8; end: 1088cb73b;  */

void FUN_1088cb3f8(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088dd450();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dd588();
  }
  FUN_1088caa20();
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



/* Entry: 1088cb73c; end: 1088cb73f;  */

void FUN_1088cb73c(ulong *param_1)

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
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd6c4();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088dd4e4();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x0001088dcfd8();
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[5];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_1088caa20();
      }
      *(int *)(unaff_x21 + 5) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088ddb08();
        func_0x0001088cbf38();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db044();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088dd968();
        func_0x0001088cbfc0();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db098();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc068();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db100();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc0b0();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db14c();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cc118();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db1a4();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cc1dc();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db22c();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cc264();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db280();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088c6d90();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db2fc();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088c70c4();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db32c();
      break;
    case 10:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc308();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      FUN_1088db35c();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc350();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      FUN_1088db3a8();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cc3a0();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db420();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cc42c();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db498();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cc484();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db4f4();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cc514();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db568();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc56c();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db5c8();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc5f8();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db644();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc6a8();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db6d0();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc7f0();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db780();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cc894();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db7fc();
      break;
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc8ec();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db858();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc96c();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db8cc();
      break;
    case 0x17:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc9fc();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      FUN_1088db940();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088ccadc();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db9f8();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088ccb8c();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dba84();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088ccc34();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbb04();
      break;
    case 0x1b:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088ccd7c();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbbc0();
      break;
    case 0x1c:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cce0c();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      FUN_1088dbc34();
      break;
    case 0x1d:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cce1c();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      FUN_1088dbc84();
      break;
    case 0x1e:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cce78();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      FUN_1088dbce4();
      break;
    case 0x1f:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cce88();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbd34();
      break;
    case 0x20:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088ccf80();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbdac();
      break;
    case 0x21:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088ccfe4();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbe1c();
      break;
    default:
      goto LAB_1088cbf1c;
    case 0x23:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cd03c();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbe78();
      break;
    case 0x24:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cd0c0();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      FUN_1088dbeec();
      break;
    case 0x25:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cd0dc();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbf40();
      break;
    case 0x26:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cd130();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbf8c();
      break;
    case 0x27:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cd1b0();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbff0();
      break;
    case 0x28:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cd2e0();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dc09c();
    }
    unaff_x21[4] = (ulong)param_1;
  }
LAB_1088cbf1c:
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



/* Entry: 1088cb740; end: 1088cbf37;  */

void FUN_1088cb740(ulong *param_1)

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
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd6c4();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088dd4e4();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x0001088dcfd8();
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[5];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_1088caa20();
      }
      *(int *)(unaff_x21 + 5) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088ddb08();
        func_0x0001088cbf38();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db044();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088dd968();
        func_0x0001088cbfc0();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db098();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc068();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db100();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc0b0();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db14c();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cc118();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db1a4();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cc1dc();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db22c();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cc264();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db280();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088c6d90();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db2fc();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088c70c4();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db32c();
      break;
    case 10:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc308();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      FUN_1088db35c();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc350();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      FUN_1088db3a8();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cc3a0();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db420();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cc42c();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db498();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cc484();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db4f4();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cc514();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db568();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc56c();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db5c8();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc5f8();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db644();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc6a8();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db6d0();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc7f0();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db780();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cc894();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db7fc();
      break;
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc8ec();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db858();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc96c();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db8cc();
      break;
    case 0x17:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cc9fc();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      FUN_1088db940();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088ccadc();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088db9f8();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088ccb8c();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dba84();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088ccc34();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbb04();
      break;
    case 0x1b:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088ccd7c();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbbc0();
      break;
    case 0x1c:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cce0c();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      FUN_1088dbc34();
      break;
    case 0x1d:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cce1c();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      FUN_1088dbc84();
      break;
    case 0x1e:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cce78();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      FUN_1088dbce4();
      break;
    case 0x1f:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cce88();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbd34();
      break;
    case 0x20:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088ccf80();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbdac();
      break;
    case 0x21:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088ccfe4();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbe1c();
      break;
    default:
      goto LAB_1088cbf1c;
    case 0x23:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cd03c();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbe78();
      break;
    case 0x24:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cd0c0();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      FUN_1088dbeec();
      break;
    case 0x25:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cd0dc();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbf40();
      break;
    case 0x26:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cd130();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbf8c();
      break;
    case 0x27:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088cd1b0();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dbff0();
      break;
    case 0x28:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088cd2e0();
        goto LAB_1088cbf1c;
      }
      func_0x0001088dd3d0();
      func_0x0001088dc09c();
    }
    unaff_x21[4] = (ulong)param_1;
  }
LAB_1088cbf1c:
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



/* Entry: 1088cbf38; end: 1088cc117;  */

void FUN_1088cbf38(ulong *param_1,long param_2)

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



/* Entry: 1088cc118; end: 1088cc1db;  */

void FUN_1088cc118(ulong *param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  ulong extraout_x8_01;
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
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd6d0();
    if (param_1 == (ulong *)0x0) {
      FUN_1088dc0e8();
      *(ulong **)(unaff_x21 + 0x28) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_1088ce00c();
    }
  }
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x30) = 1;
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    *(int *)(unaff_x21 + 0x34) = *(int *)(unaff_x20 + 0x34);
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



/* Entry: 1088cc1dc; end: 1088cc263;  */

void FUN_1088cc1dc(ulong *param_1,long param_2)

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



/* Entry: 1088cc264; end: 1088cc307;  */

void FUN_1088cc264(ulong *param_1,long param_2,ulong param_3)

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
        func_0x0001088dd6f4();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010b5c4808();
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



/* Entry: 1088cc308; end: 1088cc39f;  */

void FUN_1088cc308(ulong *param_1,long param_2)

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



/* Entry: 1088cc3a0; end: 1088cc42b;  */

void FUN_1088cc3a0(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088dd654();
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
        func_0x0001088dd4e4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 1088cc42c; end: 1088cc483;  */

void FUN_1088cc42c(ulong *param_1)

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



/* Entry: 1088cc484; end: 1088cc513;  */

void FUN_1088cc484(ulong *param_1,long param_2,ulong param_3)

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
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x28) = 1;
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



/* Entry: 1088cc514; end: 1088cc56b;  */

void FUN_1088cc514(ulong *param_1)

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



/* Entry: 1088cc56c; end: 1088cc893;  */

void FUN_1088cc56c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088dd654();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd6c4();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088ddbb4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b59cd28();
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



/* Entry: 1088cc894; end: 1088cc8eb;  */

void FUN_1088cc894(ulong *param_1)

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



/* Entry: 1088cc8ec; end: 1088cce0b;  */

void FUN_1088cc8ec(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
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



/* Entry: 1088cce0c; end: 1088cce1b;  */

void FUN_1088cce0c(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
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



/* Entry: 1088cce1c; end: 1088cce77;  */

void FUN_1088cce1c(ulong *param_1)

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



/* Entry: 1088cce78; end: 1088cce87;  */

void FUN_1088cce78(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
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



/* Entry: 1088cce88; end: 1088ccf7f;  */

void FUN_1088cce88(ulong *param_1,long param_2,ulong *param_3)

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



/* Entry: 1088ccf80; end: 1088cd03b;  */

void FUN_1088ccf80(ulong *param_1)

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



/* Entry: 1088cd03c; end: 1088cd0bf;  */

void FUN_1088cd03c(ulong *param_1)

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



/* Entry: 1088cd0c0; end: 1088cd0db;  */

void FUN_1088cd0c0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
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



/* Entry: 1088cd0dc; end: 1088cd12f;  */

void FUN_1088cd0dc(ulong *param_1,long param_2)

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



/* Entry: 1088cd130; end: 1088cd2df;  */

void FUN_1088cd130(ulong *param_1,long param_2,ulong param_3)

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



/* Entry: 1088cd2e0; end: 1088cd327;  */

void FUN_1088cd2e0(ulong *param_1,long param_2)

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



/* Entry: 1088cd328; end: 1088cd36b;  */

long FUN_1088cd328(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088cd36c; end: 1088cd37f;  */

void FUN_1088cd36c(void)

{
  FUN_1088cd328();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cd380; end: 1088cd38b;  */

undefined ** FUN_1088cd380(void)

{
  return &PTR_DAT_110a86310;
}



/* Entry: 1088cd38c; end: 1088cd3d3;  */

void FUN_1088cd38c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x0001088dd288();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x0001088dd588();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0001088dd660();
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



/* Entry: 1088cd3d4; end: 1088cd4b7;  */

long * FUN_1088cd3d4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
    func_0x0001088dcff8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x0001088ddbe0();
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



/* Entry: 1088cd4b8; end: 1088cd4bb;  */

void FUN_1088cd4b8(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088dd654();
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
        func_0x0001088dd4e4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 1088cd4bc; end: 1088cd4eb;  */

undefined8 FUN_1088cd4bc(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  return param_1;
}



/* Entry: 1088cd4ec; end: 1088cd4ff;  */

void FUN_1088cd4ec(void)

{
  FUN_1088cd4bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cd500; end: 1088cd50b;  */

undefined ** FUN_1088cd500(void)

{
  return &PTR_DAT_110a86358;
}



/* Entry: 1088cd50c; end: 1088cd53f;  */

void FUN_1088cd50c(void)

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



/* Entry: 1088cd540; end: 1088cd61f;  */

long * FUN_1088cd540(long *param_1,long param_2,ulong param_3,long *param_4)

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
      goto LAB_1088cd570;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088cd570:
      param_4 = (long *)&UNK_10f4ea865;
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
      goto LAB_1088cd5a4;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088cd5a4:
      param_4 = (long *)&UNK_10f4ea88a;
      func_0x0001088dd2ec();
      func_0x0001088dcce0();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd170();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088cd5ec;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088cd5ec;
  param_4 = (long *)&UNK_10f4ea8b1;
  func_0x0001088dd2ec();
  func_0x0001088dcd24();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088cd5ec:
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



/* Entry: 1088cd620; end: 1088cd6a7;  */

void FUN_1088cd620(long param_1)

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



/* Entry: 1088cd6a8; end: 1088cd6ab;  */

void FUN_1088cd6a8(ulong *param_1,long param_2)

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



/* Entry: 1088cd6ac; end: 1088cd6d3;  */

undefined8 FUN_1088cd6ac(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  return param_1;
}



/* Entry: 1088cd6d4; end: 1088cd6e7;  */

void FUN_1088cd6d4(void)

{
  FUN_1088cd6ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cd6e8; end: 1088cd6f3;  */

undefined ** FUN_1088cd6e8(void)

{
  return &PTR_DAT_110a86398;
}



/* Entry: 1088cd6f4; end: 1088cd71f;  */

void FUN_1088cd6f4(void)

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



/* Entry: 1088cd720; end: 1088cd79f;  */

long * FUN_1088cd720(long *param_1,long *param_2,ulong param_3,long *param_4)

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
    if (unaff_x22[1] == 0) goto LAB_1088cd76c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_1088cd76c;
  param_4 = (long *)&UNK_10f4ea8d4;
  func_0x0001088dd2ec();
  func_0x0001088dd198();
  param_1 = unaff_x22;
  param_2 = unaff_x22;
LAB_1088cd76c:
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



/* Entry: 1088cd7a0; end: 1088cd7f7;  */

void FUN_1088cd7a0(long param_1)

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



/* Entry: 1088cd7f8; end: 1088cd7fb;  */

void FUN_1088cd7f8(ulong *param_1,long param_2)

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



/* Entry: 1088cd7fc; end: 1088cd82f;  */

undefined8 FUN_1088cd7fc(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  func_0x0001088dd6fc();
  return param_1;
}



/* Entry: 1088cd830; end: 1088cd843;  */

void FUN_1088cd830(void)

{
  FUN_1088cd7fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cd844; end: 1088cd84f;  */

undefined ** FUN_1088cd844(void)

{
  return &PTR_DAT_110a863e0;
}



/* Entry: 1088cd850; end: 1088cd887;  */

void FUN_1088cd850(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd030();
  func_0x0001088dd5a8();
  func_0x0001088dd504();
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



/* Entry: 1088cd888; end: 1088cd9a3;  */

long * FUN_1088cd888(long *param_1,long param_2,ulong param_3,long *param_4)

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
      goto LAB_1088cd8b8;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088cd8b8:
      param_4 = (long *)&UNK_10f4ea8fc;
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
      goto LAB_1088cd8ec;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088cd8ec:
      param_4 = (long *)&UNK_10f4ea928;
      func_0x0001088dd2ec();
      func_0x0001088dcce0();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd170();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088cd920;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088cd920:
      param_4 = (long *)&UNK_10f4ea956;
      func_0x0001088dd2ec();
      func_0x0001088dcd24();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088cd970;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088cd970;
  param_4 = (long *)&UNK_10f4ea97b;
  func_0x0001088dd2ec();
  func_0x0001088dd724();
  func_0x0001088dcf10();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088cd970:
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



/* Entry: 1088cd9a4; end: 1088cda43;  */

void FUN_1088cd9a4(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
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
  func_0x0001088dd1bc();
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088ddaf0();
  return;
}



/* Entry: 1088cda44; end: 1088cda47;  */

void FUN_1088cda44(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
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



/* Entry: 1088cda48; end: 1088cda6f;  */

undefined8 FUN_1088cda48(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  return param_1;
}



/* Entry: 1088cda70; end: 1088cda83;  */

void FUN_1088cda70(void)

{
  FUN_1088cda48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cda84; end: 1088cda8f;  */

undefined ** FUN_1088cda84(void)

{
  return &PTR_DAT_110a86420;
}



/* Entry: 1088cda90; end: 1088cdabb;  */

void FUN_1088cda90(void)

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



/* Entry: 1088cdabc; end: 1088cdb3b;  */

long * FUN_1088cdabc(long *param_1,long *param_2,ulong param_3,long *param_4)

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
    if (unaff_x22[1] == 0) goto LAB_1088cdb08;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_1088cdb08;
  param_4 = (long *)&UNK_10f4ea9a1;
  func_0x0001088dd2ec();
  func_0x0001088dd198();
  param_1 = unaff_x22;
  param_2 = unaff_x22;
LAB_1088cdb08:
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



/* Entry: 1088cdb3c; end: 1088cdb93;  */

void FUN_1088cdb3c(long param_1)

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



/* Entry: 1088cdb94; end: 1088cdb97;  */

void FUN_1088cdb94(ulong *param_1,long param_2)

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



/* Entry: 1088cdb98; end: 1088cdbc7;  */

undefined8 FUN_1088cdb98(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  return param_1;
}



/* Entry: 1088cdbc8; end: 1088cdbdb;  */

void FUN_1088cdbc8(void)

{
  FUN_1088cdb98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cdbdc; end: 1088cdbe7;  */

undefined ** FUN_1088cdbdc(void)

{
  return &PTR_DAT_110a86460;
}



/* Entry: 1088cdbe8; end: 1088cdc1b;  */

void FUN_1088cdbe8(void)

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



/* Entry: 1088cdc1c; end: 1088cdcfb;  */

long * FUN_1088cdc1c(long *param_1,long param_2,ulong param_3,long *param_4)

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
      goto LAB_1088cdc4c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088cdc4c:
      param_4 = (long *)&UNK_10f4ea9d1;
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
      goto LAB_1088cdc80;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088cdc80:
      param_4 = (long *)&UNK_10f4eaa05;
      func_0x0001088dd2ec();
      func_0x0001088dcce0();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd170();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088cdcc8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088cdcc8;
  param_4 = (long *)&UNK_10f4eaa33;
  func_0x0001088dd2ec();
  func_0x0001088dcd24();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088cdcc8:
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



/* Entry: 1088cdcfc; end: 1088cdd83;  */

void FUN_1088cdcfc(long param_1)

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



/* Entry: 1088cdd84; end: 1088cdd87;  */

void FUN_1088cdd84(ulong *param_1,long param_2)

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


