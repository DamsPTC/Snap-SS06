/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0049266c; end: 0049266f;  */

void FUN_0049266c(ulong *param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  
  func_0x004999f0();
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    func_0x00499e2c();
  }
  func_0x00499b10();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499d98();
  }
  func_0x00499c74(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499fa4();
  }
  func_0x0049a064();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0049a010();
      if (param_1 == (ulong *)0x0) {
        func_0x00499cac();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_0048ce68();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x00499cac();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_0048ce68();
      }
    }
  }
  func_0x004999c0();
  if ((extraout_x8_01 & 1) == 0) {
    return;
  }
  func_0x004999e0();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00492670; end: 0049269b;  */

undefined8 FUN_00492670(undefined8 param_1)

{
  func_0x00499bbc();
  FUN_0049269c(param_1);
  return param_1;
}



/* Entry: 0049269c; end: 004926f3;  */

void FUN_0049269c(void)

{
  long unaff_x19;
  
  func_0x00499e0c();
  func_0x00499ff0();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_0049413c();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_0049413c();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004926f4; end: 004926f7;  */

undefined8 FUN_004926f4(undefined8 param_1)

{
  func_0x00499bbc();
  FUN_0049269c(param_1);
  return param_1;
}



/* Entry: 004926f8; end: 0049270b;  */

void FUN_004926f8(void)

{
  FUN_00492670();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0049270c; end: 00492717;  */

undefined ** FUN_0049270c(void)

{
  return &PTR_DAT_009ea7e0;
}



/* Entry: 00492718; end: 00492747;  */

void FUN_00492718(long param_1)

{
  ulong *puVar1;
  
  FUN_004940c0();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00492748; end: 00492943;  */

/* WARNING: Type propagation algorithm not settling */

dword * FUN_00492748(dword *param_1,long param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  dword *pdVar3;
  long extraout_x8;
  dword *unaff_x20;
  long unaff_x21;
  int iVar4;
  dword *unaff_x22;
  int iVar5;
  
  func_0x00499a2c();
  if (param_2 < 0) {
    param_2 = *(long *)(unaff_x22 + 2);
    if (param_2 != 0) {
      pdVar3 = *(dword **)unaff_x22;
      goto LAB_00492778;
    }
  }
  else {
    pdVar3 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_00492778:
      param_4 = "snapchat.notification.InAppDisplay.title";
      func_0x00499c10();
      func_0x00499a54();
      param_1 = pdVar3;
      unaff_x20 = pdVar3;
    }
  }
  func_0x00499c8c(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 2) == 0) goto LAB_004927c8;
    unaff_x22 = *(dword **)unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_004927c8;
  param_4 = "snapchat.notification.InAppDisplay.body";
  func_0x00499c10();
  func_0x00499efc();
  func_0x00499a88();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_004927c8:
  uVar2 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x18);
    param_1 = (dword *)((long)&MACH_HEADER.magic + 3);
    func_0x00499a68();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x30) + 0x38);
    param_1 = &MACH_HEADER.cputype;
    func_0x00499a68();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    param_1 = (dword *)((long)&MACH_HEADER.cputype + 1);
    func_0x00499a68();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x40) + 0x18);
    param_1 = (dword *)((long)&MACH_HEADER.cputype + 2);
    func_0x00499a68();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00499bf0();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00499e38();
    if (*(long *)param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*(undefined8 *)param_1 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        param_3 = (ulong)(uint)(iVar4 - iVar5);
        if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
        func_0x0054f690();
        pcVar1 = (char *)((long)param_4 + (long)iVar5);
        param_4 = (char *)param_1;
        func_0x0054ed58(param_1,pcVar1);
      }
      func_0x0054f690();
      return (dword *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4);
    return (dword *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 00492944; end: 0049295f;  */

long FUN_00492944(long param_1)

{
  long extraout_x8;
  
  func_0x004941fc();
  func_0x00499948();
  return param_1 + extraout_x8;
}



/* Entry: 00492960; end: 00492963;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00492960(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004999f0();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    func_0x00499e2c();
  }
  func_0x00499b10();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499d98();
  }
  func_0x00499c74(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499fa4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0049a010();
      if (param_1 == (ulong *)0x0) {
        func_0x00499f84();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_00492964();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x00499cac();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_0048ce68();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x00499cac();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_0048ce68();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        func_0x00499f84();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_00492964();
      }
    }
  }
  func_0x004999c0();
  if ((extraout_x8_01 & 1) != 0) {
    func_0x004999e0();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00492964; end: 00492a27;  */

void FUN_00492964(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00499980();
  if ((unaff_x22 & 1) != 0) {
    func_0x00499d74();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_00492a0c;
  func_0x00499ec4();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_004940c0();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x00499ab0();
      func_0x00499edc();
      func_0x00494028();
      goto LAB_00492a0c;
    }
    func_0x00499ca0();
    func_0x00499020();
  }
  else {
    if (iVar1 != 1) goto LAB_00492a0c;
    if (unaff_w24 == 1) {
      func_0x00499ab0();
      func_0x00499f50();
      FUN_00493f14();
      goto LAB_00492a0c;
    }
    func_0x00499ca0();
    func_0x00498f80();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_00492a0c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004999e0();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00492a28; end: 00492a4b;  */

undefined8 FUN_00492a28(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00492a4c; end: 00492a5f;  */

void FUN_00492a4c(void)

{
  FUN_00492a28();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00492a60; end: 00492adb;  */

undefined ** FUN_00492a60(void)

{
  return &PTR_DAT_009ea828;
}



/* Entry: 00492adc; end: 00492b27;  */

void FUN_00492adc(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00499d0c();
  if (extraout_w8 == 1) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_0049397c();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 00492b28; end: 00492b5b;  */

long FUN_00492b28(long param_1)

{
  func_0x00499bbc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00492adc(param_1);
  }
  return param_1;
}



/* Entry: 00492b5c; end: 00492b5f;  */

long FUN_00492b5c(long param_1)

{
  func_0x00499bbc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00492adc(param_1);
  }
  return param_1;
}



/* Entry: 00492b60; end: 00492b73;  */

void FUN_00492b60(void)

{
  FUN_00492b28();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00492b74; end: 00492b83;  */

long FUN_00492b74(long param_1)

{
  func_0x00499bbc();
  func_0x00499da0();
  func_0x00499ff0();
  func_0x00532f74(param_1 + 0x28);
  func_0x00532f74(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_004942e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_00496920();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_00494b54();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00492b84; end: 00492c6b;  */

void FUN_00492b84(long param_1)

{
  ulong *puVar1;
  
  FUN_00492adc();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00492c6c; end: 00492ef7;  */

void FUN_00492c6c(ulong *param_1)

{
  int iVar1;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x00499980();
  if ((unaff_x22 & 1) != 0) {
    func_0x00499d74();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        func_0x00492cf8();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_00492adc();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x00499ca0();
        func_0x00498b80();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004999e0();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00492ef8; end: 00492fc3;  */

long FUN_00492ef8(long param_1)

{
  func_0x00499bbc();
  func_0x00532f74(param_1 + 0x30);
  func_0x00532f74(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_0049413c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00494eec();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_00495b24();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_0049659c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_00497700();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_00497a3c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_00496734();
  }
  __ZdlPv();
  FUN_00497c88(param_1 + 0x18);
  return param_1;
}



/* Entry: 00492fc4; end: 00492fd7;  */

void FUN_00492fc4(void)

{
  FUN_00492ef8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00492fd8; end: 00492fe3;  */

undefined ** FUN_00492fd8(void)

{
  return &PTR_DAT_009ea8c8;
}



/* Entry: 00492fe4; end: 0049319f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00492fe4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    FUN_00437de0(param_1 + 0x18);
  }
  FUN_00532fa8(param_1 + 0x30);
  FUN_00532fa8(param_1 + 0x38);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_00492718(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004930d4(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0049310c(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x0049313c(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_0048cb48(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_0048cb48(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x0049316c(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_004931a0(*(undefined8 *)(param_1 + 0x78));
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    FUN_004931b4(*(undefined8 *)(param_1 + 0x80));
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004931a0; end: 004931b3;  */

void FUN_004931a0(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004931b4; end: 004931f3;  */

void FUN_004931b4(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    FUN_00437de0(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004931f4; end: 0049346f;  */

/* WARNING: Type propagation algorithm not settling */

section * FUN_004931f4(section *param_1,long param_2,section *param_3)

{
  ulong *puVar1;
  uint uVar2;
  dword *pdVar3;
  section *psVar4;
  long lVar5;
  section *psVar6;
  undefined8 uVar7;
  ulong uVar8;
  long extraout_x8;
  long unaff_x20;
  section *unaff_x21;
  int iVar9;
  section *unaff_x22;
  int iVar10;
  
  psVar6 = param_3;
  func_0x00499de8();
  uVar7._0_4_ = param_1->offset;
  uVar7._4_4_ = param_1->align;
  func_0x00499c8c(uVar7);
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)((long)unaff_x22->sectname + 8) != 0) goto LAB_00493238;
  }
  else if ((int)param_2 != 0) {
LAB_00493238:
    func_0x00499c10();
    param_2 = 1;
    param_1 = param_3;
    func_0x00499b44();
    unaff_x21 = param_1;
  }
  func_0x00499c8c(*(undefined8 *)(unaff_x20 + 0x38));
  if (param_2 < 0) {
    if (*(long *)((long)unaff_x22->sectname + 8) == 0) goto LAB_00493290;
    unaff_x22 = *(section **)unaff_x22->sectname;
  }
  else if ((int)param_2 == 0) goto LAB_00493290;
  func_0x00499c10();
  func_0x00499efc();
  func_0x00499b44();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_00493290:
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    psVar6 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x18);
    param_1 = (section *)((long)&MACH_HEADER.magic + 3);
    func_0x00499a10();
    unaff_x21 = param_1;
  }
  iVar10 = *(int *)(unaff_x20 + 0x20);
  for (iVar9 = 0; iVar10 != iVar9; iVar9 = iVar9 + 1) {
    uVar8 = *(ulong *)(unaff_x20 + 0x18);
    puVar1 = (ulong *)(unaff_x20 + 0x18);
    if ((uVar8 & 1) != 0) {
      puVar1 = (ulong *)(uVar8 + (long)iVar9 * 8 + 7);
    }
    psVar6 = (section *)(ulong)*(uint *)(*puVar1 + 0x18);
    param_1 = (section *)&MACH_HEADER.cputype;
    func_0x00499a10();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    psVar6 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x48) + 0x14);
    param_1 = (section *)((long)&MACH_HEADER.cputype + 1);
    func_0x00499a10();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    psVar6 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x18);
    param_1 = (section *)((long)&MACH_HEADER.cputype + 2);
    func_0x00499a10();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    psVar6 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x18);
    param_1 = (section *)((long)&MACH_HEADER.cputype + 3);
    func_0x00499a10();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    psVar6 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x38);
    param_1 = (section *)&MACH_HEADER.cpusubtype;
    func_0x00499a10();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    psVar6 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x38);
    param_1 = (section *)((long)&MACH_HEADER.cpusubtype + 1);
    func_0x00499a10();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    psVar6 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x70) + 0x20);
    param_1 = (section *)((long)&MACH_HEADER.cpusubtype + 2);
    func_0x00499a10();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    psVar6 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x78) + 0x14);
    param_1 = (section *)((long)&MACH_HEADER.cpusubtype + 3);
    func_0x00499a10();
    unaff_x21 = param_1;
  }
  psVar4 = param_1;
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    func_0x00499fe4();
    psVar4 = (section *)&segment_command_00000020.nsects;
    func_0x00487cbc(0x60,param_1);
    func_0x00499fb4();
    unaff_x21 = psVar4;
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    func_0x00499fe4();
    unaff_x21 = &section_00000068;
    func_0x00487cbc(0x68,psVar4);
    func_0x00499e00();
  }
  if ((uVar2 >> 8 & 1) != 0) {
    psVar6 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x80) + 0x28);
    unaff_x21 = (section *)((long)&MACH_HEADER.filetype + 3);
    func_0x00499a10();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00499bf0();
  if ((long)psVar6 < 0) {
    lVar5 = *(long *)(extraout_x8 + 8);
    psVar6 = *(section **)(extraout_x8 + 0x10);
  }
  else {
    lVar5 = extraout_x8 + 8;
  }
  if ((long)(int)psVar6 <= *(long *)param_3->sectname - (long)unaff_x21) {
    _memcpy(unaff_x21,lVar5,(ulong)psVar6 & 0xffffffff);
    return (section *)((long)unaff_x21->sectname + (long)(int)psVar6);
  }
  while( true ) {
    iVar10 = ((int)*(undefined8 *)param_3->sectname - (int)unaff_x21) + 0x10;
    iVar9 = (int)psVar6;
    psVar6 = (section *)(ulong)(uint)(iVar9 - iVar10);
    if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
    func_0x0054f690();
    pdVar3 = (dword *)unaff_x21->sectname;
    unaff_x21 = param_3;
    func_0x0054ed58(param_3,(undefined1 *)((long)pdVar3 + (long)iVar10));
  }
  func_0x0054f690();
  return (section *)((long)unaff_x21->sectname + (long)iVar9);
}



