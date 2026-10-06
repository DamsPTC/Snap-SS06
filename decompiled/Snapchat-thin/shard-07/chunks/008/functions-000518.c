/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059984fc; end: 105998617;  */

void FUN_1059984fc(long param_1)

{
  ulong *puVar1;
  
  func_0x0001059983f8();
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



/* Entry: 105998618; end: 10599861b;  */

void FUN_105998618(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00010599bb44();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_1059986fc;
  func_0x00010599c088();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      func_0x0001059983f8();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (unaff_w24 == 3) {
      func_0x00010599bc74();
      func_0x0001059983c8();
      goto LAB_1059986fc;
    }
    func_0x00010599be64();
    func_0x00010599b674();
  }
  else if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x00010599bc74();
      func_0x00010599c0a0();
      FUN_1059981d4();
      goto LAB_1059986fc;
    }
    func_0x00010599be64();
    func_0x00010599b618();
  }
  else {
    if (iVar1 != 1) goto LAB_1059986fc;
    if (unaff_w24 == 1) {
      func_0x00010599bc74();
      func_0x00010599c114();
      FUN_105998040();
      goto LAB_1059986fc;
    }
    func_0x00010599be64();
    FUN_10599b5bc();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_1059986fc:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bba4();
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



/* Entry: 10599861c; end: 105998717;  */

void FUN_10599861c(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00010599bb44();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_1059986fc;
  func_0x00010599c088();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      func_0x0001059983f8();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (unaff_w24 == 3) {
      func_0x00010599bc74();
      func_0x0001059983c8();
      goto LAB_1059986fc;
    }
    func_0x00010599be64();
    func_0x00010599b674();
  }
  else if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x00010599bc74();
      func_0x00010599c0a0();
      FUN_1059981d4();
      goto LAB_1059986fc;
    }
    func_0x00010599be64();
    func_0x00010599b618();
  }
  else {
    if (iVar1 != 1) goto LAB_1059986fc;
    if (unaff_w24 == 1) {
      func_0x00010599bc74();
      func_0x00010599c114();
      FUN_105998040();
      goto LAB_1059986fc;
    }
    func_0x00010599be64();
    FUN_10599b5bc();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_1059986fc:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bba4();
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



/* Entry: 105998718; end: 105998793;  */

void FUN_105998718(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00010599bed0();
  if (extraout_w8 == 3) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_105998770;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1059984a4();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_105998770;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_105998770;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_105997e50();
    }
  }
  __ZdlPv();
LAB_105998770:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 105998794; end: 1059987c7;  */

long FUN_105998794(long param_1)

{
  func_0x00010599bd80();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_105998718(param_1);
  }
  return param_1;
}



/* Entry: 1059987c8; end: 1059987cb;  */

long FUN_1059987c8(long param_1)

{
  func_0x00010599bd80();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_105998718(param_1);
  }
  return param_1;
}



/* Entry: 1059987cc; end: 1059987df;  */

void FUN_1059987cc(void)

{
  FUN_105998794();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059987e0; end: 1059987eb;  */

undefined ** FUN_1059987e0(void)

{
  return &PTR_DAT_1108c8480;
}



/* Entry: 1059987ec; end: 1059988a3;  */

long * FUN_1059987ec(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010599bbc4();
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 == 3) {
    uVar1 = *(uint *)(*(long *)(unaff_x20 + 0x10) + 0x18);
    param_4 = (long *)0x3;
  }
  else {
    if (iVar3 == 2) {
      func_0x00010599bcfc();
      param_4 = (long *)0x10;
      func_0x0001001a59d0(0x10,param_1);
      func_0x00010599bfc4();
      goto LAB_105998870;
    }
    if (iVar3 != 1) goto LAB_105998870;
    uVar1 = *(uint *)(*(long *)(unaff_x20 + 0x10) + 0x10);
    param_4 = (long *)0x1;
  }
  param_3 = (ulong)uVar1;
  func_0x00010599bd60();
LAB_105998870:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010599bdb4();
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



/* Entry: 1059988a4; end: 105998927;  */

void FUN_1059988a4(void)

{
  int iVar1;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010599bed0();
  if (extraout_w8 == 3) {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x10);
    func_0x000105998598();
LAB_1059988ec:
    func_0x00010599bb0c();
    iVar1 = iVar1 + extraout_w8_01;
  }
  else {
    if (extraout_w8 != 2) {
      if (extraout_w8 != 1) {
        iVar1 = 0;
        goto LAB_105998900;
      }
      iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x10);
      func_0x000105997ed8();
      goto LAB_1059988ec;
    }
    func_0x00010599c0e4((long)*(int *)(unaff_x19 + 0x10));
    iVar1 = extraout_w8_00;
  }
  iVar1 = iVar1 + 1;
