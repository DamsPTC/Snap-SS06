/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10891ab54; end: 10891ab57;  */

long FUN_10891ab54(long param_1)

{
  func_0x000107c34a34();
  func_0x000107c2a450(param_1 + 0x10);
  return param_1;
}



/* Entry: 10891ab58; end: 10891ab6b;  */

void FUN_10891ab58(void)

{
  FUN_10891ab28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891ab6c; end: 10891ab8f;  */

undefined ** FUN_10891ab6c(void)

{
  return &PTR_DAT_110a964f0;
}



/* Entry: 10891ab90; end: 10891ac4f;  */

long * FUN_10891ab90(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  uVar2 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar2) {
    func_0x00010892483c();
    func_0x000108924e4c();
    while (0x7f < uVar2) {
      func_0x000108924cb0();
    }
    *(char *)((long)param_4 + -1) = (char)uVar2;
    puVar5 = *(uint **)(unaff_x20 + 0x18);
    puVar1 = puVar5 + *(int *)(unaff_x20 + 0x10);
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
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010892483c();
    func_0x000108924b8c();
    func_0x000108924904();
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



/* Entry: 10891ac50; end: 10891acdf;  */

void FUN_10891ac50(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_1 + 0x10;
  func_0x00010b4d3e38();
  iVar1 = (int)lVar3;
  *(int *)(param_1 + 0x20) = iVar1;
  if (lVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = ((int)LZCOUNT((long)iVar1) * -9 + 0x280U >> 6) + 1;
  }
  iVar2 = iVar2 + iVar1;
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar2 = ((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x30) = iVar2;
  return;
}



/* Entry: 10891ace0; end: 10891ace3;  */

void FUN_10891ace0(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108924a28();
  FUN_1088ffb98();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 10891ace4; end: 10891ad1f;  */

void FUN_10891ace4(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108924a28();
  FUN_1088ffb98();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 10891ad20; end: 10891ad4b;  */

long FUN_10891ad20(long param_1)

{
  func_0x000107c34a34();
  FUN_108922f70(param_1 + 0x10);
  return param_1;
}



/* Entry: 10891ad4c; end: 10891ad4f;  */

long FUN_10891ad4c(long param_1)

{
  func_0x000107c34a34();
  FUN_108922f70(param_1 + 0x10);
  return param_1;
}



/* Entry: 10891ad50; end: 10891ad63;  */

void FUN_10891ad50(void)

{
  FUN_10891ad20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891ad64; end: 10891ad6f;  */

undefined ** FUN_10891ad64(void)

{
  return &PTR_DAT_110a96540;
}



/* Entry: 10891ad70; end: 10891ada3;  */

void FUN_10891ad70(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108924c2c();
  FUN_1089232b8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 10891ada4; end: 10891ae37;  */

long * FUN_10891ada4(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924874();
  if (param_1[5] != 0) {
    func_0x00010892483c();
    param_2 = param_1;
    func_0x000108924b84();
    func_0x000108924904();
    param_4 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x18);
  while (iVar3 != 0) {
    func_0x000108924708();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x0001089249ac();
    func_0x000108924bac();
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



/* Entry: 10891ae38; end: 10891aeaf;  */

long FUN_10891ae38(void)

{
  long extraout_x8;
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
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    func_0x000108924e88();
    func_0x000108924b14();
    unaff_x20 = extraout_x8 + unaff_x20;
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



/* Entry: 10891aeb0; end: 10891aeb3;  */

void FUN_10891aeb0(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108924a28();
  FUN_10891a780();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 10891aeb4; end: 10891aeef;  */

void FUN_10891aeb4(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108924a28();
  FUN_10891a780();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 10891aef0; end: 10891af23;  */

long FUN_10891aef0(long param_1)

{
  func_0x000107c34a34();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10891af24; end: 10891af27;  */

long FUN_10891af24(long param_1)

{
  func_0x000107c34a34();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10891af28; end: 10891af3b;  */

void FUN_10891af28(void)

{
  FUN_10891aef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891af3c; end: 10891af47;  */

undefined ** FUN_10891af3c(void)

{
  return &PTR_DAT_110a96590;
}



/* Entry: 10891af48; end: 10891afe7;  */

long * FUN_10891af48(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
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



/* Entry: 10891afe8; end: 10891afeb;  */

void FUN_10891afe8(ulong *param_1)

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



/* Entry: 10891afec; end: 10891b057;  */

void FUN_10891afec(undefined8 param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c34a2c();
  func_0x000107c34a44(&PTR_FUN_110a96270);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c34a60();
    func_0x0001089234c4();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001088f38e0();
  }
  func_0x000108924f6c();
  return;
}



/* Entry: 10891b058; end: 10891b083;  */

undefined8 FUN_10891b058(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_10891b084(param_1);
  return param_1;
}



/* Entry: 10891b084; end: 10891b0b3;  */

void FUN_10891b084(long param_1)

{
  long unaff_x19;
  
  func_0x000107c34a54();
  if (param_1 != 0) {
    FUN_10891bc38();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000107c2a5a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891b0b4; end: 10891b0b7;  */

undefined8 FUN_10891b0b4(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_10891b084(param_1);
  return param_1;
}



/* Entry: 10891b0b8; end: 10891b0cb;  */

void FUN_10891b0b8(void)

{
  FUN_10891b058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891b0cc; end: 10891b0d7;  */

undefined ** FUN_10891b0cc(void)

{
  return &PTR_DAT_110a965d8;
}



/* Entry: 10891b0d8; end: 10891b177;  */

void FUN_10891b0d8(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x000108924a84();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010891b128(*(undefined8 *)(unaff_x19 + 0x18));
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x000107c2a5a8(*(undefined8 *)(unaff_x19 + 0x20));
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



/* Entry: 10891b178; end: 10891b28b;  */

long * FUN_10891b178(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924874();
  if (param_1[5] != 0) {
    func_0x00010892483c();
    func_0x000108924b84();
    func_0x000108924904();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    func_0x0001089249ac();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    func_0x000108924a54();
    param_4 = param_1;
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



/* Entry: 10891b28c; end: 10891b2a7;  */

long FUN_10891b28c(long param_1)

{
  long extraout_x8;
  
  func_0x00010891be04();
  func_0x000108924724();
  return param_1 + extraout_x8;
}



/* Entry: 10891b2a8; end: 10891b2ab;  */

void FUN_10891b2a8(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001089234c4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010891b340();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088f38e0();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10891988c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 10891b2ac; end: 10891b843;  */

void FUN_10891b2ac(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001089234c4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010891b340();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088f38e0();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10891988c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 10891b844; end: 10891b873;  */

void FUN_10891b844(ulong *param_1,ulong *param_2)

{
  undefined1 uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  uVar1 = param_2 == param_1;
  if ((bool)uVar1) {
    return;
  }
  func_0x000107c34a38();
  FUN_10891b0d8();
  func_0x000108924aec();
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)uVar1) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001089234c4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010891b340();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088f38e0();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10891988c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 10891b874; end: 10891b883;  */

undefined1  [16] FUN_10891b874(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x000107c34a28();
  puVar1 = param_1 + 0x18;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10891b884; end: 10891bc37;  */

void FUN_10891b884(long param_1)

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
  
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_08;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891da78();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_09;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891dcd4();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891e088();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_14;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891e59c();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_15;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891e878();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891f6ac();
    }
    break;
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_10;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891f804();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_11;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891f9b4();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_17;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891fb64();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_16;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891fd5c();
    }
    break;
  default:
    goto LAB_10891bb24;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_108921548();
    }
    break;
  case 0x10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_108920280();
    }
    break;
  case 0x11:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_108921344();
    }
    break;
  case 0x12:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_108920744();
    }
    break;
  case 0x13:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_12;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_108920ab8();
    }
    break;
  case 0x14:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_13;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_108920dbc();
    }
    break;
  case 0x15:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_19;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10892115c();
    }
    break;
  case 0x16:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_18;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891ea60();
    }
    break;
  case 0x17:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891f600();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891f264();
    }
    break;
  case 0x19:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_20;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891ef30();
    }
    break;
  case 0x1a:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891f0e0();
    }
  }
  __ZdlPv();
LAB_10891bb24:
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10891bc38; end: 10891bc63;  */

undefined8 FUN_10891bc38(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_10891bc64(param_1);
  return param_1;
}



/* Entry: 10891bc64; end: 10891bcaf;  */

void FUN_10891bc64(long param_1)

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
  long unaff_x19;
  
  func_0x000107c34a54();
  if (param_1 != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(int *)(unaff_x19 + 0x40) == 0) {
    return;
  }
  switch(*(undefined4 *)(unaff_x19 + 0x40)) {
  case 4:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_08;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891da78();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_09;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891dcd4();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891e088();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_14;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891e59c();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_15;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891e878();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891f6ac();
    }
    break;
  case 10:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_10;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891f804();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_11;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891f9b4();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_17;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891fb64();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_16;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891fd5c();
    }
    break;
  default:
    goto LAB_10891bb24;
  case 0xf:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_108921548();
    }
    break;
  case 0x10:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_108920280();
    }
    break;
  case 0x11:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_108921344();
    }
    break;
  case 0x12:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_108920744();
    }
    break;
  case 0x13:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_12;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_108920ab8();
    }
    break;
  case 0x14:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_13;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_108920dbc();
    }
    break;
  case 0x15:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_19;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10892115c();
    }
    break;
  case 0x16:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_18;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891ea60();
    }
    break;
  case 0x17:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891f600();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891f264();
    }
    break;
  case 0x19:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_20;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891ef30();
    }
    break;
  case 0x1a:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10891bb24;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891f0e0();
    }
  }
  __ZdlPv();
