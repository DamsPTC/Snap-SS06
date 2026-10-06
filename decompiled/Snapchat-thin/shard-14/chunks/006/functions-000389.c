/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4f8774; end: 10b4f8777;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4f8774(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  FUN_10b4f1aa8(param_1 + 0x18,param_2 + 0x18);
  FUN_10b4f8a0c(param_1 + 0x30,param_2 + 0x30);
  uVar2 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x50,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x60);
      if (lVar4 == 0) {
        func_0x00010b4f8b58(0,*(undefined8 *)(param_2 + 0x60));
        *(long *)(param_1 + 0x60) = lVar4;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x68);
      if (lVar4 == 0) {
        func_0x00010b4f8b58(0,*(undefined8 *)(param_2 + 0x68));
        *(long *)(param_1 + 0x68) = lVar4;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar5;
        func_0x00010b4f8ac0(uVar5,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        FUN_10b4f7de4();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x78);
      if (lVar4 == 0) {
        func_0x00010b4f8b30(0,*(undefined8 *)(param_2 + 0x78));
        *(long *)(param_1 + 0x78) = lVar4;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x80);
      if (lVar4 == 0) {
        func_0x00010b4f8b58(0,*(undefined8 *)(param_2 + 0x80));
        *(long *)(param_1 + 0x80) = lVar4;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        func_0x000106af6730(uVar5,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar5;
      }
      else {
        func_0x00010bceb618();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x90);
      if (lVar4 == 0) {
        func_0x00010b4f8b30(0,*(undefined8 *)(param_2 + 0x90));
        *(long *)(param_1 + 0x90) = lVar4;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x98);
      if (lVar4 == 0) {
        func_0x00010b4f8b30(0,*(undefined8 *)(param_2 + 0x98));
        *(long *)(param_1 + 0x98) = lVar4;
      }
      else {
        func_0x00010bcebb24();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0xa0);
    if (lVar4 == 0) {
      func_0x00010b4f8b30(0,*(undefined8 *)(param_2 + 0xa0));
      *(long *)(param_1 + 0xa0) = lVar4;
    }
    else {
      func_0x00010bcebb24();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4f8778; end: 10b4f8a0b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4f8778(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  FUN_10b4f1aa8(param_1 + 0x18,param_2 + 0x18);
  FUN_10b4f8a0c(param_1 + 0x30,param_2 + 0x30);
  uVar2 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x50,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x60);
      if (lVar4 == 0) {
        func_0x00010b4f8b58(0,*(undefined8 *)(param_2 + 0x60));
        *(long *)(param_1 + 0x60) = lVar4;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x68);
      if (lVar4 == 0) {
        func_0x00010b4f8b58(0,*(undefined8 *)(param_2 + 0x68));
        *(long *)(param_1 + 0x68) = lVar4;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar5;
        func_0x00010b4f8ac0(uVar5,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        FUN_10b4f7de4();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x78);
      if (lVar4 == 0) {
        func_0x00010b4f8b30(0,*(undefined8 *)(param_2 + 0x78));
        *(long *)(param_1 + 0x78) = lVar4;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x80);
      if (lVar4 == 0) {
        func_0x00010b4f8b58(0,*(undefined8 *)(param_2 + 0x80));
        *(long *)(param_1 + 0x80) = lVar4;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        func_0x000106af6730(uVar5,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar5;
      }
      else {
        func_0x00010bceb618();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x90);
      if (lVar4 == 0) {
        func_0x00010b4f8b30(0,*(undefined8 *)(param_2 + 0x90));
        *(long *)(param_1 + 0x90) = lVar4;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x98);
      if (lVar4 == 0) {
        func_0x00010b4f8b30(0,*(undefined8 *)(param_2 + 0x98));
        *(long *)(param_1 + 0x98) = lVar4;
      }
      else {
        func_0x00010bcebb24();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0xa0);
    if (lVar4 == 0) {
      func_0x00010b4f8b30(0,*(undefined8 *)(param_2 + 0xa0));
      *(long *)(param_1 + 0xa0) = lVar4;
    }
    else {
      func_0x00010bcebb24();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4f8a0c; end: 10b4f8a23;  */

void FUN_10b4f8a0c(long *param_1,long param_2)

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



/* Entry: 10b4f8a24; end: 10b4f8a53;  */

long * FUN_10b4f8a24(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b4f8a54; end: 10b4f8b03;  */

void FUN_10b4f8a54(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xa8;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0xa8);
  }
  *puVar1 = &PTR_FUN_110cf4ca8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = param_1;
  puVar1[9] = &DAT_11383d918;
  puVar1[10] = &DAT_11383d918;
  puVar1[0xb] = &DAT_11383d918;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  return;
}



/* Entry: 10b4f8b04; end: 10b4f8b5f;  */

void FUN_10b4f8b04(int param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 unaff_x19;
  
  func_0x0001001a597c();
  uVar1 = (ulong)(param_1 << 3 | 2);
  func_0x0001001a59d0(uVar1,unaff_x19);
  func_0x0001001a59d0(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_3);
  return;
}



/* Entry: 10b4f8b60; end: 10b4f8b9b;  */

long FUN_10b4f8b60(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b4f8b9c; end: 10b4f8b9f;  */

long FUN_10b4f8b9c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b4f8ba0; end: 10b4f8bb3;  */

void FUN_10b4f8ba0(void)

{
  FUN_10b4f8b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f8bb4; end: 10b4f8bbf;  */

undefined ** FUN_10b4f8bb4(void)

{
  return &PTR_DAT_110cf4de8;
}



/* Entry: 10b4f8bc0; end: 10b4f8c0b;  */

void FUN_10b4f8bc0(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b4f8c0c; end: 10b4f8da3;  */

long * FUN_10b4f8c0c(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  
  plVar7 = param_1;
  if ((int)param_1[5] != 0) {
    plVar2 = param_1;
    func_0x00010b4f92f0();
    plVar7 = (long *)(ulong)*(uint *)(param_1 + 5);
    uVar3 = 8;
    func_0x000107c280a8(8,plVar2);
    func_0x000107c280b8(plVar7,uVar3);
    param_2 = plVar7;
  }
  lVar4 = param_1[3];
  for (iVar8 = 0; (int)lVar4 != iVar8; iVar8 = iVar8 + 1) {
    uVar5 = param_1[2];
    puVar1 = (ulong *)(param_1 + 2);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar8 * 8 + 7);
    }
    plVar7 = (long *)0x2;
    func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
    param_2 = plVar7;
  }
  if ((*(byte *)((long)param_1 + 0x2c) & 1) != 0) {
    func_0x00010b4f92f0();
    param_2 = (long *)(ulong)*(byte *)((long)param_1 + 0x2c);
    uVar3 = 0x18;
    func_0x000107c280a8(0x18,plVar7);
    func_0x000107c280a8(param_2,uVar3);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar9;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar8);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 10b4f8da4; end: 10b4f8e0f;  */

void FUN_10b4f8da4(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 1;
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



/* Entry: 10b4f8e10; end: 10b4f8e93;  */

undefined8 * FUN_10b4f8e10(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf4da8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b4f919c(param_1 + 2,param_2,param_3 + 0x10);
  param_3 = param_3 + 0x28;
  func_0x000107c2809c(param_3,param_2);
  param_1[5] = param_3;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



/* Entry: 10b4f8e94; end: 10b4f8ec3;  */

long FUN_10b4f8e94(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4f8ec4(param_1);
  return param_1;
}



/* Entry: 10b4f8ec4; end: 10b4f8eeb;  */

long * FUN_10b4f8ec4(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b4f8eec; end: 10b4f8eef;  */

long FUN_10b4f8eec(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4f8ec4(param_1);
  return param_1;
}



/* Entry: 10b4f8ef0; end: 10b4f8f03;  */

void FUN_10b4f8ef0(void)

{
  FUN_10b4f8e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f8f04; end: 10b4f8f0f;  */

undefined ** FUN_10b4f8f04(void)

{
  return &PTR_DAT_110cf4e50;
}



/* Entry: 10b4f8f10; end: 10b4f8f5b;  */

void FUN_10b4f8f10(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  func_0x000107c3025c(param_1 + 0x28);
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



/* Entry: 10b4f8f5c; end: 10b4f9053;  */

long * FUN_10b4f8f5c(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b4f8fcc;
    puVar2 = (undefined8 *)*puVar8;
  }
  else {
    puVar2 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b4f8fcc;
  }
  func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f775e2e);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar3;
LAB_10b4f8fcc:
  iVar9 = *(int *)(param_1 + 0x18);
  for (iVar7 = 0; iVar9 != iVar7; iVar7 = iVar7 + 1) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
    }
    plVar3 = (long *)0x2;
    func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x30),param_2,param_3);
    param_2 = plVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar9);
        if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar9;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 10b4f9054; end: 10b4f90d3;  */

long FUN_10b4f9054(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b4f92a8();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10b4f90d4();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  uVar2 = *(ulong *)(unaff_x19 + 0x28) & 0xfffffffffffffffc;
  lVar1 = (long)*(char *)(uVar2 + 0x17);
  if (lVar1 < 0) {
    lVar1 = *(long *)(uVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    unaff_x20 = unaff_x20 + uVar2 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b4f90d4; end: 10b4f90ff;  */

long FUN_10b4f90d4(long param_1)

{
  func_0x00010b4f8d04();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b4f9100; end: 10b4f9103;  */

void FUN_10b4f9100(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b4f917c(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar1,uVar2);
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



/* Entry: 10b4f9104; end: 10b4f917b;  */

void FUN_10b4f9104(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b4f917c(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar1,uVar2);
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



/* Entry: 10b4f917c; end: 10b4f919b;  */

void FUN_10b4f917c(long *param_1,long param_2)

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



/* Entry: 10b4f919c; end: 10b4f91c7;  */

undefined8 * FUN_10b4f919c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b4f917c(param_1,param_3);
  return param_1;
}



/* Entry: 10b4f91c8; end: 10b4f91f7;  */

long * FUN_10b4f91c8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b4f91f8; end: 10b4f928f;  */

void FUN_10b4f91f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4f92fc();
  }
  *puVar1 = &PTR_FUN_110cf4d58;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 6) = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined1 *)((long)puVar1 + 0x2c) = 0;
  return;
}



/* Entry: 10b4f9290; end: 10b4f9307;  */

void FUN_10b4f9290(void)

{
  return;
}



/* Entry: 10b4f9308; end: 10b4f9347;  */

long FUN_10b4f9308(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4f9348; end: 10b4f934b;  */

long FUN_10b4f9348(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4f934c; end: 10b4f935f;  */

void FUN_10b4f934c(void)

{
  FUN_10b4f9308();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f9360; end: 10b4f936b;  */

undefined ** FUN_10b4f9360(void)

{
  return &PTR_DAT_110cf4f70;
}



/* Entry: 10b4f936c; end: 10b4f93b3;  */

void FUN_10b4f936c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
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



/* Entry: 10b4f93b4; end: 10b4f959f;  */

long * FUN_10b4f93b4(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  
  lVar11 = 8;
  for (uVar10 = (ulong)(*(uint *)(param_1 + 0x18) &
                       ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar2 = (ulong *)(uVar5 + lVar11 + -1);
    }
    puVar8 = (undefined8 *)*puVar2;
    lVar4 = (long)*(char *)((long)puVar8 + 0x17);
    puVar7 = puVar8;
    if (lVar4 < 0) {
      lVar4 = puVar8[1];
      puVar7 = (undefined8 *)*puVar8;
    }
    func_0x000107c303d4(puVar7,lVar4,1,&UNK_10f775e62);
    lVar4 = (long)*(char *)((long)puVar8 + 0x17);
    if (((lVar4 < 0) && (lVar4 = puVar8[1], 0x7f < lVar4)) ||
       ((*param_3 - (long)param_2) + 0xe < lVar4)) {
      plVar3 = param_3;
      func_0x00010b4d5120(param_3,1,puVar8,param_2);
    }
    else {
      *(undefined1 *)param_2 = 10;
      *(char *)((long)param_2 + 1) = (char)lVar4;
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        puVar8 = (undefined8 *)*puVar8;
      }
      _memcpy((undefined1 *)((long)param_2 + 2),puVar8,lVar4);
      plVar3 = (long *)((undefined1 *)((long)param_2 + 2) + lVar4);
    }
    lVar11 = lVar11 + 8;
    param_2 = plVar3;
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    if (puVar7[1] != 0) {
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_10b4f94dc;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_10b4f94dc:
    func_0x00010b4f9bb0(puVar7);
    param_2 = param_3;
    func_0x00010b4f9b7c(param_3,2);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    if (puVar7[1] == 0) goto LAB_10b4f953c;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b4f953c;
  func_0x00010b4f9bb0(puVar7);
  param_2 = param_3;
  func_0x00010b4f9b7c(param_3,3);
LAB_10b4f953c:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar10 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar10 < 0) {
    lVar11 = *(long *)(uVar5 + 8);
    uVar10 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar11 = uVar5 + 8;
  }
  if ((long)(int)uVar10 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar11,uVar10 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar10);
  }
  while( true ) {
    iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar6 = (int)uVar10;
    uVar10 = (ulong)(uint)(iVar6 - iVar9);
    if (iVar6 - iVar9 == 0 || iVar6 < iVar9) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar9);
    param_2 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar6);
}



/* Entry: 10b4f95a0; end: 10b4f967b;  */

ulong FUN_10b4f95a0(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = (ulong)uVar2;
  lVar6 = 8;
  for (uVar5 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar6 + -1);
    }
    uVar3 = *puVar1;
    func_0x000107c282a0();
    uVar4 = uVar3 + uVar4;
    lVar6 = lVar6 + 8;
  }
  uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    uVar4 = uVar4 + uVar5 + 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    uVar4 = uVar4 + uVar5 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x38) = (int)uVar4;
  return uVar4;
}



/* Entry: 10b4f967c; end: 10b4f967f;  */

void FUN_10b4f967c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar1,uVar2);
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



/* Entry: 10b4f9680; end: 10b4f9727;  */

void FUN_10b4f9680(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar1,uVar2);
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



/* Entry: 10b4f9728; end: 10b4f9767;  */

long FUN_10b4f9728(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4f9308();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4f9768; end: 10b4f976b;  */

long FUN_10b4f9768(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4f9308();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4f976c; end: 10b4f977f;  */

void FUN_10b4f976c(void)

{
  FUN_10b4f9728();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f9780; end: 10b4f978b;  */

undefined ** FUN_10b4f9780(void)

{
  return &PTR_DAT_110cf4fd8;
}



/* Entry: 10b4f978c; end: 10b4f97d7;  */

void FUN_10b4f978c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b4f936c(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 10b4f97d8; end: 10b4f989f;  */

long * FUN_10b4f97d8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x38),param_2,param_3);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    if (puVar6[1] == 0) goto LAB_10b4f985c;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_10b4f985c;
  func_0x00010b4f9bb0(puVar6);
  plVar1 = param_3;
  func_0x00010b4f9b7c(param_3,2);
LAB_10b4f985c:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar7);
      if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      lVar2 = (long)plVar1 + (long)iVar7;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar5);
  }
  _memcpy(plVar1,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar3);
}



/* Entry: 10b4f98a0; end: 10b4f9923;  */

long FUN_10b4f98a0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b4f98d8;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b4f98d8:
    lVar3 = 0;
    goto LAB_10b4f98dc;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b4f98dc:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_10b4f9924();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b4f9924; end: 10b4f994f;  */

long FUN_10b4f9924(long param_1)

{
  FUN_10b4f95a0();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b4f9950; end: 10b4f9a23;  */

void FUN_10b4f9950(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_10b4f9ad4(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b4f9680();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10b4f9a24; end: 10b4f9a33;  */

void FUN_10b4f9a24(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4f9ba4();
  }
  *puVar1 = &PTR_FUN_110cf4ee0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 10b4f9a34; end: 10b4f9ad3;  */

void FUN_10b4f9a34(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4f9ba4();
  }
  *puVar1 = &PTR_FUN_110cf4ee0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 10b4f9ad4; end: 10b4f9b7b;  */

undefined8 * FUN_10b4f9ad4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4f9ba4();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110cf4ee0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010598fd00(puVar1 + 2,param_1,param_2 + 0x10);
  lVar2 = param_2 + 0x28;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[5] = lVar2;
  param_2 = param_2 + 0x30;
  func_0x000107c2809c(param_2,param_1);
  puVar1[6] = param_2;
  *(undefined4 *)(puVar1 + 7) = 0;
  return puVar1;
}



/* Entry: 10b4f9b7c; end: 10b4f9bb7;  */

long * FUN_10b4f9b7c(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar6;
  uint extraout_w10_00;
  long lVar7;
  long *unaff_x20;
  int iVar8;
  undefined8 *unaff_x22;
  int iVar9;
  long lVar10;
  
  lVar7 = (long)*(char *)((long)unaff_x22 + 0x17);
  if ((-1 < lVar7) || (lVar7 = unaff_x22[1], lVar7 < 0x80)) {
    lVar10 = *param_1;
    uVar6 = (int)param_2 << 3;
    uVar2 = uVar6;
    func_0x0001001a5b20();
    if (lVar7 <= lVar10 + ~((long)unaff_x20 + (long)(int)uVar2) + 0x10) {
      lVar10 = (long)unaff_x20 + 2;
      for (uVar6 = uVar6 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
        *(byte *)(lVar10 + -2) = (byte)uVar6 | 0x80;
        lVar10 = lVar10 + 1;
      }
      *(byte *)(lVar10 + -2) = (byte)uVar6;
      *(char *)(lVar10 + -1) = (char)lVar7;
      puVar1 = (undefined8 *)*unaff_x22;
      if (-1 < *(char *)((long)unaff_x22 + 0x17)) {
        puVar1 = unaff_x22;
      }
      func_0x000107c610b4(lVar10,puVar1,lVar7);
      return (long *)(lVar10 + lVar7);
    }
  }
  func_0x00010b4d564c(param_1,param_2);
  func_0x00010b4d56cc();
  uVar6 = extraout_w10;
  while (0x7f < uVar6) {
    func_0x00010b4d576c();
    uVar6 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar5 = extraout_x8;
  while (0x7f < (uint)uVar5) {
    func_0x00010b4d5758();
    uVar5 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  iVar8 = (int)unaff_x22;
  if ((*(char *)((long)param_1 + 0x39) == '\x01') &&
     ((*param_1 - (long)unaff_x20) + 0x10 <= (long)iVar8)) {
    plVar3 = param_1;
    func_0x000107c303e0(param_1,unaff_x20);
    plVar4 = (long *)param_1[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,unaff_x22);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*param_1 - (long)unaff_x20 < (long)iVar8) {
    while( true ) {
      iVar9 = ((int)*param_1 - (int)unaff_x20) + 0x10;
      iVar8 = (int)unaff_x22;
      unaff_x22 = (undefined8 *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar7 = (long)unaff_x20 + (long)iVar9;
      unaff_x20 = param_1;
      func_0x000107c303e4(param_1,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar8);
  }
  _memcpy(unaff_x20);
  return (long *)((long)unaff_x20 + (long)iVar8);
}



/* Entry: 10b4f9bb8; end: 10b4f9c07;  */

void FUN_10b4f9bb8(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  
  if (*(int *)(param_1 + 0x28) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b4fc4a8();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_10b4fa4a0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 10b4f9c08; end: 10b4f9c33;  */

undefined8 FUN_10b4f9c08(undefined8 param_1)

{
  func_0x00010b4fc234();
  FUN_10b4f9c34(param_1);
  return param_1;
}



/* Entry: 10b4f9c34; end: 10b4f9c73;  */

void FUN_10b4f9c34(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4fa1c0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) == 1) {
      uVar1 = *(ulong *)(param_1 + 8);
      if ((uVar1 & 1) != 0) {
        func_0x00010b4fc4a8();
        uVar1 = extraout_x8;
      }
      if (uVar1 == 0) {
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_10b4fa4a0();
        }
        __ZdlPv();
      }
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 10b4f9c74; end: 10b4f9c77;  */

undefined8 FUN_10b4f9c74(undefined8 param_1)

{
  func_0x00010b4fc234();
  FUN_10b4f9c34(param_1);
  return param_1;
}



/* Entry: 10b4f9c78; end: 10b4f9c8b;  */

void FUN_10b4f9c78(void)

{
  FUN_10b4f9c08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f9c8c; end: 10b4f9c9b;  */

undefined8 FUN_10b4f9c8c(undefined8 param_1)

{
  func_0x00010b4fc234();
  FUN_10b4fa4cc(param_1);
  return param_1;
}



/* Entry: 10b4f9c9c; end: 10b4f9e43;  */

void FUN_10b4f9c9c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b4f9ce4(*(undefined8 *)(param_1 + 0x18));
  }
  FUN_10b4f9bb8(param_1);
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



/* Entry: 10b4f9e44; end: 10b4fa107;  */

void FUN_10b4f9e44(ulong *param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar2;
  
  func_0x00010b4fc1f4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      param_1 = puVar2;
      func_0x00010b4fbdac();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      func_0x00010b4f9f08();
    }
  }
  func_0x00010b4fc24c();
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 != 0) {
    if ((int)unaff_x21[5] == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[4];
        func_0x00010b4fa008();
      }
    }
    else {
      if ((int)unaff_x21[5] != 0) {
        param_1 = unaff_x21;
        FUN_10b4f9bb8();
      }
      *(int *)(unaff_x21 + 5) = iVar1;
      if (iVar1 == 1) {
        FUN_10b4fbdf0();
        unaff_x21[4] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4fc204();
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



/* Entry: 10b4fa108; end: 10b4fa1bf;  */

undefined8 * FUN_10b4fa108(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf51f0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4fc1e0();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x000107c2809c(lVar2,param_2);
  param_1[4] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 0x40);
  param_1[7] = uVar3;
  return param_1;
}



/* Entry: 10b4fa1c0; end: 10b4fa1eb;  */

undefined8 FUN_10b4fa1c0(undefined8 param_1)

{
  func_0x00010b4fc234();
  FUN_10b4fa1ec(param_1);
  return param_1;
}



/* Entry: 10b4fa1ec; end: 10b4fa233;  */

void FUN_10b4fa1ec(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fa234; end: 10b4fa237;  */

undefined8 FUN_10b4fa234(undefined8 param_1)

{
  func_0x00010b4fc234();
  FUN_10b4fa1ec(param_1);
  return param_1;
}



/* Entry: 10b4fa238; end: 10b4fa24b;  */

void FUN_10b4fa238(void)

{
  FUN_10b4fa1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fa24c; end: 10b4fa257;  */

undefined ** FUN_10b4fa24c(void)

{
  return &PTR_DAT_110cf53d0;
}



/* Entry: 10b4fa258; end: 10b4fa3b3;  */

long * FUN_10b4fa258(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long extraout_x8;
  int iVar7;
  long unaff_x22;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 2);
  plVar2 = param_1;
  plVar6 = param_3;
  plVar4 = param_2;
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)param_1[5];
    plVar6 = (long *)(ulong)*(uint *)(param_2 + 4);
    plVar2 = (long *)0x1;
    func_0x00010b4fc21c();
    plVar4 = plVar2;
  }
  func_0x00010b4fc26c(param_1[3]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4fa2bc;
  }
  else if ((int)param_2 != 0) {
LAB_10b4fa2bc:
    func_0x00010b4fc25c();
    param_2 = (long *)0x2;
    plVar2 = param_3;
    func_0x00010b4fc46c();
    plVar4 = plVar2;
  }
  plVar3 = plVar2;
  if (param_1[7] != 0) {
    func_0x00010b4fc408();
    plVar3 = (long *)0x18;
    func_0x000107c280a8();
    func_0x00010b4fc454();
    param_2 = plVar2;
    plVar4 = plVar3;
  }
  func_0x00010b4fc26c(param_1[4]);
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4fa33c;
  }
  else if ((int)param_2 == 0) goto LAB_10b4fa33c;
  func_0x00010b4fc25c();
  plVar3 = param_3;
  func_0x00010b4fc46c(param_3,4);
  plVar4 = plVar3;
LAB_10b4fa33c:
  if ((int)param_1[8] != 0) {
    func_0x00010b4fc408();
    plVar4 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar3);
    func_0x00010b4fc460();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[6] + 0x20);
    plVar4 = (long *)0x6;
    func_0x00010b4fc21c();
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b4fc2bc();
    if ((long)plVar6 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      plVar6 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*param_3 - (long)plVar4 < (long)(int)plVar6) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)plVar4) + 0x10;
        iVar7 = (int)plVar6;
        plVar6 = (long *)(ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar5 = (long)plVar4 + (long)iVar8;
        plVar4 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar4 + (long)iVar7);
    }
    _memcpy(plVar4,lVar5,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)plVar4 + (long)(int)plVar6);
  }
  return plVar4;
}



/* Entry: 10b4fa3b4; end: 10b4fa49b;  */

void FUN_10b4fa3b4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  
  func_0x00010b4fc2d4();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
  }
  uVar2 = *(ulong *)(unaff_x19 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b4fc288();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108c6cd50(*(undefined8 *)(unaff_x19 + 0x28));
      func_0x00010b4fc288();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000108c6cd50(*(undefined8 *)(unaff_x19 + 0x30));
      func_0x00010b4fc288();
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b4fc478();
  }
  func_0x00010b4fc484();
  return;
}



