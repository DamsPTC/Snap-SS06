/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b591e74; end: 10b591e87;  */

void FUN_10b591e74(void)

{
  FUN_10b591e48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b591e88; end: 10b591e93;  */

undefined ** FUN_10b591e88(void)

{
  return &PTR_DAT_110d10c98;
}



/* Entry: 10b591e94; end: 10b591ed3;  */

void FUN_10b591e94(long param_1)

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



/* Entry: 10b591ed4; end: 10b591f87;  */

long * FUN_10b591ed4(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x18);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + (long)iVar5 * 8 + 7);
    }
    param_2 = (long *)0x1;
    func_0x00010b592270(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar6;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 10b591f88; end: 10b591fff;  */

long FUN_10b591f88(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    FUN_10b592000();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b592000; end: 10b592017;  */

void FUN_10b592000(void)

{
  func_0x00010b592578();
  FUN_10b592210();
  return;
}



/* Entry: 10b592018; end: 10b592043;  */

void FUN_10b592018(long param_1,long param_2)

{
  FUN_10b592018(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b592044; end: 10b592073;  */

long * FUN_10b592044(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b592074; end: 10b59210b;  */

void FUN_10b592074(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110d10b00;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b59210c; end: 10b59220f;  */

undefined8 * FUN_10b59210c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d10b00;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b592250();
  }
  lVar2 = param_2 + 0x10;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[2] = lVar2;
  lVar2 = param_2 + 0x18;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[3] = lVar2;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return puVar1;
}



/* Entry: 10b592210; end: 10b592277;  */

long FUN_10b592210(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b592278; end: 10b5922db;  */

void FUN_10b592278(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  ulong uVar3;
  
  func_0x00010b593d5c();
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  lVar1 = unaff_x19;
  FUN_10b5922dc();
  if (unaff_x20 != 0) {
    uVar2 = *(ulong *)(unaff_x20 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar3 != uVar2) {
      func_0x00010b593d94();
      unaff_x20 = lVar1;
    }
    *(undefined4 *)(unaff_x19 + 0x24) = 2;
    *(long *)(unaff_x19 + 0x18) = unaff_x20;
  }
  return;
}



/* Entry: 10b5922dc; end: 10b592363;  */

void FUN_10b5922dc(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b592338;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b592f58();
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_10b592338;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b592338;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b592804();
    }
  }
  __ZdlPv();
LAB_10b592338:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b592364; end: 10b59244b;  */

void FUN_10b592364(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  ulong uVar3;
  
  func_0x00010b593d5c();
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  lVar1 = unaff_x19;
  FUN_10b5922dc();
  if (unaff_x20 != 0) {
    uVar2 = *(ulong *)(unaff_x20 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar3 != uVar2) {
      func_0x00010b593d94();
      unaff_x20 = lVar1;
    }
    *(undefined4 *)(unaff_x19 + 0x24) = 3;
    *(long *)(unaff_x19 + 0x18) = unaff_x20;
  }
  return;
}



/* Entry: 10b59244c; end: 10b592477;  */

undefined8 FUN_10b59244c(undefined8 param_1)

{
  func_0x00010b593ce0();
  FUN_10b592478(param_1);
  return param_1;
}



/* Entry: 10b592478; end: 10b59248b;  */

void FUN_10b592478(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b592338;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b592f58();
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_10b592338;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b592338;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b592804();
    }
  }
  __ZdlPv();
LAB_10b592338:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b59248c; end: 10b59249f;  */

void FUN_10b59248c(void)

{
  FUN_10b59244c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5924a0; end: 10b5924b3;  */

long FUN_10b5924a0(long param_1)

{
  func_0x00010b593ce0();
  FUN_10b5938b8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5924b4; end: 10b592603;  */

void FUN_10b5924b4(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_10b5922dc();
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



/* Entry: 10b592604; end: 10b59263b;  */

long FUN_10b592604(long param_1)

{
  long extraout_x8;
  
  FUN_10b592908();
  func_0x00010b593bcc();
  return param_1 + extraout_x8;
}



/* Entry: 10b59263c; end: 10b592733;  */

void FUN_10b59263c(void)

{
  int iVar1;
  int iVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b593c64();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b593db8();
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    *(int *)(unaff_x21 + 0x10) = *(int *)(unaff_x20 + 0x10);
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 == 0) goto LAB_10b592714;
  iVar2 = *(int *)(unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      FUN_10b5922dc();
    }
    *(int *)(unaff_x21 + 0x24) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      FUN_10b592778(*(undefined8 *)(unaff_x21 + 0x18));
      goto LAB_10b592714;
    }
    FUN_10b593a34();
  }
  else {
    if (iVar1 != 2) goto LAB_10b592714;
    if (iVar2 == 2) {
      FUN_10b592734(*(undefined8 *)(unaff_x21 + 0x18));
      goto LAB_10b592714;
    }
    FUN_10b5939c0();
  }
  *(ulong *)(unaff_x21 + 0x18) = unaff_x22;
LAB_10b592714:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b593cac();
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b592734; end: 10b592777;  */

void FUN_10b592734(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b593d5c();
  FUN_10b592988(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b592778; end: 10b592803;  */

void FUN_10b592778(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b593c64();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b593db8();
  }
  func_0x0001098ce904(unaff_x21 + 0x18,unaff_x20 + 0x18);
  FUN_10b59325c(unaff_x21 + 0x28);
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x40) == 0) {
      FUN_10b590930();
      *(ulong *)(unaff_x21 + 0x40) = unaff_x22;
    }
    else {
      FUN_10b593270();
    }
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x21 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  func_0x00010b593dc4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b593cac();
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b592804; end: 10b59282f;  */

long FUN_10b592804(long param_1)

{
  func_0x00010b593ce0();
  FUN_10b5938b8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b592830; end: 10b592843;  */

void FUN_10b592830(void)

{
  FUN_10b592804();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b592844; end: 10b59284f;  */

undefined ** FUN_10b592844(void)

{
  return &PTR_DAT_110d10f70;
}



/* Entry: 10b592850; end: 10b59288f;  */

void FUN_10b592850(long param_1)

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



/* Entry: 10b592890; end: 10b592907;  */

long * FUN_10b592890(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b593c54();
  lVar2 = param_1[3];
  for (iVar3 = 0; (int)lVar2 != iVar3; iVar3 = iVar3 + 1) {
    func_0x00010b593c38();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x00010b593c90();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b593cf0();
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



/* Entry: 10b592908; end: 10b59296b;  */

long FUN_10b592908(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b593d44();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10b59296c();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b593d18();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b59296c; end: 10b592987;  */

long FUN_10b59296c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b592b5c();
  func_0x00010b593bcc();
  return param_1 + extraout_x8;
}



/* Entry: 10b592988; end: 10b59299b;  */

void FUN_10b592988(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b593d5c();
  FUN_10b592988(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b59299c; end: 10b5929f3;  */

long FUN_10b59299c(long param_1)

{
  func_0x00010b593ce0();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b592ddc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b593f90();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5929f4; end: 10b5929f7;  */

long FUN_10b5929f4(long param_1)

{
  func_0x00010b593ce0();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b592ddc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b593f90();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5929f8; end: 10b592a0b;  */

void FUN_10b5929f8(void)

{
  FUN_10b59299c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b592a0c; end: 10b592a17;  */

undefined ** FUN_10b592a0c(void)

{
  return &PTR_DAT_110d10fd0;
}



/* Entry: 10b592a18; end: 10b592aaf;  */

void FUN_10b592a18(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b592a80(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b593ff4(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
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
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b592ab0; end: 10b592d87;  */

long * FUN_10b592ab0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b593c54();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x30);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x00010b593c90();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x38);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    param_4 = (long *)0x2;
    func_0x00010b593ca4();
  }
  iVar4 = *(int *)(unaff_x20 + 0x20);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x00010b593c38();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    param_4 = (long *)0x3;
    func_0x00010b593ca4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b593cf0();
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



/* Entry: 10b592d88; end: 10b592ddb;  */

void FUN_10b592d88(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x000107c316b0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b592ddc; end: 10b592e07;  */

undefined8 FUN_10b592ddc(undefined8 param_1)

{
  func_0x00010b593ce0();
  FUN_10b592e08(param_1);
  return param_1;
}



/* Entry: 10b592e08; end: 10b592e1b;  */

void FUN_10b592e08(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x000107c316b0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b592e1c; end: 10b592e2f;  */

void FUN_10b592e1c(void)

{
  FUN_10b592ddc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b592e30; end: 10b592e3b;  */

undefined ** FUN_10b592e30(void)

{
  return &PTR_DAT_110d11030;
}



/* Entry: 10b592e3c; end: 10b592ed7;  */

long * FUN_10b592e3c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b593c54();
  if (*(int *)((long)param_1 + 0x1c) == 2) {
    func_0x00010b593bc0();
    param_4 = (long *)0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x00010b593c00();
  }
  else if (*(int *)((long)param_1 + 0x1c) == 1) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x10);
    func_0x00010b593c90();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b593cf0();
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



/* Entry: 10b592ed8; end: 10b592f53;  */

void FUN_10b592ed8(long param_1)

{
  int iVar1;
  uint uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar2 = (int)LZCOUNT(*(undefined8 *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6;
  }
  else if (*(int *)(param_1 + 0x1c) == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010793598c();
    uVar2 = iVar1 + 1;
  }
  else {
    uVar2 = 0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b593d18();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    uVar2 = (int)lVar3 + uVar2;
  }
  *(uint *)(param_1 + 0x18) = uVar2;
  return;
}



/* Entry: 10b592f54; end: 10b592f57;  */

void FUN_10b592f54(void)

{
  int iVar1;
  int iVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b593c64();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b593db8();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        FUN_10b592d88();
      }
      *(int *)(unaff_x21 + 0x1c) = iVar1;
    }
    if (iVar1 == 2) {
      *(undefined8 *)(unaff_x21 + 0x10) = *(undefined8 *)(unaff_x20 + 0x10);
    }
    else if (iVar1 == 1) {
      if (iVar2 == 1) {
        func_0x00010bd1b688(*(undefined8 *)(unaff_x21 + 0x10));
      }
      else {
        func_0x000107c284d4();
        *(ulong *)(unaff_x21 + 0x10) = unaff_x22;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b593cac();
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b592f58; end: 10b592f83;  */

undefined8 FUN_10b592f58(undefined8 param_1)

{
  func_0x00010b593ce0();
  FUN_10b592f84(param_1);
  return param_1;
}



/* Entry: 10b592f84; end: 10b592fb3;  */

long FUN_10b592f84(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b593440();
  }
  __ZdlPv();
  FUN_10b593914(param_1 + 0x28);
  func_0x0001098cf768(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b592fb4; end: 10b592fc7;  */

void FUN_10b592fb4(void)

{
  FUN_10b592f58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b592fc8; end: 10b592fd3;  */

undefined ** FUN_10b592fc8(void)

{
  return &PTR_DAT_110d11088;
}



/* Entry: 10b592fd4; end: 10b59302f;  */

void FUN_10b592fd4(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b593030(*(undefined8 *)(param_1 + 0x40));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x48) = 0;
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



/* Entry: 10b593030; end: 10b593057;  */

void FUN_10b593030(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
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



/* Entry: 10b593058; end: 10b59325b;  */

/* WARNING: Possible PIC construction at 0x00010b5930fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b593100) */

long * FUN_10b593058(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar5;
  int iVar6;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  int iVar7;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010b593c54();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x40);
    param_3 = (ulong)*(uint *)(param_2 + 0x11);
    func_0x00010b593c90();
    param_4 = param_1;
  }
  plVar2 = param_1;
  uVar5 = unaff_x21;
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x00010b593bc0();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
    plVar2 = (long *)0x20;
    func_0x000107c280a8();
    func_0x00010b593c00();
    param_2 = param_1;
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x18) < 1) {
    iVar7 = *(int *)(unaff_x20 + 0x30);
    for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
      func_0x00010b593c38();
      param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
      param_4 = (long *)0x6;
      func_0x00010b593ca4();
    }
    if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
      return param_4;
    }
    func_0x00010b593cf0();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
  }
  else {
    func_0x00010b593bc0();
    param_3 = (ulong)(uint)(*(int *)(unaff_x20 + 0x18) << 2);
    param_4 = (long *)((long)plVar2 + 2);
    *(undefined1 *)plVar2 = 0x2a;
    uVar4 = param_3;
    while( true ) {
      if ((uint)uVar4 < 0x80) break;
      *(byte *)((long)param_4 + -1) = (byte)uVar4 | 0x80;
      uVar4 = (ulong)((uint)uVar4 >> 7);
      param_4 = (long *)((long)param_4 + 1);
    }
    *(byte *)((long)param_4 + -1) = (byte)uVar4;
    lVar3 = *(long *)(unaff_x20 + 0x20);
    unaff_x30 = 0x10b593100;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x21 = uVar5;
    unaff_x29 = puVar1;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    while( true ) {
      iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar6 = (int)param_3;
      param_3 = (ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      puVar1 = (undefined1 *)((long)param_4 + (long)iVar7);
      param_4 = unaff_x19;
      func_0x000107c303e4(unaff_x19,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar6);
  }
  _memcpy(param_4,lVar3,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b59325c; end: 10b59326f;  */

void FUN_10b59325c(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b593c64();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b593db8();
  }
  func_0x0001098ce904(unaff_x21 + 0x18,unaff_x20 + 0x18);
  FUN_10b59325c(unaff_x21 + 0x28);
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x40) == 0) {
      FUN_10b590930();
      *(ulong *)(unaff_x21 + 0x40) = unaff_x22;
    }
    else {
      FUN_10b593270();
    }
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x21 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  func_0x00010b593dc4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b593cac();
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b593270; end: 10b59334f;  */

void FUN_10b593270(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b593d5c();
  func_0x0001088f1584(param_1 + 0x10,param_2 + 0x10);
  func_0x0001088f1584(unaff_x19 + 0x28,unaff_x20 + 0x28);
  func_0x0001088f1584(unaff_x19 + 0x40,unaff_x20 + 0x40);
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x19 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x19 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    *(long *)(unaff_x19 + 0x68) = *(long *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x19 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(char *)(unaff_x20 + 0x74) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x74) = 1;
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    *(long *)(unaff_x19 + 0x78) = *(long *)(unaff_x20 + 0x78);
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x19 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b593350; end: 10b59338b;  */

void FUN_10b593350(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}



/* Entry: 10b59338c; end: 10b59343f;  */

undefined8 * FUN_10b59338c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d10d48;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b593c2c();
  }
  func_0x00010b593d68(param_1 + 2);
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b593d68(param_1 + 5);
  *(undefined4 *)(param_1 + 7) = 0;
  func_0x00010b593d68(param_1 + 8);
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x60);
  uVar1 = *(undefined8 *)(param_3 + 0x58);
  uVar4 = *(undefined8 *)(param_3 + 0x70);
  uVar3 = *(undefined8 *)(param_3 + 0x68);
  uVar5 = *(undefined8 *)(param_3 + 0x78);
  param_1[0x10] = *(undefined8 *)(param_3 + 0x80);
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar4;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar2;
  param_1[0xb] = uVar1;
  return param_1;
}



/* Entry: 10b593440; end: 10b59346b;  */

long FUN_10b593440(long param_1)

{
  func_0x00010b593ce0();
  FUN_10b593944(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b59346c; end: 10b59346f;  */

long FUN_10b59346c(long param_1)

{
  func_0x00010b593ce0();
  FUN_10b593944(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b593470; end: 10b593483;  */

void FUN_10b593470(void)

{
  FUN_10b593440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b593484; end: 10b59348f;  */

undefined ** FUN_10b593484(void)

{
  return &PTR_DAT_110d110e0;
}



/* Entry: 10b593490; end: 10b5936f7;  */

long * FUN_10b593490(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long *unaff_x19;
  long unaff_x20;
  ulong *puVar8;
  int iVar9;
  int iVar10;
  
  func_0x00010b593c54();
  plVar3 = param_1;
  if (param_1[0xb] != 0) {
    func_0x00010b593bc0();
    plVar3 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010b593c00();
    param_4 = plVar3;
  }
  plVar4 = plVar3;
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    func_0x00010b593bc0();
    plVar4 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar3);
    func_0x00010b593c00();
    param_4 = plVar4;
  }
  plVar3 = plVar4;
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    func_0x00010b593bc0();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar4);
    func_0x00010b593d70();
    param_4 = plVar3;
  }
  plVar4 = plVar3;
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    func_0x00010b593bc0();
    plVar4 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x00010b593c00();
    param_4 = plVar4;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x20);
  if (0 < (int)uVar1) {
    func_0x00010b593bc0();
    puVar6 = (undefined1 *)((long)plVar4 + 2);
    *(undefined1 *)plVar4 = 0x2a;
    while (0x7f < uVar1) {
      func_0x00010b593ccc();
    }
    puVar6[-1] = (char)uVar1;
    puVar8 = *(ulong **)(unaff_x20 + 0x18);
    do {
      func_0x00010b593bc0();
      uVar7 = *puVar8;
      param_4 = (long *)((long)plVar4 + 1);
      while (bVar2 = 0x7f < uVar7, bVar2) {
        func_0x00010b593cb8();
        uVar7 = extraout_x8;
      }
      func_0x00010b593d24();
    } while (!bVar2);
  }
  plVar3 = plVar4;
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    func_0x00010b593bc0();
    plVar3 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar4);
    func_0x00010b593c00();
    param_4 = plVar3;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x38);
  if (0 < (int)uVar1) {
    func_0x00010b593bc0();
    puVar6 = (undefined1 *)((long)plVar3 + 2);
    *(undefined1 *)plVar3 = 0x3a;
    while (0x7f < uVar1) {
      func_0x00010b593ccc();
    }
    puVar6[-1] = (char)uVar1;
    puVar8 = *(ulong **)(unaff_x20 + 0x30);
    do {
      func_0x00010b593bc0();
      uVar7 = *puVar8;
      param_4 = (long *)((long)plVar3 + 1);
      while (bVar2 = 0x7f < uVar7, bVar2) {
        func_0x00010b593cb8();
        uVar7 = extraout_x8_00;
      }
      func_0x00010b593d24();
    } while (!bVar2);
  }
  plVar4 = plVar3;
  if (*(char *)(unaff_x20 + 0x74) == '\x01') {
    func_0x00010b593bc0();
    plVar4 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar3);
    func_0x00010b593d70();
    param_4 = plVar4;
  }
  plVar3 = plVar4;
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    func_0x00010b593bc0();
    plVar3 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar4);
    func_0x00010b593c00();
    param_4 = plVar3;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x50);
  if (0 < (int)uVar1) {
    func_0x00010b593bc0();
    puVar6 = (undefined1 *)((long)plVar3 + 2);
    *(undefined1 *)plVar3 = 0x52;
    while (0x7f < uVar1) {
      func_0x00010b593ccc();
    }
    puVar6[-1] = (char)uVar1;
    puVar8 = *(ulong **)(unaff_x20 + 0x48);
    do {
      func_0x00010b593bc0();
      uVar7 = *puVar8;
      param_4 = (long *)((long)plVar3 + 1);
      while (bVar2 = 0x7f < uVar7, bVar2) {
        func_0x00010b593cb8();
        uVar7 = extraout_x8_01;
      }
      func_0x00010b593d24();
    } while (!bVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b593cf0();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8_02 + 8);
      param_3 = *(ulong *)(extraout_x8_02 + 0x10);
    }
    else {
      lVar5 = extraout_x8_02 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar10 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar9 = (int)param_3;
        uVar1 = iVar9 - iVar10;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar9 < iVar10) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar9);
    }
    _memcpy(param_4,lVar5,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5936f8; end: 10b59384f;  */

void FUN_10b5936f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 in_ZR;
  int iVar4;
  long lVar5;
  long lVar6;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar7;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  long extraout_x10;
  long extraout_x10_00;
  int extraout_w12;
  int extraout_w12_00;
  
  lVar7 = param_1 + 0x10;
  func_0x00010b4d3edc();
  *(int *)(param_1 + 0x20) = (int)lVar7;
  func_0x00010b593d34(LZCOUNT((long)(int)lVar7));
  lVar1 = 0;
  if (!(bool)in_ZR) {
    lVar1 = extraout_x8 + 1;
  }
  lVar5 = param_1 + 0x28;
  func_0x00010b4d3edc();
  *(int *)(param_1 + 0x38) = (int)lVar5;
  func_0x00010b593d34(LZCOUNT((long)(int)lVar5));
  lVar2 = 0;
  if (!(bool)in_ZR) {
    lVar2 = extraout_x8_00 + 1;
  }
  lVar6 = param_1 + 0x40;
  func_0x00010b4d3edc();
  *(int *)(param_1 + 0x50) = (int)lVar6;
  func_0x00010b593d34(LZCOUNT((long)(int)lVar6));
  lVar3 = 0;
  if (!(bool)in_ZR) {
    lVar3 = extraout_x8_01 + 1;
  }
  func_0x00010b593cfc(lVar1 + lVar7 + lVar5 + lVar2 + lVar6 + lVar3);
  lVar7 = extraout_x8_02;
  if (extraout_x10 != 0) {
    lVar7 = (ulong)((uint)(extraout_w12 + extraout_w9 * -9) >> 6) + extraout_x8_02;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar7 = (ulong)((uint)(extraout_w12 + (int)LZCOUNT(*(long *)(param_1 + 0x68)) * -9) >> 6) +
            lVar7;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    lVar7 = lVar7 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x70)) * -9 + 0x1a0U >> 6);
  }
  func_0x00010b593cfc(lVar7 + (ulong)*(byte *)(param_1 + 0x74) * 2);
  iVar4 = extraout_w8;
  if (extraout_x10_00 != 0) {
    iVar4 = ((uint)(extraout_w12_00 + extraout_w9_00 * -9) >> 6) + extraout_w8;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b593d18();
    lVar7 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar7 = *(long *)(extraout_x9 + 0x10);
    }
    iVar4 = (int)lVar7 + iVar4;
  }
  *(int *)(param_1 + 0x88) = iVar4;
  return;
}



/* Entry: 10b593850; end: 10b593853;  */

void FUN_10b593850(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b593d5c();
  func_0x0001088f1584(param_1 + 0x10,param_2 + 0x10);
  func_0x0001088f1584(unaff_x19 + 0x28,unaff_x20 + 0x28);
  func_0x0001088f1584(unaff_x19 + 0x40,unaff_x20 + 0x40);
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x19 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x19 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    *(long *)(unaff_x19 + 0x68) = *(long *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x19 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(char *)(unaff_x20 + 0x74) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x74) = 1;
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    *(long *)(unaff_x19 + 0x78) = *(long *)(unaff_x20 + 0x78);
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x19 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b593854; end: 10b593887;  */

void FUN_10b593854(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b593dac();
  FUN_10b593030();
  lVar1 = unaff_x20;
  lVar2 = unaff_x19;
  func_0x00010b593d5c();
  func_0x0001088f1584(lVar1 + 0x10,lVar2 + 0x10);
  func_0x0001088f1584(unaff_x19 + 0x28,unaff_x20 + 0x28);
  func_0x0001088f1584(unaff_x19 + 0x40,unaff_x20 + 0x40);
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x19 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x19 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    *(long *)(unaff_x19 + 0x68) = *(long *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x19 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(char *)(unaff_x20 + 0x74) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x74) = 1;
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    *(long *)(unaff_x19 + 0x78) = *(long *)(unaff_x20 + 0x78);
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x19 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b593888; end: 10b5938b7;  */

undefined8 * FUN_10b593888(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x90;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x90);
  }
  *puVar1 = &PTR_FUN_110d10d48;
  puVar1[1] = param_2;
  FUN_10b593350();
  return puVar1;
}



/* Entry: 10b5938b8; end: 10b5938e7;  */

long * FUN_10b5938b8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5938e8; end: 10b593913;  */

long FUN_10b5938e8(long param_1)

{
  FUN_10b593914(param_1 + 0x18);
  func_0x0001098cf768(param_1 + 8);
  return param_1;
}



/* Entry: 10b593914; end: 10b593943;  */

long * FUN_10b593914(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b593944; end: 10b5939bf;  */

/* WARNING: Possible PIC construction at 0x00010b593958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b59395c) */

long FUN_10b593944(long param_1)

{
  if (0 < *(int *)(param_1 + 0x34)) {
    func_0x0001088f267c(param_1 + 0x30);
  }
  return param_1 + 0x30;
}



/* Entry: 10b5939c0; end: 10b593a33;  */

undefined8 * FUN_10b5939c0(long param_1)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b593dac();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = unaff_x20;
    FUN_10b4d80e0();
  }
  puVar1[1] = unaff_x20;
  *puVar1 = &PTR_FUN_110d10e38;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b593c2c();
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = unaff_x20;
  FUN_10b592988(puVar1 + 2,unaff_x19 + 0x10);
  *(undefined4 *)(puVar1 + 5) = 0;
  return puVar1;
}



/* Entry: 10b593a34; end: 10b593afb;  */

undefined8 * FUN_10b593a34(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x50);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_DAT_110d10e88;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b593c2c();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  func_0x0001098cf6e8(puVar1 + 3,param_1,param_2 + 0x18);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = param_1;
  FUN_10b59325c(puVar1 + 5,param_2 + 0x28);
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10b590930(param_1,*(undefined8 *)(param_2 + 0x40));
  }
  puVar1[8] = param_1;
  puVar1[9] = *(undefined8 *)(param_2 + 0x48);
  return puVar1;
}



/* Entry: 10b593afc; end: 10b593b87;  */

undefined8 * FUN_10b593afc(undefined8 *param_1)

{
  int iVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b593dac();
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    func_0x00010b593da0();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_DAT_110d10d98;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b593c2c();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(unaff_x19 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 2) {
    param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  }
  else if (iVar1 == 1) {
    func_0x000107c284d4();
    param_1[2] = unaff_x20;
  }
  return param_1;
}



/* Entry: 10b593b88; end: 10b593bbf;  */

undefined8 * FUN_10b593b88(undefined8 *param_1)

{
  int iVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b593dac();
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    func_0x00010b593da0();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_DAT_110d11280;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b594b10();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(unaff_x19 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 2) {
    FUN_10b5949c8();
  }
  else {
    if (iVar1 != 1) {
      return param_1;
    }
    func_0x000107c284d4();
  }
  param_1[2] = unaff_x20;
  return param_1;
}



/* Entry: 10b593bc0; end: 10b593dd7;  */

ulong * FUN_10b593bc0(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 10b593dd8; end: 10b593e2f;  */

void FUN_10b593dd8(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b594a8c();
  if ((unaff_x21 & 1) != 0) {
    func_0x00010b594b50();
  }
  lVar1 = unaff_x19;
  FUN_10b593e30();
  if (unaff_x20 != 0) {
    uVar2 = *(ulong *)(unaff_x20 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010b594b44();
    }
    if (unaff_x21 != uVar2) {
      func_0x00010b594a60();
      unaff_x20 = lVar1;
    }
    *(undefined4 *)(unaff_x19 + 0x1c) = 1;
    *(long *)(unaff_x19 + 0x10) = unaff_x20;
  }
  return;
}



/* Entry: 10b593e30; end: 10b593eb7;  */

void FUN_10b593e30(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b593e8c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b594404();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_10b593e8c;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b593e8c;
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x000107c316b0();
    }
  }
  __ZdlPv();
LAB_10b593e8c:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b593eb8; end: 10b593f8f;  */

void FUN_10b593eb8(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b594a8c();
  if ((unaff_x21 & 1) != 0) {
    func_0x00010b594b50();
  }
  lVar1 = unaff_x19;
  FUN_10b593e30();
  if (unaff_x20 != 0) {
    uVar2 = *(ulong *)(unaff_x20 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010b594b44();
    }
    if (unaff_x21 != uVar2) {
      func_0x00010b594a60();
      unaff_x20 = lVar1;
    }
    *(undefined4 *)(unaff_x19 + 0x1c) = 2;
    *(long *)(unaff_x19 + 0x10) = unaff_x20;
  }
  return;
}



/* Entry: 10b593f90; end: 10b593fbb;  */

undefined8 FUN_10b593f90(undefined8 param_1)

{
  func_0x00010b594b34();
  FUN_10b593fbc(param_1);
  return param_1;
}



/* Entry: 10b593fbc; end: 10b593fcf;  */

void FUN_10b593fbc(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b593e8c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b594404();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_10b593e8c;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b593e8c;
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x000107c316b0();
    }
  }
  __ZdlPv();