LAB_10891bb24:
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  return;
}



/* Entry: 10891bcb0; end: 10891bcb3;  */

undefined8 FUN_10891bcb0(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_10891bc64(param_1);
  return param_1;
}



/* Entry: 10891bcb4; end: 10891bcc7;  */

void FUN_10891bcb4(void)

{
  FUN_10891bc38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891bcc8; end: 10891bd2b;  */

undefined8 FUN_10891bcc8(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891bd2c; end: 10891bfdb;  */

long * FUN_10891bd2c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x00010892473c();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010892483c();
    func_0x000108924b8c();
    func_0x000108924904();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x000108924ed0();
    func_0x000108924a54();
    param_4 = param_1;
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x40);
  if (*(uint *)(unaff_x20 + 0x40) - 4 < 10) {
    func_0x000108924a08();
    param_4 = plVar2;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x00010892483c();
    func_0x000108924de4();
    func_0x000108924904();
    param_4 = plVar2;
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x40);
  if (*(uint *)(unaff_x20 + 0x40) - 0xf < 0xc) {
    func_0x000108924a08();
    param_4 = plVar2;
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



/* Entry: 10891bfdc; end: 10891c09f;  */

long FUN_10891bfdc(long param_1)

{
  long extraout_x8;
  
  FUN_10891db80();
  func_0x000108924724();
  return param_1 + extraout_x8;
}



/* Entry: 10891c0a0; end: 10891c0cf;  */

void FUN_10891c0a0(ulong *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x000108924794();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924c68();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924c68();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(ulong *)(unaff_x20 + 0x28) != 0) {
    unaff_x21[5] = *(ulong *)(unaff_x20 + 0x28);
  }
  if (*(ulong *)(unaff_x20 + 0x30) != 0) {
    unaff_x21[6] = *(ulong *)(unaff_x20 + 0x30);
  }
  func_0x0001089249b8();
  iVar1 = *(int *)(unaff_x20 + 0x40);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[8];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10891b884();
      }
      *(int *)(unaff_x21 + 8) = iVar1;
    }
    switch(iVar1) {
    case 4:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891c0a4();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_108923688();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891c0c0();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_1089236b8();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891c0d0();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_10892370c();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891c1ac();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_10892373c();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891c1bc();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_108923790();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x000108924f4c();
        func_0x00010891c218();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_1089237c0();
      break;
    case 10:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891c228();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_108923810();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891c238();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_108923864();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891c248();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_1089238b8();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891c258();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_10892390c();
      break;
    default:
      goto LAB_10891b828;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891c274();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_10892393c();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891c2d0();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_10892399c();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891c338();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_1089239cc();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891c348();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      func_0x000108923a20();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891c378();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      func_0x000108923a50();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891c3e0();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      func_0x000108923a80();
      break;
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891c400();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      func_0x000108923ab0();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891c484();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      func_0x000108923ae0();
      break;
    case 0x17:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x000108924f4c();
        func_0x00010891c508();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_108923b10();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891c518();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_108923b60();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891c528();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_108923bb4();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x000108924f4c();
        func_0x00010891c538();
        goto LAB_10891b828;
      }
      func_0x000108924ae0();
      FUN_108923c08();
    }
    unaff_x21[7] = (ulong)param_1;
  }