/* Entry: 10b4fa49c; end: 10b4fa49f;  */

void FUN_10b4fa49c(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b4fc1f4();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010b4fc49c();
    puVar2 = unaff_x22;
  }
  func_0x00010b4fc2ac();
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010b4fc308();
    }
    func_0x00010b4fc400();
  }
  func_0x00010b4fc314(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4fc308();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x000108c6f470();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x000108c6f470();
        *(ulong **)(unaff_x21 + 0x30) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  func_0x00010b4fc24c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b4fc204();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4fa4a0; end: 10b4fa4cb;  */

undefined8 FUN_10b4fa4a0(undefined8 param_1)

{
  func_0x00010b4fc234();
  FUN_10b4fa4cc(param_1);
  return param_1;
}



/* Entry: 10b4fa4cc; end: 10b4fa52f;  */

long * FUN_10b4fa4cc(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b4fb7b8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b4fb7b8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b4fa9e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c303ac();
  }
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b4fa530; end: 10b4fa543;  */

void FUN_10b4fa530(void)

{
  FUN_10b4fa4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fa544; end: 10b4fa54f;  */

undefined ** FUN_10b4fa544(void)

{
  return &PTR_DAT_110cf5430;
}



/* Entry: 10b4fa550; end: 10b4fa64f;  */

void FUN_10b4fa550(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b4fa5ec(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b4fa5ec(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b4fa61c(*(undefined8 *)(param_1 + 0x58));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b4fa650; end: 10b4fa8af;  */

long * FUN_10b4fa650(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b4fc3a4();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x48) + 0x1c);
    param_1 = (long *)0x1;
    func_0x00010b4fc21c();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x1c);
    param_1 = (long *)0x2;
    func_0x00010b4fc21c();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x20);
    param_1 = (long *)0x3;
    func_0x00010b4fc21c();
    param_4 = param_1;
  }
  iVar6 = *(int *)(unaff_x20 + 0x20);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00010b4fc354();
    param_1 = (long *)0x4;
    func_0x00010b4fc21c();
    param_4 = param_1;
  }
  iVar6 = *(int *)(unaff_x20 + 0x38);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00010b4fc354();
    param_1 = (long *)0x5;
    func_0x00010b4fc21c();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x68) & 1) != 0) {
    func_0x00010b4fc2a0();
    param_4 = (long *)(ulong)*(byte *)(unaff_x20 + 0x68);
    uVar2 = 0x30;
    func_0x000107c280a8(0x30,param_1);
    func_0x000107c280a8(param_4,uVar2);
  }
  plVar3 = param_4;
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    plVar3 = unaff_x19;
    func_0x000106af6880();
    param_3 = param_4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return plVar3;
  }
  func_0x00010b4fc2bc();
  if ((long)param_3 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    param_3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)plVar3) {
    _memcpy(plVar3,lVar4,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar3 + (long)(int)param_3);
  }
  while( true ) {
    iVar6 = ((int)*unaff_x19 - (int)plVar3) + 0x10;
    iVar5 = (int)param_3;
    uVar1 = iVar5 - iVar6;
    param_3 = (long *)(ulong)uVar1;
    if (uVar1 == 0 || iVar5 < iVar6) break;
    func_0x00010b4d5738();
    plVar3 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar3 + (long)iVar5);
}