LAB_10b593e8c:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b593fd0; end: 10b593fe3;  */

void FUN_10b593fd0(void)

{
  FUN_10b593f90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b593fe4; end: 10b593ff3;  */

undefined8 FUN_10b593fe4(undefined8 param_1)

{
  func_0x00010b594b34();
  FUN_10b594430(param_1);
  return param_1;
}



/* Entry: 10b593ff4; end: 10b594113;  */

void FUN_10b593ff4(long param_1)

{
  ulong *puVar1;
  
  FUN_10b593e30();
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



/* Entry: 10b594114; end: 10b59413f;  */

long FUN_10b594114(long param_1)

{
  func_0x00010b594584();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b594140; end: 10b594143;  */

void FUN_10b594140(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b594b5c();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(unaff_x20 + 0x1c);
  if (iVar2 == 0) goto LAB_10b594214;
  iVar3 = *(int *)(unaff_x21 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_10b593e30();
    }
    *(int *)(unaff_x21 + 0x1c) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x10);
      if (*(int *)(unaff_x20 + 0x1c) != 2) {
        ppuVar1 = &PTR_PTR_1133a5288;
      }
      func_0x00010b594238(*(undefined8 *)(unaff_x21 + 0x10),ppuVar1);
      goto LAB_10b594214;
    }
    FUN_10b5949c8(unaff_x22,*(undefined8 *)(unaff_x20 + 0x10));
  }
  else {
    if (iVar2 != 1) goto LAB_10b594214;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x10);
      if (*(int *)(unaff_x20 + 0x1c) != 1) {
        ppuVar1 = &PTR_PTR_113404470;
      }
      func_0x00010bd1b688(*(undefined8 *)(unaff_x21 + 0x10),ppuVar1);
      goto LAB_10b594214;
    }
    func_0x000107c284d4(unaff_x22,*(undefined8 *)(unaff_x20 + 0x10));
  }
  *(ulong *)(unaff_x21 + 0x10) = unaff_x22;
