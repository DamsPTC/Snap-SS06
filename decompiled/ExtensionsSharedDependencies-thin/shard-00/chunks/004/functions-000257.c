/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00517190; end: 005171ab;  */

void FUN_00517190(long param_1,long param_2)

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
    func_0x00532e08(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_0051730c(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_0051aa64();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 005171ac; end: 005171db;  */

long * FUN_005171ac(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 005171dc; end: 0051726b;  */

void FUN_005171dc(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname + 8;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x30);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009fea90;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(char **)(pcVar1 + 0x20) = param_1;
  *(dword *)(pcVar1 + 0x28) = 0;
  return;
}



/* Entry: 0051726c; end: 0051730b;  */

char * FUN_0051726c(char *param_1,long param_2)

{
  char *pcVar1;
  qword qVar2;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x28);
  }
  *(char **)(pcVar1 + 8) = param_1;
  *(undefined ***)pcVar1 = &PTR_FUN_009fe9f0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_0054a3dc(pcVar1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(pcVar1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(pcVar1 + 0x14) = 0;
  qVar2 = param_2 + 0x18;
  func_0x00487c6c(qVar2,param_1);
  *(qword *)(pcVar1 + 0x18) = qVar2;
  if ((*(qword *)(pcVar1 + 0x10) & 1) == 0) {
    param_1 = (char *)0x0;
  }
  else {
    FUN_0051730c(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  *(char **)(pcVar1 + 0x20) = param_1;
  return pcVar1;
}



/* Entry: 0051730c; end: 0051734f;  */

undefined8 * FUN_0051730c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  if (param_1 == 0) {
    lVar2 = 0x20;
    __Znwm();
  }
  else {
    lVar2 = param_1;
    func_0x005510c4(param_1,0x20);
  }
  lVar4 = param_2;
  func_0x0051aec8();
  *(long *)(lVar2 + 8) = param_1;
  *unaff_x19 = &PTR_DAT_009ff220;
  if ((*(ulong *)(lVar4 + 8) & 1) != 0) {
    func_0x0051ae74();
  }
  *(undefined4 *)(unaff_x19 + 3) = 0;
  iVar1 = *(int *)(param_2 + 0x1c);
  *(int *)((long)unaff_x19 + 0x1c) = iVar1;
  if (9 < iVar1 - 1U) {
    return unaff_x19;
  }
  puVar3 = (undefined8 *)(param_2 + 0x10);
  switch(iVar1) {
  case 1:
    *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)puVar3;
    break;
  default:
    unaff_x19[2] = *puVar3;
    break;
  case 3:
    *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)puVar3;
    break;
  case 4:
    *(undefined1 *)(unaff_x19 + 2) = *(undefined1 *)puVar3;
    break;
  case 5:
    func_0x00487c6c(puVar3,unaff_x20);
    goto code_r0x0051a6bc;
  case 6:
    func_0x0051ad3c(unaff_x20,*puVar3);
    puVar3 = unaff_x20;
    goto code_r0x0051a6bc;
  case 7:
    func_0x0051ad80(unaff_x20,*puVar3);
    puVar3 = unaff_x20;
    goto code_r0x0051a6bc;
  case 9:
    unaff_x19[2] = *puVar3;
    break;
  case 10:
    FUN_0051adc0(unaff_x20,*puVar3);
    puVar3 = unaff_x20;
code_r0x0051a6bc:
    unaff_x19[2] = puVar3;
  }
  return unaff_x19;
}



/* Entry: 00517350; end: 005173d7;  */

void FUN_00517350(void)

{
  return;
}



/* Entry: 005173d8; end: 0051740b;  */

long FUN_005173d8(long param_1)

{
  func_0x00519b14();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_005191bc();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0051740c; end: 0051740f;  */

long FUN_0051740c(long param_1)

{
  func_0x00519b14();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_005191bc();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00517410; end: 00517423;  */

void FUN_00517410(void)

{
  FUN_005173d8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00517424; end: 0051742f;  */

undefined ** FUN_00517424(void)

{
  return &PTR_DAT_009fee28;
}



/* Entry: 00517430; end: 005175db;  */

void FUN_00517430(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00517474(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
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



/* Entry: 005175dc; end: 005175f7;  */

long FUN_005175dc(long param_1)

{
  long extraout_x8;
  
  FUN_00519380();
  func_0x00519ac8();
  return param_1 + extraout_x8;
}



/* Entry: 005175f8; end: 00517687;  */

void FUN_005175f8(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00519c54();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_00519778();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      FUN_00517688();
      puVar2 = puVar3;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00519c64();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 00517688; end: 00517753;  */

void FUN_00517688(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x00519c54();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  FUN_00519444();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x30);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_0051730c();
        *(ulong **)(unaff_x21 + 0x30) = puVar2;
      }
      else {
        FUN_0051aa64();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        FUN_00519928();
        *(ulong **)(unaff_x21 + 0x38) = puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_00519090();
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
  func_0x00519cdc();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00519c64();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00517754; end: 0051777f;  */

long FUN_00517754(long param_1)

{
  func_0x00519b14();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 00517780; end: 00517783;  */

long FUN_00517780(long param_1)

{
  func_0x00519b14();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 00517784; end: 00517797;  */

void FUN_00517784(void)

{
  FUN_00517754();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00517798; end: 005177a3;  */

undefined ** FUN_00517798(void)

{
  return &PTR_DAT_009fee90;
}



/* Entry: 005177a4; end: 005177d7;  */

void FUN_005177a4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00519cbc();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 005177d8; end: 005178ab;  */

long * FUN_005177d8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  int iVar4;
  long *unaff_x22;
  long *plVar5;
  int iVar6;
  
  plVar3 = param_2;
  plVar5 = param_3;
  func_0x00519b48(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar3 < 0) {
    if (unaff_x22[1] == 0) goto LAB_0051782c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar3 == 0) goto LAB_0051782c;
  func_0x00519af8();
  func_0x00519b98();
  param_2 = unaff_x22;
LAB_0051782c:
  plVar3 = param_2;
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar3 = param_3;
    FUN_0048c628();
    plVar5 = param_2;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x00487c24(param_3,plVar3);
    plVar3 = *(long **)(param_1 + 0x18);
    func_0x00519cc8();
    func_0x00487cf0(plVar3,plVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00519bd8();
    if ((long)plVar5 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      plVar5 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*param_3 - (long)plVar3 < (long)(int)plVar5) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)plVar3) + 0x10;
        iVar4 = (int)plVar5;
        plVar5 = (long *)(ulong)(uint)(iVar4 - iVar6);
        if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
        func_0x0054f690();
        lVar2 = (long)plVar3 + (long)iVar6;
        plVar3 = param_3;
        func_0x0054ed58(param_3,lVar2);
      }
      func_0x0054f690();
      return (long *)((long)plVar3 + (long)iVar4);
    }
    _memcpy(plVar3,lVar2,(ulong)plVar5 & 0xffffffff);
    return (long *)((long)plVar3 + (long)(int)plVar5);
  }
  return plVar3;
}



/* Entry: 005178ac; end: 005179a7;  */

void FUN_005178ac(long param_1)

{
  int iVar1;
  int iVar2;
  int extraout_w8;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long lVar4;
  int extraout_w9;
  long extraout_x9;
  
  lVar4 = param_1;
  func_0x00519b3c(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0048910c();
    iVar1 = (int)lVar4 + 1;
  }
  iVar2 = -9;
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00519b74();
    iVar1 = extraout_w9 + iVar1;
    iVar2 = extraout_w8;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * iVar2 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00519bcc();
    lVar4 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar4 + iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* Entry: 005179a8; end: 005179d3;  */

undefined8 FUN_005179a8(undefined8 param_1)

{
  func_0x00519b14();
  FUN_005179d4(param_1);
  return param_1;
}



/* Entry: 005179d4; end: 005179fb;  */

undefined8 FUN_005179d4(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x00532f74(param_1 + 0x40);
  FUN_00519490(param_1 + 0x28);
  func_0x00519cfc(param_1 + 0x10);
  if (extraout_x8 != 0) {
    func_0x00519c20();
  }
  return unaff_x19;
}



/* Entry: 005179fc; end: 005179ff;  */

undefined8 FUN_005179fc(undefined8 param_1)

{
  func_0x00519b14();
  FUN_005179d4(param_1);
  return param_1;
}



/* Entry: 00517a00; end: 00517a13;  */

void FUN_00517a00(void)

{
  FUN_005179a8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00517a14; end: 00517a1f;  */

undefined ** FUN_00517a14(void)

{
  return &PTR_DAT_009feef0;
}



/* Entry: 00517a20; end: 00517a87;  */

void FUN_00517a20(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    FUN_00437de0(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    FUN_00437de0(param_1 + 0x28);
  }
  FUN_00532fa8(param_1 + 0x40);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
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



/* Entry: 00517a88; end: 00517d33;  */

section * FUN_00517a88(section *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  section *psVar2;
  section *psVar3;
  ulong uVar4;
  section *psVar5;
  long lVar6;
  long extraout_x8;
  section *unaff_x19;
  long unaff_x20;
  section *unaff_x21;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  func_0x00519c44();
  if (param_1->reserved2 != 0) {
    func_0x00519b00();
    func_0x004971e4();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    func_0x00519b00();
    FUN_0048c628();
    unaff_x21 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    func_0x005199f8();
    func_0x00519cc8();
    func_0x00519a14();
    unaff_x21 = param_1;
  }
  uVar4 = (ulong)*(uint *)(unaff_x20 + 0x50);
  if (*(uint *)(unaff_x20 + 0x50) != 0) {
    func_0x00519b00();
    FUN_004d92e0();
    unaff_x21 = param_1;
  }
  iVar7 = *(int *)(unaff_x20 + 0x18);
  for (puVar8 = (undefined8 *)0x0; iVar7 != (int)puVar8;
      puVar8 = (undefined8 *)(ulong)((int)puVar8 + 1)) {
    func_0x00519a84();
    param_3 = (ulong)*(uint *)(uVar4 + 0x14);
    param_1 = (section *)((long)&MACH_HEADER.cputype + 1);
    func_0x00519a54();
    unaff_x21 = param_1;
  }
  psVar5 = (section *)(ulong)*(uint *)(unaff_x20 + 0x54);
  if (*(uint *)(unaff_x20 + 0x54) != 0) {
    func_0x00519b00();
    FUN_00517d34();
    unaff_x21 = param_1;
  }
  psVar3 = param_1;
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    func_0x005199f8();
    psVar3 = (section *)&segment_command_00000020.vmaddr;
    func_0x00487cbc();
    func_0x00519cd0();
    psVar5 = param_1;
    unaff_x21 = psVar3;
  }
  psVar2 = psVar3;
  if (*(char *)(unaff_x20 + 0x61) == '\x01') {
    func_0x005199f8();
    psVar2 = (section *)&segment_command_00000020.vmsize;
    func_0x00487cbc();
    func_0x00519a14();
    psVar5 = psVar3;
    unaff_x21 = psVar2;
  }
  func_0x00519b48(*(undefined8 *)(unaff_x20 + 0x40));
  if ((long)psVar5 < 0) {
    if (puVar8[1] == 0) goto LAB_00517bd0;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if ((int)psVar5 == 0) goto LAB_00517bd0;
  func_0x00519af8(puVar8);
  psVar2 = unaff_x19;
  func_0x00519a38();
  unaff_x21 = psVar2;
LAB_00517bd0:
  psVar5 = psVar2;
  if (*(char *)(unaff_x20 + 0x62) == '\x01') {
    func_0x005199f8();
    psVar5 = (section *)&segment_command_00000020.filesize;
    func_0x00487cbc(0x50,psVar2);
    func_0x00519a14();
    unaff_x21 = psVar5;
  }
  psVar3 = psVar5;
  if (*(char *)(unaff_x20 + 99) == '\x01') {
    func_0x005199f8();
    psVar3 = (section *)&segment_command_00000020.maxprot;
    func_0x00487cbc(0x58,psVar5);
    func_0x00519a14();
    unaff_x21 = psVar3;
  }
  psVar5 = psVar3;
  if (*(char *)(unaff_x20 + 100) == '\x01') {
    func_0x005199f8();
    psVar5 = (section *)&segment_command_00000020.nsects;
    func_0x00487cbc(0x60,psVar3);
    func_0x00519a14();
    unaff_x21 = psVar5;
  }
  psVar3 = psVar5;
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    func_0x005199f8();
    psVar3 = &section_00000068;
    func_0x00487cbc(0x68,psVar5);
    func_0x00519cd0();
    unaff_x21 = psVar3;
  }
  psVar5 = (section *)(ulong)*(uint *)(unaff_x20 + 0x70);
  if (*(uint *)(unaff_x20 + 0x70) != 0) {
    func_0x00519b00();
    func_0x00517d5c();
    unaff_x21 = psVar3;
  }
  psVar2 = psVar3;
  if (*(char *)(unaff_x20 + 0x65) == '\x01') {
    func_0x005199f8();
    psVar2 = (section *)section_00000068.segname;
    func_0x00487cbc();
    func_0x00519a14();
    psVar5 = psVar3;
    unaff_x21 = psVar2;
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    func_0x005199f8();
    unaff_x21 = (section *)(section_00000068.segname + 8);
    func_0x00487cbc();
    func_0x00519a2c();
    psVar5 = psVar2;
  }
  iVar9 = *(int *)(unaff_x20 + 0x30);
  for (iVar7 = 0; iVar9 != iVar7; iVar7 = iVar7 + 1) {
    func_0x00519a84();
    param_3 = (ulong)*(dword *)((long)&psVar5->addr + 4);
    unaff_x21 = (section *)((long)&MACH_HEADER.ncmds + 1);
    func_0x00519a54();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00519bd8();
    if ((long)param_3 < 0) {
      lVar6 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar6 = extraout_x8 + 8;
    }
    if ((long)(*(qword *)unaff_x19->sectname - (long)unaff_x21) < (long)(int)param_3) {
      while( true ) {
        iVar9 = ((int)*(qword *)unaff_x19->sectname - (int)unaff_x21) + 0x10;
        iVar7 = (int)param_3;
        uVar1 = iVar7 - iVar9;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar7 < iVar9) break;
        func_0x0054f690();
        unaff_x21 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (section *)((long)unaff_x21->sectname + (long)iVar7);
    }
    _memcpy(unaff_x21,lVar6,param_3 & 0xffffffff);
    return (section *)((long)unaff_x21->sectname + (long)(int)param_3);
  }
  return unaff_x21;
}



/* Entry: 00517d34; end: 00517d83;  */

void FUN_00517d34(byte *param_1)

{
  int iVar1;
  ulong uVar2;
  
  func_0x00519ab4();
  iVar1 = 0x30;
  func_0x00487cbc();
  func_0x00519d08();
  for (uVar2 = (ulong)iVar1; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *param_1 = (byte)uVar2 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)uVar2;
  return;
}



/* Entry: 00517d84; end: 00517f3f;  */

void FUN_00517d84(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  int extraout_w8;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  int extraout_w9;
  ulong uVar5;
  long extraout_x9;
  int extraout_w10;
  long extraout_x11;
  int extraout_w12;
  ulong *unaff_x21;
  long unaff_x22;
  undefined4 uVar6;
  
  uVar3 = param_1;
  func_0x00519ae0();
  while (unaff_x22 != 0) {
    uVar3 = *unaff_x21;
    func_0x00517568();
    func_0x00519bac();
    unaff_x21 = unaff_x21 + 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x30);
  puVar1 = (ulong *)(param_1 + 0x28);
  if ((uVar5 & 1) != 0) {
    puVar1 = (ulong *)(uVar5 + 7);
  }
  while (((long)iVar2 & 0x1fffffffffffffffU) != 0) {
    uVar3 = *puVar1;
    FUN_005178ac();
    func_0x00519bac();
    puVar1 = puVar1 + 1;
  }
  func_0x00519b3c(*(undefined8 *)(param_1 + 0x40));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    func_0x00519be4();
  }
  func_0x00519b54(0xfffffff7);
  func_0x00519b54();
  uVar6 = *(undefined4 *)(param_1 + 0x60);
  func_0x00519b54(((ushort)(byte)uVar6 * 2 & 0xff) +
                  (ushort)(byte)((char)((uint)uVar6 >> 0x10) * '\x02') +
                  ((ushort)(byte)((uint)uVar6 >> 8) * 2 & 0xff) +
                  (ushort)(byte)((char)((uint)uVar6 >> 0x18) * '\x02'));
  iVar2 = extraout_w10;
  if (extraout_x11 != 0) {
    iVar2 = extraout_w12;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar2 = ((uint)(extraout_w9 + (int)LZCOUNT((long)*(int *)(param_1 + 0x70)) * extraout_w8) >> 6)
            + iVar2;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x74)) * extraout_w8 + 0x280U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00519bcc();
    lVar4 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x78) = iVar2;
  return;
}



/* Entry: 00517f40; end: 00517f43;  */

void FUN_00517f40(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00519cf0();
  FUN_00518070(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  lVar2 = unaff_x20 + 0x28;
  func_0x00518080();
  func_0x00519b30(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x40);
    func_0x00532e08();
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)(unaff_x19 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x19 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x19 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x19 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x60) = 1;
  }
  if (*(char *)(unaff_x20 + 0x61) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x61) = 1;
  }
  if (*(char *)(unaff_x20 + 0x62) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x62) = 1;
  }
  if (*(char *)(unaff_x20 + 99) == '\x01') {
    *(undefined1 *)(unaff_x19 + 99) = 1;
  }
  if (*(char *)(unaff_x20 + 100) == '\x01') {
    *(undefined1 *)(unaff_x19 + 100) = 1;
  }
  if (*(char *)(unaff_x20 + 0x65) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x65) = 1;
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    *(long *)(unaff_x19 + 0x68) = *(long *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x19 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x19 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00519b88();
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



/* Entry: 00517f44; end: 0051806f;  */

void FUN_00517f44(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00519cf0();
  FUN_00518070(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  lVar2 = unaff_x20 + 0x28;
  func_0x00518080();
  func_0x00519b30(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x40);
    func_0x00532e08();
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)(unaff_x19 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x19 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x19 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x19 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x60) = 1;
  }
  if (*(char *)(unaff_x20 + 0x61) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x61) = 1;
  }
  if (*(char *)(unaff_x20 + 0x62) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x62) = 1;
  }
  if (*(char *)(unaff_x20 + 99) == '\x01') {
    *(undefined1 *)(unaff_x19 + 99) = 1;
  }
  if (*(char *)(unaff_x20 + 100) == '\x01') {
    *(undefined1 *)(unaff_x19 + 100) = 1;
  }
  if (*(char *)(unaff_x20 + 0x65) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x65) = 1;
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    *(long *)(unaff_x19 + 0x68) = *(long *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x19 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x19 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00519b88();
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



/* Entry: 00518070; end: 0051808f;  */

void FUN_00518070(long *param_1,long param_2)

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
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  plVar3 = (long *)*unaff_x25;
  func_0x0054d6a8();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x0054d694();
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 00518090; end: 0051818f;  */

undefined8 * FUN_00518090(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009fed98;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00519aa8();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_0048ece4(param_1 + 3,param_2,param_3 + 0x18);
  *(undefined4 *)(param_1 + 5) = 0;
  lVar2 = param_3 + 0x30;
  func_0x00519b1c();
  param_1[6] = lVar2;
  lVar2 = param_3 + 0x38;
  func_0x00519b1c();
  param_1[7] = lVar2;
  lVar2 = param_3 + 0x40;
  func_0x00519b1c();
  param_1[8] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_0051730c(param_2,*(undefined8 *)(param_3 + 0x48));
  }
  param_1[9] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_00519778(param_2,*(undefined8 *)(param_3 + 0x50));
  }
  param_1[10] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_00519844(param_2,*(undefined8 *)(param_3 + 0x58));
  }
  param_1[0xb] = param_2;
  uVar4 = *(undefined8 *)(param_3 + 0x68);
  uVar3 = *(undefined8 *)(param_3 + 0x60);
  uVar6 = *(undefined8 *)(param_3 + 0x78);
  uVar5 = *(undefined8 *)(param_3 + 0x70);
  param_1[0x10] = *(undefined8 *)(param_3 + 0x80);
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  return param_1;
}