/* Entry: 00493470; end: 004935f3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00493470(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  
  lVar3 = param_1;
  func_0x00499d38();
  while (unaff_x22 != 0) {
    lVar3 = *unaff_x21;
    func_0x00492c14();
    func_0x00499e94();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00499c80(*(undefined8 *)(param_1 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    func_0x00499bfc();
  }
  func_0x00499c80(*(undefined8 *)(param_1 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    func_0x00499bfc();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_00492944(*(undefined8 *)(param_1 + 0x40));
      func_0x00499bfc();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00494ff0(*(undefined8 *)(param_1 + 0x48));
      func_0x00499924();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00495bdc(*(undefined8 *)(param_1 + 0x50));
      func_0x00499924();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_004935f4(*(undefined8 *)(param_1 + 0x58));
      func_0x00499bfc();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_0048d6a8(*(undefined8 *)(param_1 + 0x60));
      func_0x00499bfc();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_0048d6a8(*(undefined8 *)(param_1 + 0x68));
      func_0x00499bfc();
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_004977fc(*(undefined8 *)(param_1 + 0x70));
      func_0x00499924();
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_00497aec(*(undefined8 *)(param_1 + 0x78));
      func_0x00499924();
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    FUN_0049681c(*(undefined8 *)(param_1 + 0x80));
    func_0x00499924();
  }
  iVar2 = unaff_w20 + (uint)*(byte *)(param_1 + 0x88) * 2;
  if (*(int *)(param_1 + 0x8c) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x8c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00499ff8();
    lVar3 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 004935f4; end: 0049360f;  */