LAB_10b594214:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b594144; end: 10b5942ff;  */

void FUN_10b594144(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b594b5c();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(unaff_x20 + 0x1c);
  if (iVar2 == 0) goto LAB_10b594214;
  iVar3 = *(int *)(unaff_x21 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_10b593e30();
    }
    *(int *)(unaff_x21 + 0x1c) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x10);
      if (*(int *)(unaff_x20 + 0x1c) != 2) {
        ppuVar1 = &PTR_PTR_1133a5288;
      }
      func_0x00010b594238(*(undefined8 *)(unaff_x21 + 0x10),ppuVar1);
      goto LAB_10b594214;
    }
    FUN_10b5949c8(unaff_x22,*(undefined8 *)(unaff_x20 + 0x10));
  }
  else {
    if (iVar2 != 1) goto LAB_10b594214;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x10);
      if (*(int *)(unaff_x20 + 0x1c) != 1) {
        ppuVar1 = &PTR_PTR_113404470;
      }
      func_0x00010bd1b688(*(undefined8 *)(unaff_x21 + 0x10),ppuVar1);
      goto LAB_10b594214;
    }
    func_0x000107c284d4(unaff_x22,*(undefined8 *)(unaff_x20 + 0x10));
  }
  *(ulong *)(unaff_x21 + 0x10) = unaff_x22;