LAB_10891b828:
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



/* Entry: 10891c0d0; end: 10891c1ab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10891c0d0(ulong *param_1)

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
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924d18();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010890d088();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924f18();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10891e334();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_108904f3c();
        *(ulong **)(unaff_x21 + 0x28) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10890b7f0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000108924d5c();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924d18();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010890d088();
      }
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



/* Entry: 10891c1ac; end: 10891c1bb;  */

void FUN_10891c1ac(long param_1,long param_2)

{
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



/* Entry: 10891c1bc; end: 10891c217;  */

void FUN_10891c1bc(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x0001088f38e0();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_10891988c();
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



/* Entry: 10891c218; end: 10891c273;  */

void FUN_10891c218(long param_1,ulong param_2)

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



/* Entry: 10891c274; end: 10891c337;  */

void FUN_10891c274(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x000107c2a558();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      func_0x00010890d088();
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



/* Entry: 10891c338; end: 10891c347;  */

void FUN_10891c338(long param_1,long param_2)

{
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



/* Entry: 10891c348; end: 10891c377;  */

void FUN_10891c348(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000108924a28();
  func_0x000107c2a394();
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



/* Entry: 10891c378; end: 10891c3df;  */

void FUN_10891c378(ulong *param_1)

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
  func_0x000107c2a394();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924d5c();
    if (param_1 == (ulong *)0x0) {
      FUN_1088f2a98();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      func_0x000108908c94();
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



/* Entry: 10891c3e0; end: 10891c3ff;  */

void FUN_10891c3e0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
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



/* Entry: 10891c400; end: 10891c507;  */

void FUN_10891c400(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924f18();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10891e334();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        FUN_108912428();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_108910ad4();
      }
    }
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



/* Entry: 10891c508; end: 10891c547;  */

void FUN_10891c508(long param_1,ulong param_2)

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



/* Entry: 10891c548; end: 10891c923;  */

void FUN_10891c548(long param_1)

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
  
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_10;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891d9a0();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_12;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891dbfc();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891de14();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_11;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891e4c4();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891e674();
    }
    break;
  default:
    goto LAB_10891c804;
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_08;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891f758();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_13;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891f8dc();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_14;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891fa8c();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_18;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891fc3c();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_17;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10892141c();
    }
    break;
  case 0x10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_108920098();
    }
    break;
  case 0x11:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_09;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_108920444();
    }
    break;
  case 0x12:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_1089205bc();
    }
    break;
  case 0x13:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_1089208b8();
    }
    break;
  case 0x14:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_15;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_108920c9c();
    }
    break;
  case 0x15:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_16;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_108920f80();
    }
    break;
  case 0x16:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_20;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891e74c();
    }
    break;
  case 0x17:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_19;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891f33c();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891ec48();
    }
    break;
  case 0x19:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891f18c();
    }
    break;
  case 0x1a:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_21;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891ee58();
    }
    break;
  case 0x1b:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891ed20();
    }
    break;
  case 0x1c:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10891f008();
    }
  }
  __ZdlPv();