/* Entry: 00518190; end: 005181bb;  */

undefined8 FUN_00518190(undefined8 param_1)

{
  func_0x00519b14();
  FUN_005181bc(param_1);
  return param_1;
}



/* Entry: 005181bc; end: 00518223;  */

undefined8 FUN_005181bc(long param_1)

{
  char in_NG;
  char in_OV;
  undefined8 unaff_x19;
  
  func_0x00532f74(param_1 + 0x30);
  func_0x00532f74(param_1 + 0x38);
  func_0x00532f74(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_0051a6d8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_005191bc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_005179a8();
  }
  __ZdlPv();
  func_0x00490d6c(param_1 + 0x18);
  if (in_NG == in_OV) {
    FUN_0048ed90(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 00518224; end: 00518227;  */

undefined8 FUN_00518224(undefined8 param_1)

{
  func_0x00519b14();
  FUN_005181bc(param_1);
  return param_1;
}



/* Entry: 00518228; end: 0051823b;  */

void FUN_00518228(void)

{
  FUN_00518190();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051823c; end: 00518247;  */

undefined ** FUN_0051823c(void)

{
  return &PTR_DAT_009fef40;
}



/* Entry: 00518248; end: 005182df;  */

void FUN_00518248(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_00532fa8(param_1 + 0x30);
  FUN_00532fa8(param_1 + 0x38);
  FUN_00532fa8(param_1 + 0x40);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_0051a738(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00517474(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_00517a20(*(undefined8 *)(param_1 + 0x58));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
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



/* Entry: 005182e0; end: 005185c3;  */

section * FUN_005182e0(section *param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  section *psVar4;
  undefined4 *puVar5;
  section *psVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long extraout_x8;
  section *unaff_x19;
  long unaff_x20;
  section *unaff_x21;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  long unaff_x22;
  int *piVar14;
  int iVar15;
  
  func_0x00519c44();
  uVar8._0_4_ = param_1->offset;
  uVar8._4_4_ = param_1->align;
  func_0x00519b48(uVar8);
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0051831c;
  }
  else if ((int)param_2 != 0) {
LAB_0051831c:
    func_0x00519af8();
    param_1 = unaff_x19;
    func_0x00519a38();
    unaff_x21 = param_1;
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_1 = (section *)((long)&MACH_HEADER.magic + 2);
    func_0x00519a54(2,*(long *)(unaff_x20 + 0x48),
                    *(undefined4 *)(*(long *)(unaff_x20 + 0x48) + 0x18));
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_1 = (section *)((long)&MACH_HEADER.magic + 3);
    func_0x00519a54(3,*(long *)(unaff_x20 + 0x50),
                    *(undefined4 *)(*(long *)(unaff_x20 + 0x50) + 0x14));
    unaff_x21 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    func_0x00519b00();
    FUN_004383e0();
    unaff_x21 = param_1;
  }
  uVar7 = *(ulong *)(unaff_x20 + 0x38) & 0xfffffffffffffffc;
  lVar9 = (long)*(char *)(uVar7 + 0x17);
  if (lVar9 < 0) {
    lVar9 = *(long *)(uVar7 + 8);
  }
  if (lVar9 != 0) {
    param_1 = unaff_x19;
    FUN_00435e9c();
    unaff_x21 = param_1;
  }
  psVar6 = (section *)(ulong)*(uint *)(unaff_x20 + 0x68);
  if (*(uint *)(unaff_x20 + 0x68) != 0) {
    func_0x00519b00();
    FUN_00517d34();
    unaff_x21 = param_1;
  }
  psVar4 = param_1;
  if (*(int *)(unaff_x20 + 0x6c) != 0) {
    func_0x005199f8();
    psVar4 = (section *)&segment_command_00000020.vmaddr;
    func_0x00487cbc();
    func_0x00519a2c();
    psVar6 = param_1;
    unaff_x21 = psVar4;
  }
  func_0x00519b48(*(undefined8 *)(unaff_x20 + 0x40));
  if ((long)psVar6 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_00518424;
  }
  else if ((int)psVar6 == 0) goto LAB_00518424;
  func_0x00519af8();
  psVar4 = unaff_x19;
  func_0x00519a38();
  unaff_x21 = psVar4;
LAB_00518424:
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    func_0x00519b00();
    FUN_005185c4();
    unaff_x21 = psVar4;
  }
  psVar6 = psVar4;
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    func_0x005199f8();
    psVar6 = (section *)&segment_command_00000020.filesize;
    func_0x00487cbc(0x50,psVar4);
    func_0x00519a14();
    unaff_x21 = psVar6;
  }
  uVar12 = *(uint *)(unaff_x20 + 0x28);
  if (uVar12 != 0) {
    func_0x005199f8();
    puVar11 = (undefined1 *)((long)psVar6->sectname + 2);
    psVar6->sectname[0] = 0x5a;
    for (; 0x7f < uVar12; uVar12 = uVar12 >> 7) {
      puVar11[-1] = (byte)uVar12 | 0x80;
      puVar11 = puVar11 + 1;
    }
    puVar11[-1] = (byte)uVar12;
    piVar14 = *(int **)(unaff_x20 + 0x20);
    piVar1 = piVar14 + *(int *)(unaff_x20 + 0x18);
    do {
      func_0x005199f8();
      uVar10 = (ulong)*piVar14;
      psVar4 = psVar6;
      while( true ) {
        unaff_x21 = (section *)((long)psVar4->sectname + 1);
        if (uVar10 < 0x80) break;
        psVar4->sectname[0] = (byte)uVar10 | 0x80;
        uVar10 = uVar10 >> 7;
        psVar4 = unaff_x21;
      }
      piVar14 = piVar14 + 1;
      psVar4->sectname[0] = (byte)uVar10;
    } while (piVar14 < piVar1);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    func_0x00519b00();
    func_0x005185ec();
    unaff_x21 = psVar6;
  }
  psVar4 = psVar6;
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    func_0x005199f8();
    psVar4 = &section_00000068;
    func_0x00487cbc(0x68,psVar6);
    func_0x00519a2c();
    unaff_x21 = psVar4;
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    func_0x00519b00();
    func_0x00517d5c();
    unaff_x21 = psVar4;
  }
  psVar6 = psVar4;
  if (*(char *)(unaff_x20 + 0x79) == '\x01') {
    func_0x005199f8();
    psVar6 = (section *)section_00000068.segname;
    func_0x00487cbc(0x78,psVar4);
    func_0x00519a14();
    unaff_x21 = psVar6;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    uVar7 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x78);
    psVar6 = (section *)&MACH_HEADER.ncmds;
    func_0x00519a54();
    unaff_x21 = psVar6;
  }
  if (*(int *)(unaff_x20 + 0x84) != 0) {
    func_0x005199f8();
    uVar3 = *(undefined4 *)(unaff_x20 + 0x84);
    puVar5 = (undefined4 *)((long)&section_00000068.size + 5);
    func_0x00487cbc(0x95,psVar6);
    unaff_x21 = (section *)(puVar5 + 1);
    *puVar5 = uVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00519bd8();
    if ((long)uVar7 < 0) {
      lVar9 = *(long *)(extraout_x8 + 8);
      uVar7 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar9 = extraout_x8 + 8;
    }
    if ((long)(*(qword *)unaff_x19->sectname - (long)unaff_x21) < (long)(int)uVar7) {
      while( true ) {
        iVar15 = ((int)*(qword *)unaff_x19->sectname - (int)unaff_x21) + 0x10;
        iVar13 = (int)uVar7;
        uVar2 = iVar13 - iVar15;
        uVar7 = (ulong)uVar2;
        if (uVar2 == 0 || iVar13 < iVar15) break;
        func_0x0054f690();
        unaff_x21 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (section *)((long)unaff_x21->sectname + (long)iVar13);
    }
    _memcpy(unaff_x21,lVar9,uVar7 & 0xffffffff);
    return (section *)((long)unaff_x21->sectname + (long)(int)uVar7);
  }
  return unaff_x21;
}



/* Entry: 005185c4; end: 00518613;  */

void FUN_005185c4(byte *param_1)

{
  int iVar1;
  ulong uVar2;
  
  func_0x00519ab4();
  iVar1 = 0x48;
  func_0x00487cbc();
  func_0x00519d08();
  for (uVar2 = (ulong)iVar1; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *param_1 = (byte)uVar2 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)uVar2;
  return;
}



/* Entry: 00518614; end: 00518847;  */

void FUN_00518614(long param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_w8;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar4;
  long extraout_x9;
  long lVar5;
  int iVar6;
  
  lVar4 = 0;
  lVar3 = 0;
  for (lVar5 = (long)*(int *)(param_1 + 0x18); lVar5 != 0; lVar5 = lVar5 + -1) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x20) + (lVar4 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar3;
    lVar4 = lVar4 + 0x100000000;
  }
  iVar2 = (int)lVar3;
  if (lVar3 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar2 + ((int)LZCOUNT((long)iVar2) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x28) = iVar2;
  lVar3 = param_1;
  func_0x00519b3c(*(undefined8 *)(param_1 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    func_0x00519c8c();
  }
  func_0x00519b3c(*(undefined8 *)(param_1 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x00487c3c();
    func_0x00519c8c();
  }
  func_0x00519b3c(*(undefined8 *)(param_1 + 0x40));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    func_0x00519c8c();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_00517174(*(undefined8 *)(param_1 + 0x48));
      func_0x00519c8c();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_005175dc(*(undefined8 *)(param_1 + 0x50));
      func_0x00519c8c();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x58);
      FUN_00517d84();
      func_0x00519ac8();
      iVar6 = iVar6 + iVar2 + extraout_w8 + 2;
    }
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    iVar6 = ((int)LZCOUNT(*(long *)(param_1 + 0x60)) * -9 + 0x2c0U >> 6) + iVar6;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar6 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x68)) * -9 + 0x2c0U >> 6) + iVar6;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    iVar6 = iVar6 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x6c)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar6 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x70)) * -9 + 0x2c0U >> 6) + iVar6;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    iVar6 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x74)) * -9 + 0x2c0U >> 6) + iVar6;
  }
  iVar2 = iVar6 + (uint)*(byte *)(param_1 + 0x78) * 2 + (uint)*(byte *)(param_1 + 0x79) * 2;
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x7c)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x80)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar2 = iVar2 + 6;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00519bcc();
    lVar3 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 00518848; end: 0051884b;  */