LAB_105998900:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010599c1b4();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 105998928; end: 10599892b;  */

void FUN_105998928(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00010599bb44();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_105995a0c;
  func_0x00010599c088();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_105998718();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (unaff_w24 == 3) {
      func_0x00010599bc74();
      FUN_10599861c();
      goto LAB_105995a0c;
    }
    func_0x00010599be64();
    FUN_10599b714();
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)(unaff_x21 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
      goto LAB_105995a0c;
    }
    if (iVar1 != 1) goto LAB_105995a0c;
    if (unaff_w24 == 1) {
      func_0x00010599bc74();
      func_0x00010599c04c();
      FUN_105997e40();
      goto LAB_105995a0c;
    }
    func_0x00010599be64();
    FUN_10599b6c4();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_105995a0c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bba4();
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



/* Entry: 10599892c; end: 105998963;  */

long FUN_10599892c(long param_1)

{
  func_0x00010599bd80();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000681a0();
  }
  return param_1;
}



/* Entry: 105998964; end: 105998967;  */

long FUN_105998964(long param_1)

{
  func_0x00010599bd80();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000681a0();
  }
  return param_1;
}



/* Entry: 105998968; end: 10599897b;  */

void FUN_105998968(void)

{
  FUN_10599892c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10599897c; end: 105998987;  */

undefined ** FUN_10599897c(void)

{
  return &PTR_DAT_1108c84c8;
}



/* Entry: 105998988; end: 105998a13;  */

long * FUN_105998988(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x00010599bbc4();
  lVar4 = param_1[3];
  puVar1 = (ulong *)(param_1 + 2);
  for (iVar6 = 0; (int)lVar4 != iVar6; iVar6 = iVar6 + 1) {
    uVar5 = *puVar1;
    puVar2 = puVar1;
    if ((uVar5 & 1) != 0) {
      puVar2 = (ulong *)(uVar5 + (long)iVar6 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar2 + 0x18);
    func_0x00010599bcbc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bdb4();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar3 = iVar6 - iVar7;
        param_3 = (ulong)uVar3;
        if (uVar3 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 105998a14; end: 105998a77;  */

long FUN_105998a14(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010599befc();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_1059957ec();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010599c1b4();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 105998a78; end: 105998a8b;  */

void FUN_105998a78(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x00010599bddc();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_105998a78();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bd88();
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



/* Entry: 105998a8c; end: 105998b17;  */

void FUN_105998a8c(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00010599bed0();
  if (extraout_w8 == 4) {
    func_0x00010599c0d4();
    goto LAB_105998af4;
  }
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_105998af4;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1059996ac();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_105998af4;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_105998af4;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_105998e88();
    }
  }
  __ZdlPv();
LAB_105998af4:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 105998b18; end: 105998b43;  */

undefined8 FUN_105998b18(undefined8 param_1)

{
  func_0x00010599bd80();
  FUN_105998b44(param_1);
  return param_1;
}



/* Entry: 105998b44; end: 105998b57;  */

void FUN_105998b44(long param_1)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x00010599bed0();
  if (extraout_w8 == 4) {
    func_0x00010599c0d4();
    goto LAB_105998af4;
  }
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_105998af4;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1059996ac();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_105998af4;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_105998af4;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_105998e88();
    }
  }
  __ZdlPv();
LAB_105998af4:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 105998b58; end: 105998b6b;  */

void FUN_105998b58(void)

{
  FUN_105998b18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105998b6c; end: 105998b7f;  */

undefined8 FUN_105998b6c(undefined8 param_1)

{
  func_0x00010599bd80();
  func_0x00010599c0d4();
  return param_1;
}



/* Entry: 105998b80; end: 105998c97;  */

long * FUN_105998b80(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010599bbc4();
  iVar3 = *(int *)((long)param_1 + 0x1c);
  if (iVar3 == 4) {
    param_3 = *(ulong *)(unaff_x20 + 0x10) & 0xfffffffffffffffc;
    param_1 = unaff_x19;
    func_0x0001001a5a30();
  }
  else {
    if (iVar3 == 2) {
      func_0x00010599c238();
    }
    else {
      param_1 = param_4;
      if (iVar3 != 1) goto LAB_105998be4;
      param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x18);
      param_1 = (long *)0x1;
    }
    func_0x00010599bd60();
  }
LAB_105998be4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_1;
  }
  func_0x00010599bdb4();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_1 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_1) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_1 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_1 + (long)iVar3);
  }
  _memcpy(param_1,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_1 + (long)(int)param_3);
}