LAB_10891c804:
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10891c924; end: 10891cac7;  */

void FUN_10891c924(undefined8 param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  
  func_0x000108924924();
  func_0x000107c34a44(&PTR_FUN_110a96130);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  func_0x000108924e18();
  *(undefined4 *)(unaff_x19 + 0x40) = *(undefined4 *)(unaff_x21 + 0x40);
  if ((unaff_w22 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108924ca4();
    func_0x000107c2a26c();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((unaff_w22 >> 1 & 1) != 0) {
    func_0x000108924d10();
  }
  func_0x000108924eb8();
  if (0x18 < (uint)extraout_x8_00) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010891c9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10df70cfd)[extraout_x8_00] * 4 + 0x10891c9a8))();
  return;
}



/* Entry: 10891cac8; end: 10891caf3;  */

undefined8 FUN_10891cac8(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_10891caf4(param_1);
  return param_1;
}



/* Entry: 10891caf4; end: 10891cb3f;  */

void FUN_10891caf4(long param_1)

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
  long unaff_x19;
  
  func_0x000107c34a54();
  if (param_1 != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(int *)(unaff_x19 + 0x40) == 0) {
    return;
  }
  switch(*(undefined4 *)(unaff_x19 + 0x40)) {
  case 4:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_10;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891d9a0();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_12;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891dbfc();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891de14();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_11;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891e4c4();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891e674();
    }
    break;
  default:
    goto LAB_10891c804;
  case 10:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_08;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891f758();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_13;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891f8dc();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_14;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891fa8c();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_18;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891fc3c();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_17;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10892141c();
    }
    break;
  case 0x10:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_108920098();
    }
    break;
  case 0x11:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_09;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_108920444();
    }
    break;
  case 0x12:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_1089205bc();
    }
    break;
  case 0x13:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_1089208b8();
    }
    break;
  case 0x14:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_15;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_108920c9c();
    }
    break;
  case 0x15:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_16;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_108920f80();
    }
    break;
  case 0x16:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_20;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891e74c();
    }
    break;
  case 0x17:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_19;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891f33c();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891ec48();
    }
    break;
  case 0x19:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891f18c();
    }
    break;
  case 0x1a:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_21;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891ee58();
    }
    break;
  case 0x1b:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891ed20();
    }
    break;
  case 0x1c:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_10891c804;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_10891f008();
    }
  }
  __ZdlPv();