long FUN_004935f4(long param_1)

{
  long extraout_x8;
  
  FUN_004966ac();
  func_0x00499948();
  return param_1 + extraout_x8;
}



/* Entry: 00493610; end: 00493623;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00493610(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00499980();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00499d74();
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_00493610();
  func_0x00499c74(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x00532e08();
  }
  func_0x00499c74(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x38);
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        func_0x00499f84();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        FUN_00492964();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00498cb0();
        *(ulong **)(unaff_x21 + 0x48) = puVar2;
      }
      else {
        FUN_00493624();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x50);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00498d14();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
      }
      else {
        func_0x00493684();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x58);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00498d88();
        *(ulong **)(unaff_x21 + 0x58) = puVar2;
      }
      else {
        func_0x00493750();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        func_0x00499cac();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        FUN_0048ce68();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        func_0x00499cac();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        FUN_0048ce68();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00498e2c();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        func_0x00493830();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_00498eb8();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_00493924();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x80);
    if (puVar2 == (ulong *)0x0) {
      FUN_00498f10();
      *(ulong **)(unaff_x21 + 0x80) = unaff_x22;
      puVar2 = unaff_x22;
    }
    else {
      FUN_00493944();
    }
  }
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x88) = 1;
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  func_0x004999c0();
  if ((extraout_x8_01 & 1) == 0) {
    return;
  }
  func_0x004999e0();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00493624; end: 00493683;  */