void FUN_00518848(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00519c54();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_0048ebf4();
  func_0x00519b30(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x00532e08();
  }
  func_0x00519b30(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x38);
    func_0x00532e08();
  }
  func_0x00519b30(*(undefined8 *)(unaff_x20 + 0x40));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x40);
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_0051730c();
        *(ulong **)(unaff_x21 + 0x48) = puVar2;
      }
      else {
        FUN_0051aa64();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x50);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_00519778();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
      }
      else {
        FUN_00517688();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x58);
      if (puVar2 == (ulong *)0x0) {
        FUN_00519844();
        *(ulong **)(unaff_x21 + 0x58) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_00517f44();
      }
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
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  if (*(char *)(unaff_x20 + 0x79) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x79) = 1;
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    *(int *)(unaff_x21 + 0x80) = *(int *)(unaff_x20 + 0x80);
  }
  if (*(int *)(unaff_x20 + 0x84) != 0) {
    *(int *)(unaff_x21 + 0x84) = *(int *)(unaff_x20 + 0x84);
  }
  func_0x00519cdc();
  if ((extraout_x8_02 & 1) == 0) {
    return;
  }
  func_0x00519c64();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 0051884c; end: 00518a1f;  */

void FUN_0051884c(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00519c54();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_0048ebf4();
  func_0x00519b30(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x00532e08();
  }
  func_0x00519b30(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x38);
    func_0x00532e08();
  }
  func_0x00519b30(*(undefined8 *)(unaff_x20 + 0x40));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x40);
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_0051730c();
        *(ulong **)(unaff_x21 + 0x48) = puVar2;
      }
      else {
        FUN_0051aa64();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x50);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_00519778();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
      }
      else {
        FUN_00517688();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x58);
      if (puVar2 == (ulong *)0x0) {
        FUN_00519844();
        *(ulong **)(unaff_x21 + 0x58) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_00517f44();
      }
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
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  if (*(char *)(unaff_x20 + 0x79) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x79) = 1;
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    *(int *)(unaff_x21 + 0x80) = *(int *)(unaff_x20 + 0x80);
  }
  if (*(int *)(unaff_x20 + 0x84) != 0) {
    *(int *)(unaff_x21 + 0x84) = *(int *)(unaff_x20 + 0x84);
  }
  func_0x00519cdc();
  if ((extraout_x8_02 & 1) == 0) {
    return;
  }
  func_0x00519c64();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00518a20; end: 00518a4b;  */

