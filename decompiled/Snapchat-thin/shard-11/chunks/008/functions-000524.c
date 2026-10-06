/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108907c50; end: 108907cbb;  */

void FUN_108907c50(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
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



/* Entry: 108907cbc; end: 108907d4f;  */

void FUN_108907cbc(void)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001089087dc();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      func_0x000107c2a26c();
      *(ulong *)(unaff_x21 + 0x18) = uVar2;
    }
    else {
      FUN_1088bf398(*(long *)(unaff_x21 + 0x18));
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089087fc();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 108907d50; end: 108907d83;  */

void FUN_108907d50(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar4;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34978();
  FUN_108907754();
  uVar3 = unaff_x20;
  func_0x0001089087dc();
  uVar4 = *(ulong *)(unaff_x19 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 0x18);
    if (uVar3 == 0) {
      func_0x000107c2a49c();
      *(ulong *)(unaff_x21 + 0x18) = uVar4;
      uVar3 = uVar4;
    }
    else {
      FUN_108908ac4();
    }
  }
  func_0x000108908810();
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(unaff_x21 + 0x28);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        uVar3 = unaff_x21;
        func_0x000107c2a47c();
      }
      *(int *)(unaff_x21 + 0x28) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x0001089087cc();
        func_0x000108907ae0();
        goto LAB_108907ac0;
      }
      func_0x000108908880();
      func_0x000107c2a4a0();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x0001089087cc();
        func_0x000108907ba4();
        goto LAB_108907ac0;
      }
      func_0x000108908880();
      func_0x000108908598();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x0001089087cc();
        FUN_108907c50();
        goto LAB_108907ac0;
      }
      func_0x000108908880();
      func_0x000108908634();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001089087cc();
        FUN_108907cbc();
        goto LAB_108907ac0;
      }
      func_0x000108908880();
      func_0x0001089086a8();
      break;
    default:
      goto LAB_108907ac0;
    }
    *(ulong *)(unaff_x21 + 0x20) = uVar3;
  }
LAB_108907ac0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089087fc();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 108907d84; end: 108907dc3;  */

void FUN_108907d84(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  func_0x0001089088a4();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x28) = uVar1;
  return;
}



/* Entry: 108907dc4; end: 108907dd7;  */

void FUN_108907dc4(void)