void FUN_00493624(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004999f0();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0049a070();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0049a0a0();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x004991e4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_00495048();
    }
  }
  func_0x00499c24();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004999e0();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00493684; end: 00493923;  */

void FUN_00493684(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00499980();
  if ((unaff_x22 & 1) != 0) {
    func_0x00499d74();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_00493734;
  func_0x00499ec4();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_00495aa8();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x00499ab0();
      func_0x00499e88();
      func_0x004959e4();
      goto LAB_00493734;
    }
    func_0x00499ca0();
    FUN_004993a8();
  }
  else {
    if (iVar1 != 1) goto LAB_00493734;
    if (unaff_w24 == 1) {
      func_0x00499ab0();
      func_0x00499e88();
      FUN_0049591c();
      goto LAB_00493734;
    }
    func_0x00499ca0();
    FUN_00499358();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_00493734:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004999e0();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00493924; end: 00493943;  */

void FUN_00493924(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00493944; end: 0049397b;  */

void FUN_00493944(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x00499c18();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_00496880();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bc4();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0049397c; end: 00493a27;  */

long FUN_0049397c(long param_1)

{
  func_0x00499bbc();
  func_0x00499da0();
  func_0x00499ff0();
  func_0x00532f74(param_1 + 0x28);
  func_0x00532f74(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_004942e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_00496920();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_00494b54();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00493a28; end: 00493a3b;  */

void FUN_00493a28(void)

{
  FUN_0049397c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00493a3c; end: 00493a47;  */

undefined ** FUN_00493a3c(void)

{
  return &PTR_DAT_009ea910;
}



/* Entry: 00493a48; end: 00493b87;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00493a48(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00499b04();
  func_0x00499f18();
  FUN_00532fa8(unaff_x19 + 5);
  FUN_00532fa8(unaff_x19 + 6);
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00493b04(unaff_x19[7]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00491810(unaff_x19[8]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_0048cb48(unaff_x19[9]);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_0048cb48(unaff_x19[10]);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_0048cb48(unaff_x19[0xb]);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_0048cb48(unaff_x19[0xc]);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x00493b44(unaff_x19[0xd]);
    }
  }
  func_0x00499d58();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00493b88; end: 00493d8f;  */

dword * FUN_00493b88(long param_1,long param_2,dword *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  dword *pdVar3;
  long lVar4;
  dword *pdVar5;
  long extraout_x8;
  long unaff_x20;
  dword *unaff_x21;
  int iVar6;
  dword *unaff_x22;
  int iVar7;
  
  pdVar5 = param_3;
  func_0x00499de8();
  func_0x00499c8c(*(undefined8 *)(param_1 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 2) != 0) goto LAB_00493bc8;
  }
  else if ((int)param_2 != 0) {
LAB_00493bc8:
    func_0x00499c10();
    param_2 = 1;
    unaff_x21 = param_3;
    func_0x00499b44();
  }
  func_0x00499c8c(*(undefined8 *)(unaff_x20 + 0x20));
  if (param_2 < 0) {
    param_2 = *(long *)(unaff_x22 + 2);
    if (param_2 != 0) {
      pdVar3 = *(dword **)unaff_x22;
      goto LAB_00493c08;
    }
  }
  else {
    pdVar3 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_00493c08:
      func_0x00499c10();
      func_0x00499efc();
      func_0x00499b44();
      unaff_x21 = pdVar3;
    }
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x38);
    pdVar5 = (dword *)(ulong)*(uint *)(param_2 + 0x14);
    unaff_x21 = (dword *)((long)&MACH_HEADER.magic + 3);
    func_0x00499a10();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x40);
    pdVar5 = (dword *)(ulong)*(uint *)(param_2 + 0x18);
    unaff_x21 = &MACH_HEADER.cputype;
    func_0x00499a10();
  }
  func_0x00499c8c(*(undefined8 *)(unaff_x20 + 0x28));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 2) != 0) goto LAB_00493c78;
  }
  else if ((int)param_2 != 0) {
LAB_00493c78:
    func_0x00499c10();
    param_2 = 5;
    unaff_x21 = param_3;
    func_0x00499b44();
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x48);
    pdVar5 = (dword *)(ulong)*(uint *)(param_2 + 0x38);
    unaff_x21 = (dword *)((long)&MACH_HEADER.cputype + 2);
    func_0x00499a10();
  }
  if ((uVar2 >> 3 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x50);
    pdVar5 = (dword *)(ulong)*(uint *)(param_2 + 0x38);
    unaff_x21 = (dword *)((long)&MACH_HEADER.cputype + 3);
    func_0x00499a10();
  }
  if ((uVar2 >> 4 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x58);
    pdVar5 = (dword *)(ulong)*(uint *)(param_2 + 0x38);
    unaff_x21 = &MACH_HEADER.cpusubtype;
    func_0x00499a10();
  }
  func_0x00499c8c(*(undefined8 *)(unaff_x20 + 0x30));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 2) == 0) goto LAB_00493d28;
  }
  else if ((int)param_2 == 0) goto LAB_00493d28;
  func_0x00499c10();
  unaff_x21 = param_3;
  func_0x00499b44(param_3,9);
