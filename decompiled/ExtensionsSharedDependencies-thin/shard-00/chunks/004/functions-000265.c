/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00532120; end: 00532123;  */

void FUN_00532120(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x005329c0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00532aac();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00532a4c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_00531db8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00532a4c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_00531db8();
      }
    }
  }
  func_0x00532a38();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x005329e0();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00532124; end: 00532177;  */

long FUN_00532124(long param_1)

{
  func_0x00532a00();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00531bd0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00531bd0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_00531bd0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00532178; end: 0053218b;  */

void FUN_00532178(void)

{
  FUN_00532124();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0053218c; end: 00532197;  */

undefined ** FUN_0053218c(void)

{
  return &PTR_DAT_00a00fe0;
}



/* Entry: 00532198; end: 005321fb;  */

void FUN_00532198(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00532a8c();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_00531c20(param_1[4]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_00531c20(param_1[5]);
    }
  }
  func_0x00532ac4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    *(undefined1 *)*param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  return;
}



/* Entry: 005321fc; end: 00532323;  */

long * FUN_005321fc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x005329b0();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0053297c();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x1c);
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x005329f0();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x1c);
    param_4 = (long *)((long)&MACH_HEADER.magic + 3);
    func_0x005329f0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00532a54();
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
    func_0x0054f690();
    param_4 = unaff_x19;
    func_0x0054ed58();
  }
  func_0x0054f690();
  return (long *)((long)param_4 + (long)iVar3);
}



/* Entry: 00532324; end: 00532327;  */

void FUN_00532324(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x005329c0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00532aac();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00532a4c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_00531db8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00532a4c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_00531db8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00532a4c();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_00531db8();
      }
    }
  }
  func_0x00532a38();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x005329e0();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00532328; end: 0053234b;  */

undefined8 FUN_00532328(undefined8 param_1)

{
  func_0x00532a00();
  return param_1;
}



/* Entry: 0053234c; end: 0053234f;  */

undefined8 FUN_0053234c(undefined8 param_1)

{
  func_0x00532a00();
  return param_1;
}



/* Entry: 00532350; end: 00532363;  */

void FUN_00532350(void)

{
  FUN_00532328();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00532364; end: 0053236f;  */

undefined ** FUN_00532364(void)

{
  return &PTR_DAT_00a01030;
}



/* Entry: 00532370; end: 005323eb;  */

long * FUN_00532370(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x005329b0();
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar2 = unaff_x19;
    func_0x00487c24();
    param_4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x10);
    uVar3 = 8;
    func_0x00487cbc(8,plVar2);
    func_0x00487ce8(param_4,uVar3);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00532a54();
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
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4,lVar4,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 005323ec; end: 00532473;  */

long FUN_005323ec(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
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



/* Entry: 00532474; end: 0053261f;  */

void FUN_00532474(dword *param_1)

{
  dword *pdVar1;
  
  if (param_1 == (dword *)0x0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
  }
  else {
    pdVar1 = param_1;
    func_0x005510c4(param_1,0x18);
  }
  *(undefined ***)pdVar1 = &PTR_FUN_00a00c70;
  *(dword **)(pdVar1 + 2) = param_1;
  *(undefined8 *)(pdVar1 + 4) = 0;
  return;
}



/* Entry: 00532620; end: 005326c7;  */

undefined8 * FUN_00532620(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00532a14();
  }
  else {
    func_0x00532a94();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_DAT_00a00e00;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00532990();
  }
  *(undefined4 *)(puVar2 + 3) = 0;
  iVar1 = *(int *)(param_2 + 0x1c);
  *(int *)((long)puVar2 + 0x1c) = iVar1;
  if (iVar1 == 3) {
    func_0x00532828(param_1,*(undefined8 *)(param_2 + 0x10));
  }
  else if (iVar1 == 2) {
    func_0x005327a4(param_1,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar1 != 1) {
      return puVar2;
    }
    FUN_00532738(param_1,*(undefined8 *)(param_2 + 0x10));
  }
  puVar2[2] = param_1;
  return puVar2;
}



/* Entry: 005326c8; end: 00532737;  */

dword * FUN_005326c8(dword *param_1)

{
  dword *pdVar1;
  
  if (param_1 == (dword *)0x0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
  }
  else {
    pdVar1 = param_1;
    func_0x005510c4(param_1,0x18);
  }
  *(undefined ***)pdVar1 = &PTR_FUN_00a00c70;
  *(dword **)(pdVar1 + 2) = param_1;
  *(undefined8 *)(pdVar1 + 4) = 0;
  FUN_005317b8();
  return pdVar1;
}



/* Entry: 00532738; end: 00532937;  */

undefined8 * FUN_00532738(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00532ab8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00532a14();
  }
  else {
    func_0x005329d4();
  }
  puVar2 = param_1 + 1;
  *puVar2 = unaff_x19;
  *param_1 = &PTR_FUN_00a00db0;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00532990();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00532a08();
  }
  param_1[3] = puVar2;
  return param_1;
}



/* Entry: 00532938; end: 00532acf;  */

void FUN_00532938(void)

{
  return;
}



/* Entry: 00532ad0; end: 00532b1f;  */

void FUN_00532ad0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00532b20();
  if (param_1 != 0) {
    FUN_00549e34(param_4,&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 00532b20; end: 00532b73;  */

bool FUN_00532b20(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(*(ulong *)*param_1 & 0xfffffffffffffffc);
  uVar2 = (ulong)*(char *)((long)puVar3 + 0x17);
  if ((long)uVar2 < 0) {
    uVar2 = puVar3[1];
    puVar3 = (undefined8 *)*puVar3;
  }
  if ((uVar2 < param_3 + 1) || (*(char *)((long)puVar3 + ~param_3 + uVar2) != '/')) {
    return false;
  }
  if (param_3 == 0) {
    return true;
  }
  if (param_3 <= uVar2) {
    lVar1 = (long)puVar3 + (uVar2 - param_3);
    _memcmp(lVar1,param_2,param_3);
    return (int)lVar1 == 0;
  }
  return false;
}



/* Entry: 00532b74; end: 00532bb7;  */

bool FUN_00532b74(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  if (param_4 == 0) {
    return true;
  }
  if (param_2 < param_4) {
    return false;
  }
  param_1 = param_1 + (param_2 - param_4);
  _memcmp(param_1,param_3,param_4);
  return (int)param_1 == 0;
}



/* Entry: 00532bb8; end: 00532c73;  */

undefined8 FUN_00532bb8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  lStack_38 = param_2;
  FUN_00532cac(puVar2,0x2f,0xffffffffffffffff);
  if ((puVar2 != (undefined8 *)0xffffffffffffffff) && (lVar1 = (long)puVar2 + 1, lVar1 != lStack_38)
     ) {
    if (param_3 != 0) {
      FUN_00485b24(&uStack_40,0,lVar1);
      func_0x00532cf8();
      FUN_004575b8(param_3,auStack_58);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
    }
    FUN_00485b24(&uStack_40,lVar1,0xffffffffffffffff);
    func_0x00532cf8();
    FUN_004575b8(param_4,auStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
    return 1;
  }
  return 0;
}



/* Entry: 00532c74; end: 00532cab;  */

undefined1  [16] FUN_00532c74(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    _strlen(param_1);
  }
  auVar2._8_8_ = lVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 00532cac; end: 00532d3f;  */

ulong FUN_00532cac(long *param_1,char param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    if (param_3 < uVar2) {
      uVar2 = param_3 + 1;
    }
    while (uVar2 != 0) {
      pcVar1 = (char *)(*param_1 + -1 + uVar2);
      uVar2 = uVar2 - 1;
      if (*pcVar1 == param_2) {
        return uVar2;
      }
    }
  }
  return 0xffffffffffffffff;
}



/* Entry: 00532d40; end: 00532d73;  */

ulong FUN_00532d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = &uStack_18;
  uStack_28 = param_3;
  uStack_20 = param_2;
  uStack_18 = param_1;
  FUN_005330f0(puVar1,&uStack_20,&uStack_28);
  return (ulong)puVar1 | 3;
}



