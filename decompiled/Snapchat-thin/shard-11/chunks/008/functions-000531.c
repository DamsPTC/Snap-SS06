/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1089183ec; end: 108918503;  */

void FUN_1089183ec(long param_1)

{
  if (param_1 == 0) {
    func_0x0001089189ec();
  }
  else {
    func_0x000108918900();
  }
  func_0x000108918ad4(&PTR_FUN_110a94538);
  return;
}



/* Entry: 108918504; end: 10891858f;  */

void FUN_108918504(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108918a94();
  if (param_1 == 0) {
    func_0x000108918aa0();
  }
  else {
    func_0x000108918aa8();
  }
  func_0x000108918abc();
  func_0x000108918ac8(&PTR_FUN_110a94718);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010891890c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x19;
    func_0x0001088f38e0();
  }
  *(undefined8 *)(unaff_x21 + 0x18) = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    FUN_108901388();
  }
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x19;
  return;
}



/* Entry: 108918590; end: 108918607;  */

void FUN_108918590(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108918a88();
  if (param_1 == 0) {
    lVar2 = 0x30;
    __Znwm();
  }
  else {
    lVar2 = unaff_x20;
    func_0x00010b4d80e0();
  }
  func_0x000107c34a2c();
  func_0x000107c34a44(&PTR_FUN_110a96270);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c34a60();
    func_0x0001089234c4();
  }
  *(long *)(unaff_x19 + 0x18) = lVar2;
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001088f38e0();
  }
  func_0x000108924f6c();
  return;
}



/* Entry: 108918608; end: 108918673;  */

void FUN_108918608(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108918a94();
  if (param_1 == 0) {
    func_0x0001089189ec();
  }
  else {
    func_0x000108918900();
  }
  func_0x000108918abc();
  func_0x000108918ac8(&PTR_DAT_110a94768);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010891890c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    func_0x0001088b6ce4();
  }
  *(undefined8 *)(unaff_x21 + 0x18) = unaff_x19;
  return;
}



/* Entry: 108918674; end: 1089186b3;  */

undefined8 * FUN_108918674(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000108918a88();
  if (param_1 == 0) {
    puVar3 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar3 = unaff_x20;
    func_0x00010b4d80e0();
  }
  puVar3[1] = unaff_x20;
  *puVar3 = &PTR_DAT_110a94678;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010891890c();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(puVar3 + 2) = uVar1;
  *(undefined4 *)((long)puVar3 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x20;
    FUN_108915a40();
  }
  puVar3[3] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x20;
    func_0x000107c2a26c();
  }
  puVar3[4] = puVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    func_0x000108918848();
  }
  puVar3[5] = unaff_x20;
  puVar3[6] = *(undefined8 *)(unaff_x19 + 0x30);
  return puVar3;
}



/* Entry: 1089186b4; end: 1089188df;  */

void FUN_1089186b4(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108918a94();
  if (param_1 == 0) {
    func_0x0001089189ec();
  }
  else {
    func_0x000108918900();
  }
  func_0x000108918abc();
  func_0x000108918ac8(&PTR_DAT_110a946c8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010891890c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    func_0x000108918720();
  }
  *(undefined8 *)(unaff_x21 + 0x18) = unaff_x19;
  return;
}



/* Entry: 1089188e0; end: 108918b67;  */

void FUN_1089188e0(void)

{
  return;
}



/* Entry: 108918b68; end: 108918b93;  */

undefined8 FUN_108918b68(undefined8 param_1)

{
  func_0x000108919358();
  FUN_108918b94(param_1);
  return param_1;
}



/* Entry: 108918b94; end: 108918baf;  */