LAB_10891c804:
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  return;
}



/* Entry: 10891cb40; end: 10891cb43;  */

undefined8 FUN_10891cb40(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_10891caf4(param_1);
  return param_1;
}



/* Entry: 10891cb44; end: 10891cb57;  */

void FUN_10891cb44(void)

{
  FUN_10891cac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891cb58; end: 10891cbbf;  */

undefined8 FUN_10891cb58(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891cbc0; end: 10891cc0f;  */

void FUN_10891cbc0(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x000108924a84();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x000108924c40();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_1088bf358(unaff_x19[4]);
    }
  }
  unaff_x19[5] = 0;
  unaff_x19[6] = 0;
  FUN_10891c548();
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
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10891cc10; end: 10891ced3;  */

long * FUN_10891cc10(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x00010892473c();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010892483c();
    func_0x000108924b8c();
    func_0x000108924904();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x000108924ed0();
    func_0x000108924a54();
    param_4 = param_1;
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x40);
  uVar1 = *(uint *)(unaff_x20 + 0x40) - 4;
  if ((uVar1 < 10) && ((0x3dfU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    func_0x000108924a08();
    param_4 = plVar2;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x00010892483c();
    func_0x000108924de4();
    func_0x000108924904();
    param_4 = plVar2;
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x40);
  if (*(uint *)(unaff_x20 + 0x40) - 0xf < 0xe) {
    func_0x000108924a08();
    param_4 = plVar2;
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



/* Entry: 10891ced4; end: 10891ced7;  */

void FUN_10891ced4(ulong *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x000108924794();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924c68();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924c68();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(ulong *)(unaff_x20 + 0x28) != 0) {
    unaff_x21[5] = *(ulong *)(unaff_x20 + 0x28);
  }
  if (*(ulong *)(unaff_x20 + 0x30) != 0) {
    unaff_x21[6] = *(ulong *)(unaff_x20 + 0x30);
  }
  func_0x0001089249b8();
  iVar1 = *(int *)(unaff_x20 + 0x40);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[8];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10891c548();
      }
      *(int *)(unaff_x21 + 8) = iVar1;
    }
    switch(iVar1) {
    case 4:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d40c();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923c58();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d41c();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923cac();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d42c();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_1088f2b4c();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d4ac();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923d00();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d4bc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923d54();
      break;
    default:
      goto LAB_10891d3f0;
    case 10:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x000108924f4c();
        func_0x00010891d4cc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923da8();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d4dc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923df8();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d4ec();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923e4c();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d4fc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923ea0();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d518();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      func_0x000108923ef8();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d574();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      func_0x000108923f58();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d5dc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      func_0x000108923fcc();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d638();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      func_0x00010892402c();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d694();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      func_0x000108924088();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d6fc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924104();
      break;
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d71c();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924160();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d784();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924190();
      break;
    case 0x17:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d794();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_1089241e4();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d894();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924298();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d8a4();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_1089242ec();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d8b4();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924340();
      break;
    case 0x1b:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d8c4();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924394();
      break;
    case 0x1c:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d920();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_1089243f4();
    }
    unaff_x21[7] = (ulong)param_1;
  }
LAB_10891d3f0:
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



/* Entry: 10891ced8; end: 10891d40b;  */

void FUN_10891ced8(ulong *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x000108924794();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924c68();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924c68();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(ulong *)(unaff_x20 + 0x28) != 0) {
    unaff_x21[5] = *(ulong *)(unaff_x20 + 0x28);
  }
  if (*(ulong *)(unaff_x20 + 0x30) != 0) {
    unaff_x21[6] = *(ulong *)(unaff_x20 + 0x30);
  }
  func_0x0001089249b8();
  iVar1 = *(int *)(unaff_x20 + 0x40);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[8];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10891c548();
      }
      *(int *)(unaff_x21 + 8) = iVar1;
    }
    switch(iVar1) {
    case 4:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d40c();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923c58();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d41c();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923cac();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d42c();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_1088f2b4c();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d4ac();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923d00();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d4bc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923d54();
      break;
    default:
      goto LAB_10891d3f0;
    case 10:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x000108924f4c();
        func_0x00010891d4cc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923da8();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d4dc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923df8();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d4ec();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923e4c();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d4fc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923ea0();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d518();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      func_0x000108923ef8();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d574();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      func_0x000108923f58();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d5dc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      func_0x000108923fcc();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d638();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      func_0x00010892402c();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d694();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      func_0x000108924088();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d6fc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924104();
      break;
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d71c();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924160();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d784();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924190();
      break;
    case 0x17:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d794();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_1089241e4();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d894();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924298();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d8a4();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_1089242ec();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d8b4();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924340();
      break;
    case 0x1b:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d8c4();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924394();
      break;
    case 0x1c:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d920();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_1089243f4();
    }
    unaff_x21[7] = (ulong)param_1;
  }
