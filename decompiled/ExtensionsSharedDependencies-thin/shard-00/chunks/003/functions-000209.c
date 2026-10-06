/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00495044; end: 00495047;  */

void FUN_00495044(void)

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



/* Entry: 00495048; end: 004950af;  */

void FUN_00495048(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00499980();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00499d74();
  }
  func_0x00499f64();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x00499264();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_0049528c();
    }
  }
  func_0x004999c0();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 004950b0; end: 004950f7;  */

long FUN_004950b0(long param_1)

{
  func_0x00499bbc();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004957c0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 004950f8; end: 004950fb;  */

long FUN_004950f8(long param_1)

{
  func_0x00499bbc();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004957c0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 004950fc; end: 0049510f;  */

void FUN_004950fc(void)

{
  FUN_004950b0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00495110; end: 0049511b;  */

undefined ** FUN_00495110(void)

{
  return &PTR_DAT_009eab98;
}



/* Entry: 0049511c; end: 00495157;  */

void FUN_0049511c(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00499b04();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_0048cb48(unaff_x19[4]);
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



/* Entry: 00495158; end: 00495277;  */

long * FUN_00495158(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x00499a00();
  lVar4 = param_1[4];
  puVar1 = (ulong *)(param_1 + 3);
  for (iVar6 = 0; (int)lVar4 != iVar6; iVar6 = iVar6 + 1) {
    uVar5 = *puVar1;
    puVar2 = puVar1;
    if ((uVar5 & 1) != 0) {
      puVar2 = (ulong *)(uVar5 + (long)iVar6 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar2 + 0x18);
    func_0x00499af8();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x00499b9c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bf0();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 00495278; end: 0049528b;  */

void FUN_00495278(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00499980();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00499d74();
  }
  func_0x00499f64();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x00499264();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_0049528c();
    }
  }
  func_0x004999c0();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 0049528c; end: 0049530f;  */

void FUN_0049528c(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
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
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00499ee8();
    if (param_1 == (ulong *)0x0) {
      func_0x00499cac();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      FUN_0048ce68();
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



/* Entry: 00495310; end: 0049535b;  */

void FUN_00495310(void)

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
        FUN_004955d4();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 0049535c; end: 0049538f;  */

long FUN_0049535c(long param_1)

{
  func_0x00499bbc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00495310(param_1);
  }
  return param_1;
}



/* Entry: 00495390; end: 00495393;  */

long FUN_00495390(long param_1)

{
  func_0x00499bbc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00495310(param_1);
  }
  return param_1;
}



/* Entry: 00495394; end: 004953a7;  */

void FUN_00495394(void)

{
  FUN_0049535c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004953a8; end: 004953b7;  */

long FUN_004953a8(long param_1)

{
  func_0x00499bbc();
  func_0x00499da0();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00496920();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004953b8; end: 0049549f;  */

void FUN_004953b8(long param_1)

{
  ulong *puVar1;
  
  FUN_00495310();
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



/* Entry: 004954a0; end: 004955d3;  */

void FUN_004954a0(ulong *param_1)

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
        func_0x0049552c();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_00495310();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x00499ca0();
        func_0x004992d0();
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



/* Entry: 004955d4; end: 0049561b;  */

long FUN_004955d4(long param_1)

{
  func_0x00499bbc();
  func_0x00499da0();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00496920();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0049561c; end: 0049562f;  */

void FUN_0049561c(void)

{
  FUN_004955d4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00495630; end: 0049563b;  */

undefined ** FUN_00495630(void)

{
  return &PTR_DAT_009eac28;
}



/* Entry: 0049563c; end: 0049568b;  */

void FUN_0049563c(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00499b04();
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00491810(unaff_x19[4]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_0048cb48(unaff_x19[5]);
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
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 0049568c; end: 004957bb;  */

long * FUN_0049568c(long *param_1,long param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00499a2c();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_004956d0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_004956d0;
  param_4 = "snapchat.notification.ConfigurableActionButton.text";
  func_0x00499c10();
  func_0x00499a54();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_004956d0:
  uVar2 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar2 & 1) != 0) {
    func_0x0049a07c();
    func_0x00499a68();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x38);
    param_1 = (long *)((long)&MACH_HEADER.magic + 3);
    func_0x00499a68();
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



/* Entry: 004957bc; end: 004957bf;  */

void FUN_004957bc(ulong *param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x19;
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
  func_0x0049a064();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00499ee8();
      if (param_1 == (ulong *)0x0) {
        func_0x00499f7c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00491b58();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0049a010();
      if (param_1 == (ulong *)0x0) {
        func_0x00499cac();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_0048ce68();
      }
    }
  }
  func_0x004999c0();
  if ((extraout_x8_00 & 1) == 0) {
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



/* Entry: 004957c0; end: 004957f7;  */

long FUN_004957c0(long param_1)

{
  func_0x00499bbc();
  func_0x00499da0();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004957f8; end: 004957fb;  */

long FUN_004957f8(long param_1)

{
  func_0x00499bbc();
  func_0x00499da0();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0048cac4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004957fc; end: 0049580f;  */

void FUN_004957fc(void)

{
  FUN_004957c0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00495810; end: 0049581b;  */

undefined ** FUN_00495810(void)

{
  return &PTR_DAT_009eac78;
}



/* Entry: 0049581c; end: 004958af;  */

long * FUN_0049581c(long *param_1,long param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00499a2c();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_00495860;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_00495860;
  param_4 = "snapchat.notification.DismissButton.text";
  func_0x00499c10();
  func_0x00499a54();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_00495860:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x20) + 0x38);
    param_1 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x00499a68();
    unaff_x20 = param_1;
  }
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



/* Entry: 004958b0; end: 0049591b;  */

void FUN_004958b0(long param_1)

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
    FUN_0048d6a8(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x00499bfc();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00499ff8();
  }
  func_0x00499dc4();
  return;
}



/* Entry: 0049591c; end: 0049592b;  */

void FUN_0049591c(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
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
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00499ee8();
    if (param_1 == (ulong *)0x0) {
      func_0x00499cac();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      FUN_0048ce68();
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



/* Entry: 0049592c; end: 0049594f;  */

undefined8 FUN_0049592c(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00495950; end: 00495953;  */

undefined8 FUN_00495950(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00495954; end: 00495967;  */

void FUN_00495954(void)

{
  FUN_0049592c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00495968; end: 004959ef;  */

undefined ** FUN_00495968(void)

{
  return &PTR_DAT_009eacc0;
}



/* Entry: 004959f0; end: 00495a13;  */

undefined8 FUN_004959f0(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00495a14; end: 00495a17;  */

undefined8 FUN_00495a14(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00495a18; end: 00495a2b;  */

void FUN_00495a18(void)

{
  FUN_004959f0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00495a2c; end: 00495aa7;  */

undefined ** FUN_00495a2c(void)

{
  return &PTR_DAT_009ead08;
}



/* Entry: 00495aa8; end: 00495b23;  */

void FUN_00495aa8(void)

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
    if (uVar1 != 0) goto LAB_00495b00;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_004959f0();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_00495b00;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_00495b00;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_0049592c();
    }
  }
  __ZdlPv();
LAB_00495b00:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 00495b24; end: 00495b57;  */

long FUN_00495b24(long param_1)

{
  func_0x00499bbc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00495aa8(param_1);
  }
  return param_1;
}



/* Entry: 00495b58; end: 00495b5b;  */

long FUN_00495b58(long param_1)

{
  func_0x00499bbc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00495aa8(param_1);
  }
  return param_1;
}



/* Entry: 00495b5c; end: 00495b6f;  */

void FUN_00495b5c(void)

{
  FUN_00495b24();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00495b70; end: 00495b7b;  */

undefined ** FUN_00495b70(void)

{
  return &PTR_DAT_009ead58;
}



/* Entry: 00495b7c; end: 00495c47;  */

long * FUN_00495b7c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x10);
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



/* Entry: 00495c48; end: 00495c57;  */

void FUN_00495c48(ulong *param_1)

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



/* Entry: 00495c58; end: 00495c7b;  */

undefined8 FUN_00495c58(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00495c7c; end: 00495c7f;  */

undefined8 FUN_00495c7c(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00495c80; end: 00495c93;  */

void FUN_00495c80(void)

{
  FUN_00495c58();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00495c94; end: 00495d0f;  */

undefined ** FUN_00495c94(void)

{
  return &PTR_DAT_009eada0;
}



/* Entry: 00495d10; end: 00495d43;  */

long FUN_00495d10(long param_1)

{
  func_0x00499bbc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0049ad04();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00495d44; end: 00495d47;  */

long FUN_00495d44(long param_1)

{
  func_0x00499bbc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0049ad04();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00495d48; end: 00495d5b;  */

void FUN_00495d48(void)

{
  FUN_00495d10();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00495d5c; end: 00495d67;  */

undefined ** FUN_00495d5c(void)

{
  return &PTR_DAT_009eadf0;
}



/* Entry: 00495d68; end: 00495e43;  */

void FUN_00495d68(void)

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



/* Entry: 00495e44; end: 00495e47;  */

void FUN_00495e44(void)

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



/* Entry: 00495e48; end: 00495ea3;  */

void FUN_00495e48(void)

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



/* Entry: 00495ea4; end: 00495ed7;  */

long FUN_00495ea4(long param_1)

{
  func_0x00499bbc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0049ad04();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00495ed8; end: 00495edb;  */

long FUN_00495ed8(long param_1)

{
  func_0x00499bbc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0049ad04();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00495edc; end: 00495eef;  */

void FUN_00495edc(void)

{
  FUN_00495ea4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00495ef0; end: 00495efb;  */

undefined ** FUN_00495ef0(void)

{
  return &PTR_DAT_009eae58;
}



/* Entry: 00495efc; end: 00495fd7;  */

void FUN_00495efc(void)

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



/* Entry: 00495fd8; end: 00495fdb;  */

void FUN_00495fd8(void)

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



/* Entry: 00495fdc; end: 00496037;  */

void FUN_00495fdc(void)

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



/* Entry: 00496038; end: 00496063;  */

long FUN_00496038(long param_1)

{
  func_0x00499bbc();
  FUN_0048ed64(param_1 + 0x10);
  return param_1;
}



/* Entry: 00496064; end: 00496067;  */

long FUN_00496064(long param_1)

{
  func_0x00499bbc();
  FUN_0048ed64(param_1 + 0x10);
  return param_1;
}



/* Entry: 00496068; end: 0049607b;  */

void FUN_00496068(void)

{
  FUN_00496038();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0049607c; end: 0049609b;  */

undefined ** FUN_0049607c(void)

{
  return &PTR_DAT_009eaeb8;
}



/* Entry: 0049609c; end: 0049613b;  */

long * FUN_0049609c(undefined1 *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x00499a00();
  uVar1 = *(uint *)(param_1 + 0x20);
  piVar4 = (int *)(ulong)uVar1;
  if (uVar1 != 0) {
    func_0x00499b38();
    *param_1 = 10;
    while (0x7f < uVar1) {
      func_0x0049a044();
    }
    func_0x0049a030();
    do {
      func_0x00499b38();
      uVar3 = (ulong)*piVar4;
      param_4 = (long *)(param_1 + 1);
      while (0x7f < uVar3) {
        func_0x0049a01c();
        uVar3 = extraout_x8;
      }
      piVar4 = piVar4 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar3;
    } while (piVar4 < unaff_x22);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bf0();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 0049613c; end: 004961cf;  */

long FUN_0049613c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = 0;
  lVar1 = 0;
  for (lVar4 = (long)*(int *)(param_1 + 0x10); lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar2 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar1;
    lVar2 = lVar2 + 0x100000000;
  }
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 + (ulong)((int)LZCOUNT((long)(int)lVar1) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x24) = (int)lVar2;
  return lVar2;
}



/* Entry: 004961d0; end: 004962ab;  */

void FUN_004961d0(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00499c18();
  func_0x00499f70();
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



/* Entry: 004962ac; end: 004962df;  */

long FUN_004962ac(long param_1)

{
  func_0x00499bbc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x00496200(param_1);
  }
  return param_1;
}



/* Entry: 004962e0; end: 004962e3;  */

long FUN_004962e0(long param_1)

{
  func_0x00499bbc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x00496200(param_1);
  }
  return param_1;
}



/* Entry: 004962e4; end: 004962f7;  */

void FUN_004962e4(void)

{
  FUN_004962ac();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004962f8; end: 00496303;  */

undefined ** FUN_004962f8(void)

{
  return &PTR_DAT_009eaf18;
}



/* Entry: 00496304; end: 0049641f;  */

void FUN_00496304(long param_1)

{
  ulong *puVar1;
  
  func_0x00496200();
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



/* Entry: 00496420; end: 00496423;  */

void FUN_00496420(ulong *param_1)

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
  if (iVar1 == 0) goto LAB_00496504;
  func_0x00499ec4();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      func_0x00496200();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (unaff_w24 == 3) {
      func_0x00499ab0();
      func_0x004961d0();
      goto LAB_00496504;
    }
    func_0x00499ca0();
    func_0x004994b0();
  }
  else if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x00499ab0();
      func_0x00499edc();
      FUN_00495fdc();
      goto LAB_00496504;
    }
    func_0x00499ca0();
    func_0x00499454();
  }
  else {
    if (iVar1 != 1) goto LAB_00496504;
    if (unaff_w24 == 1) {
      func_0x00499ab0();
      func_0x00499f50();
      FUN_00495e48();
      goto LAB_00496504;
    }
    func_0x00499ca0();
    FUN_004993f8();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_00496504:
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



/* Entry: 00496424; end: 0049651f;  */

void FUN_00496424(ulong *param_1)

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
  if (iVar1 == 0) goto LAB_00496504;
  func_0x00499ec4();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      func_0x00496200();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (unaff_w24 == 3) {
      func_0x00499ab0();
      func_0x004961d0();
      goto LAB_00496504;
    }
    func_0x00499ca0();
    func_0x004994b0();
  }
  else if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x00499ab0();
      func_0x00499edc();
      FUN_00495fdc();
      goto LAB_00496504;
    }
    func_0x00499ca0();
    func_0x00499454();
  }
  else {
    if (iVar1 != 1) goto LAB_00496504;
    if (unaff_w24 == 1) {
      func_0x00499ab0();
      func_0x00499f50();
      FUN_00495e48();
      goto LAB_00496504;
    }
    func_0x00499ca0();
    FUN_004993f8();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_00496504:
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



/* Entry: 00496520; end: 0049659b;  */

void FUN_00496520(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00499d0c();
  if (extraout_w8 == 3) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_00496578;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_004962ac();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_00496578;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_00496578;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_00495c58();
    }
  }
  __ZdlPv();
LAB_00496578:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 0049659c; end: 004965cf;  */

long FUN_0049659c(long param_1)

{
  func_0x00499bbc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00496520(param_1);
  }
  return param_1;
}



/* Entry: 004965d0; end: 004965d3;  */

long FUN_004965d0(long param_1)

{
  func_0x00499bbc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00496520(param_1);
  }
  return param_1;
}



/* Entry: 004965d4; end: 004965e7;  */

void FUN_004965d4(void)

{
  FUN_0049659c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004965e8; end: 004965f3;  */

undefined ** FUN_004965e8(void)

{
  return &PTR_DAT_009eaf70;
}



/* Entry: 004965f4; end: 004966ab;  */

dword * FUN_004965f4(long param_1,undefined8 param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00499a00();
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 == 3) {
    uVar1 = *(uint *)(*(long *)(unaff_x20 + 0x10) + 0x18);
    param_4 = (dword *)((long)&MACH_HEADER.magic + 3);
  }
  else {
    if (iVar3 == 2) {
      func_0x00499b38();
      param_4 = &MACH_HEADER.ncmds;
      func_0x00487cbc(0x10,param_1);
      func_0x00499e00();
      goto LAB_00496678;
    }
    if (iVar3 != 1) goto LAB_00496678;
    uVar1 = *(uint *)(*(long *)(unaff_x20 + 0x10) + 0x10);
    param_4 = (dword *)((long)&MACH_HEADER.magic + 1);
  }
  param_3 = (ulong)uVar1;
  func_0x00499b9c();
LAB_00496678:
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
  if ((long)(int)param_3 <= *(long *)unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (dword *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
    iVar3 = (int)param_3;
    uVar1 = iVar3 - iVar4;
    param_3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar3 < iVar4) break;
    func_0x0054f690();
    param_4 = unaff_x19;
    func_0x0054ed58();
  }
  func_0x0054f690();
  return (dword *)((long)param_4 + (long)iVar3);
}



/* Entry: 004966ac; end: 0049672f;  */

void FUN_004966ac(void)

{
  int iVar1;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00499d0c();
  if (extraout_w8 == 3) {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x10);
    func_0x004963a0();
LAB_004966f4:
    func_0x00499948();
    iVar1 = iVar1 + extraout_w8_01;
  }
  else {
    if (extraout_w8 != 2) {
      if (extraout_w8 != 1) {
        iVar1 = 0;
        goto LAB_00496708;
      }
      iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x10);
      func_0x00495ce0();
      goto LAB_004966f4;
    }
    func_0x00499f20((long)*(int *)(unaff_x19 + 0x10));
    iVar1 = extraout_w8_00;
  }
  iVar1 = iVar1 + 1;
LAB_00496708:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00499ff8();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 00496730; end: 00496733;  */

void FUN_00496730(ulong *param_1)

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
  if (iVar1 == 0) goto LAB_00493814;
  func_0x00499ec4();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_00496520();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (unaff_w24 == 3) {
      func_0x00499ab0();
      FUN_00496424();
      goto LAB_00493814;
    }
    func_0x00499ca0();
    FUN_00499550();
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)(unaff_x21 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
      goto LAB_00493814;
    }
    if (iVar1 != 1) goto LAB_00493814;
    if (unaff_w24 == 1) {
      func_0x00499ab0();
      func_0x00499e88();
      FUN_00495c48();
      goto LAB_00493814;
    }
    func_0x00499ca0();
    FUN_00499500();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_00493814:
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



/* Entry: 00496734; end: 0049676b;  */

long FUN_00496734(long param_1)

{
  func_0x00499bbc();
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 0049676c; end: 0049676f;  */

long FUN_0049676c(long param_1)

{
  func_0x00499bbc();
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 00496770; end: 00496783;  */

void FUN_00496770(void)

{
  FUN_00496734();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00496784; end: 0049678f;  */

undefined ** FUN_00496784(void)

{
  return &PTR_DAT_009eafb8;
}



/* Entry: 00496790; end: 0049681b;  */

long * FUN_00496790(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x00499a00();
  lVar4 = param_1[3];
  puVar1 = (ulong *)(param_1 + 2);
  for (iVar6 = 0; (int)lVar4 != iVar6; iVar6 = iVar6 + 1) {
    uVar5 = *puVar1;
    puVar2 = puVar1;
    if ((uVar5 & 1) != 0) {
      puVar2 = (ulong *)(uVar5 + (long)iVar6 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar2 + 0x18);
    func_0x00499af8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bf0();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 0049681c; end: 0049687f;  */

long FUN_0049681c(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00499d38();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_004935f4();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00499ff8();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 00496880; end: 00496893;  */

void FUN_00496880(long param_1)

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



/* Entry: 00496894; end: 0049691f;  */

void FUN_00496894(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00499d0c();
  if (extraout_w8 == 4) {
    func_0x00499f10();
    goto LAB_004968fc;
  }
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_004968fc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_004974e8();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_004968fc;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_004968fc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_00496c90();
    }
  }
  __ZdlPv();
LAB_004968fc:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 00496920; end: 0049694b;  */

undefined8 FUN_00496920(undefined8 param_1)

{
  func_0x00499bbc();
  FUN_0049694c(param_1);
  return param_1;
}



/* Entry: 0049694c; end: 0049695f;  */

void FUN_0049694c(long param_1)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x00499d0c();
  if (extraout_w8 == 4) {
    func_0x00499f10();
    goto LAB_004968fc;
  }
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_004968fc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_004974e8();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_004968fc;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_004968fc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_00496c90();
    }
  }
  __ZdlPv();
LAB_004968fc:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 00496960; end: 00496973;  */

void FUN_00496960(void)

{
  FUN_00496920();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00496974; end: 00496987;  */

undefined8 FUN_00496974(undefined8 param_1)

{
  func_0x00499bbc();
  func_0x00499f10();
  return param_1;
}



/* Entry: 00496988; end: 00496a9f;  */

long * FUN_00496988(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00499a00();
  iVar3 = *(int *)((long)param_1 + 0x1c);
  if (iVar3 == 4) {
    param_3 = *(ulong *)(unaff_x20 + 0x10) & 0xfffffffffffffffc;
    param_1 = unaff_x19;
    FUN_00435e9c();
  }
  else {
    if (iVar3 == 2) {
      func_0x0049a07c();
    }
    else {
      param_1 = param_4;
      if (iVar3 != 1) goto LAB_004969ec;
      param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x18);
      param_1 = (long *)((long)&MACH_HEADER.magic + 1);
    }
    func_0x00499b9c();
  }
LAB_004969ec:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_1;
  }
  func_0x00499bf0();
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
      func_0x0054f690();
      param_1 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_1 + (long)iVar3);
  }
  _memcpy(param_1,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_1 + (long)(int)param_3);
}



/* Entry: 00496aa0; end: 00496ad7;  */

long FUN_00496aa0(long param_1)

{
  long extraout_x8;
  
  FUN_00496d8c();
  func_0x00499948();
  return param_1 + extraout_x8;
}



/* Entry: 00496ad8; end: 00496adb;  */

void FUN_00496ad8(ulong *param_1)

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
  if (iVar1 != 0) {
    func_0x00499ec4();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        FUN_00496894();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    if (iVar1 == 4) {
      if (unaff_w24 != 4) {
        unaff_x21[2] = (ulong)&DAT_00b69408;
      }
      param_1 = unaff_x21 + 2;
      func_0x00532e08();
    }
    else {
      if (iVar1 == 2) {
        if (unaff_w24 == 2) {
          param_1 = (ulong *)unaff_x21[2];
          func_0x00499edc(*(undefined4 *)(unaff_x20 + 0x1c));
          FUN_00496b24();
          goto LAB_00491c50;
        }
        func_0x00499ca0();
        func_0x00499630();
      }
      else {
        if (iVar1 != 1) goto LAB_00491c50;
        if (unaff_w24 == 1) {
          param_1 = (ulong *)unaff_x21[2];
          func_0x00499f50(*(undefined4 *)(unaff_x20 + 0x1c));
          FUN_00496adc();
          goto LAB_00491c50;
        }
        func_0x00499ca0();
        func_0x004995d8();
      }
      unaff_x21[2] = (ulong)param_1;
    }
  }
LAB_00491c50:
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