/* Entry: 00532d74; end: 00532db7;  */

ulong FUN_00532d74(ulong param_1)

{
  func_0x005332cc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
  return param_1 | 2;
}



/* Entry: 00532db8; end: 00532e73;  */

void FUN_00532db8(ulong *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  if ((*param_1 & 3) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00779b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_009989c8)
              (*param_1 & 0xfffffffffffffffc);
    return;
  }
  if (param_4 == 0) {
    FUN_00532d74(param_2,param_3);
  }
  else {
    FUN_00532d40();
    param_2 = param_4;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 00532e74; end: 00532e9b;  */

void FUN_00532e74(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_28;
  
  if ((*param_1 & 3) != 0) {
    puVar1 = (ulong *)(*param_1 & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
    }
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
    *(undefined1 *)param_2 = 0;
    return;
  }
  if (param_3 == 0) {
    puVar1 = param_1;
    func_0x005332cc();
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    uVar2 = 2;
  }
  else {
    puVar1 = &uStack_28;
    uStack_28 = param_3;
    FUN_0053324c(puVar1,param_2);
    uVar2 = 3;
  }
  *param_1 = uVar2 | (ulong)puVar1;
  return;
}



/* Entry: 00532e9c; end: 00532eff;  */

void FUN_00532e9c(ulong *param_1,ulong param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uStack_28;
  
  if (param_2 == 0) {
    puVar1 = param_1;
    func_0x005332cc();
    uVar2 = *param_3;
    puVar1[1] = param_3[1];
    *puVar1 = uVar2;
    puVar1[2] = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    uVar2 = 2;
  }
  else {
    puVar1 = &uStack_28;
    uStack_28 = param_2;
    FUN_0053324c(puVar1,param_3);
    uVar2 = 3;
  }
  *param_1 = uVar2 | (ulong)puVar1;
  return;
}



/* Entry: 00532f00; end: 00532f27;  */

ulong * FUN_00532f00(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uStack_28;
  
  if (((uint)*param_1 >> 1 & 1) == 0) {
    if (param_2 == 0) {
      puVar1 = param_1;
      func_0x005332cc();
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      uVar2 = 2;
    }
    else {
      puVar1 = &uStack_28;
      uStack_28 = param_2;
      FUN_00533294();
      uVar2 = 3;
    }
    *param_1 = uVar2 | (ulong)puVar1;
    return puVar1;
  }
  return (ulong *)(*param_1 & 0xfffffffffffffffc);
}



/* Entry: 00532f28; end: 00532fa7;  */

void FUN_00532f28(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uStack_28;
  
  if (param_2 == 0) {
    puVar1 = param_1;
    func_0x005332cc();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    uVar2 = 2;
  }
  else {
    puVar1 = &uStack_28;
    uStack_28 = param_2;
    FUN_00533294();
    uVar2 = 3;
  }
  *param_1 = uVar2 | (ulong)puVar1;
  return;
}



/* Entry: 00532fa8; end: 00532fbf;  */

void FUN_00532fa8(ulong *param_1)

{
  undefined8 *puVar1;
  
  if ((*param_1 & 3) == 0) {
    return;
  }
  puVar1 = (undefined8 *)(*param_1 & 0xfffffffffffffffc);
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    *(undefined1 *)puVar1 = 0;
    *(undefined1 *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 00532fc0; end: 00533033;  */

void FUN_00532fc0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lStack_38;
  
  plVar1 = &lStack_38;
  lStack_38 = param_2;
  FUN_00533034(plVar1);
  if (lStack_38 != 0) {
    FUN_00532f28(param_3,param_4);
    FUN_00533074(param_1,lStack_38,plVar1,param_3);
  }
  return;
}



/* Entry: 00533034; end: 00533073;  */

ulong FUN_00533034(long *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  
  pbVar1 = (byte *)*param_1;
  uVar2 = (ulong)*pbVar1;
  if ((char)*pbVar1 < '\0') {
    func_0x0054b89c();
  }
  else {
    pbVar1 = pbVar1 + 1;
  }
  *param_1 = (long)pbVar1;
  return uVar2;
}



/* Entry: 00533074; end: 005330ef;  */

long FUN_00533074(long param_1,long **param_2,int param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  long **pplVar5;
  long lVar6;
  long lVar7;
  long *plStack_38;
  
  if ((long)param_3 <= (*(long *)(param_1 + 8) - (long)param_2) + 0x10) {
    lVar7 = (long)param_3;
    FUN_0053316c(param_4,lVar7);
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      param_4 = (long *)*param_4;
    }
    _memcpy(param_4,param_2,lVar7);
    return (long)param_2 + lVar7;
  }
  func_0x0048d000(param_4);
  lVar6 = *(long *)(param_1 + 8);
  lVar2 = (lVar6 - (long)param_2) + (long)*(int *)(param_1 + 0x1c);
  lVar7 = (long)param_3;
  cVar3 = SBORROW8(lVar2,lVar7);
  cVar4 = lVar2 - lVar7 < 0;
  if (lVar7 <= lVar2) {
    lVar7 = (long)*(char *)((long)param_4 + 0x17);
    if (lVar7 < 0) {
      lVar7 = param_4[1];
    }
    func_0x0054cd4c(lVar7);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_4);
    lVar6 = *(long *)(param_1 + 8);
  }
  iVar1 = ((int)lVar6 - (int)param_2) + 0x10;
  plStack_38 = param_4;
  do {
    if (*(long *)(param_1 + 0x10) == 0) {
      return 0;
    }
    pplVar5 = &plStack_38;
    FUN_0054bbd8(pplVar5,param_2,iVar1);
    func_0x0054cce8();
    if (cVar4 != cVar3) {
      return 0;
    }
    func_0x0054ccb0();
    if (pplVar5 == (long **)0x0) {
      return 0;
    }
    param_3 = param_3 - iVar1;
    param_2 = pplVar5 + 2;
    iVar1 = (*(int *)(param_1 + 8) - (int)param_2) + 0x10;
    cVar3 = SBORROW4(param_3,iVar1);
    cVar4 = param_3 - iVar1 < 0;
  } while (iVar1 < param_3);
  FUN_0054bbd8(&plStack_38,param_2,param_3);
  return (long)param_2 + (long)param_3;
}



/* Entry: 005330f0; end: 00533153;  */

long FUN_005330f0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    func_0x005332cc();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
  }
  else {
    FUN_0055108c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
  }
  return lVar1;
}



/* Entry: 00533154; end: 0053316b;  */

void FUN_00533154(long param_1)

{
  if (param_1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0053316c; end: 005331a7;  */

void FUN_0053316c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar3 < 0) {
    uVar3 = param_1[1];
    if (uVar3 < param_2) goto LAB_00533190;
    param_1[1] = param_2;
    param_1 = (undefined8 *)*param_1;
  }
  else {
    if (uVar3 < param_2) {
LAB_00533190:
      param_2 = param_2 - uVar3;
      if (param_2 != 0) {
        uVar3 = (ulong)*(char *)((long)param_1 + 0x17);
        if ((long)uVar3 < 0) {
          uVar4 = param_1[1];
          lVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
          uVar3 = (ulong)param_1[2] >> 0x38;
        }
        else {
          lVar1 = 0x16;
          uVar4 = uVar3;
        }
        uVar2 = (uint)uVar3;
        if (lVar1 - uVar4 < param_2) {
          FUN_004625f0(param_1,lVar1,(param_2 - lVar1) + uVar4,uVar4,uVar4,0,0);
          uVar2 = (uint)*(byte *)((long)param_1 + 0x17);
        }
        if ((uVar2 >> 7 & 1) == 0) {
          *(byte *)((long)param_1 + 0x17) = (char)uVar4 + (char)param_2 & 0x7f;
        }
        else {
          param_1[1] = uVar4 + param_2;
          param_1 = (undefined8 *)*param_1;
        }
        *(undefined1 *)((long)param_1 + uVar4 + param_2) = 0;
      }
      return;
    }
    *(char *)((long)param_1 + 0x17) = (char)param_2;
  }
  *(undefined1 *)((long)param_1 + param_2) = 0;
  return;
}