LAB_10891d3f0:
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



/* Entry: 10891d40c; end: 10891d42b;  */

void FUN_10891d40c(long param_1,long param_2)

{
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



/* Entry: 10891d42c; end: 10891d4ab;  */

void FUN_10891d42c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x000108924794();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924d18();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010890d088();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924d18();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010890d088();
      }
    }
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



/* Entry: 10891d4ac; end: 10891d517;  */

void FUN_10891d4ac(long param_1,long param_2)

{
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



/* Entry: 10891d518; end: 10891d637;  */

void FUN_10891d518(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x000107c2a558();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      func_0x00010890d088();
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



/* Entry: 10891d638; end: 10891d693;  */

void FUN_10891d638(ulong *param_1,long param_2)

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



/* Entry: 10891d694; end: 10891d6fb;  */

void FUN_10891d694(ulong *param_1)

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
  func_0x000107c2a394();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924d5c();
    if (param_1 == (ulong *)0x0) {
      FUN_1088f2a98();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      func_0x000108908c94();
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



/* Entry: 10891d6fc; end: 10891d71b;  */

void FUN_10891d6fc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
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



/* Entry: 10891d71c; end: 10891d783;  */

void FUN_10891d71c(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_108904da8();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      func_0x000107c3058c();
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



/* Entry: 10891d784; end: 10891d793;  */

void FUN_10891d784(long param_1,long param_2)

{
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



/* Entry: 10891d794; end: 10891d893;  */

void FUN_10891d794(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong extraout_x8;
  
  puVar5 = (ulong *)param_1[1];
  puVar3 = puVar5;
  if (((ulong)puVar5 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  uVar4 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar4 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  puVar2 = param_1;
  if (lVar6 != 0) {
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
    }
    puVar2 = param_1 + 3;
    func_0x000107c30248(puVar2,uVar4,puVar5);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108924c70();
      if (puVar2 == (ulong *)0x0) {
        func_0x000108924d18();
        param_1[4] = (ulong)puVar2;
      }
      else {
        func_0x00010890d088();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (ulong *)param_1[5];
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_108915788();
        param_1[5] = (ulong)puVar2;
      }
      else {
        FUN_1089136f4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000108924d5c();
      if (puVar2 == (ulong *)0x0) {
        FUN_108915a40();
        param_1[6] = (ulong)puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_108927928();
      }
    }
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089248e8();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10891d894; end: 10891d8c3;  */

void FUN_10891d894(long param_1,long param_2)

{
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



/* Entry: 10891d8c4; end: 10891d91f;  */

void FUN_10891d8c4(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_108923398();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_10891a070();
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



/* Entry: 10891d920; end: 10891d92f;  */

void FUN_10891d920(long param_1,long param_2)

{
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



/* Entry: 10891d930; end: 10891d99f;  */

void FUN_10891d930(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  uVar3 = param_2 == param_1;
  if ((bool)uVar3) {
    return;
  }
  func_0x000107c34a38();
  FUN_10891cbc0();
  func_0x000108924aec();
  func_0x000108924794();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)uVar3) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924c68();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924c68();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(ulong *)(unaff_x20 + 0x28) != 0) {
    unaff_x21[5] = *(ulong *)(unaff_x20 + 0x28);
  }
  if (*(ulong *)(unaff_x20 + 0x30) != 0) {
    unaff_x21[6] = *(ulong *)(unaff_x20 + 0x30);
  }
  func_0x0001089249b8();
  iVar1 = *(int *)(unaff_x20 + 0x40);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[8];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10891c548();
      }
      *(int *)(unaff_x21 + 8) = iVar1;
    }
    switch(iVar1) {
    case 4:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d40c();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923c58();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d41c();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923cac();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d42c();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_1088f2b4c();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d4ac();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923d00();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d4bc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923d54();
      break;
    default:
      goto LAB_10891d3f0;
    case 10:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x000108924f4c();
        func_0x00010891d4cc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923da8();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d4dc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923df8();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d4ec();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923e4c();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d4fc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108923ea0();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d518();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      func_0x000108923ef8();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d574();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      func_0x000108923f58();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d5dc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      func_0x000108923fcc();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d638();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      func_0x00010892402c();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d694();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      func_0x000108924088();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d6fc();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924104();
      break;
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d71c();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924160();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d784();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924190();
      break;
    case 0x17:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d794();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_1089241e4();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d894();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924298();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d8a4();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_1089242ec();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        func_0x00010891d8b4();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924340();
      break;
    case 0x1b:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d8c4();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_108924394();
      break;
    case 0x1c:
      if (iVar2 == iVar1) {
        func_0x000108924864();
        FUN_10891d920();
        goto LAB_10891d3f0;
      }
      func_0x000108924ae0();
      FUN_1089243f4();
    }
    unaff_x21[7] = (ulong)param_1;
  }
LAB_10891d3f0:
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



/* Entry: 10891d9a0; end: 10891d9c3;  */

undefined8 FUN_10891d9a0(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891d9c4; end: 10891d9d7;  */

void FUN_10891d9c4(void)

{
  FUN_10891d9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891d9d8; end: 10891da47;  */

undefined ** FUN_10891d9d8(void)

{
  return &PTR_DAT_110a966a8;
}



/* Entry: 10891da48; end: 10891da77;  */

void FUN_10891da48(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891d9e4();
  func_0x000108924aec();
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



/* Entry: 10891da78; end: 10891da9b;  */

undefined8 FUN_10891da78(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891da9c; end: 10891dae3;  */

undefined8 * FUN_10891da9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a95410;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  FUN_10891c0a0(param_1,param_3);
  return param_1;
}



/* Entry: 10891dae4; end: 10891daf7;  */

void FUN_10891dae4(void)

{
  FUN_10891da78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891daf8; end: 10891db17;  */

undefined ** FUN_10891daf8(void)

{
  return &PTR_DAT_110a966e0;
}



/* Entry: 10891db18; end: 10891db7f;  */

long * FUN_10891db18(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924874();
  if (param_1[2] != 0) {
    func_0x00010892483c();
    func_0x000108924b84();
    func_0x000108924904();
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



/* Entry: 10891db80; end: 10891dbcb;  */

ulong FUN_10891db80(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 10891dbcc; end: 10891dbfb;  */

void FUN_10891dbcc(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891db04();
  func_0x000108924aec();
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
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



/* Entry: 10891dbfc; end: 10891dc1f;  */

undefined8 FUN_10891dbfc(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891dc20; end: 10891dc33;  */

void FUN_10891dc20(void)

{
  FUN_10891dbfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891dc34; end: 10891dca3;  */

undefined ** FUN_10891dc34(void)

{
  return &PTR_DAT_110a96720;
}



/* Entry: 10891dca4; end: 10891dcd3;  */

void FUN_10891dca4(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891dc40();
  func_0x000108924aec();
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



/* Entry: 10891dcd4; end: 10891dcf7;  */

undefined8 FUN_10891dcd4(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891dcf8; end: 10891dd0b;  */

void FUN_10891dcf8(void)

{
  FUN_10891dcd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891dd0c; end: 10891dd7b;  */

undefined ** FUN_10891dd0c(void)

{
  return &PTR_DAT_110a96760;
}



/* Entry: 10891dd7c; end: 10891ddab;  */

void FUN_10891dd7c(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891dd18();
  func_0x000108924aec();
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



/* Entry: 10891ddac; end: 10891de13;  */

void FUN_10891ddac(undefined8 param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  uint unaff_w22;
  
  func_0x000108924924();
  func_0x000107c34a44(&PTR_DAT_110a95fa0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  func_0x000108924e18();
  if ((unaff_w22 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108924ca4();
    func_0x000107c2a558();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((unaff_w22 >> 1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108924e0c();
    func_0x000107c2a558();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  return;
}