/* Entry: 10b4fa8b0; end: 10b4fa8cb;  */

long FUN_10b4fa8b0(long param_1)

{
  long extraout_x8;
  
  FUN_10b4fb8a8();
  FUN_10b4fc168();
  return param_1 + extraout_x8;
}



/* Entry: 10b4fa8cc; end: 10b4fa8ef;  */

void FUN_10b4fa8cc(void)

{
  uint uVar1;
  ulong *puVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x00010b4fc1f4();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  FUN_10b4fa8cc(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar2 = (ulong *)(unaff_x21 + 0x30);
  func_0x00010b4fa8e0();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b4fc32c();
        *(ulong **)(unaff_x21 + 0x48) = puVar2;
      }
      else {
        func_0x00010b4fa8f0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x50);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b4fc32c();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
      }
      else {
        func_0x00010b4fa8f0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x58);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b4fbf70();
        *(ulong **)(unaff_x21 + 0x58) = puVar3;
        puVar2 = puVar3;
      }
      else {
        func_0x00010b4fa960();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(char *)(unaff_x20 + 0x68) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x68) = 1;
  }
  func_0x00010b4fc24c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b4fc204();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4fa8f0; end: 10b4fa9e7;  */

void FUN_10b4fa8f0(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = param_2;
  func_0x00010b4fc314(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4fc308();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
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



/* Entry: 10b4fa9e8; end: 10b4faa13;  */

undefined8 FUN_10b4fa9e8(undefined8 param_1)

{
  func_0x00010b4fc234();
  func_0x00010b4fc440();
  func_0x00010b4fc37c();
  return param_1;
}



/* Entry: 10b4faa14; end: 10b4faa17;  */

undefined8 FUN_10b4faa14(undefined8 param_1)

{
  func_0x00010b4fc234();
  func_0x00010b4fc440();
  func_0x00010b4fc37c();
  return param_1;
}



/* Entry: 10b4faa18; end: 10b4faa2b;  */

void FUN_10b4faa18(void)

{
  FUN_10b4fa9e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4faa2c; end: 10b4faa37;  */

undefined ** FUN_10b4faa2c(void)

{
  return &PTR_DAT_110cf5490;
}



/* Entry: 10b4faa38; end: 10b4faaff;  */

long * FUN_10b4faa38(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long unaff_x22;
  int iVar3;
  
  func_0x00010b4fc23c();
  func_0x00010b4fc26c(param_1[2]);
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4faa70;
  }
  else if ((int)param_2 != 0) {
LAB_10b4faa70:
    param_4 = (long *)&UNK_10f776002;
    func_0x00010b4fc25c();
    param_2 = 1;
    param_1 = unaff_x19;
    func_0x00010b4fc1bc();
    unaff_x20 = param_1;
  }
  func_0x00010b4fc26c(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4faacc;
  }
  else if ((int)param_2 == 0) goto LAB_10b4faacc;
  param_4 = (long *)&UNK_10f776041;
  func_0x00010b4fc25c();
  func_0x00010b4fc1bc();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10b4faacc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b4fc2bc();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b4fc3cc();
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



/* Entry: 10b4fab00; end: 10b4fab7b;  */

long FUN_10b4fab00(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b4fc2f4();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  uVar1 = *(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b4fc288();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b4fc478();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x20) = (int)param_1;
  return param_1;
}



/* Entry: 10b4fab7c; end: 10b4fab7f;  */

void FUN_10b4fab7c(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  
  lVar1 = param_2;
  func_0x00010b4fc314(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4fc308();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b4fc2ac();
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4fc308();
    }
    func_0x000107c30248(param_1 + 0x18);
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



/* Entry: 10b4fab80; end: 10b4fabff;  */

void FUN_10b4fab80(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x30) == 5) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b4fc4a8();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b4fabdc;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b4fb918();
    }
  }
  else {
    if (*(int *)(param_1 + 0x30) != 4) goto LAB_10b4fabdc;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b4fc4a8();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b4fabdc;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b4fb7b8();
    }
  }
  __ZdlPv();