/* Entry: 005331a8; end: 0053324b;  */

void FUN_005331a8(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    uVar3 = (ulong)*(char *)((long)param_1 + 0x17);
    if ((long)uVar3 < 0) {
      uVar4 = param_1[1];
      lVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
      uVar3 = (ulong)param_1[2] >> 0x38;
    }
    else {
      lVar1 = 0x16;
      uVar4 = uVar3;
    }
    uVar2 = (uint)uVar3;
    if (lVar1 - uVar4 < param_2) {
      FUN_004625f0(param_1,lVar1,(param_2 - lVar1) + uVar4,uVar4,uVar4,0,0);
      uVar2 = (uint)*(byte *)((long)param_1 + 0x17);
    }
    if ((uVar2 >> 7 & 1) == 0) {
      *(byte *)((long)param_1 + 0x17) = (char)uVar4 + (char)param_2 & 0x7f;
    }
    else {
      param_1[1] = uVar4 + param_2;
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((long)param_1 + uVar4 + param_2) = 0;
  }
  return;
}



/* Entry: 0053324c; end: 00533293;  */

void FUN_0053324c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    func_0x005332cc();
  }
  else {
    FUN_0055108c();
  }
  uVar3 = param_2[1];
  uVar2 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 00533294; end: 005332bf;  */

void FUN_00533294(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x005332cc();
  }
  else {
    FUN_0055108c();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 005332c0; end: 005332eb;  */

void FUN_005332c0(void)

{
  return;
}



/* Entry: 005332ec; end: 00533327;  */

bool FUN_005332ec(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_00533328();
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    uVar4 = puVar1[2];
    uVar6 = puVar1[5];
    uVar5 = puVar1[4];
    param_3[3] = puVar1[3];
    param_3[2] = uVar4;
    param_3[5] = uVar6;
    param_3[4] = uVar5;
    param_3[1] = uVar3;
    *param_3 = uVar2;
  }
  return puVar1 != (undefined8 *)0x0;
}



/* Entry: 00533328; end: 0053342f;  */

long * FUN_00533328(long param_1,uint param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  byte bVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar10;
  byte bVar16;
  long lStack_60;
  ulong auStack_58 [5];
  
  puVar2 = puRam0000000000b62668;
  plVar8 = &lStack_60;
  if (puRam0000000000b62668 != (ulong *)0x0) {
    auStack_58[1] = 0;
    auStack_58[4] = 0;
    auStack_58[3] = 0;
    auStack_58[2] = 0;
    auStack_58[0] = (ulong)param_2;
    Hint_Prefetch(*puRam0000000000b62668,0,2,0);
    lStack_60 = param_1;
    func_0x0053796c(&lStack_60,auStack_58);
    lVar3 = 0;
    uVar4 = *puVar2;
    uVar6 = uVar4 >> 0xc ^ (ulong)plVar8 >> 7;
    bVar5 = (byte)plVar8 & 0x7f;
    while( true ) {
      uVar6 = uVar6 & puVar2[2];
      uVar10 = *(undefined8 *)(uVar4 + uVar6);
      bVar9 = (byte)((ulong)uVar10 >> 8);
      bVar11 = (byte)((ulong)uVar10 >> 0x10);
      bVar12 = (byte)((ulong)uVar10 >> 0x18);
      bVar13 = (byte)((ulong)uVar10 >> 0x20);
      bVar14 = (byte)((ulong)uVar10 >> 0x28);
      bVar15 = (byte)((ulong)uVar10 >> 0x30);
      bVar16 = (byte)((ulong)uVar10 >> 0x38);
      for (uVar7 = CONCAT17(-(bVar16 == bVar5),
                            CONCAT16(-(bVar15 == bVar5),
                                     CONCAT15(-(bVar14 == bVar5),
                                              CONCAT14(-(bVar13 == bVar5),
                                                       CONCAT13(-(bVar12 == bVar5),
                                                                CONCAT12(-(bVar11 == bVar5),
                                                                         CONCAT11(-(bVar9 == bVar5),
                                                                                  -((byte)uVar10 ==
                                                                                   bVar5)))))))) &
                   0x8080808080808080; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
        uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        plVar8 = (long *)(puVar2[1] +
                         (uVar6 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & puVar2[2])
                         * 0x30);
        if (*plVar8 == param_1 && *(uint *)(plVar8 + 1) == param_2) {
          if (uVar4 == 0) {
            return (long *)0x0;
          }
          return plVar8;
        }
      }
      bVar9 = NEON_umaxv(CONCAT17(-(bVar16 == 0x80),
                                  CONCAT16(-(bVar15 == 0x80),
                                           CONCAT15(-(bVar14 == 0x80),
                                                    CONCAT14(-(bVar13 == 0x80),
                                                             CONCAT13(-(bVar12 == 0x80),
                                                                      CONCAT12(-(bVar11 == 0x80),
                                                                               CONCAT11(-(bVar9 == 
                                                  0x80),-((byte)uVar10 == 0x80)))))))),1);
      if ((bVar9 & 1) != 0) break;
      lVar3 = lVar3 + 8;
      uVar6 = lVar3 + uVar6;
    }
  }
  return (long *)0x0;
}



/* Entry: 00533430; end: 0053350b;  */

byte ** FUN_00533430(byte *param_1,uint *param_2,undefined1 param_3,undefined1 param_4,
                    undefined1 param_5)

{
  byte *pbVar1;
  byte **ppbVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined1 auStack_1b8 [264];
  byte *pbStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_41;
  
  pbStack_78._0_4_ = 0xe;
  pbVar1 = param_1;
  puVar3 = param_2;
  uStack_41 = param_3;
  func_0x0053a6f0(param_1,param_2,"type != WireFormatLite::TYPE_ENUM");
  if (pbVar1 == (byte *)0x0) {
    pbStack_78._0_4_ = 0xb;
    uStack_41 = param_3;
    func_0x0053a6f0();
    if (pbVar1 == (byte *)0x0) {
      pbStack_78._0_4_ = 10;
      uStack_41 = param_3;
      func_0x0053a6f0();
      if (pbVar1 == (byte *)0x0) {
        uStack_70 = SUB84(param_2,0);
        pbStack_78 = param_1;
        uStack_6c = param_3;
        uStack_6b = param_4;
        uStack_6a = param_5;
        func_0x0053ac7c();
        ppbVar2 = &pbStack_78;
        FUN_0053353c(ppbVar2);
        return ppbVar2;
      }
      func_0x00533528();
      func_0x0053a4b0();
      uVar4 = 0x75;
    }
    else {
      func_0x00533528();
      func_0x0053a4b0();
      uVar4 = 0x74;
    }
  }
  else {
    func_0x00533528();
    func_0x0053a4b0();
    uVar4 = 0x73;
  }
  FUN_00776794();
  func_0x0053a67c();
  ppbVar2 = (byte **)(ulong)*pbVar1;
  if (*puVar3 != (uint)*pbVar1) {
    return (byte **)0x0;
  }
  FUN_005542d4(auStack_1b8,uVar4);
  FUN_00554790(auStack_1b8,ppbVar2);
  FUN_00554338(auStack_1b8);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(auStack_1b8,ppbVar2);
  FUN_00554368(auStack_1b8);
  func_0x0053ab6c();
  return ppbVar2;
}



/* Entry: 0053350c; end: 0053353b;  */