LAB_00493d28:
  if ((uVar2 >> 5 & 1) != 0) {
    pdVar5 = (dword *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x38);
    unaff_x21 = (dword *)((long)&MACH_HEADER.cpusubtype + 2);
    func_0x00499a10();
  }
  if ((uVar2 >> 6 & 1) != 0) {
    pdVar5 = (dword *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x14);
    unaff_x21 = (dword *)((long)&MACH_HEADER.cpusubtype + 3);
    func_0x00499a10();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00499bf0();
  if ((long)pdVar5 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    pdVar5 = *(dword **)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if (*(long *)param_3 - (long)unaff_x21 < (long)(int)pdVar5) {
    while( true ) {
      iVar7 = ((int)*(undefined8 *)param_3 - (int)unaff_x21) + 0x10;
      iVar6 = (int)pdVar5;
      pdVar5 = (dword *)(ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x0054f690();
      puVar1 = (undefined1 *)((long)unaff_x21 + (long)iVar7);
      unaff_x21 = param_3;
      func_0x0054ed58(param_3,puVar1);
    }
    func_0x0054f690();
    return (dword *)((long)unaff_x21 + (long)iVar6);
  }
  _memcpy(unaff_x21,lVar4,(ulong)pdVar5 & 0xffffffff);
  return (dword *)((long)unaff_x21 + (long)(int)pdVar5);
}



/* Entry: 00493d90; end: 00493ed7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00493d90(long param_1)

{
  uint uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x19;
  
  func_0x00499a74();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048910c();
  }
  func_0x00499c80(*(undefined8 *)(unaff_x19 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048910c();
    func_0x00499bfc();
  }
  func_0x00499c80(*(undefined8 *)(unaff_x19 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048910c();
    func_0x00499bfc();
  }
  func_0x00499c80(*(undefined8 *)(unaff_x19 + 0x30));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048910c();
    func_0x00499bfc();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00493ed8(*(undefined8 *)(unaff_x19 + 0x38));
      func_0x00499bfc();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0049194c(*(undefined8 *)(unaff_x19 + 0x40));
      func_0x00499bfc();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_0048d6a8(*(undefined8 *)(unaff_x19 + 0x48));
      func_0x00499bfc();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_0048d6a8(*(undefined8 *)(unaff_x19 + 0x50));
      func_0x00499bfc();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_0048d6a8(*(undefined8 *)(unaff_x19 + 0x58));
      func_0x00499bfc();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_0048d6a8(*(undefined8 *)(unaff_x19 + 0x60));
      func_0x00499bfc();
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x00493ef4(*(undefined8 *)(unaff_x19 + 0x68));
      func_0x00499bfc();
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00499ff8();
  }
  func_0x00499dc4();
  return;
}



/* Entry: 00493ed8; end: 00493f0f;  */

long FUN_00493ed8(long param_1)

{
  long extraout_x8;
  
  func_0x0049440c();
  func_0x00499948();
  return param_1 + extraout_x8;
}



/* Entry: 00493f10; end: 00493f13;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00493f10(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004999f0();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00499e2c();
    puVar2 = unaff_x22;
  }
  func_0x00499b10();
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499d98();
  }
  func_0x00499c74(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499fa4();
  }
  func_0x00499c74(*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x00532e08();
  }
  func_0x00499c74(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00498f80();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        func_0x00493f14();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        func_0x00499f7c();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        func_0x00491b58();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        func_0x00499cac();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_0048ce68();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        func_0x00499cac();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_0048ce68();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x58);
      if (param_1 == (ulong *)0x0) {
        func_0x00499cac();
        *(ulong **)(unaff_x21 + 0x58) = param_1;
      }
      else {
        FUN_0048ce68();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        func_0x00499cac();
        *(ulong **)(unaff_x21 + 0x60) = param_1;
      }
      else {
        FUN_0048ce68();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      if (param_1 == (ulong *)0x0) {
        func_0x00499020();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00494028();
      }
    }
  }
  func_0x004999c0();
  if ((extraout_x8_03 & 1) == 0) {
    return;
  }
  func_0x004999e0();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00493f14; end: 004940bf;  */

void FUN_00493f14(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00499980();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00499d74();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      param_1 = unaff_x22;
      FUN_00490774();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_0049448c();
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x28);
  if (iVar2 == 0) goto LAB_0049400c;
  iVar3 = (int)unaff_x21[5];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      param_1 = unaff_x21;
      FUN_00494268();
    }
    *(int *)(unaff_x21 + 5) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      param_1 = (ulong *)unaff_x21[4];
      func_0x00499edc(*(undefined4 *)(unaff_x20 + 0x28));
      FUN_004945a8();
      goto LAB_0049400c;
    }
    func_0x00499124();
  }
  else {
    if (iVar2 != 1) goto LAB_0049400c;
    if (iVar3 == 1) {
      param_1 = (ulong *)unaff_x21[4];
      func_0x00499f50(*(undefined4 *)(unaff_x20 + 0x28));
      FUN_00494520();
      goto LAB_0049400c;
    }
    func_0x004990b4();
  }
  unaff_x21[4] = (ulong)unaff_x22;
  param_1 = unaff_x22;