/* Entry: 105998c98; end: 105998ccf;  */

long FUN_105998c98(long param_1)

{
  long extraout_x8;
  
  FUN_105998f84();
  func_0x00010599bb0c();
  return param_1 + extraout_x8;
}



/* Entry: 105998cd0; end: 105998cd3;  */

void FUN_105998cd0(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00010599bb44();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x00010599c088();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        FUN_105998a8c();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    if (iVar1 == 4) {
      if (unaff_w24 != 4) {
        unaff_x21[2] = (ulong)&DAT_11383d918;
      }
      param_1 = unaff_x21 + 2;
      func_0x0001001a53d4();
    }
    else {
      if (iVar1 == 2) {
        if (unaff_w24 == 2) {
          param_1 = (ulong *)unaff_x21[2];
          func_0x00010599c0a0(*(undefined4 *)(unaff_x20 + 0x1c));
          FUN_105998d1c();
          goto LAB_105993e48;
        }
        func_0x00010599be64();
        func_0x00010599b7f4();
      }
      else {
        if (iVar1 != 1) goto LAB_105993e48;
        if (unaff_w24 == 1) {
          param_1 = (ulong *)unaff_x21[2];
          func_0x00010599c114(*(undefined4 *)(unaff_x20 + 0x1c));
          FUN_105998cd4();
          goto LAB_105993e48;
        }
        func_0x00010599be64();
        func_0x00010599b79c();
      }
      unaff_x21[2] = (ulong)param_1;
    }
  }
LAB_105993e48:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bba4();
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



/* Entry: 105998cd4; end: 105998d1b;  */

void FUN_105998cd4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010599bd40();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599c0cc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bd88();
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



/* Entry: 105998d1c; end: 105998e87;  */

void FUN_105998d1c(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00010599bb44();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x00010599c088();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        func_0x0001059995a4();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x00010599bc74();
        func_0x00010599c114();
        FUN_10599913c();
        goto LAB_105998e6c;
      }
      func_0x00010599be64();
      func_0x00010599b8a0();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x00010599bc74();
        func_0x00010599c04c();
        FUN_105999184();
        goto LAB_105998e6c;
      }
      func_0x00010599be64();
      FUN_10599b8f8();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x00010599bc74();
        func_0x00010599c04c();
        func_0x000105999248();
        goto LAB_105998e6c;
      }
      func_0x00010599be64();
      FUN_10599b948();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x00010599bc74();
        func_0x00010599930c();
        goto LAB_105998e6c;
      }
      func_0x00010599be64();
      FUN_10599b998();
      break;
    case 5:
      if (unaff_w24 == iVar1) {
        func_0x00010599bc74();
        func_0x000105999574();
        goto LAB_105998e6c;
      }
      func_0x00010599be64();
      FUN_10599b9f0();
      break;
    default:
      goto LAB_105998e6c;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_105998e6c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bba4();
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