byte FUN_0053350c(byte *param_1,uint *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_138 [264];
  
  bVar1 = *param_1;
  if (*param_2 != (uint)bVar1) {
    return 0;
  }
  FUN_005542d4(auStack_138,param_3);
  FUN_00554790(auStack_138,bVar1);
  FUN_00554338(auStack_138);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(auStack_138,bVar1);
  FUN_00554368(auStack_138);
  func_0x0053ab6c();
  return bVar1;
}



/* Entry: 0053353c; end: 0053373f;  */

segment_command *
FUN_0053353c(long *param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5,
            qword param_6)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar8;
  undefined1 *puVar4;
  segment_command *psVar5;
  segment_command *psVar6;
  byte *pbVar7;
  undefined1 **ppuVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  uint6 uVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  undefined8 uVar19;
  byte bVar26;
  long lVar20;
  long lVar27;
  undefined1 auStack_208 [264];
  undefined1 *puStack_c8;
  char acStack_c0 [4];
  byte bStack_bc;
  char cStack_bb;
  char cStack_ba;
  char acStack_b8 [8];
  qword qStack_b0;
  byte bStack_91;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [16];
  
  if ((bRam0000000000b62678 & 1) == 0) {
    iVar3 = 0xb62678;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      psVar6 = &segment_command_00000020;
      __Znwm();
      *(undefined **)psVar6 = &UNK_00811030;
      psVar6->segname[0] = '\0';
      psVar6->segname[1] = '\0';
      psVar6->segname[2] = '\0';
      psVar6->segname[3] = '\0';
      psVar6->segname[4] = '\0';
      psVar6->segname[5] = '\0';
      psVar6->segname[6] = '\0';
      psVar6->segname[7] = '\0';
      psVar6->segname[8] = '\0';
      psVar6->segname[9] = '\0';
      psVar6->segname[10] = '\0';
      psVar6->segname[0xb] = '\0';
      psVar6->segname[0xc] = '\0';
      psVar6->segname[0xd] = '\0';
      psVar6->segname[0xe] = '\0';
      psVar6->segname[0xf] = '\0';
      psVar6->vmaddr = 0;
      FUN_0054a414(0x537abc,psVar6);
      psRam0000000000b62670 = psVar6;
      ___cxa_guard_release(0xb62678);
    }
  }
  psVar6 = psRam0000000000b62670;
  psRam0000000000b62668 = psRam0000000000b62670;
  uVar19._0_4_ = psRam0000000000b62670->cmd;
  uVar19._4_4_ = psRam0000000000b62670->cmdsize;
  Hint_Prefetch(uVar19,0,2,0);
  plVar14 = param_1;
  func_0x0053796c(uVar19,param_1,param_1 + 1);
  lVar11 = 0;
  uVar12 = *(ulong *)psVar6 >> 0xc ^ (ulong)plVar14 >> 7;
  bVar10 = (byte)plVar14;
  uVar15 = CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(bVar10,CONCAT11(bVar10,bVar10)))
                                   )) & 0x7f7f7f7f7f7f;
  do {
    uVar12 = uVar12 & *(ulong *)(psVar6->segname + 8);
    uVar19 = *(undefined8 *)(*(ulong *)psVar6 + uVar12);
    cVar21 = (char)((ulong)uVar19 >> 8);
    cVar22 = (char)((ulong)uVar19 >> 0x10);
    cVar23 = (char)((ulong)uVar19 >> 0x18);
    cVar24 = (char)((ulong)uVar19 >> 0x20);
    cVar25 = (char)((ulong)uVar19 >> 0x28);
    bVar18 = (byte)((ulong)uVar19 >> 0x30);
    bVar26 = (byte)((ulong)uVar19 >> 0x38);
    for (uVar13 = CONCAT17(-(bVar26 == (bVar10 & 0x7f)),
                           CONCAT16(-(bVar18 == (bVar10 & 0x7f)),
                                    CONCAT15(-(cVar25 == (char)(uVar15 >> 0x28)),
                                             CONCAT14(-(cVar24 == (char)(uVar15 >> 0x20)),
                                                      CONCAT13(-(cVar23 == (char)(uVar15 >> 0x18)),
                                                               CONCAT12(-(cVar22 ==
                                                                         (char)(uVar15 >> 0x10)),
                                                                        CONCAT11(-(cVar21 ==
                                                                                  (char)(uVar15 >> 8
                                                                                        )),
                                                                                 -((char)uVar19 ==
                                                                                  (char)uVar15))))))
                                   )) & 0x8080808080808080; uVar13 != 0;
        uVar13 = uVar13 - 1 & uVar13) {
      uVar2 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      plVar14 = (long *)(*(long *)psVar6->segname +
                        (uVar12 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) &
                        *(ulong *)(psVar6->segname + 8)) * 0x30);
      if (*plVar14 == *param_1 && (int)plVar14[1] == (int)param_1[1]) {
        func_0x0053a54c();
        bVar10 = 0x4e;
        FUN_0077670c(auStack_30);
        puVar4 = auStack_30;
        FUN_00537a3c(puVar4,"Multiple extension registrations for type \"");
        FUN_00549afc(auStack_48,*param_1);
        FUN_00555478(puVar4,auStack_48);
        func_0x00537a5c(puVar4,"\", field number ");
        FUN_00537a7c();
        uVar8._0_1_ = '|';
        uVar8._1_1_ = '3';
        uVar8._2_1_ = -0x73;
        uVar8._3_1_ = '\0';
        func_0x00537a9c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_48);
        puVar4 = auStack_30;
        FUN_005558a0();
        puStack_c8 = (undefined1 *)CONCAT44(puStack_c8._4_4_,0xe);
        pbVar7 = &bStack_91;
        ppuVar9 = &puStack_c8;
        bStack_91 = bVar10;
        FUN_005337dc(pbVar7,ppuVar9,"type == WireFormatLite::TYPE_ENUM");
        if (pbVar7 == (byte *)0x0) {
          puStack_c8 = puVar4;
          acStack_c0 = (char  [4])uVar8;
          bStack_bc = bVar10;
          cStack_bb = param_4;
          cStack_ba = param_5;
          func_0x0053ac7c();
          acStack_b8[0] = -0xc;
          acStack_b8[1] = '7';
          acStack_b8[2] = 'S';
          acStack_b8[3] = '\0';
          acStack_b8[4] = '\0';
          acStack_b8[5] = '\0';
          acStack_b8[6] = '\0';
          acStack_b8[7] = '\0';
          psVar6 = (segment_command *)&puStack_c8;
          qStack_b0 = param_6;
          FUN_0053353c(psVar6);
          return psVar6;
        }
        func_0x00533528();
        func_0x0053a4b0();
        uVar19 = 0x8b;
        FUN_00776794();
        func_0x0053a67c();
        bVar10 = *pbVar7;
        uVar1 = *(uint *)ppuVar9;
        if (uVar1 != bVar10) {
          FUN_005542d4(auStack_208,uVar19);
          FUN_00554790(auStack_208,bVar10);
          FUN_00554338(auStack_208);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx
                    (auStack_208,(segment_command *)(ulong)uVar1);
          FUN_00554368(auStack_208);
          func_0x0053ab6c();
          return (segment_command *)(ulong)uVar1;
        }
        return (segment_command *)0x0;
      }
    }
    bVar18 = NEON_umaxv(CONCAT17(-(bVar26 == 0x80),
                                 CONCAT16(-(bVar18 == 0x80),
                                          CONCAT15(-(cVar25 == -0x80),
                                                   CONCAT14(-(cVar24 == -0x80),
                                                            CONCAT13(-(cVar23 == -0x80),
                                                                     CONCAT12(-(cVar22 == -0x80),
                                                                              CONCAT11(-(cVar21 ==
                                                                                        -0x80),-((
                                                  char)uVar19 == -0x80)))))))),1);
    if ((bVar18 & 1) != 0) {
      psVar5 = psVar6;
      func_0x00537af4();
      plVar14 = (long *)(*(long *)psVar6->segname + (long)psVar5 * 0x30);
      lVar16 = param_1[1];
      lVar11 = *param_1;
      lVar17 = param_1[2];
      lVar27 = param_1[5];
      lVar20 = param_1[4];
      plVar14[3] = param_1[3];
      plVar14[2] = lVar17;
      plVar14[5] = lVar27;
      plVar14[4] = lVar20;
      plVar14[1] = lVar16;
      *plVar14 = lVar11;
      return psVar5;
    }
    lVar11 = lVar11 + 8;
    uVar12 = lVar11 + uVar12;
  } while( true );
}