LAB_10b594214:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b594300; end: 10b594353;  */

void FUN_10b594300(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b594a8c();
  if ((unaff_x21 & 1) != 0) {
    func_0x00010b594b50();
  }
  func_0x00010b594aa8();
  if (unaff_x20 != 0) {
    uVar1 = *(ulong *)(unaff_x20 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b594b44();
    }
    if (unaff_x21 != uVar1) {
      func_0x00010b594a60();
      unaff_x20 = param_1;
    }
    *(undefined4 *)(unaff_x19 + 0x34) = 2;
    *(long *)(unaff_x19 + 0x28) = unaff_x20;
  }
  return;
}



/* Entry: 10b594354; end: 10b5943af;  */

void FUN_10b594354(long param_1)

{
  ulong uVar1;
  
  if ((*(int *)(param_1 + 0x34) == 3) || (*(int *)(param_1 + 0x34) == 2)) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        func_0x000107c316b0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 10b5943b0; end: 10b594403;  */

void FUN_10b5943b0(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  
  func_0x00010b594a8c();
  if ((unaff_x21 & 1) != 0) {
    func_0x00010b594b50();
  }
  func_0x00010b594aa8();
  if (unaff_x20 != 0) {
    uVar1 = *(ulong *)(unaff_x20 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b594b44();
    }
    if (unaff_x21 != uVar1) {
      func_0x00010b594a60();
      unaff_x20 = param_1;
    }
    *(undefined4 *)(unaff_x19 + 0x34) = 3;
    *(long *)(unaff_x19 + 0x28) = unaff_x20;
  }
  return;
}



/* Entry: 10b594404; end: 10b59442f;  */

undefined8 FUN_10b594404(undefined8 param_1)

{
  func_0x00010b594b34();
  FUN_10b594430(param_1);
  return param_1;
}



/* Entry: 10b594430; end: 10b59445b;  */

long * FUN_10b594430(long param_1)

{
  long *plVar1;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    func_0x00010b594aa8();
  }
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b59445c; end: 10b59446f;  */

void FUN_10b59445c(void)

{
  FUN_10b594404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b594470; end: 10b59447b;  */

undefined ** FUN_10b594470(void)

{
  return &PTR_DAT_110d11310;
}



/* Entry: 10b59447c; end: 10b5944c3;  */

void FUN_10b59447c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  func_0x00010b594aa8();
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



/* Entry: 10b5944c4; end: 10b594637;  */

long * FUN_10b5944c4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  int iVar8;
  
  func_0x00010b594ae8();
  iVar8 = *(int *)(param_1 + 0x18);
  for (iVar7 = 0; iVar8 != iVar7; iVar7 = iVar7 + 1) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
    }
    param_4 = (long *)0x1;
    func_0x00010b594b3c(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20));
  }
  plVar3 = (long *)(ulong)*(uint *)(unaff_x20 + 0x34);
  if ((*(uint *)(unaff_x20 + 0x34) & 0xfffffffe) == 2) {
    func_0x00010b594b3c(plVar3,*(long *)(unaff_x20 + 0x28),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x28) + 0x10));
    param_4 = plVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)uVar5;
        uVar2 = iVar7 - iVar8;
        uVar5 = (ulong)uVar2;
        if (uVar2 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar5);
  }
  return param_4;
}