/* Entry: 105998e88; end: 105998eaf;  */

undefined8 FUN_105998e88(undefined8 param_1)

{
  func_0x00010599bd80();
  func_0x00010599c0d4();
  return param_1;
}



/* Entry: 105998eb0; end: 105998ec3;  */

void FUN_105998eb0(void)

{
  FUN_105998e88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105998ec4; end: 105998ecf;  */

undefined ** FUN_105998ec4(void)

{
  return &PTR_DAT_1108c8558;
}



/* Entry: 105998ed0; end: 105998efb;  */

void FUN_105998ed0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010599be9c();
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



/* Entry: 105998efc; end: 105998f83;  */

long * FUN_105998efc(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  long *plVar3;
  int iVar4;
  
  plVar3 = param_3;
  func_0x00010599bf44();
  func_0x00010599be50(*(undefined8 *)(param_1 + 0x10));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_105998f4c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_105998f4c;
  func_0x00010599bdd4();
  func_0x00010599c020();
  unaff_x19 = unaff_x22;
LAB_105998f4c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x00010599bdb4();
  if ((long)plVar3 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x19 < (long)(int)plVar3) {
    while( true ) {
      iVar4 = ((int)*param_3 - (int)unaff_x19) + 0x10;
      iVar2 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar2 - iVar4);
      if (iVar2 - iVar4 == 0 || iVar2 < iVar4) break;
      func_0x00010b4d5738();
      lVar1 = (long)unaff_x19 + (long)iVar4;
      unaff_x19 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x19 + (long)iVar2);
  }
  _memcpy(unaff_x19,lVar1,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)plVar3);
}



/* Entry: 105998f84; end: 105998fdb;  */

void FUN_105998f84(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010599be08();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x0001001a5744();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010599c1b4();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 105998fdc; end: 105998fdf;  */

void FUN_105998fdc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010599bd40();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599c0cc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bd88();
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



/* Entry: 105998fe0; end: 105999007;  */

undefined8 FUN_105998fe0(undefined8 param_1)

{
  func_0x00010599bd80();
  func_0x00010599c0d4();
  return param_1;
}



/* Entry: 105999008; end: 10599900b;  */

undefined8 FUN_105999008(undefined8 param_1)

{
  func_0x00010599bd80();
  func_0x00010599c0d4();
  return param_1;
}



/* Entry: 10599900c; end: 10599901f;  */

void FUN_10599900c(void)

{
  FUN_105998fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105999020; end: 10599902b;  */

undefined ** FUN_105999020(void)

{
  return &PTR_DAT_1108c8598;
}



/* Entry: 10599902c; end: 105999057;  */

void FUN_10599902c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010599be9c();
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



/* Entry: 105999058; end: 1059990df;  */

long * FUN_105999058(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  long *plVar3;
  int iVar4;
  
  plVar3 = param_3;
  func_0x00010599bf44();
  func_0x00010599be50(*(undefined8 *)(param_1 + 0x10));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1059990a8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1059990a8;
  func_0x00010599bdd4();
  func_0x00010599c020();
  unaff_x19 = unaff_x22;
LAB_1059990a8:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x00010599bdb4();
  if ((long)plVar3 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x19 < (long)(int)plVar3) {
    while( true ) {
      iVar4 = ((int)*param_3 - (int)unaff_x19) + 0x10;
      iVar2 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar2 - iVar4);
      if (iVar2 - iVar4 == 0 || iVar2 < iVar4) break;
      func_0x00010b4d5738();
      lVar1 = (long)unaff_x19 + (long)iVar4;
      unaff_x19 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x19 + (long)iVar2);
  }
  _memcpy(unaff_x19,lVar1,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)plVar3);
}