/* Entry: 00533740; end: 005337db;  */

undefined8 *
FUN_00533740(undefined8 param_1,undefined4 param_2,byte param_3,undefined1 param_4,
            undefined1 param_5,undefined8 param_6)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined1 auStack_1b8 [264];
  undefined8 uStack_78;
  undefined4 uStack_70;
  byte bStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined8 uStack_68;
  undefined8 uStack_60;
  byte bStack_41;
  
  uStack_78 = CONCAT44(uStack_78._4_4_,0xe);
  pbVar3 = &bStack_41;
  puVar5 = (uint *)&uStack_78;
  bStack_41 = param_3;
  FUN_005337dc(pbVar3,puVar5,"type == WireFormatLite::TYPE_ENUM");
  if (pbVar3 == (byte *)0x0) {
    uStack_78 = param_1;
    uStack_70 = param_2;
    bStack_6c = param_3;
    uStack_6b = param_4;
    uStack_6a = param_5;
    func_0x0053ac7c();
    uStack_68 = 0x5337f4;
    puVar4 = &uStack_78;
    uStack_60 = param_6;
    FUN_0053353c(puVar4);
    return puVar4;
  }
  func_0x00533528();
  func_0x0053a4b0();
  uVar6 = 0x8b;
  FUN_00776794();
  func_0x0053a67c();
  bVar2 = *pbVar3;
  uVar1 = *puVar5;
  if (uVar1 == bVar2) {
    return (undefined8 *)0x0;
  }
  FUN_005542d4(auStack_1b8,uVar6);
  FUN_00554790(auStack_1b8,bVar2);
  FUN_00554338(auStack_1b8);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(auStack_1b8,(undefined8 *)(ulong)uVar1);
  FUN_00554368(auStack_1b8);
  func_0x0053ab6c();
  return (undefined8 *)(ulong)uVar1;
}



/* Entry: 005337dc; end: 005337ff;  */

uint FUN_005337dc(byte *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 auStack_138 [264];
  
  bVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar1 == bVar2) {
    return 0;
  }
  FUN_005542d4(auStack_138,param_3);
  FUN_00554790(auStack_138,bVar2);
  FUN_00554338(auStack_138);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(auStack_138,uVar1);
  FUN_00554368(auStack_138);
  func_0x0053ab6c();
  return uVar1;
}



/* Entry: 00533800; end: 00533883;  */

undefined8 *
FUN_00533800(undefined8 param_1,undefined4 param_2,byte param_3,undefined1 param_4,
            undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uStack_60;
  undefined4 uStack_58;
  byte bStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  puVar2 = &uStack_60;
  puVar3 = &uStack_60;
  if ((param_3 & 0xfe) == 10) {
    uStack_40 = 0;
    uVar1 = param_6;
    uStack_60 = param_1;
    uStack_58 = param_2;
    bStack_54 = param_3;
    uStack_53 = param_4;
    uStack_52 = param_5;
    uStack_51 = param_8;
    uStack_38 = param_7;
    FUN_00533888();
    uStack_50 = param_6;
    uStack_48 = uVar1;
    FUN_0053353c(&uStack_60);
    return puVar2;
  }
  pcVar4 = "type == WireFormatLite::TYPE_MESSAGE || type == WireFormatLite::TYPE_GROUP";
  FUN_00533884(auStack_30);
  func_0x0053a54c();
  FUN_00776794();
  func_0x0053a53c();
  *puVar3 = pcVar4;
  _strlen();
  puVar3[1] = pcVar4;
  return puVar3;
}



/* Entry: 00533884; end: 00533887;  */

undefined8 * FUN_00533884(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  _strlen();
  param_1[1] = param_2;
  return param_1;
}



/* Entry: 00533888; end: 005338cf;  */

long * FUN_00533888(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x30))();
  if ((long *)*plVar1 != (long *)0x0) {
    return (long *)*plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x005338cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar1[5] + 0x10))(param_1);
  return param_1;
}



/* Entry: 005338d0; end: 0053398b;  */

long * FUN_005338d0(long *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*param_1 == 0) {
    puVar3 = (undefined8 *)param_1[2];
    if ((long)*(short *)((long)param_1 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        FUN_005355f0(lVar2 + 0x18);
        func_0x0053a9bc();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)param_1 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        FUN_005355f0(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)param_1 + 10) < 0) {
      if (param_1[2] != 0) {
        FUN_00537e04();
      }
      __ZdlPv();
    }
    else {
      __ZdaPv();
    }
  }
  return param_1;
}



/* Entry: 0053398c; end: 00533a33;  */

byte FUN_0053398c(long param_1)

{
  byte bVar1;
  
  func_0x005339b8();
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) ^ 1;
  }
  return bVar1 & 1;
}



/* Entry: 00533a34; end: 00533aab;  */

void FUN_00533a34(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar4;
  undefined8 auStack_20 [2];
  
  puVar3 = auStack_20;
  func_0x0053a4c8(*(undefined1 *)(param_1 + 8));
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00533a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_00810bcc)[extraout_x8] * 4 + 0x533a64))();
    return;
  }
  func_0x0053a54c();
  FUN_0077670c(auStack_20);
  func_0x00537864(auStack_20,"Can\'t get here.");
  func_0x0053a53c();
  func_0x005339b8();
  if (puVar3 != (undefined8 *)0x0) {
    bVar1 = *(char *)((long)puVar3 + 9) != '\0';
    bVar2 = *(char *)((long)puVar3 + 9) == '\x01';
    if (bVar2) {
      func_0x0053a4c8(*(undefined1 *)(puVar3 + 1));
      if (!bVar1 || bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00533b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_00810bd6)[extraout_x8_00] * 4 + 0x533b0c))();
        return;
      }
    }
    else if ((*(byte *)((long)puVar3 + 10) & 1) == 0) {
      if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(puVar3 + 1) * 4) == 10) {
        if ((*(byte *)((long)puVar3 + 10) >> 4 & 1) == 0) {
          pcVar4 = *(code **)(*(long *)*puVar3 + 0x18);
        }
        else {
          pcVar4 = *(code **)(*(long *)*puVar3 + 0x88);
        }
        (*pcVar4)();
      }
      else if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(puVar3 + 1) * 4) == 9) {
        func_0x0048d000(*puVar3);
      }
      *(byte *)((long)puVar3 + 10) = *(byte *)((long)puVar3 + 10) & 0xf0 | 1;
    }
    return;
  }
  return;
}



/* Entry: 00533aac; end: 00533acb;  */

void FUN_00533aac(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  long extraout_x8;
  code *pcVar3;
  
  func_0x005339b8();
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  bVar1 = *(char *)((long)param_1 + 9) != '\0';
  bVar2 = *(char *)((long)param_1 + 9) == '\x01';
  if (bVar2) {
    func_0x0053a4c8(*(undefined1 *)(param_1 + 1));
    if (!bVar1 || bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00533b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_00810bd6)[extraout_x8] * 4 + 0x533b0c))();
      return;
    }
  }
  else if ((*(byte *)((long)param_1 + 10) & 1) == 0) {
    if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(param_1 + 1) * 4) == 10) {
      if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
        pcVar3 = *(code **)(*(long *)*param_1 + 0x18);
      }
      else {
        pcVar3 = *(code **)(*(long *)*param_1 + 0x88);
      }
      (*pcVar3)();
    }
    else if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(param_1 + 1) * 4) == 9) {
      func_0x0048d000(*param_1);
    }
    *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) & 0xf0 | 1;
  }
  return;
}