{
  func_0x000107c2a48c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108907dd8; end: 108907de3;  */

undefined ** FUN_108907dd8(void)

{
  return &PTR_DAT_110a90d58;
}



/* Entry: 108907de4; end: 108907e3b;  */

void FUN_108907de4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108908864();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 108907e3c; end: 108907feb;  */

long * FUN_108907e3c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x0001089087ec();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x000108908874();
    param_1 = (long *)0x1;
    func_0x0001089087c4();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010890878c();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x000108908858();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x00010890878c();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x000108908858();
    param_4 = plVar3;
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    func_0x00010890878c();
    param_4 = (long *)(ulong)*(byte *)(unaff_x20 + 0x38);
    uVar4 = 0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x000107c280a8(param_4,uVar4);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    param_4 = (long *)0x5;
    func_0x0001089087c4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108908820();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar1 = iVar6 - iVar7;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar5,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 108907fec; end: 108907fef;  */

void FUN_108907fec(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001089087dc();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x18);
      if (lVar2 == 0) {
        func_0x000108908844();
        *(long *)(unaff_x21 + 0x18) = lVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if (lVar2 == 0) {
        func_0x000108908844();
        *(long *)(unaff_x21 + 0x20) = lVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  func_0x000108908810();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001089087fc();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108907ff0; end: 10890801b;  */

undefined8 FUN_108907ff0(undefined8 param_1)

{
  func_0x000107c34974();
  FUN_10890801c(param_1);
  return param_1;
}



/* Entry: 10890801c; end: 10890804f;  */

void FUN_10890801c(long param_1)

{
  long unaff_x19;
  
  func_0x000107c34980();
  if (param_1 != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x00010b59e378();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108908050; end: 108908063;  */

void FUN_108908050(void)

{
  FUN_108907ff0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108908064; end: 10890806f;  */

undefined ** FUN_108908064(void)

{
  return &PTR_DAT_110a90da8;
}



/* Entry: 108908070; end: 1089080c3;  */

void FUN_108908070(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108908864();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b59e418(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 1089080c4; end: 108908207;  */

long * FUN_1089080c4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089087ec();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x000108908874();
    param_1 = (long *)0x1;
    func_0x0001089087c4();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x30);
    param_1 = (long *)0x2;
    func_0x0001089087c4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010890878c();
    param_4 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x00010890884c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108908820();
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



/* Entry: 108908208; end: 10890820b;  */

void FUN_108908208(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar3;
  
  func_0x0001089087dc();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x18);
      if (lVar2 == 0) {
        func_0x000108908844();
        *(long *)(unaff_x21 + 0x18) = lVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        FUN_108908728();
        *(ulong *)(unaff_x21 + 0x20) = uVar3;
      }
      else {
        func_0x00010b59e688();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x000108908810();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001089087fc();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10890820c; end: 10890823f;  */

void FUN_10890820c(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar3;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34978();
  FUN_108908070();
  func_0x0001089087dc();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x18);
      if (lVar2 == 0) {
        func_0x000108908844();
        *(long *)(unaff_x21 + 0x18) = lVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        FUN_108908728();
        *(ulong *)(unaff_x21 + 0x20) = uVar3;
      }
      else {
        func_0x00010b59e688();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x000108908810();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001089087fc();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108908240; end: 108908257;  */

undefined1  [16] FUN_108908240(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  
  func_0x0001089088a4();
  puVar3 = (undefined1 *)(param_2 + 0x18);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x18); puVar2 != (undefined1 *)(param_1 + 0x2c);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = (undefined1 *)(param_1 + 0x2c);
  return auVar5;
}



/* Entry: 108908258; end: 108908283;  */

long FUN_108908258(long param_1)

{
  func_0x000107c34974();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 108908284; end: 108908297;  */

void FUN_108908284(void)

{
  FUN_108908258();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108908298; end: 1089082a3;  */

undefined ** FUN_108908298(void)

{
  return &PTR_DAT_110a90df0;
}



/* Entry: 1089082a4; end: 1089082d7;  */

void FUN_1089082a4(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
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



/* Entry: 1089082d8; end: 10890837b;  */

long * FUN_1089082d8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  
  plVar4 = (long *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)plVar4 + 0x17);
  plVar5 = param_3;
  if (lVar2 < 0) {
    lVar2 = plVar4[1];
    if (lVar2 == 0) goto LAB_108908344;
    plVar1 = (long *)*plVar4;
  }
  else {
    plVar1 = plVar4;
    if (*(char *)((long)plVar4 + 0x17) == '\0') goto LAB_108908344;
  }
  func_0x000107c303d4(plVar1,lVar2,1,&UNK_10f4ec2fa);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,1,plVar4,param_2);
  plVar5 = plVar4;
  param_2 = plVar1;
LAB_108908344:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x000108908820();
  if ((long)plVar5 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar5) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar3 - iVar6);
      if (iVar3 - iVar6 == 0 || iVar3 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar5);
}



/* Entry: 10890837c; end: 1089083df;  */

void FUN_10890837c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_1089083b4;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_1089083b4:
    iVar1 = 0;
    goto LAB_1089083b8;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_1089083b8:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010890882c();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 1089083e0; end: 1089083e3;  */

void FUN_1089083e0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
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



/* Entry: 1089083e4; end: 10890840f;  */

undefined8 FUN_1089083e4(undefined8 param_1)

{
  func_0x000107c34974();
  FUN_108908410(param_1);
  return param_1;
}



/* Entry: 108908410; end: 10890843f;  */

void FUN_108908410(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108908440; end: 10890844b;  */

undefined ** FUN_108908440(void)

{
  return &PTR_DAT_110a90e40;
}



/* Entry: 10890844c; end: 108908487;  */

void FUN_10890844c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108908898();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108908864();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 108908488; end: 10890850b;  */

long * FUN_108908488(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089087ec();
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x00010890878c();
    param_4 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010890884c();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108908874();
    param_4 = (long *)0x2;
    func_0x0001089087c4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108908820();
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



/* Entry: 10890850c; end: 10890857b;  */

void FUN_10890850c(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108908898();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010890886c();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    param_1 = param_1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010890882c();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 10890857c; end: 108908597;  */

void FUN_10890857c(void)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001089087dc();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      func_0x000107c2a26c();
      *(ulong *)(unaff_x21 + 0x18) = uVar2;
    }
    else {
      FUN_1088bf398(*(long *)(unaff_x21 + 0x18));
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089087fc();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 108908598; end: 108908727;  */

undefined8 * FUN_108908598(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107c34978();
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar2 = unaff_x20;
    func_0x00010b4d80e0();
  }
  puVar3 = puVar2 + 1;
  *puVar3 = unaff_x20;
  *puVar2 = &PTR_DAT_110a90c80;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108908780();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x000108908838();
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    FUN_108908728();
  }
  puVar2[4] = unaff_x20;
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(unaff_x19 + 0x28);
  return puVar2;
}



/* Entry: 108908728; end: 108908767;  */

undefined8 * FUN_108908728(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000107c34978();
  if (param_1 == 0) {
    lVar2 = 0x38;
    __Znwm();
  }
  else {
    lVar2 = unaff_x20;
    func_0x00010b4d80e0();
  }
  puVar3 = unaff_x19;
  func_0x00010b5a2030();
  *(long *)(lVar2 + 8) = unaff_x20;
  *unaff_x19 = &PTR_DAT_110d137d0;
  if ((puVar3[1] & 1) != 0) {
    func_0x00010b5a1dfc();
  }
  puVar3 = unaff_x19 + 2;
  func_0x00010b5a20e8();
  unaff_x19[2] = puVar3;
  puVar3 = unaff_x19 + 3;
  func_0x00010b5a20e8();
  unaff_x19[3] = puVar3;
  *(undefined4 *)(unaff_x19 + 6) = 0;
  uVar1 = *(undefined4 *)((long)unaff_x19 + 0x34);
  *(undefined4 *)((long)unaff_x19 + 0x34) = uVar1;
  *(undefined4 *)(unaff_x19 + 4) = *(undefined4 *)(unaff_x19 + 4);
  switch(uVar1) {
  case 1:
    func_0x00010b5a2024();
    func_0x00010b5a163c();
    break;
  case 2:
    func_0x00010b5a2024();
    func_0x00010b5a16b8();
    break;
  case 3:
    func_0x00010b5a2024();
    func_0x00010b5a1744();
    break;
  case 4:
    func_0x00010b5a2024();
    func_0x00010b5a18b0();
    break;
  default:
    goto code_r0x00010b59e36c;
  case 6:
    func_0x00010b5a2024();
    func_0x00010b5a1964();
  }
  unaff_x19[5] = puVar3;
code_r0x00010b59e36c:
  return unaff_x19;
}



/* Entry: 108908768; end: 1089088c7;  */

void FUN_108908768(void)

{
  return;
}



/* Entry: 1089088c8; end: 10890892f;  */

void FUN_1089088c8(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar2;
  
  func_0x000107c34994();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x000107c2a4b0();
  if (unaff_x20 != 0) {
    uVar1 = *(ulong *)(unaff_x20 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010890ae90();
    }
    if (uVar2 != uVar1) {
      func_0x00010b4cf42c();
      unaff_x20 = uVar2;
    }
    *(undefined4 *)(unaff_x19 + 0x1c) = 5;
    *(ulong *)(unaff_x19 + 0x10) = unaff_x20;
  }
  return;
}



/* Entry: 108908930; end: 108908933;  */

undefined8 FUN_108908930(undefined8 param_1)

{
  func_0x00010069081c();
  func_0x000100690850(param_1);
  return param_1;
}



/* Entry: 108908934; end: 108908947;  */

void FUN_108908934(void)

{
  func_0x000107c2a4b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108908948; end: 10890895f;  */

long FUN_108908948(long param_1)

{
  func_0x000107c34998();
  FUN_108909dc0(param_1 + 0x10);
  return param_1;
}



/* Entry: 108908960; end: 108908a8f;  */

void FUN_108908960(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c2a4b0();
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



/* Entry: 108908a90; end: 108908abf;  */

void FUN_108908a90(void)

{
  FUN_108909be4();
  func_0x00010890ad1c();
  return;
}



/* Entry: 108908ac0; end: 108908ac3;  */

void FUN_108908ac0(long param_1)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890aff4();
  puVar3 = (ulong *)(param_1 + 8);
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_108908c2c;
  iVar2 = *(int *)(unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x000107c2a4b0();
    }
    *(int *)(unaff_x21 + 0x1c) = iVar1;
  }
  switch(iVar1) {
  case 1:
    if (iVar2 != iVar1) {
code_r0x000108908bd8:
      func_0x00010890afa8();
      func_0x000107c284d4();
      goto code_r0x000108908c28;
    }
    func_0x00010890ad48();
    break;
  case 2:
    if (iVar2 == iVar1) {
      func_0x00010890ad60();
      func_0x000108908c50();
      goto LAB_108908c2c;
    }
    func_0x00010890afa8();
    FUN_108909f40();
    goto code_r0x000108908c28;
  case 3:
    if (iVar2 != iVar1) goto code_r0x000108908bd8;
    func_0x00010890ad48();
    break;
  case 4:
    if (iVar2 != iVar1) goto code_r0x000108908bd8;
    func_0x00010890ad48();
    break;
  case 5:
    if (iVar2 == iVar1) {
      func_0x00010890ad60();
      func_0x000108908c94();
      goto LAB_108908c2c;
    }
    func_0x00010890afa8();
    FUN_1088f2a98();
    goto code_r0x000108908c28;
  case 6:
    if (iVar2 != iVar1) goto code_r0x000108908bd8;
    func_0x00010890ad48();
    break;
  case 7:
    if (iVar2 == iVar1) {
      func_0x00010890ad60();
      func_0x000108908cd8();
      goto LAB_108908c2c;
    }
    func_0x00010890afa8();
    FUN_108909fe4();
code_r0x000108908c28:
    *(long *)(unaff_x21 + 0x10) = param_1;
  default:
    goto LAB_108908c2c;
  }
  func_0x00010bd1b688();
LAB_108908c2c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 108908ac4; end: 108908c4f;  */

void FUN_108908ac4(long param_1)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890aff4();
  puVar3 = (ulong *)(param_1 + 8);
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_108908c2c;
  iVar2 = *(int *)(unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x000107c2a4b0();
    }
    *(int *)(unaff_x21 + 0x1c) = iVar1;
  }
  switch(iVar1) {
  case 1:
    if (iVar2 != iVar1) {
code_r0x000108908bd8:
      func_0x00010890afa8();
      func_0x000107c284d4();
      goto code_r0x000108908c28;
    }
    func_0x00010890ad48();
    break;
  case 2:
    if (iVar2 == iVar1) {
      func_0x00010890ad60();
      func_0x000108908c50();
      goto LAB_108908c2c;
    }
    func_0x00010890afa8();
    FUN_108909f40();
    goto code_r0x000108908c28;
  case 3:
    if (iVar2 != iVar1) goto code_r0x000108908bd8;
    func_0x00010890ad48();
    break;
  case 4:
    if (iVar2 != iVar1) goto code_r0x000108908bd8;
    func_0x00010890ad48();
    break;
  case 5:
    if (iVar2 == iVar1) {
      func_0x00010890ad60();
      func_0x000108908c94();
      goto LAB_108908c2c;
    }
    func_0x00010890afa8();
    FUN_1088f2a98();
    goto code_r0x000108908c28;
  case 6:
    if (iVar2 != iVar1) goto code_r0x000108908bd8;
    func_0x00010890ad48();
    break;
  case 7:
    if (iVar2 == iVar1) {
      func_0x00010890ad60();
      func_0x000108908cd8();
      goto LAB_108908c2c;
    }
    func_0x00010890afa8();
    FUN_108909fe4();
code_r0x000108908c28:
    *(long *)(unaff_x21 + 0x10) = param_1;
  default:
    goto LAB_108908c2c;
  }
  func_0x00010bd1b688();
LAB_108908c2c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 108908c50; end: 108908d57;  */

void FUN_108908c50(long param_1)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c34994();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_10890a95c();
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890adf4();
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



/* Entry: 108908d58; end: 108908dcf;  */

void FUN_108908d58(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x19;
  
  func_0x000107c34994();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_DAT_110a91050;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010890add0();
  }
  FUN_108909cf8(unaff_x19 + 2);
  func_0x000108909d18(unaff_x19 + 5);
  *(undefined4 *)(unaff_x19 + 8) = 0;
  return;
}



/* Entry: 108908dd0; end: 108908dfb;  */

long FUN_108908dd0(long param_1)

{
  func_0x000107c34998();
  FUN_108909d68(param_1 + 0x10);
  return param_1;
}



/* Entry: 108908dfc; end: 108908e0f;  */

void FUN_108908dfc(void)

{
  FUN_108908dd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108908e10; end: 108908e1b;  */

undefined ** FUN_108908e10(void)

{
  return &PTR_DAT_110a91178;
}



/* Entry: 108908e1c; end: 108908e63;  */

void FUN_108908e1c(long param_1)

{
  ulong *puVar1;
  
  FUN_108909f2c(param_1 + 0x10);
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
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



/* Entry: 108908e64; end: 108908f0f;  */

long * FUN_108908e64(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010890ada8();
  iVar4 = *(int *)(param_1 + 0x18);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x00010890ad70();
    param_3 = (ulong)*(uint *)(param_2 + 0x24);
    param_4 = (long *)0x1;
    func_0x00010890ae74();
  }
  iVar4 = *(int *)(unaff_x20 + 0x30);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x00010890ad70();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0x2;
    func_0x00010890ae74();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890ae9c();
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



/* Entry: 108908f10; end: 108908fab;  */

long FUN_108908f10(long param_1)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  ulong uVar3;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar4;
  
  func_0x00010890af18();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar2 = *unaff_x21;
    FUN_108908fac();
    unaff_x20 = lVar2 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  uVar3 = *(ulong *)(param_1 + 0x28);
  lVar2 = unaff_x20 + *(int *)(param_1 + 0x30);
  puVar1 = (ulong *)(param_1 + 0x28);
  if ((uVar3 & 1) != 0) {
    puVar1 = (ulong *)(uVar3 + 7);
  }
  for (lVar4 = (long)*(int *)(param_1 + 0x30) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar3 = *puVar1;
    func_0x000108908fc4();
    lVar2 = uVar3 + lVar2;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010890ae84();
    lVar4 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar4 + lVar2;
  }
  *(int *)(param_1 + 0x40) = (int)lVar2;
  return lVar2;
}



/* Entry: 108908fac; end: 108908fdb;  */

void FUN_108908fac(void)

{
  func_0x00010890961c();
  func_0x00010890ad1c();
  return;
}



/* Entry: 108908fdc; end: 108908fdf;  */

void FUN_108908fdc(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c34994();
  FUN_1086eae94(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  func_0x0001086eaea4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890adf4();
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



/* Entry: 108908fe0; end: 108909013;  */

void FUN_108908fe0(long param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010890af0c();
  FUN_108908e1c();
  lVar1 = unaff_x20;
  lVar3 = unaff_x19;
  func_0x000107c34994();
  FUN_1086eae94(lVar1 + 0x10,lVar3 + 0x10);
  puVar2 = (ulong *)(unaff_x19 + 0x28);
  func_0x0001086eaea4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890adf4();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 108909014; end: 108909047;  */

long FUN_108909014(long param_1)

{
  func_0x000107c34998();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 108909048; end: 10890905b;  */

void FUN_108909048(void)

{
  FUN_108909014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890905c; end: 108909067;  */

undefined ** FUN_10890905c(void)

{
  return &PTR_DAT_110a911c8;
}



/* Entry: 108909068; end: 10890909f;  */

void FUN_108909068(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010890ae20();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 1089090a0; end: 10890913f;  */

long * FUN_1089090a0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x00010890ada8();
  func_0x00010890aee8(param_1[2]);
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x00010890adc4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010890af94();
    func_0x00010890af68();
    func_0x00010890af70();
    param_4 = param_1;
  }
  func_0x00010890aee8(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x00010890af88();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890ae9c();
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



/* Entry: 108909140; end: 1089091cb;  */

long FUN_108909140(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010890ae0c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c28098();
    param_1 = param_1 + 1;
  }
  uVar1 = *(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010890afe8();
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x00010890aef4();
    param_1 = param_1 + extraout_x8_00;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010890ae84();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x24) = (int)param_1;
  return param_1;
}



/* Entry: 1089091cc; end: 1089091cf;  */

void FUN_1089091cc(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010890addc();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010890ae90();
    }
    func_0x00010890af48();
  }
  uVar1 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010890ae90();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890adf4();
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



/* Entry: 1089091d0; end: 108909213;  */

long FUN_1089091d0(long param_1)

{
  func_0x000107c34998();
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  FUN_108909d38(param_1 + 0x18);
  return param_1;
}



/* Entry: 108909214; end: 108909217;  */

long FUN_108909214(long param_1)

{
  func_0x000107c34998();
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  FUN_108909d38(param_1 + 0x18);
  return param_1;
}



/* Entry: 108909218; end: 10890922b;  */

void FUN_108909218(void)

{
  FUN_1089091d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890922c; end: 108909237;  */

undefined ** FUN_10890922c(void)

{
  return &PTR_DAT_110a91218;
}



/* Entry: 108909238; end: 10890928b;  */

void FUN_108909238(long param_1)

{
  ulong *puVar1;
  
  FUN_108909f2c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_1088bf358(*(undefined8 *)(param_1 + 0x38));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 10890928c; end: 10890934f;  */

long * FUN_10890928c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010890ada8();
  func_0x00010890aee8(param_1[6]);
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_3 + 8);
  }
  if (lVar3 != 0) {
    func_0x00010890adc4();
    param_4 = param_1;
  }
  uVar2 = (ulong)*(uint *)(unaff_x20 + 0x40);
  if (*(uint *)(unaff_x20 + 0x40) != 0) {
    func_0x00010890af7c();
    param_4 = param_1;
  }
  iVar5 = *(int *)(unaff_x20 + 0x20);
  for (iVar4 = 0; iVar5 != iVar4; iVar4 = iVar4 + 1) {
    func_0x00010890ad70();
    param_3 = (ulong)*(uint *)(uVar2 + 0x24);
    param_4 = (long *)0x3;
    func_0x00010890ae74();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    param_4 = (long *)0x4;
    func_0x00010890ae74();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890ae9c();
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
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 108909350; end: 1089093f3;  */

long FUN_108909350(long param_1)

{
  long lVar1;
  ulong uVar2;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010890af18();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_108908fac();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar1 = (long)*(char *)(uVar2 + 0x17);
  if (lVar1 < 0) {
    lVar1 = *(long *)(uVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c28098();
    func_0x00010890afe8();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000107c2a268(*(undefined8 *)(param_1 + 0x38));
    func_0x00010890afe8();
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x00010890ad8c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010890ae84();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x14) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 1089093f4; end: 1089094bb;  */

void FUN_1089093f4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  ulong uVar4;
  
  func_0x00010890aff4();
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  FUN_1086eae94(unaff_x21 + 0x18,unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010890ae90();
    }
    func_0x000107c30248(unaff_x21 + 0x30);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x38) == 0) {
      func_0x000107c2a26c(uVar4,*(undefined8 *)(unaff_x20 + 0x38));
      *(ulong *)(unaff_x21 + 0x38) = uVar4;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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



/* Entry: 1089094bc; end: 1089094db;  */

void FUN_1089094bc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a90f60;
  param_1[1] = param_2;
  param_1[2] = &DAT_11383d918;
  param_1[3] = &DAT_11383d918;
  param_1[4] = 0;
  return;
}



/* Entry: 1089094dc; end: 108909507;  */

undefined8 FUN_1089094dc(undefined8 param_1)

{
  func_0x000107c34998();
  FUN_108909508(param_1);
  return param_1;
}



/* Entry: 108909508; end: 10890952f;  */

/* WARNING: Possible PIC construction at 0x00010890951c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108909520) */

void FUN_108909508(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
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



/* Entry: 108909530; end: 108909533;  */

undefined8 FUN_108909530(undefined8 param_1)

{
  func_0x000107c34998();
  FUN_108909508(param_1);
  return param_1;
}



/* Entry: 108909534; end: 108909547;  */

void FUN_108909534(void)

{
  FUN_1089094dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108909548; end: 108909553;  */

undefined ** FUN_108909548(void)

{
  return &PTR_DAT_110a91268;
}



/* Entry: 108909554; end: 108909723;  */

void FUN_108909554(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010890ae20();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 108909724; end: 10890974f;  */

long FUN_108909724(long param_1)

{
  func_0x000107c34998();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 108909750; end: 108909753;  */

long FUN_108909750(long param_1)

{
  func_0x000107c34998();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 108909754; end: 108909767;  */

void FUN_108909754(void)

{
  FUN_108909724();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108909768; end: 108909773;  */

undefined ** FUN_108909768(void)

{
  return &PTR_DAT_110a912b0;
}



/* Entry: 108909774; end: 1089097a3;  */

void FUN_108909774(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010890ae20();
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



/* Entry: 1089097a4; end: 108909827;  */

long * FUN_1089097a4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010890ada8();
  func_0x00010890aee8(param_1[2]);
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x00010890adc4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010890af94();
    func_0x00010890af68();
    func_0x00010890af70();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890ae9c();
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



/* Entry: 108909828; end: 10890988f;  */

void FUN_108909828(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010890ae0c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c28098();
    iVar1 = (int)param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x00010890aef4();
    iVar1 = iVar1 + extraout_w8;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010890ae84();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 108909890; end: 108909893;  */

void FUN_108909890(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010890addc();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010890ae90();
    }
    func_0x00010890af48();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890adf4();
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



/* Entry: 108909894; end: 1089098e7;  */

void FUN_108909894(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010890addc();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010890ae90();
    }
    func_0x00010890af48();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890adf4();
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



/* Entry: 1089098e8; end: 108909913;  */

long FUN_1089098e8(long param_1)

{
  func_0x000107c34998();
  FUN_108909dc0(param_1 + 0x10);
  return param_1;
}



/* Entry: 108909914; end: 108909927;  */

void FUN_108909914(void)

{
  FUN_1089098e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108909928; end: 10890994f;  */

undefined ** FUN_108909928(void)

{
  return &PTR_DAT_110a91308;
}



/* Entry: 108909950; end: 1089099a3;  */

void FUN_108909950(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 1) {
    func_0x000107c30320(param_1 + 0x10,0x10400300010,0);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 1089099a4; end: 108909b3b;  */

ulong FUN_1089099a4(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long extraout_x8;
  ulong unaff_x20;
  long unaff_x21;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStack_70;
  long alStack_68 [3];
  
  uVar5 = param_3;
  func_0x00010890aff4();
  uVar1 = *(uint *)(param_1 + 0x10);
  puVar8 = (undefined8 *)(ulong)uVar1;
  if (uVar1 != 0) {
    if ((uVar1 == 1) || ((*(byte *)(param_3 + 0x3a) & 1) == 0)) {
      func_0x00010890af50();
      while (alStack_68[0] != 0) {
        unaff_x20 = alStack_68[0] + 8;
        func_0x00010890af3c(unaff_x20,alStack_68[0] + 0x10);
        func_0x000107c27d54(alStack_68);
      }
    }
    else {
      puVar7 = (undefined8 *)((long)puVar8 * 0x10);
      puVar2 = puVar7;
      __Znam();
      _bzero();
      puStack_70 = puVar2;
      func_0x00010890af50();
      puVar6 = puVar2;
      while (alStack_68[0] != 0) {
        *puVar6 = *(undefined8 *)(alStack_68[0] + 8);
        puVar6[1] = (undefined8 *)(alStack_68[0] + 8);
        func_0x000107c27d54(alStack_68);
        puVar6 = puVar6 + 2;
      }
      uVar5 = LZCOUNT(puVar8) << 1 ^ 0x7e;
      FUN_10890a06c(puVar2,puVar2 + (long)puVar8 * 2,uVar5,1);
      while (puVar8 != (undefined8 *)0x0) {
        unaff_x20 = puVar2[1];
        func_0x00010890af3c(unaff_x20,unaff_x20 + 8);
        puVar2 = puVar2 + 2;
        puVar7 = puVar7 + -2;
        puVar8 = puVar7;
      }
      FUN_108909e04(&puStack_70);
    }
  }
  if (*(long *)(unaff_x21 + 0x30) != 0) {
    uVar3 = param_3;
    func_0x000107c28094(param_3,unaff_x20);
    unaff_x20 = *(ulong *)(unaff_x21 + 0x30);
    func_0x00010890af68();
    func_0x000107c280ac(unaff_x20,uVar3);
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010890ae9c();
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar4);
    unaff_x20 = param_3;
  }
  return unaff_x20;
}



/* Entry: 108909b3c; end: 108909be3;  */

void FUN_108909b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x00010890aff4();
  func_0x00010890af30();
  uVar2 = 10;
  func_0x000107c280a8(10,param_1);
  func_0x000107c280a8(*(int *)((long)unaff_x20 + 0x1c) +
                      ((int)LZCOUNT(*unaff_x21) * -9 + 0x280U >> 6) +
                      ((int)LZCOUNT(*(int *)((long)unaff_x20 + 0x1c)) * -9 + 0x160U >> 6) + 2,uVar2)
  ;
  uVar3 = 1;
  FUN_10890a920(1);
  uVar2 = param_4;
  func_0x000107c28094(param_4,uVar3);
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0x1c);
  func_0x0001001a597c(param_4,uVar2);
  uVar2 = 0x12;
  func_0x0001001a59d0(0x12,param_4);
  func_0x0001001a59d0(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x38))();
  return;
}



/* Entry: 108909be4; end: 108909cc3;  */

ulong FUN_108909be4(long param_1)

{
  long extraout_x8;
  long lVar1;
  undefined8 uVar2;
  long extraout_x9;
  ulong uVar3;
  long alStack_58 [3];
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x10);
  func_0x00010564c19c(alStack_58);
  while (alStack_58[0] != 0) {
    uVar2 = *(undefined8 *)(alStack_58[0] + 8);
    lVar1 = alStack_58[0] + 0x10;
    FUN_108909828();
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) +
            (ulong)(((int)LZCOUNT(uVar2) * -9 + 0x280U >> 6) + 2);
    uVar3 = lVar1 + uVar3 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6);
    func_0x000107c27d54(alStack_58);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010890ad8c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010890ae84();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    uVar3 = lVar1 + uVar3;
  }
  *(int *)(param_1 + 0x38) = (int)uVar3;
  return uVar3;
}



/* Entry: 108909cc4; end: 108909cf7;  */

void FUN_108909cc4(long param_1)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c34994();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_10890a95c();
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010890adf4();
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



/* Entry: 108909cf8; end: 108909d37;  */

void FUN_108909cf8(void)

{
  func_0x00010890b00c();
  FUN_1086eae94();
  return;
}



/* Entry: 108909d38; end: 108909d67;  */

long * FUN_108909d38(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 108909d68; end: 108909d8f;  */

long * FUN_108909d68(long *param_1)

{
  FUN_108909d90(param_1 + 3);
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 108909d90; end: 108909dbf;  */

long * FUN_108909d90(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 108909dc0; end: 108909e03;  */

long FUN_108909dc0(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x000107c30320(param_1,0x400300010,0);
  }
  return param_1;
}



/* Entry: 108909e04; end: 108909f2b;  */

long * FUN_108909e04(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 108909f2c; end: 108909f3f;  */

void FUN_108909f2c(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}