LAB_10b4fabdc:
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 10b4fac00; end: 10b4fac47;  */

long FUN_10b4fac00(long param_1)

{
  func_0x00010b4fc234();
  func_0x00010b4fc37c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4fb7b8();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_10b4fab80(param_1);
  }
  return param_1;
}



/* Entry: 10b4fac48; end: 10b4fac4b;  */

long FUN_10b4fac48(long param_1)

{
  func_0x00010b4fc234();
  func_0x00010b4fc37c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4fb7b8();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_10b4fab80(param_1);
  }
  return param_1;
}



/* Entry: 10b4fac4c; end: 10b4fac5f;  */

void FUN_10b4fac4c(void)

{
  FUN_10b4fac00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fac60; end: 10b4fac73;  */

undefined8 FUN_10b4fac60(undefined8 param_1)

{
  func_0x00010b4fc234();
  func_0x00010b4fc440();
  return param_1;
}



/* Entry: 10b4fac74; end: 10b4facbb;  */

void FUN_10b4fac74(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b4fc2e8();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010b4fa5ec(*(undefined8 *)(unaff_x19 + 0x20));
  }
  FUN_10b4fab80();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 10b4facbc; end: 10b4fad7f;  */

long * FUN_10b4facbc(long param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  func_0x00010b4fc23c();
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 0x1c);
    unaff_x20 = (long *)0x1;
    func_0x00010b4fc1d4(1);
  }
  func_0x00010b4fc26c(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4fad2c;
  }
  else if ((int)param_2 == 0) goto LAB_10b4fad2c;
  param_4 = (long *)&UNK_10f77607d;
  func_0x00010b4fc25c();
  func_0x00010b4fc1bc();
  unaff_x20 = unaff_x19;