/* Entry: 00533acc; end: 00533bd7;  */

void FUN_00533acc(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  long extraout_x8;
  code *pcVar3;
  
  bVar1 = *(char *)((long)param_1 + 9) != '\0';
  bVar2 = *(char *)((long)param_1 + 9) == '\x01';
  if (bVar2) {
    func_0x0053a4c8(*(undefined1 *)(param_1 + 1));
    if (!bVar1 || bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00533b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_00810bd6)[extraout_x8] * 4 + 0x533b0c))();
      return;
    }
  }
  else if ((*(byte *)((long)param_1 + 10) & 1) == 0) {
    if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(param_1 + 1) * 4) == 10) {
      if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
        pcVar3 = *(code **)(*(long *)*param_1 + 0x18);
      }
      else {
        pcVar3 = *(code **)(*(long *)*param_1 + 0x88);
      }
      (*pcVar3)();
    }
    else if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(param_1 + 1) * 4) == 9) {
      func_0x0048d000(*param_1);
    }
    *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) & 0xf0 | 1;
  }
  return;
}



/* Entry: 00533bd8; end: 00533c07;  */

void FUN_00533bd8(undefined4 *param_1,uint param_2)

{
  undefined4 unaff_w19;
  undefined8 unaff_x21;
  
  func_0x0053a490();
  *(undefined8 *)(param_1 + 4) = unaff_x21;
  if ((param_2 & 1) != 0) {
    func_0x0053a948();
  }
  func_0x0053a4e0();
  *param_1 = unaff_w19;
  return;
}



/* Entry: 00533c08; end: 00533c47;  */

ulong FUN_00533c08(long param_1)

{
  long extraout_x8;
  int unaff_w19;
  ulong unaff_x20;
  
  func_0x0053a564();
  if (param_1 != 0) {
    func_0x0053a5c4();
    return (ulong)*(uint *)(extraout_x8 + (long)unaff_w19 * 4);
  }
  func_0x0053a214();
  func_0x0053a544();
  func_0x0053a244();
  func_0x0053a53c();
  func_0x0053a2bc();
  func_0x0053a2cc();
  return unaff_x20;
}



/* Entry: 00533c48; end: 00533c67;  */

void FUN_00533c48(void)

{
  func_0x0053a2bc();
  func_0x0053a2cc();
  return;
}



/* Entry: 00533c68; end: 00533cb3;  */

void FUN_00533c68(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x20;
  
  func_0x0053abec();
  func_0x0053a308();
  func_0x0053a9c4();
  if ((param_2 & 1) != 0) {
    func_0x0053a27c();
    FUN_00538194();
    *unaff_x20 = param_1;
  }
  FUN_00533cb4();
  return;
}



/* Entry: 00533cb4; end: 00533d13;  */

void FUN_00533cb4(undefined8 param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x9;
  
  func_0x0053a638();
  if ((bool)in_ZR) {
    func_0x0053aaa0();
    func_0x00437928();
  }
  func_0x0053a628();
  *(undefined4 *)(extraout_x9 + (long)extraout_w8 * 4) = param_2;
  return;
}



/* Entry: 00533d14; end: 00533d43;  */

void FUN_00533d14(undefined8 *param_1,uint param_2)

{
  undefined8 unaff_x19;
  undefined8 unaff_x21;
  
  func_0x0053a96c();
  param_1[2] = unaff_x21;
  if ((param_2 & 1) != 0) {
    func_0x0053a948();
  }
  func_0x0053a4e0();
  *param_1 = unaff_x19;
  return;
}



/* Entry: 00533d44; end: 00533d83;  */

long FUN_00533d44(long param_1,ulong param_2)

{
  long extraout_x8;
  int unaff_w19;
  long *unaff_x20;
  
  func_0x0053a564();
  if (param_1 != 0) {
    func_0x0053a5c4();
    return *(long *)(extraout_x8 + (long)unaff_w19 * 8);
  }
  func_0x0053a214();
  func_0x0053a544();
  func_0x0053a244();
  func_0x0053a53c();
  func_0x0053abec();
  func_0x0053a308();
  func_0x0053a9c4();
  if ((param_2 & 1) == 0) {
    param_1 = *unaff_x20;
  }
  else {
    func_0x0053a27c();
    func_0x005381c4();
    *unaff_x20 = param_1;
  }
  FUN_00533dd0();
  return param_1;
}



/* Entry: 00533d84; end: 00533dcf;  */

void FUN_00533d84(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x20;
  
  func_0x0053abec();
  func_0x0053a308();
  func_0x0053a9c4();
  if ((param_2 & 1) != 0) {
    func_0x0053a27c();
    func_0x005381c4();
    *unaff_x20 = param_1;
  }
  FUN_00533dd0();
  return;
}



/* Entry: 00533dd0; end: 00533e2f;  */

void FUN_00533dd0(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x9;
  undefined8 unaff_x19;
  
  func_0x0053a61c();
  func_0x0053a874();
  if ((bool)in_ZR) {
    func_0x0053aaa0();
    FUN_0048b00c();
  }
  func_0x0053a628();
  *(undefined8 *)(extraout_x9 + (long)extraout_w8 * 8) = unaff_x19;
  return;
}



/* Entry: 00533e30; end: 00533e5f;  */

void FUN_00533e30(undefined4 *param_1,uint param_2)

{
  undefined4 unaff_w19;
  undefined8 unaff_x21;
  
  func_0x0053a490();
  *(undefined8 *)(param_1 + 4) = unaff_x21;
  if ((param_2 & 1) != 0) {
    func_0x0053a948();
  }
  func_0x0053a4e0();
  *param_1 = unaff_w19;
  return;
}



/* Entry: 00533e60; end: 00533e9f;  */

ulong FUN_00533e60(ulong param_1,ulong param_2)

{
  long extraout_x8;
  int unaff_w19;
  ulong *unaff_x20;
  
  func_0x0053a564();
  if (param_1 != 0) {
    func_0x0053a5c4();
    return (ulong)*(uint *)(extraout_x8 + (long)unaff_w19 * 4);
  }
  func_0x0053a214();
  func_0x0053a544();
  func_0x0053a244();
  func_0x0053a53c();
  func_0x0053abec();
  func_0x0053a308();
  func_0x0053a9c4();
  if ((param_2 & 1) == 0) {
    param_1 = *unaff_x20;
  }
  else {
    func_0x0053a27c();
    func_0x005381f4();
    *unaff_x20 = param_1;
  }
  FUN_00533eec();
  return param_1;
}



/* Entry: 00533ea0; end: 00533eeb;  */

void FUN_00533ea0(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x20;
  
  func_0x0053abec();
  func_0x0053a308();
  func_0x0053a9c4();
  if ((param_2 & 1) != 0) {
    func_0x0053a27c();
    func_0x005381f4();
    *unaff_x20 = param_1;
  }
  FUN_00533eec();
  return;
}



/* Entry: 00533eec; end: 00533f4b;  */

void FUN_00533eec(undefined8 param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x9;
  
  func_0x0053a638();
  if ((bool)in_ZR) {
    func_0x0053aaa0();
    FUN_004eb308();
  }
  func_0x0053a628();
  *(undefined4 *)(extraout_x9 + (long)extraout_w8 * 4) = param_2;
  return;
}



/* Entry: 00533f4c; end: 00533f7b;  */

void FUN_00533f4c(undefined8 *param_1,uint param_2)

{
  undefined8 unaff_x19;
  undefined8 unaff_x21;
  
  func_0x0053a96c();
  param_1[2] = unaff_x21;
  if ((param_2 & 1) != 0) {
    func_0x0053a948();
  }
  func_0x0053a4e0();
  *param_1 = unaff_x19;
  return;
}