undefined8 FUN_00518a20(undefined8 param_1)

{
  func_0x00519b14();
  FUN_00518a4c(param_1);
  return param_1;
}



/* Entry: 00518a4c; end: 00518a73;  */

undefined8 FUN_00518a4c(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x00532f74(param_1 + 0x28);
  func_0x00519cfc(param_1 + 0x10);
  if (extraout_x8 != 0) {
    func_0x00519c20();
  }
  return unaff_x19;
}



/* Entry: 00518a74; end: 00518a77;  */

undefined8 FUN_00518a74(undefined8 param_1)

{
  func_0x00519b14();
  FUN_00518a4c(param_1);
  return param_1;
}



/* Entry: 00518a78; end: 00518a8b;  */

void FUN_00518a78(void)

{
  FUN_00518a20();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00518a8c; end: 00518a97;  */

undefined ** FUN_00518a8c(void)

{
  return &PTR_DAT_009fef80;
}



/* Entry: 00518a98; end: 00518adf;  */

void FUN_00518a98(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    FUN_00437de0(param_1 + 0x10);
  }
  FUN_00532fa8(param_1 + 0x28);
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



/* Entry: 00518ae0; end: 00518ba3;  */

long * FUN_00518ae0(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  int iVar5;
  long *unaff_x22;
  int iVar6;
  
  plVar2 = param_2;
  plVar4 = param_3;
  func_0x00519b48(*(undefined8 *)(param_1 + 0x28));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)unaff_x22[1];
    if (plVar2 == (long *)0x0) goto LAB_00518b38;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_00518b38;
  func_0x00519af8();
  func_0x00519b98();
  param_2 = unaff_x22;
LAB_00518b38:
  iVar6 = *(int *)(param_1 + 0x18);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00519a84();
    plVar4 = (long *)(ulong)*(uint *)((long)plVar2 + 0x14);
    param_2 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x00519ac0();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00519bd8();
    if ((long)plVar4 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      plVar4 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar4) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)plVar4;
        plVar4 = (long *)(ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x0054f690();
        puVar1 = (undefined1 *)((long)param_2 + (long)iVar6);
        param_2 = param_3;
        func_0x0054ed58(param_3,puVar1);
      }
      func_0x0054f690();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar3,(ulong)plVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar4);
  }
  return param_2;
}