LAB_0049400c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004999e0();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004940c0; end: 0049413b;  */

void FUN_004940c0(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00499d0c();
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_00494118;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_00494b54();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_00494118;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_00494118;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_004942e8();
    }
  }
  __ZdlPv();
LAB_00494118:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 0049413c; end: 0049416f;  */

long FUN_0049413c(long param_1)

{
  func_0x00499bbc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004940c0(param_1);
  }
  return param_1;
}



/* Entry: 00494170; end: 00494173;  */

long FUN_00494170(long param_1)

{
  func_0x00499bbc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004940c0(param_1);
  }
  return param_1;
}



/* Entry: 00494174; end: 00494187;  */

void FUN_00494174(void)

{
  FUN_0049413c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00494188; end: 0049419b;  */

long FUN_00494188(long param_1)

{
  func_0x00499bbc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00494944();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00494268(param_1);
  }
  return param_1;
}



/* Entry: 0049419c; end: 00494263;  */

long * FUN_0049419c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  uint extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00499a00();
  func_0x0049a004();
  if (extraout_w8 < 2) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x14);
    func_0x00499b9c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00499bf0();
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
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 00494264; end: 00494267;  */

void FUN_00494264(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00499980();
  if ((unaff_x22 & 1) != 0) {
    func_0x00499d74();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_00492a0c;
  func_0x00499ec4();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_004940c0();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x00499ab0();
      func_0x00499edc();
      func_0x00494028();
      goto LAB_00492a0c;
    }
    func_0x00499ca0();
    func_0x00499020();
  }
  else {
    if (iVar1 != 1) goto LAB_00492a0c;
    if (unaff_w24 == 1) {
      func_0x00499ab0();
      func_0x00499f50();
      FUN_00493f14();
      goto LAB_00492a0c;
    }
    func_0x00499ca0();
    func_0x00498f80();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_00492a0c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004999e0();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00494268; end: 004942e7;  */

void FUN_00494268(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x28) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_004942c4;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_004947a8();
    }
  }
  else {
    if (*(int *)(param_1 + 0x28) != 1) goto LAB_004942c4;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_004942c4;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_00494604();
    }
  }
  __ZdlPv();
LAB_004942c4:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 004942e8; end: 0049432b;  */

long FUN_004942e8(long param_1)

{
  func_0x00499bbc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00494944();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00494268(param_1);
  }
  return param_1;
}



/* Entry: 0049432c; end: 0049433f;  */

void FUN_0049432c(void)

{
  FUN_004942e8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00494340; end: 00494353;  */

long FUN_00494340(long param_1)

{
  func_0x00499bbc();
  func_0x00499da0();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0049ad04();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00494354; end: 00494487;  */

void FUN_00494354(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00499cd8();
  FUN_00532fa8(unaff_x19 + 0x18);
  func_0x00499f18();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00494488; end: 0049448b;  */

void FUN_00494488(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00499980();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00499d74();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      param_1 = unaff_x22;
      FUN_00490774();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_0049448c();
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x28);
  if (iVar2 == 0) goto LAB_0049400c;
  iVar3 = (int)unaff_x21[5];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      param_1 = unaff_x21;
      FUN_00494268();
    }
    *(int *)(unaff_x21 + 5) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      param_1 = (ulong *)unaff_x21[4];
      func_0x00499edc(*(undefined4 *)(unaff_x20 + 0x28));
      FUN_004945a8();
      goto LAB_0049400c;
    }
    func_0x00499124();
  }
  else {
    if (iVar2 != 1) goto LAB_0049400c;
    if (iVar3 == 1) {
      param_1 = (ulong *)unaff_x21[4];
      func_0x00499f50(*(undefined4 *)(unaff_x20 + 0x28));
      FUN_00494520();
      goto LAB_0049400c;
    }
    func_0x004990b4();
  }
  unaff_x21[4] = (ulong)unaff_x22;
  param_1 = unaff_x22;
LAB_0049400c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004999e0();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0049448c; end: 0049451f;  */

void FUN_0049448c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00499b7c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499f08();
  }
  func_0x00499b10();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x00532e08();
  }
  func_0x00499c74(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x00532e08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bc4();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00494520; end: 004945a7;  */

void FUN_00494520(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004999f0();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00499e2c();
    puVar1 = unaff_x22;
  }
  func_0x00499b10();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499d98();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00499ee8();
    if (param_1 == (ulong *)0x0) {
      FUN_0048c9b0();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_0049ae7c();
    }
  }
  func_0x004999c0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004999e0();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004945a8; end: 00494603;  */

void FUN_004945a8(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004999f0();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0049a070();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0049a0a0();
    if (extraout_x8 == 0) {
      FUN_0048c9b0();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00499f5c();
    }
  }
  func_0x00499c24();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004999e0();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00494604; end: 0049463b;  */