/* Entry: 00533f7c; end: 00533fbb;  */

long FUN_00533f7c(long param_1,ulong param_2)

{
  long extraout_x8;
  int unaff_w19;
  long *unaff_x20;
  
  func_0x0053a564();
  if (param_1 != 0) {
    func_0x0053a5c4();
    return *(long *)(extraout_x8 + (long)unaff_w19 * 8);
  }
  func_0x0053a214();
  func_0x0053a544();
  func_0x0053a244();
  func_0x0053a53c();
  func_0x0053abec();
  func_0x0053a308();
  func_0x0053a9c4();
  if ((param_2 & 1) == 0) {
    param_1 = *unaff_x20;
  }
  else {
    func_0x0053a27c();
    func_0x00538224();
    *unaff_x20 = param_1;
  }
  FUN_00534008();
  return param_1;
}



/* Entry: 00533fbc; end: 00534007;  */

void FUN_00533fbc(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x20;
  
  func_0x0053abec();
  func_0x0053a308();
  func_0x0053a9c4();
  if ((param_2 & 1) != 0) {
    func_0x0053a27c();
    func_0x00538224();
    *unaff_x20 = param_1;
  }
  FUN_00534008();
  return;
}



/* Entry: 00534008; end: 0053403b;  */

void FUN_00534008(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x9;
  undefined8 unaff_x19;
  
  func_0x0053a61c();
  func_0x0053a874();
  if ((bool)in_ZR) {
    func_0x0053aaa0();
    FUN_004df8b8();
  }
  func_0x0053a628();
  *(undefined8 *)(extraout_x9 + (long)extraout_w8 * 8) = unaff_x19;
  return;
}



/* Entry: 0053403c; end: 0053406f;  */

ulong FUN_0053403c(ulong param_1,uint *param_2)

{
  func_0x005339b8();
  if ((param_2 != (uint *)0x0) && ((*(byte *)((long)param_2 + 10) & 1) == 0)) {
    param_1 = (ulong)*param_2;
  }
  return param_1;
}



/* Entry: 00534070; end: 005340af;  */

void FUN_00534070(undefined4 param_1,undefined4 *param_2,uint param_3,undefined1 param_4,
                 undefined8 param_5)

{
  FUN_0053572c();
  *(undefined8 *)(param_2 + 4) = param_5;
  if ((param_3 & 1) != 0) {
    *(undefined1 *)(param_2 + 2) = param_4;
    *(undefined1 *)((long)param_2 + 9) = 0;
  }
  func_0x0053a4e0();
  *param_2 = param_1;
  return;
}



/* Entry: 005340b0; end: 005340f7;  */

ulong FUN_005340b0(ulong param_1,long *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                  long param_6)

{
  long *plVar1;
  long extraout_x8;
  int unaff_w19;
  
  func_0x0053a564();
  if (param_2 == (long *)0x0) {
    func_0x0053a214();
    func_0x0053a544();
    func_0x0053a244();
    func_0x0053a53c();
    func_0x0053a5d0();
    param_2[2] = param_6;
    if ((param_3 & 1) != 0) {
      plVar1 = param_2;
      func_0x0053a8c0();
      func_0x00538254();
      *param_2 = (long)plVar1;
    }
    FUN_00534164(param_1);
    return param_1;
  }
  func_0x0053a5c4();
  return (ulong)*(uint *)(extraout_x8 + (long)unaff_w19 * 4);
}



/* Entry: 005340f8; end: 00534163;  */

void FUN_005340f8(undefined8 param_1,long *param_2,uint param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long *plVar1;
  
  func_0x0053a5d0();
  param_2[2] = param_6;
  if ((param_3 & 1) != 0) {
    plVar1 = param_2;
    func_0x0053a8c0();
    func_0x00538254();
    *param_2 = (long)plVar1;
  }
  FUN_00534164(param_1);
  return;
}



/* Entry: 00534164; end: 005341ab;  */

void FUN_00534164(undefined4 param_1,int *param_2)

{
  undefined1 in_ZR;
  int extraout_w8;
  int iVar1;
  
  func_0x0053a874();
  iVar1 = extraout_w8;
  if ((bool)in_ZR) {
    FUN_00538284(param_2);
    iVar1 = *param_2;
  }
  *param_2 = iVar1 + 1;
  *(undefined4 *)(*(long *)(param_2 + 2) + (long)iVar1 * 4) = param_1;
  return;
}



/* Entry: 005341ac; end: 005341df;  */

undefined8 FUN_005341ac(undefined8 param_1,undefined8 *param_2)

{
  func_0x005339b8();
  if ((param_2 != (undefined8 *)0x0) && ((*(byte *)((long)param_2 + 10) & 1) == 0)) {
    param_1 = *param_2;
  }
  return param_1;
}



/* Entry: 005341e0; end: 0053421f;  */

void FUN_005341e0(undefined8 param_1,undefined8 *param_2,uint param_3,undefined1 param_4,
                 undefined8 param_5)

{
  FUN_0053572c();
  param_2[2] = param_5;
  if ((param_3 & 1) != 0) {
    *(undefined1 *)(param_2 + 1) = param_4;
    *(undefined1 *)((long)param_2 + 9) = 0;
  }
  func_0x0053a4e0();
  *param_2 = param_1;
  return;
}



/* Entry: 00534220; end: 00534267;  */

undefined8
FUN_00534220(undefined8 param_1,long *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
            long param_6)

{
  long *plVar1;
  long extraout_x8;
  int unaff_w19;
  
  func_0x0053a564();
  if (param_2 == (long *)0x0) {
    func_0x0053a214();
    func_0x0053a544();
    func_0x0053a244();
    func_0x0053a53c();
    func_0x0053a5d0();
    param_2[2] = param_6;
    if ((param_3 & 1) != 0) {
      plVar1 = param_2;
      func_0x0053a8c0();
      FUN_0053838c();
      *param_2 = (long)plVar1;
    }
    FUN_005342d4(param_1);
    return param_1;
  }
  func_0x0053a5c4();
  return *(undefined8 *)(extraout_x8 + (long)unaff_w19 * 8);
}



/* Entry: 00534268; end: 005342d3;  */

void FUN_00534268(undefined8 param_1,long *param_2,uint param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long *plVar1;
  
  func_0x0053a5d0();
  param_2[2] = param_6;
  if ((param_3 & 1) != 0) {
    plVar1 = param_2;
    func_0x0053a8c0();
    FUN_0053838c();
    *param_2 = (long)plVar1;
  }
  FUN_005342d4(param_1);
  return;
}



/* Entry: 005342d4; end: 0053431b;  */

void FUN_005342d4(undefined8 param_1,int *param_2)

{
  undefined1 in_ZR;
  int extraout_w8;
  int iVar1;
  
  func_0x0053a874();
  iVar1 = extraout_w8;
  if ((bool)in_ZR) {
    FUN_005383bc(param_2);
    iVar1 = *param_2;
  }
  *param_2 = iVar1 + 1;
  *(undefined8 *)(*(long *)(param_2 + 2) + (long)iVar1 * 8) = param_1;
  return;
}



/* Entry: 0053431c; end: 00534347;  */

byte FUN_0053431c(byte *param_1)

{
  byte unaff_w19;
  
  func_0x0053a564();
  if ((param_1 != (byte *)0x0) && ((param_1[10] & 1) == 0)) {
    unaff_w19 = *param_1;
  }
  return unaff_w19 & 1;
}



/* Entry: 00534348; end: 00534377;  */

void FUN_00534348(undefined1 *param_1,uint param_2)

{
  undefined1 unaff_w19;
  undefined8 unaff_x21;
  
  func_0x0053a490();
  *(undefined8 *)(param_1 + 0x10) = unaff_x21;
  if ((param_2 & 1) != 0) {
    func_0x0053a948();
  }
  func_0x0053a4e0();
  *param_1 = unaff_w19;
  return;
}