/* Entry: 00518ba4; end: 00518c23;  */

long FUN_00518ba4(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  lVar1 = param_1;
  func_0x00519ae0();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_00516b68();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00519b3c(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048910c();
    func_0x00519be4();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00519bcc();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 00518c24; end: 00518c8b;  */

void FUN_00518c24(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00519cf0();
  if (*(int *)(param_2 + 0x18) != 0) {
    param_1 = (ulong *)(unaff_x19 + 0x10);
    param_2 = unaff_x20 + 0x10;
    func_0x0054d484();
  }
  func_0x00519b30(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x00532e08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00519b88();
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



/* Entry: 00518c8c; end: 00518cb7;  */

undefined8 FUN_00518c8c(undefined8 param_1)

{
  func_0x00519b14();
  FUN_00518cb8(param_1);
  return param_1;
}



/* Entry: 00518cb8; end: 00518cfb;  */

void FUN_00518cb8(long param_1)

{
  func_0x00532f74(param_1 + 0x10);
  func_0x00532f74(param_1 + 0x18);
  func_0x00532f74(param_1 + 0x20);
  func_0x00532f74(param_1 + 0x28);
  if (*(int *)(param_1 + 0x44) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}



/* Entry: 00518cfc; end: 00518cff;  */

undefined8 FUN_00518cfc(undefined8 param_1)

{
  func_0x00519b14();
  FUN_00518cb8(param_1);
  return param_1;
}



/* Entry: 00518d00; end: 00518d13;  */

void FUN_00518d00(void)

{
  FUN_00518c8c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00518d14; end: 00518d1f;  */

undefined ** FUN_00518d14(void)

{
  return &PTR_DAT_009fefc8;
}



/* Entry: 00518d20; end: 00518d6f;  */

void FUN_00518d20(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00519cbc();
  FUN_00532fa8(unaff_x19 + 0x18);
  FUN_00532fa8(unaff_x19 + 0x20);
  FUN_00532fa8(unaff_x19 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined4 *)(unaff_x19 + 0x44) = 0;
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



/* Entry: 00518d70; end: 00518f7f;  */

qword * FUN_00518d70(qword *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  qword *pqVar2;
  qword *pqVar3;
  qword *pqVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  qword *unaff_x19;
  long unaff_x20;
  qword *unaff_x21;
  int iVar7;
  long unaff_x22;
  int iVar8;
  
  func_0x00519c44();
  pqVar4 = (qword *)(ulong)*(uint *)(param_1 + 6);
  if (*(uint *)(param_1 + 6) != 0) {
    func_0x00519b00();
    func_0x004971e4();
    unaff_x21 = param_1;
  }
  pqVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    func_0x005199f8();
    pqVar2 = (qword *)&MACH_HEADER.ncmds;
    func_0x00487cbc();
    func_0x00519a2c();
    pqVar4 = param_1;
    unaff_x21 = pqVar2;
  }
  func_0x00519b48(*(undefined8 *)(unaff_x20 + 0x10));
  if ((long)pqVar4 < 0) {
    pqVar4 = (qword *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_00518de0;
  }
  else if ((int)pqVar4 != 0) {
LAB_00518de0:
    func_0x00519af8();
    pqVar4 = (qword *)((long)&MACH_HEADER.magic + 3);
    pqVar2 = unaff_x19;
    func_0x00519a38();
    unaff_x21 = pqVar2;
  }
  func_0x00519b48(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)pqVar4 < 0) {
    pqVar4 = (qword *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_00518e20;
  }
  else if ((int)pqVar4 != 0) {
LAB_00518e20:
    func_0x00519af8();
    pqVar4 = (qword *)&MACH_HEADER.cputype;
    pqVar2 = unaff_x19;
    func_0x00519a38();
    unaff_x21 = pqVar2;
  }
  pqVar3 = pqVar2;
  if (*(int *)(unaff_x20 + 0x44) == 5) {
    func_0x005199f8();
    pqVar3 = (qword *)segment_command_00000020.segname;
    func_0x00487cbc();
    func_0x00519a2c();
    pqVar4 = pqVar2;
    unaff_x21 = pqVar3;
  }
  func_0x00519b48(*(undefined8 *)(unaff_x20 + 0x20));
  if ((long)pqVar4 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_00518e9c;
  }
  else if ((int)pqVar4 != 0) {
LAB_00518e9c:
    func_0x00519af8();
    pqVar3 = unaff_x19;
    func_0x00519a38();
    unaff_x21 = pqVar3;
  }
  uVar5 = (ulong)*(uint *)(unaff_x20 + 0x38);
  if (*(uint *)(unaff_x20 + 0x38) != 0) {
    func_0x00519b00();
    func_0x0048c680();
    unaff_x21 = pqVar3;
  }
  func_0x00519b48(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)uVar5 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_00518f0c;
  }
  else if ((int)uVar5 == 0) goto LAB_00518f0c;
  func_0x00519af8();
  pqVar3 = unaff_x19;
  func_0x00519a38();
  unaff_x21 = pqVar3;
LAB_00518f0c:
  if (*(int *)(unaff_x20 + 0x44) == 9) {
    func_0x005199f8();
    unaff_x21 = &segment_command_00000020.fileoff;
    func_0x00487cbc(0x48,pqVar3);
    func_0x00519a14();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00519bd8();
  if ((long)param_3 < 0) {
    lVar6 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar6 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= (long)(*unaff_x19 - (long)unaff_x21)) {
    _memcpy(unaff_x21,lVar6,param_3 & 0xffffffff);
    return (qword *)((long)unaff_x21 + (long)(int)param_3);
  }
  while( true ) {
    iVar8 = ((int)*unaff_x19 - (int)unaff_x21) + 0x10;
    iVar7 = (int)param_3;
    uVar1 = iVar7 - iVar8;
    param_3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar7 < iVar8) break;
    func_0x0054f690();
    unaff_x21 = unaff_x19;
    func_0x0054ed58();
  }
  func_0x0054f690();
  return (qword *)((long)unaff_x21 + (long)iVar7);
}



/* Entry: 00518f80; end: 0051908b;  */

long FUN_00518f80(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar2;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00519b3c(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    FUN_0048910c();
    lVar3 = lVar2 + 1;
  }
  func_0x00519b3c(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048910c();
    func_0x00519be4();
  }
  func_0x00519b3c(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048910c();
    func_0x00519be4();
  }
  func_0x00519b3c(*(undefined8 *)(param_1 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048910c();
    func_0x00519be4();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x00519b74(0xfffffff7);
    lVar3 = extraout_x9 + lVar3;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    func_0x00519a68();
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    func_0x00519b74();
    lVar3 = extraout_x9_00 + lVar3;
  }
  if (*(int *)(param_1 + 0x44) == 9) {
    lVar3 = lVar3 + 2;
  }
  else if (*(int *)(param_1 + 0x44) == 5) {
    func_0x00519c28();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00519bcc();
    lVar2 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar2 = *(long *)(extraout_x9_01 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x40) = (int)lVar3;
  return lVar3;
}



/* Entry: 0051908c; end: 0051908f;  */

void FUN_0051908c(ulong *param_1,long param_2)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00519cf0();
  func_0x00519b30(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x00532e08();
  }
  func_0x00519b30(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x00532e08();
  }
  func_0x00519b30(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x00532e08();
  }
  func_0x00519b30(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x00532e08();
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    *(int *)(unaff_x19 + 0x34) = *(int *)(unaff_x20 + 0x34);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  iVar1 = *(int *)(unaff_x20 + 0x44);
  if (iVar1 != 0) {
    if (*(int *)(unaff_x19 + 0x44) != iVar1) {
      *(int *)(unaff_x19 + 0x44) = iVar1;
    }
    if (iVar1 == 9) {
      *(undefined1 *)(unaff_x19 + 0x3c) = *(undefined1 *)(unaff_x20 + 0x3c);
    }
    else if (iVar1 == 5) {
      *(undefined4 *)(unaff_x19 + 0x3c) = *(undefined4 *)(unaff_x20 + 0x3c);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00519b88();
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



/* Entry: 00519090; end: 005191bb;  */

void FUN_00519090(ulong *param_1,long param_2)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00519cf0();
  func_0x00519b30(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x00532e08();
  }
  func_0x00519b30(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x00532e08();
  }
  func_0x00519b30(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x00532e08();
  }
  func_0x00519b30(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00519b24();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x00532e08();
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    *(int *)(unaff_x19 + 0x34) = *(int *)(unaff_x20 + 0x34);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  iVar1 = *(int *)(unaff_x20 + 0x44);
  if (iVar1 != 0) {
    if (*(int *)(unaff_x19 + 0x44) != iVar1) {
      *(int *)(unaff_x19 + 0x44) = iVar1;
    }
    if (iVar1 == 9) {
      *(undefined1 *)(unaff_x19 + 0x3c) = *(undefined1 *)(unaff_x20 + 0x3c);
    }
    else if (iVar1 == 5) {
      *(undefined4 *)(unaff_x19 + 0x3c) = *(undefined4 *)(unaff_x20 + 0x3c);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00519b88();
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



/* Entry: 005191bc; end: 005191e7;  */

undefined8 FUN_005191bc(undefined8 param_1)

{
  func_0x00519b14();
  FUN_005191e8(param_1);
  return param_1;
}



/* Entry: 005191e8; end: 00519227;  */

undefined8 FUN_005191e8(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_0051a6d8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00518c8c();
  }
  __ZdlPv();
  func_0x00519cfc(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x00519c20();
  }
  return unaff_x19;
}



/* Entry: 00519228; end: 0051922b;  */

undefined8 FUN_00519228(undefined8 param_1)

{
  func_0x00519b14();
  FUN_005191e8(param_1);
  return param_1;
}



/* Entry: 0051922c; end: 0051923f;  */

void FUN_0051922c(void)

{
  FUN_005191bc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00519240; end: 0051924b;  */

undefined ** FUN_00519240(void)

{
  return &PTR_DAT_009ff028;
}



/* Entry: 0051924c; end: 0051937f;  */

segment_command *
FUN_0051924c(segment_command *param_1,segment_command *param_2,segment_command *param_3)

{
  qword *pqVar1;
  uint uVar2;
  dword *pdVar3;
  qword qVar4;
  segment_command *psVar5;
  segment_command *psVar6;
  long lVar7;
  segment_command *psVar8;
  undefined4 uVar9;
  ulong uVar10;
  long extraout_x8;
  int iVar11;
  int iVar12;
  
  psVar6 = param_1;
  psVar8 = param_3;
  if (param_1->nsects != 0) {
    psVar5 = param_1;
    func_0x00519b68();
    psVar6 = (segment_command *)&MACH_HEADER.cpusubtype;
    func_0x00487cbc(8,psVar5);
    func_0x00519a2c();
    param_2 = psVar6;
  }
  qVar4 = param_1->vmsize;
  for (iVar11 = 0; (int)qVar4 != iVar11; iVar11 = iVar11 + 1) {
    uVar10 = param_1->vmaddr;
    pqVar1 = &param_1->vmaddr;
    if ((uVar10 & 1) != 0) {
      pqVar1 = (qword *)(uVar10 + (long)iVar11 * 8 + 7);
    }
    psVar8 = (segment_command *)(ulong)*(uint *)(*pqVar1 + 0x14);
    psVar6 = (segment_command *)((long)&MACH_HEADER.magic + 2);
    func_0x00519ac0();
    param_2 = psVar6;
  }
  if (param_1->flags != 0) {
    func_0x00519b68();
    func_0x00519cc8();
    func_0x00519a2c();
    param_2 = psVar6;
  }
  if (param_1[1].cmd != 0) {
    func_0x00519b68();
    param_2 = &segment_command_00000020;
    func_0x00487cbc(0x20,psVar6);
    func_0x00519a2c();
  }
  uVar2 = *(dword *)((long)param_1->segname + 8);
  if ((uVar2 & 1) != 0) {
    psVar8 = (segment_command *)(ulong)*(uint *)(param_1->filesize + 0x18);
    param_2 = (segment_command *)((long)&MACH_HEADER.cputype + 1);
    func_0x00519ac0();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    psVar8 = (segment_command *)(ulong)*(uint *)(*(long *)&param_1->maxprot + 0x40);
    param_2 = (segment_command *)((long)&MACH_HEADER.cputype + 2);
    func_0x00519ac0();
  }
  if ((*(ulong *)param_1->segname & 1) != 0) {
    func_0x00519bd8();
    if ((long)psVar8 < 0) {
      lVar7 = *(long *)(extraout_x8 + 8);
      psVar8 = *(segment_command **)(extraout_x8 + 0x10);
    }
    else {
      lVar7 = extraout_x8 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)psVar8) {
      while( true ) {
        uVar9 = param_3->cmd;
        iVar12 = (uVar9 - (int)param_2) + 0x10;
        iVar11 = (int)psVar8;
        psVar8 = (segment_command *)(ulong)(uint)(iVar11 - iVar12);
        if (iVar11 - iVar12 == 0 || iVar11 < iVar12) break;
        func_0x0054f690();
        pdVar3 = (dword *)param_2->segname;
        param_2 = param_3;
        func_0x0054ed58(param_3,(undefined1 *)((long)pdVar3 + (long)iVar12 + -8));
      }
      func_0x0054f690();
      return (segment_command *)((long)param_2->segname + (long)iVar11 + -8);
    }
    _memcpy(param_2,lVar7,(ulong)psVar8 & 0xffffffff);
    return (segment_command *)((long)param_2->segname + (long)(int)psVar8 + -8);
  }
  return param_2;
}



/* Entry: 00519380; end: 00519443;  */

long FUN_00519380(long param_1)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00519ae0();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar2 = *unaff_x21;
    FUN_005175dc();
    unaff_x20 = lVar2 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_00517174(*(undefined8 *)(param_1 + 0x30));
      func_0x00519be4();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      FUN_00518f80();
      func_0x00519ac8();
      unaff_x20 = unaff_x20 + lVar2 + extraout_x8 + 1;
    }
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x00519a68(0xfffffff7);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    func_0x00519a68();
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    func_0x00519c28();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00519bcc();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar2 + unaff_x20;
  }
  *(int *)(param_1 + 0x14) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 00519444; end: 0051948f;  */

void FUN_00519444(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x00519c54();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  FUN_00519444();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x30);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_0051730c();
        *(ulong **)(unaff_x21 + 0x30) = puVar2;
      }
      else {
        FUN_0051aa64();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        FUN_00519928();
        *(ulong **)(unaff_x21 + 0x38) = puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_00519090();
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
  func_0x00519cdc();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00519c64();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00519490; end: 005194b7;  */

void FUN_00519490(void)

{
  long extraout_x8;
  
  func_0x00519cfc();
  if (extraout_x8 != 0) {
    func_0x00519c20();
  }
  return;
}



/* Entry: 005194b8; end: 005194df;  */

void FUN_005194b8(void)

{
  long extraout_x8;
  
  func_0x00519cfc();
  if (extraout_x8 != 0) {
    func_0x00519c20();
  }
  return;
}



/* Entry: 005194e0; end: 00519507;  */

undefined8 FUN_005194e0(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  FUN_00519490(param_1 + 0x18);
  func_0x00519cfc(param_1);
  if (extraout_x8 != 0) {
    func_0x00519c20();
  }
  return unaff_x19;
}



/* Entry: 00519508; end: 0051952f;  */

void FUN_00519508(void)

{
  long extraout_x8;
  
  func_0x00519cfc();
  if (extraout_x8 != 0) {
    func_0x00519c20();
  }
  return;
}



/* Entry: 00519530; end: 00519557;  */

void FUN_00519530(void)

{
  long extraout_x8;
  
  func_0x00519cfc();
  if (extraout_x8 != 0) {
    func_0x00519c20();
  }
  return;
}



/* Entry: 00519558; end: 00519777;  */

void FUN_00519558(char *param_1)

{
  char *pcVar1;
  qword extraout_x8;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x00519cb0();
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009fec08;
  *(char **)(pcVar1 + 8) = param_1;
  func_0x00519d14();
  *(qword *)(pcVar1 + 0x18) = 0;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(qword *)(pcVar1 + 0x10) = extraout_x8;
  return;
}



/* Entry: 00519778; end: 00519843;  */

qword * FUN_00519778(qword *param_1,long param_2)

{
  uint uVar1;
  qword *pqVar2;
  qword *pqVar3;
  undefined8 uVar4;
  
  if (param_1 == (qword *)0x0) {
    pqVar2 = &segment_command_00000020.filesize;
    __Znwm();
  }
  else {
    pqVar2 = param_1;
    func_0x005510c4(param_1,0x50);
  }
  pqVar2[1] = (qword)param_1;
  *pqVar2 = (qword)&PTR_FUN_009feca8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00519aa8();
  }
  *(dword *)(pqVar2 + 2) = *(dword *)(param_2 + 0x10);
  *(undefined8 *)((long)pqVar2 + 0x1c) = 0;
  *(undefined8 *)((long)pqVar2 + 0x14) = 0;
  *(undefined4 *)((long)pqVar2 + 0x24) = 0;
  pqVar2[5] = (qword)param_1;
  FUN_00519444(pqVar2 + 3,param_2 + 0x18);
  pqVar3 = (qword *)0x0;
  uVar1 = *(uint *)(pqVar2 + 2);
  if ((uVar1 & 1) != 0) {
    pqVar3 = param_1;
    FUN_0051730c(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  pqVar2[6] = (qword)pqVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (qword *)0x0;
  }
  else {
    FUN_00519928(param_1,*(undefined8 *)(param_2 + 0x38));
  }
  pqVar2[7] = (qword)param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(pqVar2 + 9) = *(undefined4 *)(param_2 + 0x48);
  pqVar2[8] = uVar4;
  return pqVar2;
}



/* Entry: 00519844; end: 00519927;  */

char * FUN_00519844(char *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = section_00000068.segname + 8;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x80);
  }
  *(char **)(pcVar1 + 8) = param_1;
  *(undefined ***)pcVar1 = &PTR_FUN_009fed48;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00519aa8();
  }
  *(qword *)(pcVar1 + 0x10) = 0;
  *(undefined8 *)(pcVar1 + 0x18) = 0;
  *(char **)(pcVar1 + 0x20) = param_1;
  FUN_00518070(pcVar1 + 0x10,param_2 + 0x10);
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  *(undefined8 *)(pcVar1 + 0x30) = 0;
  *(char **)(pcVar1 + 0x38) = param_1;
  func_0x00518080(pcVar1 + 0x28,param_2 + 0x28);
  lVar2 = param_2 + 0x40;
  func_0x00487c6c(lVar2,param_1);
  *(long *)(pcVar1 + 0x40) = lVar2;
  *(undefined4 *)(pcVar1 + 0x78) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(pcVar1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(pcVar1 + 0x68) = uVar7;
  *(undefined8 *)(pcVar1 + 0x60) = uVar6;
  *(undefined8 *)(pcVar1 + 0x58) = uVar5;
  *(undefined8 *)(pcVar1 + 0x50) = uVar4;
  *(undefined8 *)(pcVar1 + 0x48) = uVar3;
  return pcVar1;
}



/* Entry: 00519928; end: 005199f7;  */

qword * FUN_00519928(qword *param_1,long param_2)

{
  int iVar1;
  qword *pqVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == (qword *)0x0) {
    pqVar2 = &segment_command_00000020.fileoff;
    __Znwm();
  }
  else {
    pqVar2 = param_1;
    func_0x005510c4(param_1,0x48);
  }
  pqVar2[1] = (qword)param_1;
  *pqVar2 = (qword)&PTR_FUN_009fec58;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00519aa8();
  }
  lVar3 = param_2 + 0x10;
  func_0x00519b1c();
  pqVar2[2] = lVar3;
  lVar3 = param_2 + 0x18;
  func_0x00519b1c();
  pqVar2[3] = lVar3;
  lVar3 = param_2 + 0x20;
  func_0x00519b1c();
  pqVar2[4] = lVar3;
  lVar3 = param_2 + 0x28;
  func_0x00519b1c();
  pqVar2[5] = lVar3;
  *(undefined4 *)(pqVar2 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x44);
  *(int *)((long)pqVar2 + 0x44) = iVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(pqVar2 + 7) = *(undefined4 *)(param_2 + 0x38);
  pqVar2[6] = uVar4;
  if (iVar1 == 9) {
    *(undefined1 *)((long)pqVar2 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  }
  else if (iVar1 == 5) {
    *(undefined4 *)((long)pqVar2 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  }
  return pqVar2;
}



/* Entry: 005199f8; end: 00519d1f;  */

ulong * FUN_005199f8(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    FUN_0054ec3c();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}



/* Entry: 00519d20; end: 00519d73;  */

undefined *** FUN_00519d20(void)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined1 auStack_1b8 [264];
  undefined **ppuStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_41;
  
  ppuVar1 = &PTR_PTR_00b25f08;
  FUN_00533740(&PTR_PTR_00b25f08,&UNK_00007ab7,0xe,0,0,0x5173cc);
  puVar3 = (uint *)&UNK_00007ab8;
  uStack_41 = 8;
  ppuStack_78._0_4_ = 0xe;
  func_0x0053a6f0(&PTR_PTR_00b25f08,&UNK_00007ab8,"type != WireFormatLite::TYPE_ENUM");
  if (ppuVar1 == (undefined **)0x0) {
    uStack_41 = 8;
    ppuStack_78._0_4_ = 0xb;
    func_0x0053a6f0();
    if (ppuVar1 == (undefined **)0x0) {
      uStack_41 = 8;
      ppuStack_78._0_4_ = 10;
      func_0x0053a6f0();
      if (ppuVar1 == (undefined **)0x0) {
        ppuStack_78 = &PTR_PTR_00b25f08;
        uStack_70 = 0x7ab8;
        uStack_6c = 8;
        uStack_6b = 0;
        uStack_6a = 0;
        func_0x0053ac7c();
        pppuVar2 = &ppuStack_78;
        FUN_0053353c(pppuVar2);
        return pppuVar2;
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
  pppuVar2 = (undefined ***)(ulong)*(byte *)ppuVar1;
  if (*puVar3 != (uint)*(byte *)ppuVar1) {
    return (undefined ***)0x0;
  }
  FUN_005542d4(auStack_1b8,uVar4);
  FUN_00554790(auStack_1b8,pppuVar2);
  FUN_00554338(auStack_1b8);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(auStack_1b8,pppuVar2);
  FUN_00554368(auStack_1b8);
  func_0x0053ab6c();
  return pppuVar2;
}



/* Entry: 00519d74; end: 00519da7;  */

long FUN_00519d74(long param_1)

{
  func_0x0051aea0();
  func_0x00532f74(param_1 + 0x10);
  func_0x00532f74(param_1 + 0x18);
  return param_1;
}



/* Entry: 00519da8; end: 00519dab;  */

long FUN_00519da8(long param_1)

{
  func_0x0051aea0();
  func_0x00532f74(param_1 + 0x10);
  func_0x00532f74(param_1 + 0x18);
  return param_1;
}



/* Entry: 00519dac; end: 00519dbf;  */

void FUN_00519dac(void)

{
  FUN_00519d74();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00519dc0; end: 00519dcb;  */

undefined ** FUN_00519dc0(void)

{
  return &PTR_DAT_009ff260;
}



/* Entry: 00519dcc; end: 00519e07;  */

void FUN_00519dcc(long param_1)

{
  ulong *puVar1;
  
  FUN_00532fa8(param_1 + 0x10);
  FUN_00532fa8(param_1 + 0x18);
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



/* Entry: 00519e08; end: 00519ee3;  */

long * FUN_00519e08(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar3 + 0x17);
  plVar4 = param_3;
  if (lVar1 < 0) {
    lVar1 = puVar3[1];
    if (lVar1 != 0) {
      puVar3 = (undefined8 *)*puVar3;
      goto LAB_00519e4c;
    }
  }
  else if (*(char *)((long)puVar3 + 0x17) != '\0') {
LAB_00519e4c:
    func_0x0051aee0(puVar3,lVar1,param_3,"snapchat.common.MapRecord.key");
    param_2 = param_3;
    func_0x0051aed4(param_3,1);
  }
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar3 + 0x17) < '\0') {
    if (puVar3[1] == 0) goto LAB_00519eac;
    puVar3 = (undefined8 *)*puVar3;
  }
  else if (*(char *)((long)puVar3 + 0x17) == '\0') goto LAB_00519eac;
  func_0x0051aee0(puVar3);
  param_2 = param_3;
  func_0x0051aed4(param_3,2);
LAB_00519eac:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x0051af14();
  if ((long)plVar4 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar2 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar2 - iVar5);
      if (iVar2 - iVar5 == 0 || iVar2 < iVar5) break;
      func_0x0054f690();
      lVar1 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x0054ed58(param_3,lVar1);
    }
    func_0x0054f690();
    return (long *)((long)param_2 + (long)iVar2);
  }
  _memcpy(param_2,lVar1,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 00519ee4; end: 00519ffb;  */

long FUN_00519ee4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_00519f1c;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_00519f1c:
    lVar3 = 0;
    goto LAB_00519f20;
  }
  FUN_0048910c();
  lVar3 = uVar1 + 1;
LAB_00519f20:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048910c();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0051aefc();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 00519ffc; end: 0051a057;  */

undefined8 * FUN_00519ffc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009ff1d0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0051ae74();
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  FUN_0051a264(param_1 + 2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 0051a058; end: 0051a08f;  */

long FUN_0051a058(long param_1)

{
  func_0x0051aea0();
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 0051a090; end: 0051a093;  */

long FUN_0051a090(long param_1)

{
  func_0x0051aea0();
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 0051a094; end: 0051a0a7;  */

void FUN_0051a094(void)

{
  FUN_0051a058();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051a0a8; end: 0051a0b3;  */

undefined ** FUN_0051a0a8(void)

{
  return &PTR_DAT_009ff2a0;
}



/* Entry: 0051a0b4; end: 0051a0f3;  */

void FUN_0051a0b4(long param_1)

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



/* Entry: 0051a0f4; end: 0051a19b;  */

long * FUN_0051a0f4(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long extraout_x8;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18);
  plVar4 = param_3;
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar2 = (ulong *)(uVar5 + (long)iVar6 * 8 + 7);
    }
    plVar4 = (long *)(ulong)*(uint *)(*puVar2 + 0x20);
    param_2 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x0054dae0();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0051af14();
    if ((long)plVar4 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      plVar4 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)plVar4;
        plVar4 = (long *)(ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        puVar1 = (undefined1 *)((long)param_2 + (long)iVar7);
        param_2 = param_3;
        func_0x0054ed58(param_3,puVar1);
      }
      func_0x0054f690();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,(ulong)plVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar4);
  }
  return param_2;
}



/* Entry: 0051a19c; end: 0051a20f;  */

long FUN_0051a19c(long param_1)

{
  ulong *puVar1;
  long extraout_x8;
  ulong uVar2;
  long extraout_x9;
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
    FUN_0051a210();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0051aefc();
    lVar4 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 0051a210; end: 0051a227;  */

void FUN_0051a210(void)

{
  FUN_00519ee4();
  FUN_0051ae24();
  return;
}



/* Entry: 0051a228; end: 0051a22b;  */

void FUN_0051a228(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0051aec8();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_0051a264();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0051aeb8();
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