LAB_10b4fad2c:
  plVar2 = (long *)(ulong)*(uint *)(unaff_x21 + 0x30);
  if ((*(uint *)(unaff_x21 + 0x30) & 0xfffffffe) == 4) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x1c);
    func_0x00010b4fc1d4();
    unaff_x20 = plVar2;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b4fc2bc();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b4fc3cc();
  if (*plVar2 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*plVar2 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = plVar2;
      func_0x000107c303e4(plVar2,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b4fad80; end: 10b4fae27;  */

void FUN_10b4fad80(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x00010b4fc2d4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_10b4fa8b0(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x00010b4fc288();
  }
  if (*(int *)(unaff_x19 + 0x30) == 5) {
    FUN_10b4fba00(*(undefined8 *)(unaff_x19 + 0x28));
    func_0x00010b4fc168();
  }
  else if (*(int *)(unaff_x19 + 0x30) == 4) {
    FUN_10b4fa8b0(*(undefined8 *)(unaff_x19 + 0x28));
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b4fc478();
  }
  func_0x00010b4fc484();
  return;
}



/* Entry: 10b4fae28; end: 10b4faf5b;  */

void FUN_10b4fae28(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b4fc1f4();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar3 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00010b4fc49c();
    puVar3 = unaff_x22;
  }
  func_0x00010b4fc2ac();
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      func_0x00010b4fc308();
    }
    func_0x00010b4fc400();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[4];
    if (param_1 == (ulong *)0x0) {
      func_0x00010b4fc32c();
      unaff_x21[4] = (ulong)param_1;
    }
    else {
      FUN_10b4fa8f0();
    }
  }
  func_0x00010b4fc24c();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 == 0) goto LAB_10b4faf38;
  iVar2 = (int)unaff_x21[6];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b4fab80();
    }
    *(int *)(unaff_x21 + 6) = iVar1;
  }
  if (iVar1 == 5) {
    if (iVar2 == 5) {
      param_1 = (ulong *)unaff_x21[5];
      FUN_10b4faf5c();
      goto LAB_10b4faf38;
    }
    FUN_10b4fbfe8();
    param_1 = puVar3;
  }
  else {
    if (iVar1 != 4) goto LAB_10b4faf38;
    if (iVar2 == 4) {
      param_1 = (ulong *)unaff_x21[5];
      FUN_10b4fa8f0();
      goto LAB_10b4faf38;
    }
    func_0x00010b4fc32c();
  }
  unaff_x21[5] = (ulong)param_1;
LAB_10b4faf38:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4fc204();
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



/* Entry: 10b4faf5c; end: 10b4faf87;  */

void FUN_10b4faf5c(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
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



/* Entry: 10b4faf88; end: 10b4fafcf;  */

long FUN_10b4faf88(long param_1)

{
  func_0x00010b4fc234();
  func_0x00010b4fc37c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4fb7b8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b4fb570();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4fafd0; end: 10b4fafd3;  */

long FUN_10b4fafd0(long param_1)

{
  func_0x00010b4fc234();
  func_0x00010b4fc37c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4fb7b8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b4fb570();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4fafd4; end: 10b4fafe7;  */

void FUN_10b4fafd4(void)

{
  FUN_10b4faf88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fafe8; end: 10b4faff3;  */

undefined ** FUN_10b4fafe8(void)

{
  return &PTR_DAT_110cf5548;
}



/* Entry: 10b4faff4; end: 10b4fb07f;  */

void FUN_10b4faff4(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x00010b4fc2e8();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b4fa5ec(*(undefined8 *)(unaff_x19 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b4fb04c(*(undefined8 *)(unaff_x19 + 0x28));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
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