/* Entry: 00534378; end: 005343b7;  */

ulong FUN_00534378(ulong param_1,ulong param_2)

{
  long extraout_x8;
  int unaff_w19;
  ulong *unaff_x20;
  
  func_0x0053a564();
  if (param_1 != 0) {
    func_0x0053a5c4();
    return (ulong)*(byte *)(extraout_x8 + unaff_w19);
  }
  func_0x0053a214();
  func_0x0053a544();
  func_0x0053a244();
  func_0x0053a53c();
  func_0x0053abec();
  func_0x0053a308();
  func_0x0053a9c4();
  if ((param_2 & 1) == 0) {
    param_1 = *unaff_x20;
  }
  else {
    func_0x0053a27c();
    FUN_005384c8();
    *unaff_x20 = param_1;
  }
  FUN_00534404();
  return param_1;
}



/* Entry: 005343b8; end: 00534403;  */

void FUN_005343b8(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x20;
  
  func_0x0053abec();
  func_0x0053a308();
  func_0x0053a9c4();
  if ((param_2 & 1) != 0) {
    func_0x0053a27c();
    FUN_005384c8();
    *unaff_x20 = param_1;
  }
  FUN_00534404();
  return;
}



/* Entry: 00534404; end: 0053445b;  */

void FUN_00534404(undefined8 param_1,undefined1 param_2)

{
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x9;
  
  func_0x0053a638();
  if ((bool)in_ZR) {
    func_0x0053aaa0();
    FUN_005384f8();
  }
  func_0x0053a628();
  *(undefined1 *)(extraout_x9 + extraout_w8) = param_2;
  return;
}



/* Entry: 0053445c; end: 0053453b;  */

undefined8 *
FUN_0053445c(undefined8 *param_1,uint param_2,undefined8 param_3,undefined1 param_4,
            undefined8 param_5)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar1;
  long extraout_x8;
  uint unaff_w21;
  
  func_0x0053abec();
  func_0x0053a6fc();
  param_1[2] = param_5;
  if ((param_2 & 1) != 0) {
    *(undefined1 *)((long)param_1 + 9) = 1;
    *(char *)(param_1 + 1) = (char)unaff_w21;
    *(undefined1 *)((long)param_1 + 0xb) = param_4;
    puVar1 = param_1;
    func_0x0053a7c4(*(undefined4 *)(&UNK_00810e40 + (ulong)unaff_w21 * 4));
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x005344c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_00810be0)[extraout_x8] * 4 + 0x5344c4))();
      return puVar1;
    }
  }
  return (undefined8 *)*param_1;
}



/* Entry: 0053453c; end: 00534587;  */

void FUN_0053453c(void)

{
  func_0x0053a2bc();
  func_0x0053a2cc();
  return;
}



/* Entry: 00534588; end: 005345b7;  */

void FUN_00534588(undefined4 *param_1,uint param_2)

{
  undefined4 unaff_w19;
  undefined8 unaff_x21;
  
  func_0x0053a490();
  *(undefined8 *)(param_1 + 4) = unaff_x21;
  if ((param_2 & 1) != 0) {
    func_0x0053a948();
  }
  func_0x0053a4e0();
  *param_1 = unaff_w19;
  return;
}



/* Entry: 005345b8; end: 005345f7;  */

ulong FUN_005345b8(ulong param_1,ulong param_2)

{
  long extraout_x8;
  int unaff_w19;
  ulong *unaff_x20;
  
  func_0x0053a564();
  if (param_1 != 0) {
    func_0x0053a5c4();
    return (ulong)*(uint *)(extraout_x8 + (long)unaff_w19 * 4);
  }
  func_0x0053a214();
  func_0x0053a544();
  func_0x0053a244();
  func_0x0053a53c();
  func_0x0053abec();
  func_0x0053a308();
  func_0x0053a9c4();
  if ((param_2 & 1) == 0) {
    param_1 = *unaff_x20;
  }
  else {
    func_0x0053a27c();
    FUN_00538194();
    *unaff_x20 = param_1;
  }
  FUN_00533cb4();
  return param_1;
}



/* Entry: 005345f8; end: 00534643;  */

void FUN_005345f8(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x20;
  
  func_0x0053abec();
  func_0x0053a308();
  func_0x0053a9c4();
  if ((param_2 & 1) != 0) {
    func_0x0053a27c();
    FUN_00538194();
    *unaff_x20 = param_1;
  }
  FUN_00533cb4();
  return;
}



/* Entry: 00534644; end: 0053466f;  */

undefined8 FUN_00534644(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  func_0x0053a9d8();
  if ((param_1 != (undefined8 *)0x0) && ((*(byte *)((long)param_1 + 10) & 1) == 0)) {
    unaff_x19 = *param_1;
  }
  return unaff_x19;
}



/* Entry: 00534670; end: 005346c7;  */

void FUN_00534670(long *param_1,uint param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined1 unaff_w21;
  
  func_0x0053a6fc();
  param_1[2] = param_4;
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = unaff_w21;
    *(undefined1 *)((long)param_1 + 9) = 0;
    plVar1 = param_1;
    func_0x0053a3cc();
    FUN_00533294();
    *param_1 = (long)plVar1;
  }
  *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) & 0xf0;
  return;
}



/* Entry: 005346c8; end: 00534703;  */

void FUN_005346c8(long *param_1,uint param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined1 unaff_w21;
  
  func_0x0053a564();
  if (param_1 == (long *)0x0) {
    func_0x0053a214();
    func_0x0053a544();
    func_0x0053a244();
    func_0x0053a53c();
    func_0x0053a6fc();
    param_1[2] = param_4;
    if ((param_2 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = unaff_w21;
      *(undefined1 *)((long)param_1 + 9) = 1;
      *(undefined1 *)((long)param_1 + 0xb) = 0;
      plVar1 = param_1;
      func_0x0053a3cc();
      FUN_005385f8();
      *param_1 = (long)plVar1;
    }
    func_0x0054d0b8();
    return;
  }
  func_0x0053a344();
  return;
}



/* Entry: 00534704; end: 0053475b;  */

void FUN_00534704(long *param_1,uint param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined1 unaff_w21;
  
  func_0x0053a6fc();
  param_1[2] = param_4;
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = unaff_w21;
    *(undefined1 *)((long)param_1 + 9) = 1;
    *(undefined1 *)((long)param_1 + 0xb) = 0;
    plVar1 = param_1;
    func_0x0053a3cc();
    FUN_005385f8();
    *param_1 = (long)plVar1;
  }
  func_0x0054d0b8();
  return;
}



/* Entry: 0053475c; end: 005347ab;  */

long * FUN_0053475c(undefined8 *param_1)

{
  long *unaff_x19;
  
  func_0x0053ac90();
  func_0x005339b8();
  if ((param_1 != (undefined8 *)0x0) &&
     (unaff_x19 = (long *)*param_1, (*(byte *)((long)param_1 + 10) >> 4 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x005347a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x18))();
    return unaff_x19;
  }
  return unaff_x19;
}



/* Entry: 005347ac; end: 005348ff;  */

void FUN_005347ac(undefined8 *param_1,ulong param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  byte bVar1;
  undefined8 *unaff_x21;
  
  func_0x0053a5d0();
  param_1[2] = param_5;
  if ((param_2 & 1) == 0) {
    bVar1 = *(byte *)((long)param_1 + 10);
    *(byte *)((long)param_1 + 10) = bVar1 & 0xf0;
    if ((bVar1 >> 4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0053484c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,param_4,*unaff_x21);
      return;
    }
  }
  else {
    func_0x0053aaf4();
    (**(code **)(*param_4 + 0x10))(param_4,*unaff_x21);
    *param_1 = param_4;
    *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) & 0xf0;
  }
  return;
}