void FUN_108918b94(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108918bb0; end: 108918bb3;  */

undefined8 FUN_108918bb0(undefined8 param_1)

{
  func_0x000108919358();
  FUN_108918b94(param_1);
  return param_1;
}



/* Entry: 108918bb4; end: 108918bc7;  */

void FUN_108918bb4(void)

{
  FUN_108918b68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108918bc8; end: 108918bd3;  */

undefined ** FUN_108918bc8(void)

{
  return &PTR_DAT_110a94c98;
}



/* Entry: 108918bd4; end: 108918cc7;  */

void FUN_108918bd4(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010891938c();
  if ((extraout_x8 & 1) != 0) {
    FUN_1088bf358(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 108918cc8; end: 108918d93;  */

void FUN_108918cc8(ulong param_1)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108919398();
  if ((param_1 & 1) != 0) {
    param_1 = *(ulong *)(param_1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      func_0x000107c2a26c();
      *(ulong *)(unaff_x21 + 0x18) = param_1;
    }
    else {
      FUN_1088bf398(*(long *)(unaff_x21 + 0x18));
    }
  }
  func_0x0001089193ac();
  if ((extraout_x8 & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 108918d94; end: 108918dbf;  */

long FUN_108918d94(long param_1)

{
  func_0x000108919358();
  FUN_108919214(param_1 + 0x10);
  return param_1;
}



/* Entry: 108918dc0; end: 108918dc3;  */

long FUN_108918dc0(long param_1)

{
  func_0x000108919358();
  FUN_108919214(param_1 + 0x10);
  return param_1;
}



/* Entry: 108918dc4; end: 108918dd7;  */

void FUN_108918dc4(void)

{
  FUN_108918d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108918dd8; end: 108918de3;  */

undefined ** FUN_108918dd8(void)

{
  return &PTR_DAT_110a94ce0;
}



/* Entry: 108918de4; end: 108918e23;  */

void FUN_108918de4(long param_1)

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



/* Entry: 108918e24; end: 108918f53;  */

long * FUN_108918e24(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x000108919348();
  lVar2 = param_1[3];
  for (iVar5 = 0; (int)lVar2 != iVar5; iVar5 = iVar5 + 1) {
    func_0x000108919324();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if ((long)(int)uVar3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar3);
  }
  while( true ) {
    iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar5 = (int)uVar3;
    uVar1 = iVar5 - iVar6;
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar5 < iVar6) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar5);
}



/* Entry: 108918f54; end: 108918f9b;  */

void FUN_108918f54(long param_1,long param_2)

{
  FUN_108918f9c(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 108918f9c; end: 108918fab;  */

void FUN_108918f9c(long *param_1,long param_2)

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



/* Entry: 108918fac; end: 108918fdf;  */

long FUN_108918fac(long param_1)

{
  func_0x000108919358();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a3a8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 108918fe0; end: 108918fe3;  */

long FUN_108918fe0(long param_1)

{
  func_0x000108919358();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a3a8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 108918fe4; end: 108918ff7;  */

void FUN_108918fe4(void)

{
  FUN_108918fac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108918ff8; end: 108919003;  */

undefined ** FUN_108918ff8(void)

{
  return &PTR_DAT_110a94d28;
}



/* Entry: 108919004; end: 108919043;  */

void FUN_108919004(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010891938c();
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c2a3ac(*(undefined8 *)(unaff_x19 + 0x18));
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



/* Entry: 108919044; end: 1089190e3;  */

long * FUN_108919044(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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
  
  func_0x000108919348();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x000108919324();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c28094();
    param_4 = *(long **)(unaff_x20 + 0x20);
    uVar3 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280ac(param_4,uVar3);
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
    _memcpy(param_4,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar5);
  }
  return param_4;
}



/* Entry: 1089190e4; end: 108919157;  */

void FUN_1089190e4(void)

{
  int iVar1;
  ulong extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x00010891938c();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    func_0x0001088f92dc();
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x20)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 108919158; end: 1089191cf;  */

void FUN_108919158(ulong param_1)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108919398();
  if ((param_1 & 1) != 0) {
    param_1 = *(ulong *)(param_1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      FUN_108900670();
      *(ulong *)(unaff_x21 + 0x18) = param_1;
    }
    else {
      FUN_1088f5078(*(long *)(unaff_x21 + 0x18));
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x0001089193ac();
  if ((extraout_x8 & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 1089191d0; end: 1089191e7;  */

void FUN_1089191d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110a94bb8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 1089191e8; end: 108919213;  */

undefined8 * FUN_1089191e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_108918f9c(param_1,param_3);
  return param_1;
}



/* Entry: 108919214; end: 108919243;  */

long * FUN_108919214(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 108919244; end: 10891931b;  */

void FUN_108919244(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110a94bb8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10891931c; end: 1089193c3;  */

void FUN_10891931c(void)

{
  return;
}



/* Entry: 1089193c4; end: 1089193d7;  */

void FUN_1089193c4(void)

{
  func_0x000107c2a5a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089193d8; end: 10891954f;  */

void FUN_1089193d8(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000108924d80();
  FUN_1086ebb04();
  FUN_1086ebb04(unaff_x19 + 6);
  FUN_1086ebb04(unaff_x19 + 9);
  FUN_1086ebb04(unaff_x19 + 0xc);
  FUN_1086ebb04(unaff_x19 + 0xf);
  FUN_1086ebb04(unaff_x19 + 0x12);
  FUN_1086ebb04(unaff_x19 + 0x15);
  FUN_108788cb4(unaff_x19 + 0x18);
  FUN_1086eac18(unaff_x19 + 0x1b);
  if (0 < (int)unaff_x19[0x1f]) {
    func_0x0001053936e4(unaff_x19 + 0x1e);
  }
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_108921f48(unaff_x19[0x21]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010892213c(unaff_x19[0x22]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_108927704(unaff_x19[0x23]);
    }
  }
  unaff_x19[0x28] = 0;
  unaff_x19[0x25] = 0;
  unaff_x19[0x24] = 0;
  unaff_x19[0x27] = 0;
  unaff_x19[0x26] = 0;
  func_0x000108922298();
  func_0x000108924b44();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
    *(undefined1 *)*unaff_x19 = 0;
    unaff_x19[1] = 0;
    return;
  }
  *(undefined1 *)unaff_x19 = 0;
  *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
  return;
}



/* Entry: 108919550; end: 108919887;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_108919550(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x000108924874();
  if (param_1[0xc] != 0) {
    func_0x00010892483c();
    func_0x000108924b84();
    func_0x000108924904();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x0001089249ac();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    func_0x000108924a54();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_1 = (long *)0x4;
    func_0x000108924a7c();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    func_0x00010892483c();
    plVar2 = (long *)0x28;
    func_0x000107c280a8(0x28,param_1);
    func_0x000108924a3c();
    param_4 = plVar2;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    plVar2 = (long *)0x6;
    func_0x000108924a7c();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    func_0x00010892483c();
    plVar3 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar2);
    func_0x000108924904();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x6c) != 0) {
    func_0x00010892483c();
    param_4 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar3);
    func_0x000108924a3c();
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x20);
    param_4 = (long *)0x9;
    func_0x000108924a7c();
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x14);
    param_4 = (long *)0xa;
    func_0x000108924a7c();
  }
  if ((uVar1 >> 6 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x48) + 0x20);
    param_4 = (long *)0xb;
    func_0x000108924a7c();
  }
  if ((uVar1 >> 7 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x14);
    param_4 = (long *)0xc;
    func_0x000108924a7c();
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x30);
    param_4 = (long *)0xd;
    func_0x000108924a7c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108924af8();
  if ((long)param_3 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
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
  _memcpy(param_4,lVar4,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 108919888; end: 10891988b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108919888(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924c68();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a5ec();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_108907964();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a468();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10890cd64();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000108924d5c();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a46c();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x000108919a78();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a2f0();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_1088bb9c8();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a378();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_1088bef68();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001089232cc();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_108919ca0();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000108923338();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_108919d18();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x58);
    if (param_1 == (ulong *)0x0) {
      func_0x000108904f6c();
      *(ulong **)(unaff_x21 + 0x58) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_108919d70();
    }
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x6c) != 0) {
    *(int *)(unaff_x21 + 0x6c) = *(int *)(unaff_x20 + 0x6c);
  }
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    *(long *)(unaff_x21 + 0x70) = *(long *)(unaff_x20 + 0x70);
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089248e8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10891988c; end: 108919c9f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10891988c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924c68();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a5ec();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_108907964();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a468();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10890cd64();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000108924d5c();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a46c();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x000108919a78();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a2f0();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_1088bb9c8();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a378();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_1088bef68();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001089232cc();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_108919ca0();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000108923338();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_108919d18();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x58);
    if (param_1 == (ulong *)0x0) {
      func_0x000108904f6c();
      *(ulong **)(unaff_x21 + 0x58) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_108919d70();
    }
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x6c) != 0) {
    *(int *)(unaff_x21 + 0x6c) = *(int *)(unaff_x20 + 0x6c);
  }
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    *(long *)(unaff_x21 + 0x70) = *(long *)(unaff_x20 + 0x70);
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089248e8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108919ca0; end: 108919d17;  */

void FUN_108919ca0(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108924b20();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248(param_1,uVar1,uVar2);
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if (*(char *)(unaff_x20 + 0x1c) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x1c) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924a6c();
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



/* Entry: 108919d18; end: 108919d6f;  */

void FUN_108919d18(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108924ddc();
    }
  }
  func_0x0001089247f0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 108919d70; end: 108919e8b;  */

void FUN_108919d70(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  if (*(ulong *)(unaff_x20 + 0x10) != 0) {
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
  }
  if (*(ulong *)(unaff_x20 + 0x18) != 0) {
    unaff_x21[3] = *(ulong *)(unaff_x20 + 0x18);
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 4) = 1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)((long)unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 == 0) goto LAB_108919e70;
  iVar2 = *(int *)((long)unaff_x21 + 0x34);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10891a790();
    }
    *(int *)((long)unaff_x21 + 0x34) = iVar1;
  }
  if (iVar1 == 5) {
    if (iVar2 == 5) {
      param_1 = (ulong *)unaff_x21[5];
      FUN_10891a750();
      goto LAB_108919e70;
    }
    func_0x000108923470();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 4) goto LAB_108919e70;
    if (iVar2 == 4) {
      param_1 = (ulong *)unaff_x21[5];
      FUN_10891a3c8();
      goto LAB_108919e70;
    }
    FUN_1089233f0();
    param_1 = unaff_x22;
  }
  unaff_x21[5] = (ulong)param_1;
LAB_108919e70:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 108919e8c; end: 108919ebb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108919e8c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x000107c2a5a8();
  func_0x000108924aec();
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924c68();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a5ec();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_108907964();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a468();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10890cd64();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000108924d5c();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a46c();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x000108919a78();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a2f0();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_1088bb9c8();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a378();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_1088bef68();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001089232cc();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_108919ca0();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000108923338();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_108919d18();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x58);
    if (param_1 == (ulong *)0x0) {
      func_0x000108904f6c();
      *(ulong **)(unaff_x21 + 0x58) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_108919d70();
    }
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x6c) != 0) {
    *(int *)(unaff_x21 + 0x6c) = *(int *)(unaff_x20 + 0x6c);
  }
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    *(long *)(unaff_x21 + 0x70) = *(long *)(unaff_x20 + 0x70);
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089248e8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108919ebc; end: 108919ee7;  */

long FUN_108919ebc(long param_1)

{
  func_0x000107c34a34();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 108919ee8; end: 108919eeb;  */

long FUN_108919ee8(long param_1)

{
  func_0x000107c34a34();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 108919eec; end: 108919eff;  */

void FUN_108919eec(void)

{
  FUN_108919ebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108919f00; end: 108919f0b;  */

undefined ** FUN_108919f00(void)

{
  return &PTR_DAT_110a962f8;
}



/* Entry: 108919f0c; end: 108919ff3;  */

long * FUN_108919f0c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  int iVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  
  plVar5 = (long *)(param_1[2] & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)plVar5 + 0x17);
  plVar2 = param_1;
  plVar6 = param_3;
  if (lVar3 < 0) {
    lVar3 = plVar5[1];
    if (lVar3 == 0) goto LAB_108919f78;
    plVar1 = (long *)*plVar5;
  }
  else {
    plVar1 = plVar5;
    if (*(char *)((long)plVar5 + 0x17) == '\0') goto LAB_108919f78;
  }
  func_0x000107c303d4(plVar1,lVar3,1,&UNK_10f4ec46f);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,plVar5,param_2);
  plVar6 = plVar5;
  param_2 = plVar2;
LAB_108919f78:
  if ((int)param_1[3] != 0) {
    func_0x000108924f00();
    func_0x000108924b9c();
    func_0x000108924a3c();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    func_0x000108924f00();
    func_0x000108924d20();
    func_0x000108924938();
    param_2 = plVar2;
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x000108924af8();
    if ((long)plVar6 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      plVar6 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar6) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar4 = (int)plVar6;
        plVar6 = (long *)(ulong)(uint)(iVar4 - iVar7);
        if (iVar4 - iVar7 == 0 || iVar4 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar4);
    }
    _memcpy(param_2,lVar3,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar6);
  }
  return param_2;
}



/* Entry: 108919ff4; end: 10891a06f;  */

void FUN_108919ff4(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x000108924f94();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  iVar1 = 0;
  if (lVar2 != 0) {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x1c) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x20) = iVar1;
  return;
}



/* Entry: 10891a070; end: 10891a08f;  */

void FUN_10891a070(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108924b20();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248(param_1,uVar1,uVar2);
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if (*(char *)(unaff_x20 + 0x1c) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x1c) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924a6c();
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



/* Entry: 10891a090; end: 10891a0b3;  */

undefined8 FUN_10891a090(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891a0b4; end: 10891a0b7;  */

undefined8 FUN_10891a0b4(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891a0b8; end: 10891a0cb;  */

void FUN_10891a0b8(void)

{
  FUN_10891a090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891a0cc; end: 10891a0eb;  */

undefined ** FUN_10891a0cc(void)

{
  return &PTR_DAT_110a96348;
}



/* Entry: 10891a0ec; end: 10891a153;  */

long * FUN_10891a0ec(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924874();
  if ((int)param_1[2] != 0) {
    func_0x00010892483c();
    func_0x000108924b84();
    func_0x000108924938();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108924af8();
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



/* Entry: 10891a154; end: 10891a183;  */

long FUN_10891a154(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x000108924d28();
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



/* Entry: 10891a184; end: 10891a1b3;  */

void FUN_10891a184(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891a0d8();
  func_0x000108924aec();
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



/* Entry: 10891a1b4; end: 10891a1df;  */

undefined8 FUN_10891a1b4(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_10891a1e0(param_1);
  return param_1;
}



/* Entry: 10891a1e0; end: 10891a20f;  */

long FUN_10891a1e0(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10891a090();
  }
  __ZdlPv();
  if (0 < *(int *)(param_1 + 0x1c)) {
    func_0x0001004a6984(param_1 + 0x18);
  }
  return param_1 + 0x18;
}



/* Entry: 10891a210; end: 10891a213;  */

undefined8 FUN_10891a210(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_10891a1e0(param_1);
  return param_1;
}



/* Entry: 10891a214; end: 10891a227;  */

void FUN_10891a214(void)

{
  FUN_10891a1b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891a228; end: 10891a233;  */

undefined ** FUN_10891a228(void)

{
  return &PTR_DAT_110a96388;
}



/* Entry: 10891a234; end: 10891a273;  */

void FUN_10891a234(ulong *param_1)

{
  ulong extraout_x8;
  
  *(undefined4 *)(param_1 + 3) = 0;
  if ((param_1[2] & 1) != 0) {
    func_0x00010891a0d8(param_1[6]);
  }
  func_0x000108924b44();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10891a274; end: 10891a333;  */

long * FUN_10891a274(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  func_0x000108924874();
  uVar2 = *(uint *)(param_1 + 5);
  if (0 < (int)uVar2) {
    func_0x00010892483c();
    func_0x000108924e4c();
    while (0x7f < uVar2) {
      func_0x000108924cb0();
    }
    *(char *)((long)param_4 + -1) = (char)uVar2;
    puVar5 = *(uint **)(unaff_x20 + 0x20);
    puVar1 = puVar5 + *(int *)(unaff_x20 + 0x18);
    do {
      func_0x00010892483c();
      uVar4 = (ulong)*puVar5;
      param_4 = (long *)((long)param_1 + 1);
      while (0x7f < (uint)uVar4) {
        func_0x000108924f38();
        uVar4 = extraout_x8;
      }
      puVar5 = puVar5 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar4;
    } while (puVar5 < puVar1);
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    func_0x0001089249ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar3 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar2 = iVar6 - iVar7;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10891a334; end: 10891a3a7;  */

void FUN_10891a334(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x000108924d80();
  func_0x00010b4d3e38();
  *(int *)(unaff_x19 + 0x28) = param_1;
  func_0x000108924e88((long)param_1);
  func_0x000108924b14();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_10891a3a8(*(undefined8 *)(unaff_x19 + 0x30));
    func_0x000108924b38();
  }
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    uVar2 = uVar1 & 0xfffffffffffffffe;
    uVar1 = (ulong)*(char *)(uVar2 + 0x1f);
    if ((long)uVar1 < 0) {
      uVar1 = *(ulong *)(uVar2 + 0x10);
    }
  }
  func_0x000108924bf0(uVar1);
  return;
}



/* Entry: 10891a3a8; end: 10891a3c3;  */

long FUN_10891a3a8(long param_1)

{
  long extraout_x8;
  
  FUN_10891a154();
  func_0x000108924724();
  return param_1 + extraout_x8;
}



/* Entry: 10891a3c4; end: 10891a3c7;  */

void FUN_10891a3c4(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924e94();
  FUN_1088ffb98();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924d5c();
    if (param_1 == (ulong *)0x0) {
      FUN_108923398();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_10891a070();
    }
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 10891a3c8; end: 10891a42f;  */

void FUN_10891a3c8(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924e94();
  FUN_1088ffb98();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924d5c();
    if (param_1 == (ulong *)0x0) {
      FUN_108923398();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_10891a070();
    }
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 10891a430; end: 10891a463;  */

long FUN_10891a430(long param_1)

{
  func_0x000107c34a34();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10891a464; end: 10891a467;  */

long FUN_10891a464(long param_1)

{
  func_0x000107c34a34();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10891a468; end: 10891a47b;  */

void FUN_10891a468(void)

{
  FUN_10891a430();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891a47c; end: 10891a487;  */

undefined ** FUN_10891a47c(void)

{
  return &PTR_DAT_110a963e8;
}



/* Entry: 10891a488; end: 10891a4bb;  */

void FUN_10891a488(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108924b2c();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924c40();
  }
  func_0x000108924c94();
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



/* Entry: 10891a4bc; end: 10891a527;  */

long * FUN_10891a4bc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924780();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010892473c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010892483c();
    func_0x0001089249f8();
    func_0x000108924938();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
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



/* Entry: 10891a528; end: 10891a583;  */

void FUN_10891a528(int param_1)

{
  ulong extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x000108924b2c();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108924c38();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x000108924944();
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



/* Entry: 10891a584; end: 10891a5e7;  */

void FUN_10891a584(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108924ddc();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x0001089247f0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 10891a5e8; end: 10891a613;  */

long FUN_10891a5e8(long param_1)

{
  func_0x000107c34a34();
  FUN_108922f70(param_1 + 0x10);
  return param_1;
}



/* Entry: 10891a614; end: 10891a617;  */

long FUN_10891a614(long param_1)

{
  func_0x000107c34a34();
  FUN_108922f70(param_1 + 0x10);
  return param_1;
}



/* Entry: 10891a618; end: 10891a62b;  */

void FUN_10891a618(void)

{
  FUN_10891a5e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891a62c; end: 10891a637;  */

undefined ** FUN_10891a62c(void)

{
  return &PTR_DAT_110a96450;
}



/* Entry: 10891a638; end: 10891a667;  */

void FUN_10891a638(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108924c2c();
  FUN_1089232b8();
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



/* Entry: 10891a668; end: 10891a6cf;  */

long * FUN_10891a668(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x000108924874();
  func_0x000108924e5c();
  while (unaff_w22 != unaff_w21) {
    func_0x000108924708();
    func_0x000108924848();
    func_0x000108924bac();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
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



/* Entry: 10891a6d0; end: 10891a72f;  */

long FUN_10891a6d0(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x000108924d8c();
  func_0x00010892489c();
  while (unaff_x22 != 0) {
    FUN_10891a730(*unaff_x21);
    func_0x000108924be4();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10891a730; end: 10891a74b;  */

long FUN_10891a730(long param_1)

{
  long extraout_x8;
  
  FUN_10891a528();
  func_0x000108924724();
  return param_1 + extraout_x8;
}



/* Entry: 10891a74c; end: 10891a74f;  */

void FUN_10891a74c(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000108924a28();
  FUN_10891a780();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924a6c();
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



/* Entry: 10891a750; end: 10891a77f;  */

void FUN_10891a750(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000108924a28();
  FUN_10891a780();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924a6c();
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



/* Entry: 10891a780; end: 10891a78f;  */

void FUN_10891a780(long *param_1,long param_2)

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



/* Entry: 10891a790; end: 10891a80f;  */

void FUN_10891a790(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x34) == 5) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10891a7ec;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10891a5e8();
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 4) goto LAB_10891a7ec;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10891a7ec;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10891a1b4();
    }
  }
  __ZdlPv();
LAB_10891a7ec:
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 10891a810; end: 10891a88f;  */

void FUN_10891a810(void)

{
  int iVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000108924924();
  func_0x000107c34a44(&PTR_DAT_110a95d20);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  iVar1 = *(int *)(unaff_x21 + 0x34);
  *(int *)(unaff_x19 + 0x34) = iVar1;
  uVar3 = *(undefined8 *)(unaff_x21 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x21 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x21 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  if (iVar1 == 5) {
    func_0x000108923470();
  }
  else {
    if (iVar1 != 4) {
      return;
    }
    FUN_1089233f0();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x20;
  return;
}



/* Entry: 10891a890; end: 10891a8bb;  */

undefined8 FUN_10891a890(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_10891a8bc(param_1);
  return param_1;
}



/* Entry: 10891a8bc; end: 10891a8cf;  */

void FUN_10891a8bc(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x34) == 5) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10891a7ec;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10891a5e8();
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 4) goto LAB_10891a7ec;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10891a7ec;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10891a1b4();
    }
  }
  __ZdlPv();
LAB_10891a7ec:
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 10891a8d0; end: 10891a8e3;  */

void FUN_10891a8d0(void)

{
  FUN_10891a890();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891a8e4; end: 10891a8ef;  */

undefined ** FUN_10891a8e4(void)

{
  return &PTR_DAT_110a964a8;
}



/* Entry: 10891a8f0; end: 10891a9ef;  */

long * FUN_10891a8f0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x000108924874();
  if (param_1[2] != 0) {
    func_0x00010892483c();
    func_0x000108924b84();
    func_0x000108924904();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    func_0x00010892483c();
    func_0x000108924b9c();
    func_0x000108924938();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010892483c();
    func_0x000108924d20();
    func_0x000108924904();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x34);
  plVar2 = (long *)(ulong)uVar1;
  if (uVar1 == 4) {
    lVar3 = 0x14;
  }
  else {
    if (uVar1 != 5) goto LAB_10891a998;
    lVar3 = 0x28;
  }
  param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + lVar3);
  func_0x000108924a7c();
  param_4 = plVar2;
LAB_10891a998:
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010892483c();
    param_4 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x000108924a3c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
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



/* Entry: 10891a9f0; end: 10891aabb;  */

long FUN_10891a9f0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  lVar3 = uVar2 + (ulong)*(byte *)(param_1 + 0x20) * 2;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x34) == 5) {
    func_0x00010891aad8(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    if (*(int *)(param_1 + 0x34) != 4) goto LAB_10891aa8c;
    FUN_10891aabc(*(undefined8 *)(param_1 + 0x28));
  }
  func_0x000108924b38();
LAB_10891aa8c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar1 + lVar3;
  }
  *(int *)(param_1 + 0x30) = (int)lVar3;
  return lVar3;
}



/* Entry: 10891aabc; end: 10891aaf3;  */

long FUN_10891aabc(long param_1)

{
  long extraout_x8;
  
  FUN_10891a334();
  func_0x000108924724();
  return param_1 + extraout_x8;
}



/* Entry: 10891aaf4; end: 10891aaf7;  */

void FUN_10891aaf4(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  if (*(ulong *)(unaff_x20 + 0x10) != 0) {
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
  }
  if (*(ulong *)(unaff_x20 + 0x18) != 0) {
    unaff_x21[3] = *(ulong *)(unaff_x20 + 0x18);
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 4) = 1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)((long)unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 == 0) goto LAB_108919e70;
  iVar2 = *(int *)((long)unaff_x21 + 0x34);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10891a790();
    }
    *(int *)((long)unaff_x21 + 0x34) = iVar1;
  }
  if (iVar1 == 5) {
    if (iVar2 == 5) {
      param_1 = (ulong *)unaff_x21[5];
      FUN_10891a750();
      goto LAB_108919e70;
    }
    func_0x000108923470();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 4) goto LAB_108919e70;
    if (iVar2 == 4) {
      param_1 = (ulong *)unaff_x21[5];
      FUN_10891a3c8();
      goto LAB_108919e70;
    }
    FUN_1089233f0();
    param_1 = unaff_x22;
  }
  unaff_x21[5] = (ulong)param_1;
LAB_108919e70:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 10891aaf8; end: 10891ab27;  */

void FUN_10891aaf8(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x000108919518();
  func_0x000108924aec();
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  if (*(ulong *)(unaff_x20 + 0x10) != 0) {
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
  }
  if (*(ulong *)(unaff_x20 + 0x18) != 0) {
    unaff_x21[3] = *(ulong *)(unaff_x20 + 0x18);
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 4) = 1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)((long)unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 == 0) goto LAB_108919e70;
  iVar2 = *(int *)((long)unaff_x21 + 0x34);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10891a790();
    }
    *(int *)((long)unaff_x21 + 0x34) = iVar1;
  }
  if (iVar1 == 5) {
    if (iVar2 == 5) {
      param_1 = (ulong *)unaff_x21[5];
      FUN_10891a750();
      goto LAB_108919e70;
    }
    func_0x000108923470();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 4) goto LAB_108919e70;
    if (iVar2 == 4) {
      param_1 = (ulong *)unaff_x21[5];
      FUN_10891a3c8();
      goto LAB_108919e70;
    }
    FUN_1089233f0();
    param_1 = unaff_x22;
  }
  unaff_x21[5] = (ulong)param_1;
LAB_108919e70:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 10891ab28; end: 10891ab53;  */

long FUN_10891ab28(long param_1)

{
  func_0x000107c34a34();
  func_0x000107c2a450(param_1 + 0x10);
  return param_1;
}