/* Entry: 10b594638; end: 10b59464b;  */

void FUN_10b594638(void)

{
  int iVar1;
  int iVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b594b5c();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  FUN_10b594638(unaff_x21 + 0x10,unaff_x20 + 0x10);
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 == 0) goto LAB_10b5942dc;
  iVar2 = *(int *)(unaff_x21 + 0x34);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      FUN_10b594354();
    }
    *(int *)(unaff_x21 + 0x34) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 != 3) {
LAB_10b5942cc:
      func_0x000107c284d4(unaff_x22,*(undefined8 *)(unaff_x20 + 0x28));
      *(ulong *)(unaff_x21 + 0x28) = unaff_x22;
      goto LAB_10b5942dc;
    }
    func_0x00010b594af8();
  }
  else {
    if (iVar1 != 2) goto LAB_10b5942dc;
    if (iVar2 != 2) goto LAB_10b5942cc;
    func_0x00010b594af8();
  }
  func_0x00010bd1b688();
LAB_10b5942dc:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b59464c; end: 10b59467b;  */

long FUN_10b59464c(long param_1)

{
  func_0x00010b594b34();
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return param_1;
}



/* Entry: 10b59467c; end: 10b59467f;  */

long FUN_10b59467c(long param_1)

{
  func_0x00010b594b34();
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return param_1;
}