long FUN_00494604(long param_1)

{
  func_0x00499bbc();
  func_0x00499da0();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0049ad04();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0049463c; end: 0049464f;  */

void FUN_0049463c(void)

{
  FUN_00494604();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00494650; end: 0049465b;  */

undefined ** FUN_00494650(void)

{
  return &PTR_DAT_009ea9e0;
}



/* Entry: 0049465c; end: 00494697;  */

void FUN_0049465c(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00499b04();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_0049ad58(unaff_x19[4]);
  }
  func_0x00499d58();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00494698; end: 00494737;  */

long * FUN_00494698(long *param_1,long param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00499b60();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    param_1 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x00499a68();
    unaff_x20 = param_1;
  }
  func_0x00499c8c(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_00494704;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_00494704;
  param_4 = "snapchat.notification.UserBitmoji.selfie_id";
  func_0x00499c10();
  func_0x00499efc();
  func_0x00499a88();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_00494704:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00499bf0();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00499e38();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x0054f690();
      pcVar1 = (char *)((long)param_4 + (long)iVar3);
      param_4 = (char *)param_1;
      func_0x0054ed58(param_1,pcVar1);
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 00494738; end: 004947a3;  */

void FUN_00494738(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x00499a74();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048910c();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_0048c7b8(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x00499bfc();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00499ff8();
  }
  func_0x00499dc4();
  return;
}



/* Entry: 004947a4; end: 004947a7;  */

void FUN_004947a4(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004999f0();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00499e2c();
    puVar1 = unaff_x22;
  }
  func_0x00499b10();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499d98();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00499ee8();
    if (param_1 == (ulong *)0x0) {
      FUN_0048c9b0();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_0049ae7c();
    }
  }
  func_0x004999c0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004999e0();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004947a8; end: 004947db;  */

long FUN_004947a8(long param_1)

{
  func_0x00499bbc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0049ad04();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004947dc; end: 004947ef;  */

void FUN_004947dc(void)

{
  FUN_004947a8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004947f0; end: 004947fb;  */

undefined ** FUN_004947f0(void)

{
  return &PTR_DAT_009eaa28;
}



/* Entry: 004947fc; end: 004948d7;  */

void FUN_004947fc(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00499ddc();
  if ((extraout_x8 & 1) != 0) {
    func_0x00499f8c();
  }
  func_0x00499d58();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004948d8; end: 004948db;  */

void FUN_004948d8(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004999f0();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0049a070();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0049a0a0();
    if (extraout_x8 == 0) {
      FUN_0048c9b0();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00499f5c();
    }
  }
  func_0x00499c24();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004999e0();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004948dc; end: 00494943;  */

void FUN_004948dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  lVar1 = param_3;
  func_0x00499c18();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_009e9e08;
  if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
    func_0x004999b4();
  }
  lVar1 = param_3 + 0x10;
  func_0x00499e18();
  unaff_x19[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x00499e18();
  unaff_x19[3] = lVar1;
  param_3 = param_3 + 0x20;
  func_0x00499e18();
  unaff_x19[4] = param_3;
  *(undefined4 *)(unaff_x19 + 5) = 0;
  return;
}



/* Entry: 00494944; end: 0049496f;  */

undefined8 FUN_00494944(undefined8 param_1)

{
  func_0x00499bbc();
  FUN_00494970(param_1);
  return param_1;
}



/* Entry: 00494970; end: 0049499b;  */

/* WARNING: Possible PIC construction at 0x00494984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00494988) */

void FUN_00494970(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(uVar1);
  return;
}



/* Entry: 0049499c; end: 0049499f;  */

undefined8 FUN_0049499c(undefined8 param_1)

{
  func_0x00499bbc();
  FUN_00494970(param_1);
  return param_1;
}



/* Entry: 004949a0; end: 004949b3;  */

void FUN_004949a0(void)

{
  FUN_00494944();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004949b4; end: 004949bf;  */

undefined ** FUN_004949b4(void)

{
  return &PTR_DAT_009eaa78;
}



/* Entry: 004949c0; end: 00494abb;  */

long * FUN_004949c0(long *param_1,long param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00499b60();
  func_0x00499c8c(param_1[2]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_004949f8;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_004949f8:
      param_4 = "snapchat.notification.BitmojiInfo.bitmoji_download_url";
      func_0x00499c10();
      func_0x00499a54();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00499c8c(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_00494a30;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_00494a30:
      param_4 = "snapchat.notification.BitmojiInfo.avatar_id";
      func_0x00499c10();
      func_0x00499efc();
      func_0x00499a88();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00499c8c(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_00494a88;
  }
  else if ((int)param_2 == 0) goto LAB_00494a88;
  param_4 = "snapchat.notification.BitmojiInfo.selfie_id";
  func_0x00499c10();
  func_0x00499a88();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_00494a88:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00499bf0();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00499e38();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x0054f690();
      pcVar1 = (char *)((long)param_4 + (long)iVar4);
      param_4 = (char *)param_1;
      func_0x0054ed58(param_1,pcVar1);
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 00494abc; end: 00494b4f;  */

long FUN_00494abc(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00499c44();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_0048910c();
    lVar2 = param_1 + 1;
  }
  func_0x00499c80(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048910c();
    func_0x00499bfc();
  }
  func_0x00499c80(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048910c();
    func_0x00499bfc();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00499ff8();
    lVar1 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x28) = (int)lVar2;
  return lVar2;
}



/* Entry: 00494b50; end: 00494b53;  */

void FUN_00494b50(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00499b7c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499f08();
  }
  func_0x00499b10();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x00532e08();
  }
  func_0x00499c74(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x00532e08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bc4();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00494b54; end: 00494b8b;  */

long FUN_00494b54(long param_1)

{
  func_0x00499bbc();
  func_0x00499da0();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00494d90();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00494b8c; end: 00494b9f;  */

void FUN_00494b8c(void)

{
  FUN_00494b54();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00494ba0; end: 00494bab;  */

undefined ** FUN_00494ba0(void)

{
  return &PTR_DAT_009eaac0;
}



/* Entry: 00494bac; end: 00494bdf;  */

void FUN_00494bac(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00499cd8();
  FUN_00532fa8(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00494be0; end: 00494cab;  */

long * FUN_00494be0(long *param_1,long param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined8 unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00499a2c();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_00494c24;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_00494c24;
  param_4 = "snapchat.notification.Thumbnail.url";
  func_0x00499c10();
  func_0x00499a54();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_00494c24:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x20) + 0x20);
    param_1 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x00499a68();
    unaff_x20 = param_1;
  }
  if (*(char *)(unaff_x21 + 0x28) == '\x01') {
    func_0x00487c24();
    param_1 = (long *)(ulong)*(byte *)(unaff_x21 + 0x28);
    uVar2 = 0x18;
    func_0x00487cbc(0x18,unaff_x19);
    func_0x00487cbc(param_1,uVar2);
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00499bf0();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00499e38();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        param_3 = (ulong)(uint)(iVar3 - iVar4);
        if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        pcVar1 = (char *)((long)param_4 + (long)iVar4);
        param_4 = (char *)param_1;
        func_0x0054ed58(param_1,pcVar1);
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 00494cac; end: 00494d1f;  */

void FUN_00494cac(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00499a74();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0048910c();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00494e70(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x00499924();
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x28) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00499ff8();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 00494d20; end: 00494d23;  */

void FUN_00494d20(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004999f0();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00499e2c();
    puVar1 = unaff_x22;
  }
  func_0x00499b10();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499d98();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00499ee8();
    if (param_1 == (ulong *)0x0) {
      func_0x00499180();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_00494d24();
    }
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x28) = 1;
  }
  func_0x004999c0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004999e0();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00494d24; end: 00494d8f;  */

void FUN_00494d24(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00499b7c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499f08();
  }
  func_0x00499b10();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x00532e08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bc4();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00494d90; end: 00494dbb;  */

undefined8 FUN_00494d90(undefined8 param_1)

{
  func_0x00499bbc();
  func_0x00499f10();
  func_0x00499da0();
  return param_1;
}



/* Entry: 00494dbc; end: 00494dbf;  */

undefined8 FUN_00494dbc(undefined8 param_1)

{
  func_0x00499bbc();
  func_0x00499f10();
  func_0x00499da0();
  return param_1;
}



/* Entry: 00494dc0; end: 00494dd3;  */

void FUN_00494dc0(void)

{
  FUN_00494d90();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00494dd4; end: 00494ddf;  */

undefined ** FUN_00494dd4(void)

{
  return &PTR_DAT_009eab00;
}



/* Entry: 00494de0; end: 00494ee7;  */

long * FUN_00494de0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00499a00();
  lVar3 = (long)*(char *)((param_1[2] & 0xfffffffffffffffcU) + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)((param_1[2] & 0xfffffffffffffffcU) + 8);
  }
  if (lVar3 != 0) {
    param_1 = unaff_x19;
    FUN_00435e9c();
    param_4 = param_1;
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x00499efc();
    FUN_00435e9c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bf0();
    if ((long)uVar2 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      uVar2 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar2) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)uVar2;
        uVar1 = iVar4 - iVar5;
        uVar2 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,uVar2 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar2);
  }
  return param_4;
}



/* Entry: 00494ee8; end: 00494eeb;  */

void FUN_00494ee8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00499b7c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499f08();
  }
  func_0x00499b10();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x00532e08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bc4();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00494eec; end: 00494f1f;  */

long FUN_00494eec(long param_1)

{
  func_0x00499bbc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004950b0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00494f20; end: 00494f23;  */

long FUN_00494f20(long param_1)

{
  func_0x00499bbc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004950b0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00494f24; end: 00494f37;  */

void FUN_00494f24(void)

{
  FUN_00494eec();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00494f38; end: 00494f43;  */

undefined ** FUN_00494f38(void)

{
  return &PTR_DAT_009eab50;
}



/* Entry: 00494f44; end: 00495043;  */

void FUN_00494f44(ulong *param_1)

{
  ulong extraout_x8;
  
  if (0 < (int)param_1[4]) {
    FUN_00437de0(param_1 + 3);
  }
  if ((param_1[2] & 1) != 0) {
    FUN_0049511c(param_1[6]);
  }
  func_0x00499d58();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
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


