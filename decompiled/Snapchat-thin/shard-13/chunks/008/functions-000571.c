/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae0bb30; end: 10ae0bb87;  */

long FUN_10ae0bb30(long param_1)

{
  func_0x00010ae0d260();
  func_0x00010ae0d368();
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10ae0b440();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10ae0b5f8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10ae0bb88; end: 10ae0bb8b;  */

long FUN_10ae0bb88(long param_1)

{
  func_0x00010ae0d260();
  func_0x00010ae0d368();
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10ae0b440();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10ae0b5f8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10ae0bb8c; end: 10ae0bb9f;  */

void FUN_10ae0bb8c(void)

{
  FUN_10ae0bb30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0bba0; end: 10ae0bbab;  */

undefined ** FUN_10ae0bba0(void)

{
  return &PTR_DAT_110c78720;
}



/* Entry: 10ae0bbac; end: 10ae0bc1f;  */

void FUN_10ae0bbac(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10ae0b48c(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10ae0b650(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
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



/* Entry: 10ae0bc20; end: 10ae0bed7;  */

long * FUN_10ae0bc20(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  int iVar6;
  long unaff_x22;
  int iVar7;
  
  plVar2 = param_1;
  plVar3 = param_2;
  func_0x00010ae0d2e4(param_1[3]);
  if ((long)plVar3 < 0) {
    plVar3 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10ae0bc60;
  }
  else if ((int)plVar3 != 0) {
LAB_10ae0bc60:
    func_0x00010ae0d268();
    plVar3 = (long *)0x1;
    plVar2 = param_3;
    func_0x00010ae0d420();
    param_2 = plVar2;
  }
  func_0x00010ae0d2e4(param_1[4]);
  if ((long)plVar3 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10ae0bcc4;
  }
  else if ((int)plVar3 == 0) goto LAB_10ae0bcc4;
  func_0x00010ae0d268();
  plVar2 = param_3;
  func_0x00010ae0d420(param_3,2);
  param_2 = plVar2;
LAB_10ae0bcc4:
  uVar4 = param_1[5] & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    plVar2 = param_3;
    func_0x00010ae0d420(param_3,3);
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if ((int)param_1[8] != 0) {
    func_0x00010ae0d350();
    plVar3 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x00010ae0d344();
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if (*(int *)((long)param_1 + 0x44) != 0) {
    func_0x00010ae0d350();
    plVar2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar3);
    func_0x00010ae0d344();
    param_2 = plVar2;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    uVar4 = (ulong)*(uint *)(param_1[6] + 0x18);
    plVar2 = (long *)0x6;
    func_0x00010ae0d31c();
    param_2 = plVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    uVar4 = (ulong)*(uint *)(param_1[7] + 0x2c);
    plVar2 = (long *)0x7;
    func_0x00010ae0d31c();
    param_2 = plVar2;
  }
  if ((int)param_1[9] != 0) {
    func_0x00010ae0d350();
    param_2 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar2);
    func_0x00010ae0d344();
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010ae0d2f0();
    if ((long)uVar4 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      uVar4 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar5 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar5,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10ae0bed8; end: 10ae0c023;  */

void FUN_10ae0bed8(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae0d324();
  puVar3 = (ulong *)param_1[1];
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x00010ae0d2b8(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010ae0d2d0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010ae0d2b8(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae0d2d0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010ae0d2b8(*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae0d2d0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010ae0cfe4();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_10ae0b5b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x00010ae0d058();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10ae0b820();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x21 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010ae0d3d8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10ae0c024; end: 10ae0c04f;  */

long FUN_10ae0c024(long param_1)

{
  func_0x00010ae0d260();
  FUN_10ae0cd08(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae0c050; end: 10ae0c053;  */

long FUN_10ae0c050(long param_1)

{
  func_0x00010ae0d260();
  FUN_10ae0cd08(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae0c054; end: 10ae0c067;  */

void FUN_10ae0c054(void)

{
  FUN_10ae0c024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0c068; end: 10ae0c073;  */

undefined ** FUN_10ae0c068(void)

{
  return &PTR_DAT_110c78760;
}



/* Entry: 10ae0c074; end: 10ae0c0a3;  */

void FUN_10ae0c074(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0d270();
  FUN_10ae0cfbc();
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



/* Entry: 10ae0c0a4; end: 10ae0c10b;  */

long * FUN_10ae0c0a4(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x00010ae0d178();
  while (unaff_w22 != unaff_w21) {
    func_0x00010ae0d1a8();
    param_3 = (ulong)*(uint *)(param_2 + 0x24);
    func_0x00010ae0d2a4();
    func_0x00010ae0d49c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0d2f0();
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



/* Entry: 10ae0c10c; end: 10ae0c15b;  */

void FUN_10ae0c10c(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  FUN_10ae0d0e4();
  while (unaff_x22 != 0) {
    FUN_10ae0c15c(*unaff_x21);
    func_0x00010ae0d40c();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae0d490();
  }
  func_0x00010ae0d400();
  return;
}



/* Entry: 10ae0c15c; end: 10ae0c177;  */

long FUN_10ae0c15c(long param_1)

{
  long extraout_x8;
  
  FUN_10ae0ba1c();
  func_0x00010ae0d218();
  return param_1 + extraout_x8;
}



/* Entry: 10ae0c178; end: 10ae0c1a7;  */

void FUN_10ae0c178(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae0d1f8();
  FUN_10ae0c1a8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0d1d0();
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



/* Entry: 10ae0c1a8; end: 10ae0c1b7;  */

void FUN_10ae0c1a8(long *param_1,long param_2)

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



/* Entry: 10ae0c1b8; end: 10ae0c1e3;  */

long FUN_10ae0c1b8(long param_1)

{
  func_0x00010ae0d260();
  FUN_10ae0cd38(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae0c1e4; end: 10ae0c1e7;  */

long FUN_10ae0c1e4(long param_1)

{
  func_0x00010ae0d260();
  FUN_10ae0cd38(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae0c1e8; end: 10ae0c1fb;  */

void FUN_10ae0c1e8(void)

{
  FUN_10ae0c1b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0c1fc; end: 10ae0c207;  */

undefined ** FUN_10ae0c1fc(void)

{
  return &PTR_DAT_110c787a8;
}



/* Entry: 10ae0c208; end: 10ae0c237;  */

void FUN_10ae0c208(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0d270();
  func_0x00010ae0cfd0();
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



/* Entry: 10ae0c238; end: 10ae0c29f;  */

long * FUN_10ae0c238(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x00010ae0d178();
  while (unaff_w22 != unaff_w21) {
    func_0x00010ae0d1a8();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x00010ae0d2a4();
    func_0x00010ae0d49c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0d2f0();
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



/* Entry: 10ae0c2a0; end: 10ae0c2eb;  */

void FUN_10ae0c2a0(void)

{
  long unaff_x19;
  long unaff_x22;
  
  FUN_10ae0d0e4();
  while (unaff_x22 != 0) {
    func_0x00010ae0d444();
    func_0x00010ae0d40c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae0d490();
  }
  func_0x00010ae0d400();
  return;
}



/* Entry: 10ae0c2ec; end: 10ae0c307;  */

long FUN_10ae0c2ec(long param_1)

{
  long extraout_x8;
  
  func_0x00010ae0bdcc();
  func_0x00010ae0d218();
  return param_1 + extraout_x8;
}



/* Entry: 10ae0c308; end: 10ae0c337;  */

void FUN_10ae0c308(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae0d1f8();
  FUN_10ae0c338();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0d1d0();
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



/* Entry: 10ae0c338; end: 10ae0c347;  */

void FUN_10ae0c338(long *param_1,long param_2)

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



/* Entry: 10ae0c348; end: 10ae0c373;  */

long FUN_10ae0c348(long param_1)

{
  func_0x00010ae0d260();
  FUN_10ae0cd38(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae0c374; end: 10ae0c377;  */

long FUN_10ae0c374(long param_1)

{
  func_0x00010ae0d260();
  FUN_10ae0cd38(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae0c378; end: 10ae0c38b;  */

void FUN_10ae0c378(void)

{
  FUN_10ae0c348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0c38c; end: 10ae0c397;  */

undefined ** FUN_10ae0c38c(void)

{
  return &PTR_DAT_110c787f0;
}



/* Entry: 10ae0c398; end: 10ae0c3c7;  */

void FUN_10ae0c398(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0d270();
  func_0x00010ae0cfd0();
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



/* Entry: 10ae0c3c8; end: 10ae0c42f;  */

long * FUN_10ae0c3c8(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x00010ae0d178();
  while (unaff_w22 != unaff_w21) {
    func_0x00010ae0d1a8();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x00010ae0d2a4();
    func_0x00010ae0d49c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0d2f0();
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



/* Entry: 10ae0c430; end: 10ae0c47b;  */

void FUN_10ae0c430(void)

{
  long unaff_x19;
  long unaff_x22;
  
  FUN_10ae0d0e4();
  while (unaff_x22 != 0) {
    func_0x00010ae0d444();
    func_0x00010ae0d40c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae0d490();
  }
  func_0x00010ae0d400();
  return;
}



/* Entry: 10ae0c47c; end: 10ae0c4ab;  */

void FUN_10ae0c47c(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae0d1f8();
  FUN_10ae0c338();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0d1d0();
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



/* Entry: 10ae0c4ac; end: 10ae0c4cf;  */

undefined8 FUN_10ae0c4ac(undefined8 param_1)

{
  func_0x00010ae0d260();
  return param_1;
}



/* Entry: 10ae0c4d0; end: 10ae0c4d3;  */

undefined8 FUN_10ae0c4d0(undefined8 param_1)

{
  func_0x00010ae0d260();
  return param_1;
}



/* Entry: 10ae0c4d4; end: 10ae0c4e7;  */

void FUN_10ae0c4d4(void)

{
  FUN_10ae0c4ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0c4e8; end: 10ae0c56f;  */

undefined ** FUN_10ae0c4e8(void)

{
  return &PTR_DAT_110c78838;
}



/* Entry: 10ae0c570; end: 10ae0c59b;  */

long FUN_10ae0c570(long param_1)

{
  func_0x00010ae0d260();
  FUN_10ae0cd08(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae0c59c; end: 10ae0c59f;  */

long FUN_10ae0c59c(long param_1)

{
  func_0x00010ae0d260();
  FUN_10ae0cd08(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae0c5a0; end: 10ae0c5b3;  */

void FUN_10ae0c5a0(void)

{
  FUN_10ae0c570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0c5b4; end: 10ae0c5bf;  */

undefined ** FUN_10ae0c5b4(void)

{
  return &PTR_DAT_110c78880;
}



/* Entry: 10ae0c5c0; end: 10ae0c5ef;  */

void FUN_10ae0c5c0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0d270();
  FUN_10ae0cfbc();
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



/* Entry: 10ae0c5f0; end: 10ae0c657;  */

long * FUN_10ae0c5f0(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x00010ae0d178();
  while (unaff_w22 != unaff_w21) {
    func_0x00010ae0d1a8();
    param_3 = (ulong)*(uint *)(param_2 + 0x24);
    func_0x00010ae0d2a4();
    func_0x00010ae0d49c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0d2f0();
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



/* Entry: 10ae0c658; end: 10ae0c6a7;  */

void FUN_10ae0c658(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  FUN_10ae0d0e4();
  while (unaff_x22 != 0) {
    FUN_10ae0c15c(*unaff_x21);
    func_0x00010ae0d40c();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae0d490();
  }
  func_0x00010ae0d400();
  return;
}



/* Entry: 10ae0c6a8; end: 10ae0c6d7;  */

void FUN_10ae0c6a8(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae0d1f8();
  FUN_10ae0c1a8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0d1d0();
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



/* Entry: 10ae0c6d8; end: 10ae0c6fb;  */

undefined8 FUN_10ae0c6d8(undefined8 param_1)

{
  func_0x00010ae0d260();
  return param_1;
}



/* Entry: 10ae0c6fc; end: 10ae0c6ff;  */

undefined8 FUN_10ae0c6fc(undefined8 param_1)

{
  func_0x00010ae0d260();
  return param_1;
}



/* Entry: 10ae0c700; end: 10ae0c713;  */

void FUN_10ae0c700(void)

{
  FUN_10ae0c6d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0c714; end: 10ae0c79b;  */

undefined ** FUN_10ae0c714(void)

{
  return &PTR_DAT_110c788c8;
}



/* Entry: 10ae0c79c; end: 10ae0c7c7;  */

undefined8 FUN_10ae0c79c(undefined8 param_1)

{
  func_0x00010ae0d260();
  FUN_10ae0c7c8(param_1);
  return param_1;
}



/* Entry: 10ae0c7c8; end: 10ae0c7eb;  */

/* WARNING: Possible PIC construction at 0x00010ae0c7d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae0c7dc) */

void FUN_10ae0c7c8(ulong *param_1)

{
  ulong uVar1;
  
  func_0x00010ae0d270();
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



/* Entry: 10ae0c7ec; end: 10ae0c7ef;  */

undefined8 FUN_10ae0c7ec(undefined8 param_1)

{
  func_0x00010ae0d260();
  FUN_10ae0c7c8(param_1);
  return param_1;
}



/* Entry: 10ae0c7f0; end: 10ae0c803;  */

void FUN_10ae0c7f0(void)

{
  FUN_10ae0c79c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0c804; end: 10ae0c80f;  */

undefined ** FUN_10ae0c804(void)

{
  return &PTR_DAT_110c78910;
}



/* Entry: 10ae0c810; end: 10ae0c843;  */

void FUN_10ae0c810(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0d20c();
  func_0x00010ae0d428();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 10ae0c844; end: 10ae0c92f;  */

long * FUN_10ae0c844(long *param_1,long param_2,long *param_3,long *param_4)

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
  
  func_0x00010ae0d108();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10ae0c874;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10ae0c874:
      param_4 = (long *)&UNK_10f6c3aff;
      func_0x00010ae0d268();
      func_0x00010ae0d164();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010ae0d2e4(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae0c8c0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10ae0c8c0;
  param_4 = (long *)&UNK_10f6c3b2c;
  func_0x00010ae0d268();
  func_0x00010ae0d150();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10ae0c8c0:
  if (*(int *)(unaff_x21 + 0x20) != 0) {
    func_0x000107c282ac();
    param_1 = unaff_x19;
    param_3 = unaff_x20;
    unaff_x20 = unaff_x19;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x21 + 0x24) != 0) {
    func_0x00010ae0d35c();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x00010ae0d438();
    unaff_x20 = plVar2;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010ae0d2f0();
    if ((long)param_3 < 0) {
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    func_0x00010ae0d3cc();
    if (*plVar2 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*plVar2 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        param_3 = (long *)(ulong)(uint)(iVar3 - iVar4);
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
  return unaff_x20;
}



/* Entry: 10ae0c930; end: 10ae0ca53;  */

void FUN_10ae0c930(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x19;
  
  func_0x00010ae0d194();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  func_0x00010ae0d2c4(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae0d338();
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    func_0x00010ae0d394(0xfffffff7);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae0d490();
  }
  func_0x00010ae0d400();
  return;
}



/* Entry: 10ae0ca54; end: 10ae0ca7f;  */

undefined8 FUN_10ae0ca54(undefined8 param_1)

{
  func_0x00010ae0d260();
  FUN_10ae0ca80(param_1);
  return param_1;
}



/* Entry: 10ae0ca80; end: 10ae0caa7;  */

long * FUN_10ae0ca80(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10ae0caa8; end: 10ae0caab;  */

undefined8 FUN_10ae0caa8(undefined8 param_1)

{
  func_0x00010ae0d260();
  FUN_10ae0ca80(param_1);
  return param_1;
}



/* Entry: 10ae0caac; end: 10ae0cabf;  */

void FUN_10ae0caac(void)

{
  FUN_10ae0ca54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0cac0; end: 10ae0cacb;  */

undefined ** FUN_10ae0cac0(void)

{
  return &PTR_DAT_110c78958;
}



/* Entry: 10ae0cacc; end: 10ae0cb03;  */

void FUN_10ae0cacc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0d270();
  func_0x00010ae0cfd0();
  func_0x000107c3025c(unaff_x19 + 0x28);
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



/* Entry: 10ae0cb04; end: 10ae0cbd3;  */

long * FUN_10ae0cb04(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar6;
  long *plVar7;
  int iVar8;
  
  func_0x00010ae0d324();
  lVar4 = param_1[3];
  puVar2 = (ulong *)(param_1 + 2);
  plVar7 = (long *)0x0;
  while (iVar6 = (int)plVar7, (int)lVar4 != iVar6) {
    uVar5 = *puVar2;
    puVar3 = puVar2;
    if ((uVar5 & 1) != 0) {
      puVar3 = (ulong *)(uVar5 + (long)iVar6 * 8 + 7);
    }
    param_2 = *puVar3;
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_1 = (long *)0x1;
    func_0x00010ae0d31c();
    param_4 = unaff_x20;
    unaff_x20 = param_1;
    plVar7 = (long *)(ulong)(iVar6 + 1);
  }
  func_0x00010ae0d2e4(*(undefined8 *)(unaff_x21 + 0x28));
  if ((long)param_2 < 0) {
    if (plVar7[1] == 0) goto LAB_10ae0cba0;
    plVar7 = (long *)*plVar7;
  }
  else if ((int)param_2 == 0) goto LAB_10ae0cba0;
  param_4 = (long *)&UNK_10f6c3b55;
  func_0x00010ae0d268();
  func_0x00010ae0d150();
  param_1 = plVar7;
  unaff_x20 = plVar7;
LAB_10ae0cba0:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae0d2f0();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae0d3cc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar8 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar6 = (int)param_3;
      param_3 = (ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar8);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar6);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10ae0cbd4; end: 10ae0cc3f;  */

long FUN_10ae0cbd4(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  FUN_10ae0d0e4();
  while (unaff_x22 != 0) {
    func_0x00010ae0d444();
    func_0x00010ae0d40c();
  }
  func_0x00010ae0d2c4(*(undefined8 *)(unaff_x19 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae0d338();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae0d490();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10ae0cc40; end: 10ae0cc97;  */

void FUN_10ae0cc40(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae0d1f8();
  FUN_10ae0c338();
  func_0x00010ae0d2b8(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0d2d0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0d1d0();
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



/* Entry: 10ae0cc98; end: 10ae0cd07;  */

void FUN_10ae0cc98(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010ae0d46c();
  }
  *puVar1 = &PTR_FUN_110c78188;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10ae0cd08; end: 10ae0cd37;  */

long * FUN_10ae0cd08(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10ae0cd38; end: 10ae0cd67;  */

long * FUN_10ae0cd38(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10ae0cd68; end: 10ae0cfbb;  */

void FUN_10ae0cd68(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010ae0d46c();
  }
  *puVar1 = &PTR_FUN_110c78188;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10ae0cfbc; end: 10ae0cfe3;  */

void FUN_10ae0cfbc(ulong *param_1)

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



/* Entry: 10ae0cfe4; end: 10ae0d0e3;  */

undefined8 * FUN_10ae0cfe4(undefined8 *param_1,long param_2)

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
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110c78228;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010ae0d454();
  }
  param_2 = param_2 + 0x10;
  func_0x000107c2809c(param_2,param_1);
  puVar1[2] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  return puVar1;
}



/* Entry: 10ae0d0e4; end: 10ae0d4d3;  */

void FUN_10ae0d0e4(void)

{
  return;
}



/* Entry: 10ae0d4d4; end: 10ae0d4f7;  */

undefined8 FUN_10ae0d4d4(undefined8 param_1)

{
  func_0x00010ae105bc();
  return param_1;
}



/* Entry: 10ae0d4f8; end: 10ae0d4fb;  */

undefined8 FUN_10ae0d4f8(undefined8 param_1)

{
  func_0x00010ae105bc();
  return param_1;
}



/* Entry: 10ae0d4fc; end: 10ae0d50f;  */

void FUN_10ae0d4fc(void)

{
  FUN_10ae0d4d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0d510; end: 10ae0d52f;  */

undefined ** FUN_10ae0d510(void)

{
  return &PTR_DAT_110c78f00;
}



/* Entry: 10ae0d530; end: 10ae0d5bf;  */

long * FUN_10ae0d530(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010ae104ec();
  plVar2 = param_1;
  if ((int)param_1[2] != 0) {
    func_0x00010ae104cc();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010ae10564();
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010ae104cc();
    param_4 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010ae10564();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae10658();
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



/* Entry: 10ae0d5c0; end: 10ae0d633;  */

long FUN_10ae0d5c0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + 1;
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



/* Entry: 10ae0d634; end: 10ae0d65f;  */

long FUN_10ae0d634(long param_1)

{
  func_0x00010ae105bc();
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae0d660; end: 10ae0d663;  */

long FUN_10ae0d660(long param_1)

{
  func_0x00010ae105bc();
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae0d664; end: 10ae0d677;  */

void FUN_10ae0d664(void)

{
  FUN_10ae0d634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0d678; end: 10ae0d69b;  */

undefined ** FUN_10ae0d678(void)

{
  return &PTR_DAT_110c78f38;
}



/* Entry: 10ae0d69c; end: 10ae0d77b;  */

byte * FUN_10ae0d69c(byte *param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  long extraout_x8;
  byte *unaff_x19;
  long unaff_x20;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  func_0x00010ae104ec();
  if (*(int *)(param_1 + 0x24) != 0) {
    param_1 = unaff_x19;
    func_0x000107c282e4();
    param_3 = param_4;
    param_4 = param_1;
  }
  uVar5 = *(uint *)(unaff_x20 + 0x20);
  if (0 < (int)uVar5) {
    func_0x00010ae104cc();
    pbVar3 = param_1 + 2;
    *param_1 = 0x12;
    for (; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
      pbVar3[-1] = (byte)uVar5 | 0x80;
      pbVar3 = pbVar3 + 1;
    }
    pbVar3[-1] = (byte)uVar5;
    piVar6 = *(int **)(unaff_x20 + 0x18);
    piVar1 = piVar6 + *(int *)(unaff_x20 + 0x10);
    do {
      func_0x00010ae104cc();
      uVar4 = (ulong)*piVar6;
      pbVar3 = param_1;
      while( true ) {
        param_4 = pbVar3 + 1;
        if (uVar4 < 0x80) break;
        *pbVar3 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        pbVar3 = param_4;
      }
      piVar6 = piVar6 + 1;
      *pbVar3 = (byte)uVar4;
    } while (piVar6 < piVar1);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae10658();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(byte **)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)param_3;
        uVar5 = iVar7 - iVar8;
        param_3 = (byte *)(ulong)uVar5;
        if (uVar5 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return param_4 + iVar7;
    }
    _memcpy(param_4,lVar2,(ulong)param_3 & 0xffffffff);
    return param_4 + (int)param_3;
  }
  return param_4;
}



/* Entry: 10ae0d77c; end: 10ae0d843;  */

void FUN_10ae0d77c(long param_1)

{
  int iVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1 + 0x10;
  func_0x00010b4d3e0c();
  iVar1 = (int)lVar3;
  *(int *)(param_1 + 0x20) = iVar1;
  if (lVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = ((int)LZCOUNT((long)iVar1) * -9 + 0x280U >> 6) + 1;
  }
  iVar2 = iVar2 + iVar1;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae10868();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x28) = iVar2;
  return;
}



/* Entry: 10ae0d844; end: 10ae0d877;  */

long FUN_10ae0d844(long param_1)

{
  func_0x00010ae105bc();
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae0d878; end: 10ae0d87b;  */

long FUN_10ae0d878(long param_1)

{
  func_0x00010ae105bc();
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae0d87c; end: 10ae0d88f;  */

void FUN_10ae0d87c(void)

{
  FUN_10ae0d844();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0d890; end: 10ae0d89b;  */

undefined ** FUN_10ae0d890(void)

{
  return &PTR_DAT_110c78f78;
}



/* Entry: 10ae0d89c; end: 10ae0d8d7;  */

void FUN_10ae0d89c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x28);
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



/* Entry: 10ae0d8d8; end: 10ae0da67;  */

long * FUN_10ae0d8d8(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar6;
  long unaff_x22;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  plVar7 = param_3;
  func_0x00010ae106b8();
  func_0x00010ae106f0(param_1[5]);
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10ae0d93c;
  }
  else if ((int)param_2 == 0) goto LAB_10ae0d93c;
  param_4 = (long *)&UNK_10f6c3b7f;
  func_0x00010ae10670();
  param_1 = param_3;
  func_0x00010ae10628(param_3,1);
  unaff_x20 = param_1;
LAB_10ae0d93c:
  lVar12 = 8;
  for (uVar11 = (ulong)(*(uint *)(unaff_x21 + 0x18) &
                       ((int)*(uint *)(unaff_x21 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
      uVar11 = uVar11 - 1) {
    uVar5 = *(ulong *)(unaff_x21 + 0x10);
    puVar3 = (ulong *)(unaff_x21 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar3 = (ulong *)(uVar5 + lVar12 + -1);
    }
    plVar7 = (long *)*puVar3;
    lVar4 = (long)*(char *)((long)plVar7 + 0x17);
    plVar10 = plVar7;
    if (lVar4 < 0) {
      lVar4 = plVar7[1];
      plVar10 = (long *)*plVar7;
    }
    func_0x00010ae10518(plVar10,lVar4);
    plVar10 = (long *)(long)*(char *)((long)plVar7 + 0x17);
    if ((((long)plVar10 < 0) && (plVar10 = (long *)plVar7[1], 0x7f < (long)plVar10)) ||
       ((*param_3 - (long)unaff_x20) + 0xe < (long)plVar10)) {
      param_1 = param_3;
      func_0x00010b4d5120(param_3,2);
      plVar10 = param_1;
    }
    else {
      *(undefined1 *)unaff_x20 = 0x12;
      *(char *)((long)unaff_x20 + 1) = (char)plVar10;
      plVar8 = plVar7;
      if (*(char *)((long)plVar7 + 0x17) < '\0') {
        plVar8 = (long *)*plVar7;
      }
      plVar2 = (long *)((long)unaff_x20 + 2);
      param_1 = plVar2;
      plVar7 = plVar10;
      _memcpy(plVar2,plVar8);
      unaff_x20 = param_4;
      plVar10 = (long *)((long)plVar2 + (long)plVar10);
    }
    lVar12 = lVar12 + 8;
    param_4 = unaff_x20;
    unaff_x20 = plVar10;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae10658();
  if ((long)plVar7 < 0) {
    plVar7 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010ae108a8();
  if ((long)(int)plVar7 <= *param_1 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)plVar7);
  }
  while( true ) {
    iVar9 = ((int)*param_1 - (int)param_4) + 0x10;
    iVar6 = (int)plVar7;
    plVar7 = (long *)(ulong)(uint)(iVar6 - iVar9);
    if (iVar6 - iVar9 == 0 || iVar6 < iVar9) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)param_4 + (long)iVar9);
    param_4 = param_1;
    func_0x000107c303e4(param_1,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar6);
}



/* Entry: 10ae0da68; end: 10ae0db07;  */

ulong FUN_10ae0da68(ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = (ulong)uVar2;
  lVar6 = 8;
  uVar3 = param_1;
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
  func_0x00010ae106c4(*(undefined8 *)(param_1 + 0x28));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010ae10734();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae10868();
    lVar6 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar6 = *(long *)(extraout_x9 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x30) = (int)uVar4;
  return uVar4;
}



/* Entry: 10ae0db08; end: 10ae0db5f;  */

void FUN_10ae0db08(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae104d8();
  func_0x00010598fce8();
  func_0x00010ae106ac(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae10548();
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



/* Entry: 10ae0db60; end: 10ae0dbb3;  */

void FUN_10ae0db60(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
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



/* Entry: 10ae0dbb4; end: 10ae0dbd7;  */

undefined8 FUN_10ae0dbb4(undefined8 param_1)

{
  func_0x00010ae105bc();
  return param_1;
}



/* Entry: 10ae0dbd8; end: 10ae0dbdb;  */

undefined8 FUN_10ae0dbd8(undefined8 param_1)

{
  func_0x00010ae105bc();
  return param_1;
}



/* Entry: 10ae0dbdc; end: 10ae0dbef;  */

void FUN_10ae0dbdc(void)

{
  FUN_10ae0dbb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0dbf0; end: 10ae0dc17;  */

undefined ** FUN_10ae0dbf0(void)

{
  return &PTR_DAT_110c78fc0;
}