/* Entry: 10b594680; end: 10b594693;  */

void FUN_10b594680(void)

{
  FUN_10b59464c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b594694; end: 10b5946b7;  */

undefined ** FUN_10b594694(void)

{
  return &PTR_DAT_110d11368;
}



/* Entry: 10b5946b8; end: 10b5947db;  */

long * FUN_10b5946b8(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  int iVar8;
  
  func_0x00010b594ae8();
  plVar2 = param_1;
  if (param_1[2] != 0) {
    func_0x00010b594a6c();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010b594b28();
    param_4 = plVar2;
  }
  iVar7 = *(int *)(unaff_x20 + 0x24);
  if (iVar7 == 4) {
    func_0x00010b594a6c();
    param_4 = (long *)0x20;
  }
  else {
    if (iVar7 == 3) {
      func_0x00010b594a6c();
      if (*(int *)(unaff_x20 + 0x24) == 3) {
        param_4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x18);
      }
      else {
        param_4 = (long *)0x0;
      }
      uVar3 = 0x18;
      func_0x000107c280a8(0x18,plVar2);
      func_0x000107c280b8(param_4,uVar3);
      goto LAB_10b59479c;
    }
    if (iVar7 != 2) goto LAB_10b59479c;
    func_0x00010b594a6c();
    param_4 = (long *)0x10;
  }
  func_0x000107c280a8(param_4,plVar2);
  func_0x00010b594b28();
LAB_10b59479c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  uVar6 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if ((long)(int)uVar5 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar5);
  }
  while( true ) {
    iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar7 = (int)uVar5;
    uVar1 = iVar7 - iVar8;
    uVar5 = (ulong)uVar1;
    if (uVar1 == 0 || iVar7 < iVar8) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar7);
}