/* Entry: 1059990e0; end: 105999137;  */

void FUN_1059990e0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010599be08();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x0001001a5744();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010599c1b4();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 105999138; end: 10599913b;  */

void FUN_105999138(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010599bd40();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599c0cc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bd88();
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



/* Entry: 10599913c; end: 105999183;  */

void FUN_10599913c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010599bd40();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010599be2c();
    }
    func_0x00010599c0cc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bd88();
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



/* Entry: 105999184; end: 10599918f;  */

void FUN_105999184(long param_1,ulong param_2)

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



/* Entry: 105999190; end: 1059991b3;  */

undefined8 FUN_105999190(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 1059991b4; end: 1059991b7;  */

undefined8 FUN_1059991b4(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 1059991b8; end: 1059991cb;  */

void FUN_1059991b8(void)

{
  FUN_105999190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059991cc; end: 105999253;  */

undefined ** FUN_1059991cc(void)

{
  return &PTR_DAT_1108c85f0;
}



/* Entry: 105999254; end: 105999277;  */

undefined8 FUN_105999254(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 105999278; end: 10599927b;  */

undefined8 FUN_105999278(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 10599927c; end: 10599928f;  */

void FUN_10599927c(void)

{
  FUN_105999254();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105999290; end: 10599932b;  */

undefined ** FUN_105999290(void)

{
  return &PTR_DAT_1108c8638;
}



/* Entry: 10599932c; end: 10599934f;  */

undefined8 FUN_10599932c(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 105999350; end: 105999353;  */

undefined8 FUN_105999350(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 105999354; end: 105999367;  */

void FUN_105999354(void)

{
  FUN_10599932c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105999368; end: 105999387;  */

undefined ** FUN_105999368(void)

{
  return &PTR_DAT_1108c8688;
}



/* Entry: 105999388; end: 1059993db;  */

long * FUN_105999388(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010599bbc4();
  if ((int)param_1[2] != 0) {
    func_0x00010599c194();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010599bdb4();
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



/* Entry: 1059993dc; end: 10599940f;  */

long FUN_1059993dc(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00010599c268();
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



/* Entry: 105999410; end: 10599943b;  */

long FUN_105999410(long param_1)

{
  func_0x00010599bd80();
  func_0x00010006805c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10599943c; end: 10599943f;  */

long FUN_10599943c(long param_1)

{
  func_0x00010599bd80();
  func_0x00010006805c(param_1 + 0x10);
  return param_1;
}



/* Entry: 105999440; end: 105999453;  */

void FUN_105999440(void)

{
  FUN_105999410();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105999454; end: 105999473;  */

undefined ** FUN_105999454(void)

{
  return &PTR_DAT_1108c86d8;
}



/* Entry: 105999474; end: 105999517;  */

long * FUN_105999474(undefined1 *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int *piVar4;
  int iVar5;
  int *unaff_x22;
  int iVar6;
  
  func_0x00010599bbc4();
  uVar1 = *(uint *)(param_1 + 0x20);
  piVar4 = (int *)(ulong)uVar1;
  if (0 < (int)uVar1) {
    func_0x00010599bcfc();
    *param_1 = 10;
    while (0x7f < uVar1) {
      func_0x00010599c200();
    }
    func_0x00010599c1ec();
    do {
      func_0x00010599bcfc();
      uVar3 = (ulong)*piVar4;
      param_4 = (long *)(param_1 + 1);
      while (0x7f < uVar3) {
        func_0x00010599c1cc();
        uVar3 = extraout_x8;
      }
      piVar4 = piVar4 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar3;
    } while (piVar4 < unaff_x22);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bdb4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
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
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 105999518; end: 10599956f;  */

void FUN_105999518(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  
  lVar2 = param_1 + 0x10;
  func_0x00010b4d3e0c();
  *(int *)(param_1 + 0x20) = (int)lVar2;
  func_0x00010599c0e4((long)(int)lVar2);
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = extraout_w8 + 1;
  }
  iVar1 = iVar1 + (int)lVar2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010599c1b4();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* Entry: 105999570; end: 105999573;  */

void FUN_105999570(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010599bddc();
  func_0x00010599c134();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bd88();
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



/* Entry: 105999574; end: 1059996ab;  */

void FUN_105999574(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010599bddc();
  func_0x00010599c134();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bd88();
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



/* Entry: 1059996ac; end: 1059996df;  */

long FUN_1059996ac(long param_1)

{
  func_0x00010599bd80();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x0001059995a4(param_1);
  }
  return param_1;
}



/* Entry: 1059996e0; end: 1059996f3;  */

void FUN_1059996e0(void)

{
  FUN_1059996ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059996f4; end: 1059996ff;  */

undefined ** FUN_1059996f4(void)

{
  return &PTR_DAT_1108c8730;
}



/* Entry: 105999700; end: 10599983f;  */

void FUN_105999700(long param_1)

{
  ulong *puVar1;
  
  func_0x0001059995a4();
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



/* Entry: 105999840; end: 105999843;  */

void FUN_105999840(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00010599bb44();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x00010599c088();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        func_0x0001059995a4();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x00010599bc74();
        func_0x00010599c114();
        FUN_10599913c();
        goto LAB_105998e6c;
      }
      func_0x00010599be64();
      func_0x00010599b8a0();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x00010599bc74();
        func_0x00010599c04c();
        FUN_105999184();
        goto LAB_105998e6c;
      }
      func_0x00010599be64();
      FUN_10599b8f8();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x00010599bc74();
        func_0x00010599c04c();
        func_0x000105999248();
        goto LAB_105998e6c;
      }
      func_0x00010599be64();
      FUN_10599b948();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x00010599bc74();
        func_0x00010599930c();
        goto LAB_105998e6c;
      }
      func_0x00010599be64();
      FUN_10599b998();
      break;
    case 5:
      if (unaff_w24 == iVar1) {
        func_0x00010599bc74();
        func_0x000105999574();
        goto LAB_105998e6c;
      }
      func_0x00010599be64();
      FUN_10599b9f0();
      break;
    default:
      goto LAB_105998e6c;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_105998e6c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bba4();
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



/* Entry: 105999844; end: 1059998c3;  */

void FUN_105999844(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1059998a0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_105999a6c();
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_1059998a0;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010599bdfc();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1059998a0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_105999b20();
    }
  }
  __ZdlPv();
LAB_1059998a0:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 1059998c4; end: 1059998f7;  */

long FUN_1059998c4(long param_1)

{
  func_0x00010599bd80();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_105999844(param_1);
  }
  return param_1;
}



/* Entry: 1059998f8; end: 1059998fb;  */

long FUN_1059998f8(long param_1)

{
  func_0x00010599bd80();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_105999844(param_1);
  }
  return param_1;
}



/* Entry: 1059998fc; end: 10599990f;  */

void FUN_1059998fc(void)

{
  FUN_1059998c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105999910; end: 105999923;  */

undefined8 FUN_105999910(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 105999924; end: 1059999bf;  */

long * FUN_105999924(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010599bbc4();
  if ((char)param_1[2] == '\x01') {
    func_0x00010599bcfc();
    func_0x0001001a59c8();
    func_0x00010599c170();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x24);
  plVar2 = (long *)(ulong)uVar1;
  if (uVar1 == 2) {
    lVar3 = 0x14;
  }
  else {
    if (uVar1 != 3) goto LAB_10599998c;
    lVar3 = 0x10;
  }
  param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + lVar3);
  func_0x00010599bd60();
  param_4 = plVar2;
LAB_10599998c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010599bdb4();
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



/* Entry: 1059999c0; end: 105999a3b;  */

long FUN_1059999c0(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  
  lVar2 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if (*(int *)(param_1 + 0x24) == 3) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x000105999af0();
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_105999a10;
    lVar1 = *(long *)(param_1 + 0x18);
    FUN_105999bcc();
  }
  func_0x00010599bb0c();
  lVar2 = lVar1 + lVar2 + extraout_x8 + 1;
LAB_105999a10:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010599c1b4();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 105999a3c; end: 105999a6b;  */

void FUN_105999a3c(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010599bb44();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010599bf38();
  }
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    *(undefined1 *)(unaff_x21 + 2) = 1;
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 == 0) goto LAB_105995b00;
  iVar2 = *(int *)((long)unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_105999844();
    }
    *(int *)((long)unaff_x21 + 0x24) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[3];
      func_0x00010599c04c(*(undefined4 *)(unaff_x20 + 0x24));
      func_0x000105999a60();
      goto LAB_105995b00;
    }
    FUN_10599ba98();
  }
  else {
    if (iVar1 != 2) goto LAB_105995b00;
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[3];
      func_0x00010599c0a0(*(undefined4 *)(unaff_x20 + 0x24));
      FUN_105999a3c();
      goto LAB_105995b00;
    }
    FUN_10599ba40();
  }
  unaff_x21[3] = (ulong)unaff_x22;
  param_1 = unaff_x22;
LAB_105995b00:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010599bba4();
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



/* Entry: 105999a6c; end: 105999a8f;  */

undefined8 FUN_105999a6c(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 105999a90; end: 105999aa3;  */

void FUN_105999a90(void)

{
  FUN_105999a6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105999aa4; end: 105999b1f;  */

undefined ** FUN_105999aa4(void)

{
  return &PTR_DAT_1108c87b8;
}



/* Entry: 105999b20; end: 105999b43;  */

undefined8 FUN_105999b20(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 105999b44; end: 105999b57;  */

void FUN_105999b44(void)

{
  FUN_105999b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105999b58; end: 105999b77;  */

undefined ** FUN_105999b58(void)

{
  return &PTR_DAT_1108c87f8;
}



/* Entry: 105999b78; end: 105999bcb;  */

long * FUN_105999b78(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010599bbc4();
  if ((int)param_1[2] != 0) {
    func_0x00010599c194();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010599bdb4();
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



/* Entry: 105999bcc; end: 105999bff;  */

long FUN_105999bcc(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00010599c268();
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



/* Entry: 105999c00; end: 105999c23;  */

undefined8 FUN_105999c00(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 105999c24; end: 105999c27;  */

undefined8 FUN_105999c24(undefined8 param_1)

{
  func_0x00010599bd80();
  return param_1;
}



/* Entry: 105999c28; end: 105999c3b;  */

void FUN_105999c28(void)

{
  FUN_105999c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105999c3c; end: 105999c47;  */

undefined ** FUN_105999c3c(void)

{
  return &PTR_DAT_1108c8840;
}



/* Entry: 105999c48; end: 105999caf;  */

long * FUN_105999c48(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010599bbc4();
  if ((int)param_1[2] != 0) {
    func_0x00010599bcfc();
    func_0x0001001a59c8();
    func_0x00010599bfc4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010599bdb4();
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



/* Entry: 105999cb0; end: 105999e4b;  */

long FUN_105999cb0(long param_1)

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



/* Entry: 105999e4c; end: 105999e7b;  */

long * FUN_105999e4c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001000681a0(param_1);
  }
  return param_1;
}



/* Entry: 105999e7c; end: 10599a7ff;  */

void FUN_105999e7c(long param_1)

{
  if (param_1 == 0) {
    func_0x00010599bdcc();
  }
  else {
    func_0x00010599bc9c();
  }
  func_0x00010599c040(&PTR_FUN_1108c6f08);
  return;
}



/* Entry: 10599a800; end: 10599aac7;  */

void FUN_10599a800(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010599bfac();
  if (param_1 == 0) {
    __Znwm(0x40);
  }
  else {
    func_0x00010b4d80e0();
  }
  func_0x00010599c014();
  func_0x00010599c008(&PTR_FUN_1108c7b88);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010599bb78();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  lVar2 = unaff_x21 + 0x18;
  func_0x00010599bfdc();
  *(long *)(unaff_x19 + 0x18) = lVar2;
  *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(unaff_x21 + 0x38);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010599c244();
    func_0x00010599a96c();
  }
  *(long *)(unaff_x19 + 0x20) = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x20;
    func_0x00010599aa38();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
  if (*(int *)(unaff_x19 + 0x38) == 2) {
    FUN_10599ab18();
  }
  else {
    if (*(int *)(unaff_x19 + 0x38) != 1) {
      return;
    }
    FUN_10599aac8();
  }
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 10599aac8; end: 10599ab17;  */

long FUN_10599aac8(long param_1)

{
  func_0x00010599bf44();
  if (param_1 == 0) {
    func_0x00010599bdcc();
  }
  else {
    func_0x00010599bc84();
  }
  func_0x00010599bd70(&PTR_FUN_1108c6f08);
  FUN_105994400();
  return param_1;
}



/* Entry: 10599ab18; end: 10599accf;  */

undefined8 * FUN_10599ab18(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x00010599bf44();
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0x90;
    __Znwm();
  }
  else {
    puVar2 = unaff_x21;
    func_0x00010b4d80e0();
  }
  puVar2[1] = unaff_x21;
  *puVar2 = &PTR_DAT_1108c7b38;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010599bb78();
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined8 *)((long)puVar2 + 0x1c) = 0;
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined4 *)((long)puVar2 + 0x24) = 0;
  puVar2[5] = unaff_x21;
  FUN_105995808(puVar2 + 3,unaff_x19 + 0x18);
  lVar3 = unaff_x19 + 0x30;
  func_0x0001002a0e60();
  puVar2[6] = lVar3;
  lVar3 = unaff_x19 + 0x38;
  func_0x0001002a0e60();
  puVar2[7] = lVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    func_0x00010599acd0();
  }
  puVar2[8] = puVar4;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    func_0x00010599ae74();
  }
  puVar2[9] = puVar4;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    func_0x00010599aed8();
  }
  puVar2[10] = puVar4;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    func_0x00010599af4c();
  }
  puVar2[0xb] = puVar4;
  if ((uVar1 >> 4 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    FUN_1059908dc();
  }
  puVar2[0xc] = puVar4;
  if ((uVar1 >> 5 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    FUN_1059908dc();
  }
  puVar2[0xd] = puVar4;
  if ((uVar1 >> 6 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    func_0x00010599aff0();
  }
  puVar2[0xe] = puVar4;
  if ((uVar1 >> 7 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    FUN_10599b07c();
  }
  puVar2[0xf] = puVar4;
  if ((uVar1 >> 8 & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    FUN_10599b0d4();
  }
  puVar2[0x10] = unaff_x21;
  puVar2[0x11] = *(undefined8 *)(unaff_x19 + 0x88);
  return puVar2;
}



/* Entry: 10599acd0; end: 10599b07b;  */

void FUN_10599acd0(long param_1)

{
  int extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010599bfac();
  if (param_1 == 0) {
    func_0x00010599bdac();
  }
  else {
    func_0x00010599bda0();
  }
  func_0x00010599c014();
  func_0x00010599c008(&PTR_FUN_1108c7818);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010599bb78();
  }
  func_0x00010599beec();
  if (extraout_w8 == 2) {
    func_0x00010599bf50();
    func_0x00010599b1e4();
  }
  else {
    if (extraout_w8 != 1) {
      return;
    }
    func_0x00010599bf50();
    func_0x00010599b144();
  }
  *(long *)(unaff_x19 + 0x10) = param_1;
  return;
}


