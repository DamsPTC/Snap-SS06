/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10866eac0; end: 10866ead3;  */

void FUN_10866eac0(void)

{
  FUN_10866ead4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10866ead4; end: 10866eb07;  */

undefined8 * FUN_10866ead4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61538;
  FUN_10866eb08(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10866eb08; end: 10866eb27;  */

void FUN_10866eb08(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x00010866e4e8();
  }
  return;
}



/* Entry: 10866eb28; end: 10866eb8f;  */

/* WARNING: Removing unreachable block (ram,0x00010866eb60) */

long FUN_10866eb28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  func_0x00010867006c();
  do {
    lVar1 = unaff_x20 + 0x10;
    func_0x00010866fdc4();
  } while ((int)lVar1 == 0);
  FUN_10866eb90(unaff_x20 + 0x98,param_3);
  func_0x00010866fdd4();
  return lVar1;
}



/* Entry: 10866eb90; end: 10866ebbf;  */

undefined1 * FUN_10866eb90(undefined1 *param_1)

{
  FUN_10866ebc0();
  *param_1 = 0;
  param_1[0x58] = 0;
  param_1[0x60] = 1;
  return param_1;
}



/* Entry: 10866ebc0; end: 10866ebe3;  */

void FUN_10866ebc0(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x00010866e4e8();
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



/* Entry: 10866ebe4; end: 10866ebef;  */

undefined8 * FUN_10866ebe4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  
  uVar2 = 0;
  puVar1 = param_1;
  func_0x000108670134(param_1,0,param_2);
  *puVar1 = extraout_x8;
  puVar1[1] = uVar2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = uVar2;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = uVar2;
  func_0x0001086703dc();
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[8] = extraout_x8_00;
  FUN_10866ec34();
  return param_1;
}



/* Entry: 10866ebf0; end: 10866ec33;  */

undefined8 * FUN_10866ebf0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  
  puVar1 = param_1;
  func_0x000108670134();
  *puVar1 = extraout_x8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = param_2;
  func_0x0001086703dc();
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[8] = extraout_x8_00;
  FUN_10866ec34();
  return param_1;
}



/* Entry: 10866ec34; end: 10866ec97;  */

long FUN_10866ec34(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x0001088f7604(param_1);
    }
    else {
      FUN_1088f75d4(param_1);
    }
  }
  return param_1;
}



/* Entry: 10866ec98; end: 10866ec9b;  */

void FUN_10866ec98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61578;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10866ec9c; end: 10866ecaf;  */

void FUN_10866ec9c(void)

{
  FUN_10866eeb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10866ecb0; end: 10866ecbf;  */

void FUN_10866ecb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010866ecb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10866ecc0; end: 10866ecf7;  */

void FUN_10866ecc0(void)

{
  func_0x000108670308();
  return;
}



/* Entry: 10866ecf8; end: 10866ed43;  */

void FUN_10866ecf8(void)

{
  long unaff_x19;
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  func_0x00010866ffb0();
  FUN_1086644a4();
  uStack_28 = 1;
  FUN_10866ee04(unaff_x19 + 0x10,auStack_40);
  FUN_108668da4(auStack_40);
  return;
}



/* Entry: 10866ed44; end: 10866ed87;  */

void FUN_10866ed44(long param_1)

{
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  auStack_40[0] = 0;
  uStack_28 = 0;
  FUN_10866ee04(param_1 + 0x10,auStack_40);
  FUN_108668da4(auStack_40);
  return;
}



/* Entry: 10866ed88; end: 10866ed8b;  */

undefined8 * FUN_10866ed88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61640;
  if (*(char *)(param_1 + 0x17) == '\x01') {
    func_0x00010867021c();
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10866ed8c; end: 10866ed9f;  */

void FUN_10866ed8c(void)

{
  FUN_10866eda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10866eda0; end: 10866ee03;  */

undefined8 * FUN_10866eda0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61640;
  if (*(char *)(param_1 + 0x17) == '\x01') {
    func_0x00010867021c();
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10866ee04; end: 10866eeb3;  */

/* WARNING: Removing unreachable block (ram,0x00010866ee3c) */

void FUN_10866ee04(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  do {
    iVar1 = (int)lVar2 + 0x10;
    func_0x00010866fdc4();
  } while (iVar1 == 0);
  if (*(char *)(lVar2 + 0xb8) == '\x01') {
    func_0x00010867021c();
    *(undefined1 *)(lVar2 + 0xb8) = 0;
  }
  *(undefined1 *)(lVar2 + 0x98) = 0;
  *(undefined1 *)(lVar2 + 0xb0) = 0;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1086644a4(lVar2 + 0x98,param_2);
    *(undefined1 *)(lVar2 + 0xb0) = 1;
  }
  *(undefined1 *)(lVar2 + 0xb8) = 1;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  func_0x0001086703bc();
  func_0x000107c31508();
  return;
}



/* Entry: 10866eeb4; end: 10866eec3;  */

void FUN_10866eeb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61578;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10866eec4; end: 10866eee7;  */

void FUN_10866eec4(long param_1)

{
  func_0x000107c31ef4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10866eee8; end: 10866ef7f;  */

void FUN_10866eee8(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  
  plVar1 = *(long **)(param_2 + 0x40);
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar1 == (long *)(param_1 + 0x20)) {
    func_0x00010867006c();
    plVar1 = (long *)0x18;
    __Znwm();
    plVar1[2] = unaff_x19;
    lVar3 = *plVar4;
    *(long **)(lVar3 + 8) = plVar1;
    *plVar1 = lVar3;
    *plVar4 = (long)plVar1;
    plVar1[1] = (long)plVar4;
    *(long *)(unaff_x20 + 0x30) = *(long *)(unaff_x20 + 0x30) + 1;
    *(long **)(unaff_x19 + 0x40) = plVar1;
  }
  else if ((plVar4 != plVar1) && (plVar2 = (long *)plVar1[1], plVar4 != plVar2)) {
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    lVar3 = *plVar4;
    *(long **)(lVar3 + 8) = plVar1;
    *plVar1 = lVar3;
    *plVar4 = (long)plVar1;
    plVar1[1] = (long)plVar4;
  }
  return;
}



/* Entry: 10866ef80; end: 10866efff;  */

long * FUN_10866ef80(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar1 = (long *)(param_1 + 8);
  plVar4 = plVar1;
  plVar5 = plVar1;
  while (plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
    func_0x000108670274();
    bVar3 = -1 < (char)param_1;
    lVar2 = 8;
    if (bVar3) {
      lVar2 = 0;
    }
    plVar4 = (long *)((long)plVar6 + lVar2);
    if (bVar3) {
      plVar5 = plVar6;
    }
  }
  if ((plVar1 == plVar5) || (FUN_10866f000(param_2,plVar5 + 4), ((uint)param_2 >> 7 & 1) != 0)) {
    plVar5 = plVar1;
  }
  return plVar5;
}



/* Entry: 10866f000; end: 10866f053;  */

uint FUN_10866f000(ulong param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010867006c();
  FUN_10866f054();
  if ((param_1 & 1) == 0) {
    func_0x0001086703bc();
    FUN_10866f054();
    if ((param_1 & 1) == 0) {
      uVar1 = (uint)(*(uint *)(unaff_x19 + 0x18) < *(uint *)(unaff_x20 + 0x18));
      if (*(uint *)(unaff_x20 + 0x18) < *(uint *)(unaff_x19 + 0x18)) {
        uVar1 = 0xffffffff;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0xff;
  }
  return uVar1;
}



/* Entry: 10866f054; end: 10866f067;  */

void FUN_10866f054(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  func_0x000107c289b8(*param_1,param_1[1],*param_2,param_2[1],&uStack_11,&uStack_12,&uStack_12);
  return;
}



/* Entry: 10866f068; end: 10866f08f;  */

void FUN_10866f068(void)

{
  func_0x000107c289b8();
  return;
}



/* Entry: 10866f090; end: 10866f133;  */

long * FUN_10866f090(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010866e9d8(lVar1 + 0x20);
    }
    func_0x0001086702e4();
  }
  return param_1;
}



/* Entry: 10866f134; end: 10866f167;  */

void FUN_10866f134(void)

{
  func_0x00010866f14c();
  return;
}



/* Entry: 10866f168; end: 10866f2bb;  */

undefined1  [16] FUN_10866f168(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_50 [3];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  func_0x00010866f1f4(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x00010866f26c(alStack_50,param_1,param_3);
    FUN_10866f2bc(param_1,uStack_38,plVar2,alStack_50[0]);
    lVar3 = alStack_50[0];
    alStack_50[0] = 0;
    func_0x00010866f308(alStack_50);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10866f2bc; end: 10866f32b;  */

void FUN_10866f2bc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x000107c27be4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10866f32c; end: 10866f343;  */

void FUN_10866f32c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107c27914(lVar1 + 0x20);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10866f344; end: 10866f383;  */

void FUN_10866f344(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c27914(param_2 + 0x20);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10866f384; end: 10866f423;  */

undefined8 * FUN_10866f384(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  func_0x00010866f3d4(param_1,param_2,*puVar1,puVar1);
  if ((puVar1 == param_1) || (FUN_10866f054(param_2,param_1 + 4), (int)param_2 != 0)) {
    param_1 = puVar1;
  }
  return param_1;
}



/* Entry: 10866f424; end: 10866f5bb;  */

void FUN_10866f424(long param_1)

{
  code *pcVar1;
  uint extraout_w8;
  code *extraout_x8;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long alStack_58 [3];
  
  plVar2 = (long *)(param_1 + 0x60);
  func_0x000108670034(*plVar2);
  lVar3 = *plVar2;
  if ((extraout_w8 >> 5 & 1) == 0) {
    func_0x000107c27f9c(plVar2);
    func_0x000107c27f9c(param_1 + 0x68);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    if ((*(byte *)(lVar3 + 0xb0) & 1) == 0) {
      func_0x0001086701b4(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x38));
      func_0x00010867024c();
      FUN_108668738(&uStack_70);
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      alStack_58[0] = 0;
      alStack_58[1] = 0;
      alStack_58[2] = 0;
      func_0x00010864a454(alStack_58);
    }
    else {
      func_0x0001086684dc(&uStack_70,lVar3 + 0x98);
    }
    lVar3 = param_1 + 0x38;
    lVar4 = *(long *)(param_1 + 0x70);
    plVar2 = *(long **)(lVar4 + 0x38);
    func_0x000107c2825c();
    alStack_58[0] = lVar3;
    (**(code **)(*plVar2 + 0x10))(plVar2,0x210,alStack_58);
    func_0x0001086701b4(*(undefined8 *)(lVar4 + 0x38));
    (*extraout_x8)();
    func_0x0001086684b4(param_1 + 0x10,&uStack_70);
    func_0x00010864a454(&uStack_70);
    FUN_10866eec4(param_1 + 0x50);
    func_0x000108647874(param_1 + 0x20);
    func_0x000107c27fb8(param_1 + 0x10);
    func_0x00010866fe7c();
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(alStack_58,lVar3 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(alStack_58);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10866f560);
  (*pcVar1)();
}



/* Entry: 10866f5bc; end: 10866f5f3;  */

void FUN_10866f5bc(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x60);
  func_0x00010866ff68();
  func_0x000108670294();
  func_0x000108647874(param_1 + 0x20);
  func_0x00010866fe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10866f5f4; end: 10866f73b;  */

void FUN_10866f5f4(long param_1)

{
  char cVar1;
  long lVar2;
  undefined1 auStack_88 [88];
  char cStack_30;
  undefined4 uStack_28;
  char cStack_24;
  
  lVar2 = param_1 + 0xf0;
  FUN_108662304(lVar2);
  FUN_1086644a4(param_1 + 0xd8,lVar2);
  func_0x000108670080();
  func_0x00010866ff14();
  if (*(long *)(param_1 + 0xd8) == *(long *)(param_1 + 0xe0)) {
    func_0x000108670144(0x240105);
    func_0x000108670214();
    func_0x00010866fd4c();
  }
  else {
    func_0x0001086702c0();
    if (cStack_24 == '\x01') {
      *(undefined4 *)(param_1 + 0x110) = uStack_28;
      *(undefined1 *)(param_1 + 0x114) = 1;
      func_0x000108670214();
      func_0x00010866fd4c();
    }
    else {
      cVar1 = *(char *)(param_1 + 0x78);
      if (cVar1 == cStack_30) {
        if (cVar1 != '\0') {
          FUN_1088f75d4(param_1 + 0x20,auStack_88);
        }
      }
      else if (cVar1 == '\0') {
        FUN_10866e4cc(param_1 + 0x20,auStack_88);
      }
      else {
        FUN_1088f72bc(param_1 + 0x20);
        *(undefined1 *)(param_1 + 0x78) = 0;
      }
      func_0x000108670214();
      func_0x00010866ff84();
    }
    func_0x0001086700d0();
  }
  func_0x000108670078();
  func_0x00010866ffcc();
  func_0x00010866fec8();
  func_0x00010866fe20();
  func_0x00010866fe7c();
  return;
}



/* Entry: 10866f73c; end: 10866f76f;  */

void FUN_10866f73c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xf0);
  func_0x00010866ff14();
  func_0x00010866ffcc();
  func_0x00010866fec8();
  func_0x00010866fe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10866f770; end: 10866f95b;  */

void FUN_10866f770(long param_1)

{
  long lVar1;
  long *extraout_x8;
  long *plVar2;
  long extraout_x9;
  long lVar3;
  long lVar4;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar1 = param_1 + 0xf8;
  FUN_10866b034(lVar1);
  func_0x0001086700b0();
  func_0x00010866ff14();
  func_0x00010866ffe4();
  if (*(char *)(param_1 + 0x78) == '\x01') {
    func_0x00010866fda0(*(undefined8 *)(param_1 + 0x48));
    plVar2 = extraout_x8;
    lVar3 = extraout_x9;
    do {
      if (lVar3 == 0) goto LAB_10866f84c;
      lVar4 = *plVar2;
      lVar3 = lVar3 + -8;
      plVar2 = plVar2 + 1;
    } while (*(int *)(lVar4 + 0x20) == 0);
    func_0x000108670280();
    lVar1 = param_1 + 0x20;
    FUN_108679724(&uStack_90,lVar1);
    func_0x0001086703a4();
    func_0x00010866ffd4();
    func_0x00010866ff34(*(undefined8 *)(param_1 + 0x108),(double)lVar1 / 1000.0);
    func_0x00010866ff84();
    FUN_10866e508(&uStack_90);
  }
  else {
LAB_10866f84c:
    func_0x0001086703a4();
    func_0x00010866ffd4();
    func_0x000107c278b8(auStack_a8,"");
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    func_0x000108670364(&uStack_90,(double)lVar1 / 1000.0,*(undefined8 *)(param_1 + 0x108));
    func_0x00010866ff70();
    func_0x000107c27a04(&uStack_90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    func_0x00010866fd4c();
  }
  func_0x00010866fec8();
  func_0x0001086700f4();
  func_0x0001086700ec();
  func_0x00010866fe20();
  func_0x00010866fe7c();
  return;
}



/* Entry: 10866f95c; end: 10866f993;  */

void FUN_10866f95c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xf8);
  func_0x00010866ffe4();
  func_0x0001086700f4();
  func_0x000107c27a04(param_1 + 0xe0);
  func_0x00010866fe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10866f994; end: 10866fb43;  */

void FUN_10866f994(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_120 [88];
  char cStack_c8;
  byte bStack_bc;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [72];
  undefined1 auStack_60 [32];
  
  lVar3 = param_1 + 0x68;
  FUN_10865ae40(lVar3);
  lVar1 = param_1 + 0x38;
  FUN_10865b140(lVar1,lVar3);
  func_0x00010866ff68();
  func_0x00010866ffbc();
  func_0x00010866ffec();
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_10864a640(param_1 + 0x68,*(undefined8 *)(param_1 + 0x48));
  lVar3 = lVar1;
  while (lVar3 = *(long *)(lVar3 + 8), lVar3 != lVar1) {
    func_0x000108668510(param_1 + 0x68,lVar3 + 0x10,lVar3 + 0x28);
  }
  func_0x000108670090(auStack_120,*(undefined8 *)(param_1 + 0x88));
  if ((cStack_c8 == '\x01') && ((bStack_bc & 1) == 0)) {
    FUN_10866bd04(auStack_b8,auStack_120);
    lVar2 = (*(long **)(param_1 + 0x98))[1];
    for (lVar3 = **(long **)(param_1 + 0x98); lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
      func_0x000107c29ee4(auStack_60,lVar3);
      FUN_10866ea00(auStack_a8);
      func_0x000107c287d0();
      func_0x000107c2a2e0(auStack_60);
    }
    FUN_10866bd10(param_1 + 0x10,auStack_b8);
    FUN_1088f72bc(auStack_b8);
  }
  else {
    func_0x00010866fd4c();
  }
  func_0x00010866e4e8(auStack_120);
  func_0x0001086700a8();
  FUN_10865a078(lVar1);
  func_0x00010867028c();
  func_0x00010866fe20();
  func_0x00010866fe7c();
  return;
}



/* Entry: 10866fb44; end: 10866fb77;  */

void FUN_10866fb44(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x68);
  func_0x00010866ffbc();
  func_0x00010866ffec();
  func_0x00010867028c();
  func_0x00010866fe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10866fb78; end: 10866fd17;  */

void FUN_10866fb78(double param_1,long param_2)

{
  long *extraout_x8;
  long *plVar1;
  long extraout_x9;
  long lVar2;
  long lVar3;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  
  FUN_10866b034(param_2 + 0x138);
  func_0x0001086700b0();
  func_0x000108670124();
  func_0x00010867000c();
  if (*(char *)(param_2 + 0x78) == '\x01') {
    func_0x000108670208();
  }
  func_0x00010866fec8();
  FUN_10866b08c(param_2 + 0x80,*(undefined8 *)(param_2 + 0x158));
  func_0x00010866fda0(*(undefined8 *)(param_2 + 0xa8));
  plVar1 = extraout_x8;
  lVar3 = extraout_x9;
  do {
    if (lVar3 == 0) break;
    lVar2 = *plVar1;
    lVar3 = lVar3 + -8;
    plVar1 = plVar1 + 1;
  } while (*(int *)(lVar2 + 0x20) == 0);
  FUN_108679724(auStack_b0,param_2 + 0x80);
  func_0x000107c2825c(param_2 + 0x120);
  func_0x00010867004c();
  auStack_70[0] = 0;
  uStack_58 = 0;
  func_0x000108670258(param_1 / 1000.0);
  func_0x000107c279c4(auStack_70);
  func_0x0001086702fc();
  FUN_10866e508(auStack_b0);
  func_0x00010866ffdc();
  func_0x00010866ffc4();
  func_0x00010866fe20();
  func_0x00010866fe7c();
  return;
}



/* Entry: 10866fd18; end: 10866fd4b;  */

void FUN_10866fd18(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x138);
  func_0x00010867000c();
  func_0x00010866ffdc();
  func_0x00010866ffc4();
  func_0x00010866fe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10866fd4c; end: 1086703e7;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_10866fd4c(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *plVar6;
  
  puVar5 = (undefined8 *)(unaff_x19 + 0x18);
  FUN_10866eb28(*puVar5,puVar5,&UNK_10dd62ad6);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1086703e8; end: 1086708f7;  */

void FUN_1086703e8(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  undefined8 extraout_x8;
  long *plVar6;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar7;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  long *plVar8;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  uint extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar9;
  int extraout_w11_01;
  uint extraout_w11_02;
  uint extraout_w11_03;
  long unaff_x25;
  undefined8 *puVar10;
  long lVar11;
  
  func_0x0001086755b8();
  puVar3 = (undefined8 *)0x320;
  __Znwm();
  *puVar3 = FUN_1086740c0;
  puVar3[1] = FUN_108674470;
  puVar3[0x62] = param_3;
  puVar3[0x61] = param_2;
  func_0x000108675a78();
  puVar10 = puVar3 + 2;
  func_0x000107c287c4(param_1);
  *(undefined1 *)(puVar3 + 0x5c) = 0;
  puVar3[0x5b] = 0;
  puVar3[0x5a] = 0;
  func_0x000107c28258();
  puVar3[0x5b] = puVar10;
  *(undefined1 *)(puVar3 + 0x5c) = 1;
  plVar4 = (long *)*param_2;
  plVar5 = param_3;
  FUN_1086a1148(puVar3 + 4,plVar4,param_3,2);
  if (((*(byte *)(puVar3 + 0x3e) & 1) == 0) || ((*(byte *)((long)puVar3 + 0x49) >> 6 & 1) != 0)) {
    func_0x000108675598();
  }
  else {
    param_3 = puVar3 + 0x51;
    plVar4 = (long *)param_2[2];
    plVar5 = puVar3 + 4;
    (**(code **)(*plVar4 + 0x10))(param_3,plVar4,plVar5,0x2d0127);
    plVar1 = puVar3 + 0x4b;
    plVar8 = puVar3 + 0x57;
    param_2 = puVar3 + 0x5d;
    *plVar1 = *param_3;
    do {
      func_0x00010867549c();
    } while (extraout_w10 != 0);
    func_0x00010867571c(*plVar1);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar3 + 99) = 0;
      func_0x000108675a48();
      lVar11 = *plVar4;
      if (lVar11 == 0) {
        func_0x000107c3a5c0();
        lVar11 = *plVar4;
      }
      plVar6 = (long *)(unaff_x25 + 0x10);
      do {
        if (*plVar6 == 0) {
          func_0x0001086755a8();
          plVar6 = extraout_x8_01;
          uVar2 = extraout_w10_01;
          uVar9 = extraout_w11_00;
        }
        else {
          func_0x000108675864();
          plVar6 = extraout_x8_00;
          uVar2 = extraout_w10_00;
          uVar9 = extraout_w11;
        }
        if ((uVar9 & 1) != 0) {
          param_3 = *(long **)(unaff_x25 + 0x90);
          func_0x000108675514();
          if ((bool)in_ZR) {
            func_0x0001086754ac();
            uVar2 = extraout_w8_01;
            if ((bool)in_CY) {
              uVar2 = extraout_w9;
            }
            param_2 = (long *)(ulong)uVar2;
            func_0x00010867547c();
            func_0x000108675408();
            *(long **)(unaff_x25 + 0x90) = plVar4;
          }
          func_0x000108675504();
          *(long *)(extraout_x8_08 + 0x20) = lVar11;
          goto LAB_1086707a0;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
    plVar5 = plVar1;
    FUN_10866b034();
    plVar4 = puVar3 + 0x3f;
    FUN_10866e480(plVar4);
    func_0x000108675a20();
    func_0x000108675c88();
    if ((*(byte *)(puVar3 + 0x4a) & 1) == 0) {
      func_0x000108675598();
    }
    else {
      func_0x000107c2825c(puVar3 + 0x5a);
      func_0x000108675918();
      uVar7 = extraout_x8_02;
      if (extraout_x9 != 0) {
        do {
          func_0x0001086757cc();
          uVar7 = extraout_x8_03;
        } while (extraout_w11_01 != 0);
      }
      puVar3[0x53] = uVar7;
      func_0x000107c27994(puVar3 + 0x54,puVar3[0x62]);
      FUN_1086708f8(param_2);
      func_0x0001086758c4(plVar8);
      puVar10 = (undefined8 *)puVar3[0x59];
      puVar10[2] = 0;
      func_0x0001086756f4();
      *puVar10 = extraout_x8_04;
      puVar10[1] = 0;
      if (puVar3[0x5e] != 0) {
        do {
          func_0x00010867548c();
        } while (extraout_w10_02 != 0);
      }
      plVar5 = plVar1;
      FUN_108673434(plVar1,param_3);
      func_0x000108675c24();
      func_0x000108675d8c();
      *plVar5 = extraout_x8_05;
      lVar11 = *plVar1;
      plVar5[2] = puVar3[0x4c];
      plVar5[1] = lVar11;
      *plVar1 = 0;
      puVar3[0x4c] = 0;
      plVar5[3] = puVar3[0x4d];
      func_0x000108675c18();
      func_0x000108675c0c(puVar10 + 3);
      lVar11 = puVar3[0x61];
      func_0x000108675998();
      FUN_108670918(plVar1);
      func_0x000108675990();
      unaff_x25 = puVar3[0x59];
      puVar3[0x59] = 0;
      puVar3[0x5f] = unaff_x25 + 0x18;
      puVar3[0x60] = unaff_x25;
      func_0x00010865f950(plVar8);
      plVar4 = *(long **)(lVar11 + 0x20);
      if (unaff_x25 != 0) {
        do {
          func_0x00010867548c();
        } while (extraout_w10_03 != 0);
      }
      plVar5 = (long *)puVar3[0x62];
      func_0x000108675bbc(*(undefined8 *)(*plVar4 + 0x300));
      func_0x0001086759a0();
      *plVar8 = *(long *)(*param_2 + 8);
      do {
        func_0x00010867549c();
      } while (extraout_w10_04 != 0);
      *plVar1 = *plVar8;
      do {
        func_0x00010867549c();
      } while (extraout_w10_05 != 0);
      func_0x00010867571c(*plVar1);
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar3 + 99) = 1;
        func_0x000108675a48();
        lVar11 = *plVar4;
        if (lVar11 == 0) {
          func_0x000107c3a5c0();
          lVar11 = *plVar4;
        }
        plVar8 = (long *)(unaff_x25 + 0x10);
        do {
          if (*plVar8 == 0) {
            func_0x0001086755a8();
            plVar8 = extraout_x8_07;
            uVar2 = extraout_w10_07;
            uVar9 = extraout_w11_03;
          }
          else {
            func_0x000108675864();
            plVar8 = extraout_x8_06;
            uVar2 = extraout_w10_06;
            uVar9 = extraout_w11_02;
          }
          if ((uVar9 & 1) != 0) {
            param_3 = *(long **)(unaff_x25 + 0x90);
            func_0x000108675514();
            if ((bool)in_ZR) {
              func_0x0001086754ac();
              uVar2 = extraout_w8_02;
              if ((bool)in_CY) {
                uVar2 = extraout_w9_00;
              }
              param_2 = (long *)(ulong)uVar2;
              func_0x00010867547c();
              func_0x000108675408();
              *(long **)(unaff_x25 + 0x90) = plVar4;
            }
            func_0x000108675504();
            *(long *)(extraout_x8_09 + 0x20) = lVar11;
LAB_1086707a0:
            func_0x0001086754d4(*(undefined8 *)(unaff_x25 + 0x90));
            *(undefined8 *)(unaff_x25 + 0x10) = 0;
            goto LAB_108670714;
          }
        } while ((uVar2 >> 1 & 1) == 0);
      }
      func_0x000107c28a1c(plVar1);
      func_0x000108675a20();
      func_0x000108675740();
      func_0x000108675598();
      func_0x0001086758b4();
      FUN_10867340c(param_2);
      plVar4 = param_3;
      FUN_108670918(param_3);
    }
    func_0x0001086758e8();
  }
  func_0x0001086755d0();
  while( true ) {
    func_0x000108675590();
    func_0x0001086755c8();
LAB_108670714:
    func_0x0001086754e4(extraout_x8);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)plVar5 != 0) goto LAB_1086707cc;
    do {
      __Unwind_Resume(plVar4);
LAB_1086707cc:
      func_0x000104bd46a0();
    } while ((int)plVar5 == 0);
    func_0x000108675a20();
    func_0x000108675740();
    func_0x0001086758b4();
    FUN_10867340c(param_2);
    FUN_108670918(param_3);
    func_0x0001086758e8();
    func_0x0001086755d0();
    ___cxa_begin_catch();
    func_0x0001086755d8();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1086708f8; end: 108670917;  */

void FUN_1086708f8(void)

{
  undefined1 uStack_11;
  
  FUN_10867309c(&uStack_11);
  return;
}



/* Entry: 108670918; end: 10867093b;  */

undefined8 FUN_108670918(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c27914(param_1 + 0x18);
  func_0x0001004b55a0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10867093c; end: 108670a8b;  */

void FUN_10867093c(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar3;
  long lVar4;
  undefined8 *extraout_x8_04;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  long unaff_x22;
  
  func_0x000108675828();
  plVar2 = param_1;
  func_0x000108675cb0(FUN_108674fe4);
  func_0x000108675cec();
  *(int *)(param_1 + 9) = (int)unaff_x22;
  func_0x000108675b8c();
  func_0x000108675e10();
  FUN_108670a8c();
  param_1[7] = param_1[8];
  do {
    func_0x00010867549c();
  } while (extraout_w10 != 0);
  func_0x00010867571c(param_1[7]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)((long)param_1 + 0x4c) = 0;
    func_0x000108675440();
    lVar6 = *plVar2;
    if (lVar6 == 0) {
      func_0x000107c3a5c0();
      lVar6 = *plVar2;
    }
    func_0x000108675b40();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x0001086755a8();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar5 = extraout_w11_00;
      }
      else {
        func_0x000108675864();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar5 = extraout_w11;
      }
      if ((uVar5 & 1) != 0) {
        func_0x0001086757dc();
        uVar3 = extraout_x8_02;
        if ((bool)in_ZR) {
          func_0x0001086754ac();
          func_0x000108675608();
          func_0x000108675570();
          uVar3 = extraout_x8_03;
        }
        lVar4 = unaff_x22 + (uVar3 & 0xffffffff) * 0x18;
        *(undefined8 *)(lVar4 + 0x10) = 0;
        *(long **)(lVar4 + 0x18) = param_1;
        *(long *)(lVar4 + 0x20) = lVar6;
        func_0x0001086754bc();
        *extraout_x8_04 = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c28834(param_1 + 7);
  func_0x000108675750();
  func_0x000108675714();
  func_0x0001086756c4();
  func_0x000108675598();
  func_0x000108675590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108670a8c; end: 108671687;  */

void FUN_108670a8c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long *param_4,
                  undefined4 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined **ppuVar15;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  undefined8 extraout_x8;
  uint *extraout_x8_00;
  uint *puVar16;
  long extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  ulong *puVar17;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined *extraout_x8_08;
  long *extraout_x8_09;
  long *extraout_x8_10;
  long extraout_x8_11;
  undefined8 *extraout_x8_12;
  int extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  long *extraout_x9;
  uint *extraout_x9_00;
  long *extraout_x9_01;
  ulong uVar18;
  ulong extraout_x9_02;
  long extraout_x9_03;
  uint *puVar19;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  uint extraout_w10_07;
  uint uVar20;
  ulong extraout_x10;
  ulong extraout_x10_00;
  undefined **extraout_x11;
  ulong extraout_x11_00;
  long extraout_x11_01;
  ulong extraout_x11_02;
  long *plVar21;
  undefined **ppuVar22;
  long lVar23;
  long *unaff_x26;
  long lVar24;
  long *plVar25;
  long *plVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  func_0x0001086755b8();
  puVar9 = (undefined8 *)0x510;
  uStack_70 = extraout_x8;
  __Znwm();
  *puVar9 = FUN_1086744d0;
  puVar9[1] = FUN_108674f64;
  *(undefined4 *)(puVar9 + 0xa0) = param_5;
  puVar9[0x9a] = param_3;
  puVar9[0x99] = param_2;
  func_0x000108675a78();
  puVar10 = puVar9 + 2;
  func_0x000107c287c4(param_1);
  uVar7 = *param_4 == param_4[1];
  if (((bool)uVar7) || ((*(byte *)((long)param_2 + 0x8d) & 1) == 0)) {
    func_0x000108675598();
  }
  else {
    plVar26 = puVar9 + 0x93;
    *plVar26 = 0;
    puVar9[0x94] = 0;
    *(undefined1 *)(puVar9 + 0x95) = 0;
    func_0x000107c28258();
    puVar9[0x94] = puVar10;
    *(undefined1 *)(puVar9 + 0x95) = 1;
    func_0x000108675a68(*param_2);
    if (((*(byte *)(puVar9 + 0x3e) & 1) == 0) || ((*(byte *)((long)puVar9 + 0x49) >> 6 & 1) == 0)) {
LAB_108671058:
      func_0x000108675598();
    }
    else {
      func_0x000108675dc0();
      bVar8 = !(bool)uVar7;
      bVar6 = extraout_w9 != 1;
      uVar7 = (bVar8 || bVar6) || extraout_w10 == 0;
      if (((!bVar8 && !bVar6) && extraout_w10 != 0) && ((bVar8 || bVar6) || -1 < extraout_w10))
      goto LAB_108671058;
      puVar10 = puVar9 + 7;
      param_2 = param_2 + 0xc;
      FUN_1086a6978(puVar10,param_2,0);
      if ((int)puVar10 == 0) goto LAB_108671058;
      func_0x000108675dac();
      *(undefined4 *)((long)puVar9 + 0x504) = *(undefined4 *)(puVar9 + 0xb);
      extraout_x9[1] = 0;
      extraout_x9[2] = 0;
      *extraout_x9 = 0;
      lVar24 = *param_4;
      lVar23 = param_4[1];
      if (lVar23 - lVar24 != 0) {
        ppuVar11 = (undefined **)(lVar23 - lVar24 >> 2);
        if (extraout_x11 < ppuVar11) {
          FUN_108672ba4();
          goto LAB_108671400;
        }
        puStack_78 = puVar9 + 0x98;
        func_0x000108672c88();
        ppuStack_80 = ppuVar11 + (long)param_2 * 0x1b;
        ppuStack_98 = ppuVar11;
        ppuStack_90 = ppuVar11;
        ppuStack_88 = ppuVar11;
        FUN_108672bb0(extraout_x9,&ppuStack_98);
        func_0x000108672c40(&ppuStack_98);
        lVar24 = *param_4;
        lVar23 = param_4[1];
      }
      plVar14 = puVar9 + 0x3f;
      puVar10 = puVar9 + 0x5a;
      ppuVar11 = (undefined **)(puVar9 + 0x72);
      plVar1 = puVar9 + 0x7e;
      plVar2 = puVar9 + 0x86;
      puVar9[0x9b] = lVar23;
      ppuVar12 = &PTR___tlv_bootstrap_11340e278;
      (*(code *)PTR___tlv_bootstrap_11340e278)(lVar24);
      puVar3 = puVar9 + 0x40;
      puVar16 = extraout_x8_00;
      puVar19 = extraout_x9_00;
      while (puVar9[0x9c] = puVar16, puVar16 != puVar19) {
        unaff_x26 = (long *)(ulong)*puVar16;
        *(uint *)(puVar9 + 0xa1) = *puVar16;
        puVar13 = *(undefined8 **)puVar9[0x99];
        FUN_10886db5c(puVar10,puVar13,puVar9[0x9a],unaff_x26);
        if ((((*(char *)(puVar9 + 0x71) == '\x01') && ((*(byte *)(puVar9 + 0x70) & 1) != 0)) &&
            (uVar7 = puVar9[0x6d] == puVar9[0x6e], !(bool)uVar7)) &&
           ((*(byte *)(puVar9 + 0x61) & 1) != 0)) {
          func_0x000108675764();
          (**(code **)(extraout_x8_01 + 0x30))(plVar14);
          *plVar1 = *plVar14;
          do {
            func_0x00010867549c();
          } while (extraout_w10_00 != 0);
          func_0x00010867571c(*plVar1);
          if ((extraout_w8_00 >> 1 & 1) == 0) {
            *(undefined1 *)((long)puVar9 + 0x50e) = 0;
            lVar24 = *plVar1;
            puVar27 = *ppuVar12;
            if (puVar27 == (undefined *)0x0) {
              func_0x000107c3a5c0();
              puVar27 = (undefined *)*puVar13;
            }
            plVar21 = (long *)(lVar24 + 0x10);
            do {
              if (*plVar21 == 0) {
                func_0x0001086756ac();
                plVar21 = extraout_x8_03;
                uVar20 = extraout_w9_01;
                uVar18 = extraout_x10_00;
              }
              else {
                func_0x000108675958();
                plVar21 = extraout_x8_02;
                uVar20 = extraout_w9_00;
                uVar18 = extraout_x10;
              }
              if ((uVar18 & 1) != 0) {
                func_0x000108675514();
                if ((bool)uVar7) {
                  func_0x0001086754ac();
                  func_0x00010867547c();
                  func_0x000108675408();
                  *(undefined8 **)(lVar24 + 0x90) = puVar13;
                }
                func_0x000108675504();
                *(undefined **)(extraout_x8_05 + 0x20) = puVar27;
                func_0x0001086754d4(*(undefined8 *)(lVar24 + 0x90));
                puVar10 = (undefined8 *)(lVar24 + 0x10);
                goto LAB_1086710c8;
              }
            } while ((uVar20 >> 1 & 1) == 0);
          }
          plVar21 = plVar1;
          FUN_10866b034(plVar1);
          FUN_10866e480(ppuVar11,plVar21);
          func_0x000108675c88();
          func_0x0001086758f0();
          if ((*(byte *)(puVar9 + 0x7d) & 1) == 0) {
            func_0x000107c2825c(plVar26);
            func_0x000108675764();
            (**(code **)(extraout_x8_04 + 0x28))(plVar1);
            plVar21 = *(long **)(puVar9[0x99] + 0x30);
            func_0x000108675e38(puVar3);
            func_0x000108675840(&PTR_FUN_110a609a8);
            func_0x00010867565c(plVar14);
            FUN_108671688();
            func_0x000108675b28();
            (**(code **)(*plVar21 + 0x18))(plVar21);
            lVar24 = puVar9[0x99];
            func_0x0001086757f0();
            plVar25 = *(long **)(lVar24 + 0x30);
            *puVar3 = 0;
            puVar9[0x41] = 0;
            puVar9[0x42] = 0;
            func_0x000108675818();
            func_0x000108675840();
            func_0x00010867565c();
            FUN_108671688();
            func_0x000107c2884c(puVar9 + 0x8b,plVar21);
            func_0x000108675d48(*(undefined8 *)(*plVar25 + 0x50));
            lVar24 = puVar9[0x99];
            func_0x000108675a58();
            func_0x0001086757f0();
            unaff_x26 = *(long **)(lVar24 + 0x50);
            func_0x000108675dfc();
            *(undefined1 *)((long)puVar9 + 0x4ec) = extraout_w8;
            puVar9[0x40] = 0;
            puVar9[0x41] = 0;
            *plVar14 = 0;
            func_0x000108675ca4(plVar2);
            func_0x000108675870();
            (**(code **)(*unaff_x26 + 0x10))(unaff_x26,5,0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar2);
            func_0x000108675a40();
            func_0x000107c279c4(plVar1);
          }
          else {
            FUN_108679724(plVar1,ppuVar11);
            func_0x000108675b64();
            plVar21 = puVar9 + 0x77;
            if (!(bool)uVar7) {
              plVar21 = extraout_x9_01;
            }
            plVar25 = plVar21 + *(int *)(puVar9 + 0x78);
            for (; plVar21 != plVar25; plVar21 = plVar21 + 1) {
              puVar17 = (ulong *)(*plVar21 + 0x18);
              uVar18 = *puVar17;
              if ((uVar18 & 1) != 0) {
                puVar17 = (ulong *)(uVar18 + 7);
              }
              for (lVar24 = (long)*(int *)(*plVar21 + 0x20) << 3; lVar24 != 0; lVar24 = lVar24 + -8)
              {
                ppuVar15 = &PTR_PTR_11326cb58;
                if (*(undefined ***)(*puVar17 + 0x30) != (undefined **)0x0) {
                  ppuVar15 = *(undefined ***)(*puVar17 + 0x30);
                }
                func_0x000100696384(plVar14,ppuVar15);
                func_0x000108675d3c();
                func_0x000108675a38();
                puVar17 = puVar17 + 1;
              }
            }
            *(undefined4 *)(puVar9 + 0x3f) = *(undefined4 *)(puVar9 + 0xa1);
            func_0x000104be0ccc(puVar3,puVar9 + 0x5e);
            puVar9[0x44] = *plVar1;
            *(undefined1 *)(puVar9 + 0x45) = *(undefined1 *)(puVar9 + 0x7f);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (puVar9 + 0x46,puVar9 + 0x80);
            func_0x0001086759e8();
            func_0x000107c279ac(puVar9 + 0x4c,puVar9 + 0x6d);
            ppuVar15 = ppuVar11;
            FUN_10866ebe4(puVar9 + 0x4f);
            unaff_x26 = (long *)puVar9[0x97];
            if (unaff_x26 < (long *)puVar9[0x98]) {
              func_0x000108675a80(unaff_x26);
              plVar21 = unaff_x26 + 0x1b;
            }
            else {
              plVar21 = (long *)((long)unaff_x26 - *extraout_x9);
              func_0x000108675dac();
              uVar7 = extraout_x11_00 <= extraout_x9_02;
              if (extraout_x11_00 < extraout_x9_02) {
                FUN_108672ba4();
                goto LAB_108671400;
              }
              func_0x0001086756dc();
              func_0x000108675b10();
              lVar24 = extraout_x9_03;
              if ((bool)uVar7) {
                lVar24 = extraout_x11_01;
              }
              puVar9[0x8a] = puVar9 + 0x98;
              if (lVar24 == 0) {
                ppuVar15 = (undefined **)0x0;
              }
              else {
                func_0x000108672c88();
              }
              puVar9[0x86] = lVar24;
              lVar23 = lVar24 + (long)plVar21;
              puVar9[0x87] = lVar23;
              puVar9[0x89] = lVar24 + (long)ppuVar15 * 0xd8;
              func_0x000108675a80(lVar23);
              puVar9[0x88] = lVar23 + 0xd8;
              FUN_108672bb0(extraout_x9,plVar2);
              func_0x000108675bc8();
              unaff_x26 = plVar2;
            }
            puVar9[0x97] = plVar21;
            func_0x000108675a28();
            func_0x000108675a90();
            FUN_10866e508(plVar1);
          }
          func_0x00010866e4e8(ppuVar11);
        }
        func_0x000108675c50();
        puVar19 = (uint *)puVar9[0x9b];
        puVar16 = (uint *)(puVar9[0x9c] + 4);
      }
      uVar7 = puVar9[0x96] == puVar9[0x97];
      if ((bool)uVar7) {
        func_0x000108675598();
      }
      else {
        plVar14 = plVar26;
        func_0x000107c2825c();
        func_0x000108675974();
        puVar9[0x7f] = 0;
        puVar9[0x80] = 0;
        *plVar1 = 0;
        if ((long)plVar26 - (long)unaff_x26 != 0) {
          if (&PTR_PTR_11326cb58 < (undefined **)(((long)plVar26 - (long)unaff_x26) / 0xd8)) {
            FUN_108672d94();
            goto LAB_108671400;
          }
          func_0x0001086759c0();
          func_0x00010867563c();
          func_0x0001086759b0();
          unaff_x26 = (long *)puVar9[0x96];
          plVar26 = (long *)puVar9[0x97];
        }
        func_0x000108675a04();
        lVar24 = 0;
        if (extraout_x8_06 != 0) {
          lVar24 = (long)plVar14 / extraout_x8_06;
        }
        for (; uVar7 = unaff_x26 == plVar26, !(bool)uVar7; unaff_x26 = unaff_x26 + 0x1b) {
          uVar18 = puVar9[0x7f];
          bVar6 = (ulong)puVar9[0x80] <= uVar18;
          bVar8 = uVar18 == puVar9[0x80];
          if (bVar6) {
            func_0x000108675ac8();
            if (bVar6 && !bVar8) goto LAB_1086713e4;
            func_0x0001086756dc();
            func_0x000108675bf4();
            func_0x000108675964();
            ppuStack_88 = ppuStack_88 + 0xb;
            func_0x00010867563c();
            lVar23 = puVar9[0x7f];
            func_0x0001086759b0();
          }
          else {
            func_0x000108675964();
            lVar23 = uVar18 + 0x58;
          }
          puVar9[0x7f] = lVar23;
        }
        func_0x000108675d6c();
        if (extraout_x9_04 != 0) {
          do {
            func_0x00010867548c();
          } while (extraout_w10_01 != 0);
        }
        func_0x000108675e80();
        if (extraout_x8_07 != 0) {
          do {
            func_0x00010867548c();
          } while (extraout_w10_02 != 0);
        }
        func_0x000108675ae0();
        func_0x000108675e38(extraout_x9);
        puVar9[0x46] = lVar24;
        func_0x000107c27994(puVar9 + 0x47);
        uVar28 = NEON_rev64(puVar9[0xa0],4);
        puVar9[0x4a] = uVar28;
        FUN_1086708f8(puVar9 + 0x90);
        ppuVar15 = ppuVar11;
        func_0x0001086758c4();
        ppuVar22 = (undefined **)puVar9[0x74];
        ppuVar22[2] = (undefined *)0x0;
        func_0x0001086756f4();
        *ppuVar22 = extraout_x8_08;
        ppuVar22[1] = (undefined *)0x0;
        if (puVar9[0x91] != 0) {
          do {
            func_0x00010867548c();
          } while (extraout_w10_03 != 0);
        }
        func_0x000108675c44();
        ppuStack_80 = (undefined **)0x0;
        func_0x000108675d34();
        puVar27 = (undefined *)puVar9[0x5a];
        uVar28 = puVar9[0x5c];
        ppuVar15[2] = (undefined *)puVar9[0x5b];
        ppuVar15[1] = puVar27;
        *ppuVar15 = (undefined *)&PTR_SUB_110a61808;
        puVar9[0x5b] = 0;
        *puVar10 = 0;
        func_0x0001086758f8(0,uVar28);
        func_0x000108675d98();
        func_0x000108675cc4();
        ppuVar15[0xc] = (undefined *)puVar9[0x65];
        ppuStack_80 = ppuVar15;
        func_0x000108675cb8(ppuVar22 + 3);
        lVar24 = puVar9[0x99];
        func_0x0001086759a8();
        func_0x00010867175c(puVar10);
        func_0x000108675a60();
        func_0x000108675b4c();
        func_0x00010865f950(ppuVar11);
        plVar26 = *(long **)(lVar24 + 0x20);
        ppuStack_98 = &PTR_PTR_11326cb58;
        ppuStack_90 = ppuVar22;
        if (ppuVar22 != (undefined **)0x0) {
          do {
            func_0x00010867548c();
          } while (extraout_w10_04 != 0);
        }
        (**(code **)(*plVar26 + 0x310))();
        func_0x0001086759b8();
        *ppuVar11 = *(undefined **)(puVar9[0x90] + 8);
        do {
          func_0x00010867549c();
        } while (extraout_w10_05 != 0);
        *puVar10 = *ppuVar11;
        do {
          func_0x00010867549c();
        } while (extraout_w10_06 != 0);
        func_0x00010867571c(*puVar10);
        if ((extraout_w8_01 >> 1 & 1) == 0) {
          *(undefined1 *)((long)puVar9 + 0x50e) = 1;
          puVar27 = *ppuVar12;
          if (puVar27 == (undefined *)0x0) {
            func_0x000107c3a5c0();
            puVar27 = (undefined *)*plVar26;
          }
          func_0x000108675b40();
          plVar26 = extraout_x8_09;
          lVar24 = extraout_x9_05;
LAB_108671354:
          if (*plVar26 == 0) {
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar8) {
              *plVar26 = lVar24;
              cVar4 = ExclusiveMonitorsStatus();
            }
            uVar7 = cVar4 == '\0';
            uVar18 = (ulong)-(uint)(byte)uVar7;
            uVar20 = 0;
          }
          else {
            func_0x000108675864();
            plVar26 = extraout_x8_10;
            lVar24 = extraout_x9_06;
            uVar18 = extraout_x11_02;
            uVar20 = extraout_w10_07;
          }
          if ((uVar18 & 1) == 0) goto code_r0x000108671374;
          func_0x0001086757f8();
          if ((bool)uVar7) {
            func_0x0001086754ac();
            func_0x0001086755f8();
            func_0x000108675550();
          }
          func_0x000108675a98();
          *(undefined **)(extraout_x8_11 + 0x20) = puVar27;
          func_0x0001086754bc();
          puVar10 = extraout_x8_12;
LAB_1086710c8:
          *puVar10 = 0;
          goto LAB_108671068;
        }
LAB_108671378:
        func_0x000107c28a1c(puVar10);
        func_0x000107c27f9c(puVar10);
        func_0x000107c27f9c(ppuVar11);
        func_0x000108675598();
        FUN_10865f960(plVar2);
        func_0x000108675a88();
        func_0x000108675a30();
        FUN_108672ffc(plVar1);
      }
      func_0x000108671730(extraout_x9);
    }
    func_0x0001086755d0();
  }
  func_0x000108675590();
  func_0x0001086755c8();
LAB_108671068:
  func_0x0001086754e4(uStack_70);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
LAB_1086713e4:
  FUN_108672d94();
LAB_108671400:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x108671404);
  (*pcVar5)();
code_r0x000108671374:
  if ((uVar20 >> 1 & 1) != 0) goto LAB_108671378;
  goto LAB_108671354;
}



/* Entry: 108671688; end: 1086716eb;  */

void FUN_108671688(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ushort unaff_w20;
  
  func_0x000108675de8();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108675dd4();
  }
  func_0x000108675bd4();
  if (unaff_w20 < 0x2b8) {
    func_0x000108675ab8();
  }
  func_0x000108675c00();
  func_0x000108675544();
  return;
}



/* Entry: 1086716ec; end: 10867178f;  */

long FUN_1086716ec(long param_1)

{
  FUN_1088f72bc(param_1 + 0x80);
  func_0x000107c27a04(param_1 + 0x68);
  func_0x000107c27a04(param_1 + 0x50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  func_0x000107c279c4(param_1 + 8);
  return param_1;
}



/* Entry: 108671790; end: 1086718df;  */

void FUN_108671790(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar3;
  long lVar4;
  undefined8 *extraout_x8_04;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  long unaff_x22;
  
  func_0x000108675828();
  plVar2 = param_1;
  func_0x000108675cb0(FUN_108675120);
  func_0x000108675cec();
  *(int *)(param_1 + 9) = (int)unaff_x22;
  func_0x000108675b8c();
  func_0x000108675e10();
  FUN_1086718e0();
  param_1[7] = param_1[8];
  do {
    func_0x00010867549c();
  } while (extraout_w10 != 0);
  func_0x00010867571c(param_1[7]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)((long)param_1 + 0x4c) = 0;
    func_0x000108675440();
    lVar6 = *plVar2;
    if (lVar6 == 0) {
      func_0x000107c3a5c0();
      lVar6 = *plVar2;
    }
    func_0x000108675b40();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x0001086755a8();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar5 = extraout_w11_00;
      }
      else {
        func_0x000108675864();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar5 = extraout_w11;
      }
      if ((uVar5 & 1) != 0) {
        func_0x0001086757dc();
        uVar3 = extraout_x8_02;
        if ((bool)in_ZR) {
          func_0x0001086754ac();
          func_0x000108675608();
          func_0x000108675570();
          uVar3 = extraout_x8_03;
        }
        lVar4 = unaff_x22 + (uVar3 & 0xffffffff) * 0x18;
        *(undefined8 *)(lVar4 + 0x10) = 0;
        *(long **)(lVar4 + 0x18) = param_1;
        *(long *)(lVar4 + 0x20) = lVar6;
        func_0x0001086754bc();
        *extraout_x8_04 = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c28834(param_1 + 7);
  func_0x000108675750();
  func_0x000108675714();
  func_0x0001086756c4();
  func_0x000108675598();
  func_0x000108675590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086718e0; end: 1086722fb;  */

void FUN_1086718e0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,long *param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined ***pppuVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined4 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  uint extraout_w8;
  undefined8 extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  undefined8 extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  undefined8 *extraout_x8_07;
  int extraout_w9;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint uVar17;
  int extraout_w11;
  int extraout_w11_00;
  ulong extraout_x11;
  ulong uVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long *plStack_100;
  undefined ***pppuStack_f0;
  undefined4 *puStack_e8;
  undefined8 *puStack_e0;
  undefined **ppuStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 *puStack_98;
  undefined4 uStack_90;
  char cStack_78;
  undefined8 uStack_70;
  
  puVar14 = param_3;
  func_0x0001086755b8();
  lVar7 = 0x500;
  uStack_70 = extraout_x8;
  __Znwm();
  func_0x000108675cb0(FUN_108675064);
  pppuVar8 = (undefined ***)(lVar7 + 0x10);
  func_0x000107c287c4(param_1);
  uVar6 = *param_4 == param_4[1];
  if (!(bool)uVar6) {
    if ((*(byte *)((long)param_2 + 0x8c) & 1) != 0) {
      puVar21 = (undefined8 *)(lVar7 + 0x4a8);
      *puVar21 = 0;
      *(undefined8 *)(lVar7 + 0x4b0) = 0;
      *(undefined1 *)(lVar7 + 0x4b8) = 0;
      func_0x000107c28258();
      *(undefined ****)(lVar7 + 0x4b0) = pppuVar8;
      *(undefined1 *)(lVar7 + 0x4b8) = 1;
      uVar9 = *param_2;
      func_0x000108675a68(uVar9);
      if ((*(byte *)(lVar7 + 0x1f0) & 1) == 0) {
        func_0x000108675424();
        func_0x0001086754f8();
        func_0x000108675730();
        func_0x000107c2884c(lVar7 + 0x350,uVar9);
        func_0x000108675894();
        puVar14 = (undefined4 *)(lVar7 + 0x350);
        func_0x000108675748();
        pppuVar8 = (undefined ***)(lVar7 + 0x350);
LAB_108671a30:
        func_0x000107c2882c(pppuVar8);
        func_0x000108675738();
        func_0x000108675598();
      }
      else {
        if ((*(byte *)(lVar7 + 0x49) >> 6 & 1) == 0) {
          func_0x000108675424();
          func_0x0001086754f8();
          func_0x000108675730();
          func_0x000107c2884c(lVar7 + 0x378,uVar9);
          func_0x000108675894();
          puVar14 = (undefined4 *)(lVar7 + 0x378);
          func_0x000108675748();
          pppuVar8 = (undefined ***)(lVar7 + 0x378);
          goto LAB_108671a30;
        }
        func_0x000108675dc0();
        uVar5 = ((bool)uVar6 && extraout_w9 == 1) && extraout_w10 == 1;
        if (((bool)uVar6 && extraout_w9 == 1) && 0 < extraout_w10) {
          func_0x000108675424();
          func_0x0001086754f8();
          func_0x000108675730();
          func_0x000107c2884c(lVar7 + 0x3a0,uVar9);
          func_0x000108675894();
          puVar14 = (undefined4 *)(lVar7 + 0x3a0);
          func_0x000108675748();
          pppuVar8 = (undefined ***)(lVar7 + 0x3a0);
          uVar6 = uVar5;
          goto LAB_108671a30;
        }
        uVar18 = lVar7 + 0x38;
        FUN_1086a6978(uVar18,param_2 + 0xc,0);
        if ((uVar18 & 1) == 0) {
          func_0x000108675424();
          func_0x0001086754f8();
          func_0x000108675730();
          func_0x000107c2884c(lVar7 + 0x3c8,uVar18);
          func_0x000108675894();
          puVar14 = (undefined4 *)(lVar7 + 0x3c8);
          func_0x000108675748();
          pppuVar8 = (undefined ***)(lVar7 + 0x3c8);
          uVar6 = uVar5;
          goto LAB_108671a30;
        }
        uVar6 = ((uint)param_5 & 0xfffffffd) == 0x300134;
        if ((bool)uVar6) {
          plVar10 = (long *)param_2[2];
          (**(code **)(*plVar10 + 0x38))(plVar10,lVar7 + 0x20,0);
          if (((ulong)plVar10 >> 0x20 & 1) != 0) {
            func_0x000108675424();
            func_0x0001086754f8();
            func_0x000108675730();
            func_0x000107c2884c(lVar7 + 0x3f0,plVar10);
            func_0x000108675894();
            puVar14 = (undefined4 *)(lVar7 + 0x3f0);
            func_0x000108675748();
            pppuVar8 = (undefined ***)(lVar7 + 0x3f0);
            goto LAB_108671a30;
          }
        }
        (**(code **)(*(long *)param_2[8] + 0x30))(&ppuStack_b0);
        puVar11 = (undefined4 *)(lVar7 + 0x4f8);
        uVar6 = cStack_78 == '\x01';
        bVar1 = !(bool)uVar6;
        if (bVar1) {
          uStack_c8 = 0;
          uStack_c0 = 0;
          ppuStack_d8 = &PTR_FUN_110a609a8;
          lStack_d0 = 0;
          uStack_b8 = 0x220;
          pppuVar8 = &ppuStack_d8;
          FUN_1086722fc(pppuVar8,param_5);
          func_0x000108675730();
          func_0x000107c2884c(lVar7 + 0x418,pppuVar8);
          func_0x000108675894();
          puVar14 = (undefined4 *)(lVar7 + 0x418);
          func_0x000108675748();
          func_0x000107c2882c(lVar7 + 0x418);
          func_0x000107c2882c(&ppuStack_d8);
          func_0x000108675598();
          uStack_118 = 0;
          uStack_110 = 0;
        }
        else {
          puVar14 = (undefined4 *)(lStack_a8 - (long)ppuStack_b0);
          ppuVar20 = ppuStack_b0;
          FUN_108657e30();
          *puVar11 = (int)ppuVar20;
          *(char *)(lVar7 + 0x4fc) = (char)((ulong)ppuVar20 >> 0x20);
          FUN_108657e88();
          uStack_110 = (ulong)puVar11 & 0xffffffff00;
          uStack_118 = (ulong)puVar11 & 0xff;
        }
        pppuVar8 = &ppuStack_b0;
        FUN_1086566c8(pppuVar8);
        if (cStack_78 != '\0') {
          pppuStack_f0 = (undefined ***)(lVar7 + 0x4c0);
          *pppuStack_f0 = (undefined **)0x0;
          *(undefined8 *)(lVar7 + 0x4c8) = 0;
          *(undefined8 *)(lVar7 + 0x4d0) = 0;
          puVar14 = (undefined4 *)(param_4[1] - *param_4 >> 2);
          func_0x0001056c5718();
          puStack_e0 = (undefined8 *)(lVar7 + 0x1f8);
          puStack_e8 = (undefined4 *)(lVar7 + 0x2b8);
          puStack_120 = (undefined8 *)(lVar7 + 0x490);
          plStack_100 = (long *)(lVar7 + 0x4d8);
          puVar2 = (undefined4 *)param_4[1];
          for (puVar11 = (undefined4 *)*param_4; puVar11 != puVar2; puVar11 = puVar11 + 1) {
            *puStack_e8 = *puVar11;
            uVar9 = *param_2;
            puVar14 = param_3;
            FUN_10886db5c(puStack_e0,uVar9);
            if ((*(byte *)(lVar7 + 0x2b0) & 1) == 0) {
              func_0x000108675e44();
              ppuStack_b0 = &PTR_FUN_110a609a8;
              uStack_90 = 0x220;
              func_0x0001086754f8();
              func_0x000108675730();
              func_0x000107c2884c(lVar7 + 0x440,uVar9);
              puVar14 = (undefined4 *)(lVar7 + 0x440);
              func_0x000108675d48(*(undefined8 *)(*param_4 + 0x50));
              lVar19 = lVar7 + 0x440;
LAB_108671d34:
              func_0x000107c2882c(lVar19);
              func_0x000108675738();
            }
            else if ((*(char *)(lVar7 + 0x230) != '\x01') ||
                    (*(long *)(lVar7 + 0x218) == *(long *)(lVar7 + 0x220))) {
              if (*(char *)(lVar7 + 0x2a8) == '\x01') {
                param_4 = *(long **)(lVar7 + 0x290);
                plVar10 = *(long **)(lVar7 + 0x298);
                do {
                  if (param_4 == plVar10) goto LAB_108671d40;
                  plVar12 = param_4;
                  func_0x0001006760a8(param_4,param_2 + 0xc);
                  param_4 = param_4 + 3;
                } while ((int)plVar12 == 0);
                func_0x000108675e44();
                ppuStack_b0 = &PTR_FUN_110a609a8;
                uStack_90 = 0x220;
                func_0x0001086754f8();
                func_0x000108675730();
                func_0x000107c2884c(lVar7 + 0x468,plVar12);
                puVar14 = (undefined4 *)(lVar7 + 0x468);
                func_0x000108675d48(*(undefined8 *)(*param_4 + 0x50));
                lVar19 = lVar7 + 0x468;
                goto LAB_108671d34;
              }
LAB_108671d40:
              puVar14 = puStack_e8;
              func_0x0001009eba34(pppuStack_f0);
            }
            FUN_108669930(puStack_e0);
          }
          uVar6 = *(long *)(lVar7 + 0x4c0) == *(long *)(lVar7 + 0x4c8);
          if ((bool)uVar6) {
            func_0x000108675598();
          }
          else {
            uVar3 = *(undefined4 *)(lVar7 + 0x58);
            func_0x000107c2825c();
            lVar15 = 1000;
            lVar19 = param_2[7];
            *(undefined8 *)(lVar7 + 0x2b8) = param_2[6];
            *(long *)(lVar7 + 0x2c0) = lVar19;
            if (lVar19 != 0) {
              do {
                func_0x0001086757cc();
                lVar15 = extraout_x8_00;
              } while (extraout_w11 != 0);
            }
            lVar19 = param_2[0xb];
            *(undefined8 *)(lVar7 + 0x2c8) = param_2[10];
            *(long *)(lVar7 + 0x2d0) = lVar19;
            lVar16 = 0;
            if (lVar15 != 0) {
              lVar16 = (long)puVar21 / lVar15;
            }
            if (lVar19 != 0) {
              do {
                func_0x0001086757cc();
                lVar16 = extraout_x8_01;
              } while (extraout_w11_00 != 0);
            }
            *(long *)(lVar7 + 0x2d8) = lVar16;
            func_0x000107c27994(lVar7 + 0x2e0,param_3);
            func_0x00010731e2b0(lVar7 + 0x2f8,pppuStack_f0);
            *(undefined4 *)(lVar7 + 0x310) = uVar3;
            *(uint *)(lVar7 + 0x314) = (uint)param_5;
            *(ulong *)(lVar7 + 0x318) = uStack_110 | uStack_118;
            *(bool *)(lVar7 + 800) = !bVar1;
            FUN_1086708f8(plStack_100);
            func_0x0001086758c4(puStack_120);
            puVar21 = *(undefined8 **)(lVar7 + 0x4a0);
            puVar21[2] = 0;
            func_0x0001086756f4();
            *puVar21 = extraout_x8_02;
            puVar21[1] = 0;
            ppuStack_d8 = *(undefined ***)(lVar7 + 0x4d8);
            lStack_d0 = *(long *)(lVar7 + 0x4e0);
            if (lStack_d0 != 0) {
              do {
                func_0x00010867548c();
              } while (extraout_w10_00 != 0);
            }
            FUN_108673bac(puStack_e0,puStack_e8);
            puStack_98 = (undefined8 *)0x0;
            puVar13 = (undefined8 *)0x78;
            __Znwm();
            *puVar13 = &PTR_FUN_110a61888;
            uVar9 = *puStack_e0;
            uVar23 = *(undefined8 *)(lVar7 + 0x210);
            uVar22 = *(undefined8 *)(lVar7 + 0x208);
            puVar13[2] = *(undefined8 *)(lVar7 + 0x200);
            puVar13[1] = uVar9;
            *puStack_e0 = 0;
            *(undefined8 *)(lVar7 + 0x200) = 0;
            puVar13[4] = uVar23;
            puVar13[3] = uVar22;
            *(undefined8 *)(lVar7 + 0x208) = 0;
            *(undefined8 *)(lVar7 + 0x210) = 0;
            puVar13[5] = *(undefined8 *)(lVar7 + 0x218);
            func_0x000107c27994(puVar13 + 6,lVar7 + 0x220);
            uVar9 = *(undefined8 *)(lVar7 + 0x238);
            puVar13[10] = *(undefined8 *)(lVar7 + 0x240);
            puVar13[9] = uVar9;
            puVar13[0xb] = *(undefined8 *)(lVar7 + 0x248);
            *(undefined8 *)(lVar7 + 0x240) = 0;
            *(undefined8 *)(lVar7 + 0x248) = 0;
            *(undefined8 *)(lVar7 + 0x238) = 0;
            uVar9 = *(undefined8 *)(lVar7 + 0x250);
            puVar13[0xd] = *(undefined8 *)(lVar7 + 600);
            puVar13[0xc] = uVar9;
            *(undefined1 *)(puVar13 + 0xe) = *(undefined1 *)(lVar7 + 0x260);
            puStack_98 = puVar13;
            FUN_10867a1d8(puVar21 + 3,&ppuStack_d8,&ppuStack_b0);
            func_0x00010865f8f8(&ppuStack_b0);
            FUN_1086723b4(puStack_e0);
            func_0x000104be3970(&ppuStack_d8);
            lVar19 = *(long *)(lVar7 + 0x4a0);
            *(undefined8 *)(lVar7 + 0x4a0) = 0;
            ppuVar20 = (undefined **)(lVar19 + 0x18);
            *(undefined ***)(lVar7 + 0x4e8) = ppuVar20;
            *(long *)(lVar7 + 0x4f0) = lVar19;
            func_0x00010865f950(puStack_120);
            plVar10 = (long *)param_2[4];
            ppuStack_b0 = ppuVar20;
            lStack_a8 = lVar19;
            if (lVar19 != 0) {
              do {
                func_0x00010867548c();
              } while (extraout_w10_01 != 0);
            }
            puVar14 = param_3;
            (**(code **)(*plVar10 + 0x308))();
            pppuVar8 = &ppuStack_b0;
            func_0x000104be3970();
            *puStack_120 = *(undefined8 *)(*plStack_100 + 8);
            do {
              func_0x00010867549c();
            } while (extraout_w10_02 != 0);
            *puStack_e0 = *puStack_120;
            do {
              func_0x00010867549c();
            } while (extraout_w10_03 != 0);
            func_0x00010867571c(*puStack_e0);
            if ((extraout_w8 >> 1 & 1) == 0) {
              *(undefined1 *)(lVar7 + 0x4fd) = 0;
              func_0x000108675440();
              ppuVar20 = *pppuVar8;
              if (ppuVar20 == (undefined **)0x0) {
                func_0x000107c3a5c0();
                ppuVar20 = *pppuVar8;
              }
              func_0x000108675b40();
              plVar10 = extraout_x8_03;
              lVar19 = extraout_x9;
              do {
                if (*plVar10 == 0) {
                  cVar4 = '\x01';
                  bVar1 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar1) {
                    *plVar10 = lVar19;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  uVar6 = cVar4 == '\0';
                  uVar18 = (ulong)-(uint)(byte)uVar6;
                  uVar17 = 0;
                }
                else {
                  func_0x000108675864();
                  plVar10 = extraout_x8_04;
                  lVar19 = extraout_x9_00;
                  uVar18 = extraout_x11;
                  uVar17 = extraout_w10_04;
                }
                if ((uVar18 & 1) != 0) {
                  func_0x0001086757dc();
                  uVar18 = extraout_x8_05;
                  if ((bool)uVar6) {
                    func_0x0001086754ac();
                    func_0x000108675608();
                    func_0x000108675570();
                    uVar18 = extraout_x8_06;
                  }
                  uVar18 = uVar18 & 0xffffffff;
                  *(undefined8 *)(param_3 + uVar18 * 6 + 4) = 0;
                  *(long *)(param_3 + uVar18 * 6 + 6) = lVar7;
                  *(undefined ***)(param_3 + uVar18 * 6 + 8) = ppuVar20;
                  func_0x0001086754bc();
                  *extraout_x8_07 = 0;
                  goto LAB_108671a48;
                }
              } while ((uVar17 >> 1 & 1) == 0);
            }
            func_0x000107c28a1c(puStack_e0);
            func_0x000107c27f9c(puStack_e0);
            func_0x0001086758f0();
            func_0x000108675598();
            func_0x0001086758cc();
            FUN_10867340c(plStack_100);
            FUN_1086723b4(puStack_e8);
          }
          pppuVar8 = pppuStack_f0;
          func_0x00010731e26c(pppuStack_f0);
        }
      }
      func_0x0001086755d0();
      goto LAB_108671a40;
    }
    func_0x000108675424();
    func_0x0001086754f8();
    func_0x000108675730();
    func_0x000107c2884c(lVar7 + 0x328,pppuVar8);
    func_0x000108675894();
    puVar14 = (undefined4 *)(lVar7 + 0x328);
    func_0x000108675748();
    pppuVar8 = (undefined ***)(lVar7 + 0x328);
    func_0x000107c2882c(pppuVar8);
    func_0x000108675738();
  }
  func_0x000108675598();
LAB_108671a40:
  while( true ) {
    func_0x000108675590();
    func_0x0001086755c8();
LAB_108671a48:
    func_0x0001086754e4(uStack_70);
    if ((bool)uVar6) break;
    ___stack_chk_fail();
    if ((int)puVar14 != 0) goto LAB_108672074;
    do {
      __Unwind_Resume(pppuVar8);
LAB_108672074:
      func_0x000104bd46a0();
    } while ((int)puVar14 == 0);
    func_0x000107c27f9c(puStack_e0);
    func_0x000107c27f9c(puStack_120);
    func_0x0001086758cc();
    FUN_10867340c(plStack_100);
    FUN_1086723b4(puStack_e8);
    func_0x00010731e26c(pppuStack_f0);
    func_0x0001086755d0();
    ___cxa_begin_catch();
    func_0x0001086755d8();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1086722fc; end: 10867235f;  */

void FUN_1086722fc(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ushort unaff_w20;
  
  func_0x000108675de8();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108675dd4();
  }
  func_0x000108675bd4();
  if (unaff_w20 < 0x2b8) {
    func_0x000108675ab8();
  }
  func_0x000108675c00();
  func_0x000108675544();
  return;
}



/* Entry: 108672360; end: 1086723b3;  */

undefined8 FUN_108672360(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000108675bd4(param_1,PTR_DAT_113268d40);
  func_0x000108675ab8((uint)param_2 & 0x17f);
  func_0x000107c28824(param_1,auStack_38);
  func_0x000108675544();
  return param_2;
}



/* Entry: 1086723b4; end: 108672447;  */

undefined8 FUN_1086723b4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010731e26c(param_1 + 0x40);
  func_0x000107c27914(param_1 + 0x28);
  func_0x000107c28a0c(param_1 + 0x10);
  func_0x0001004b55a0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108672448; end: 108672617;  */

void FUN_108672448(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *plVar3;
  long *extraout_x8;
  long *extraout_x8_00;
  uint extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint uVar4;
  undefined8 *unaff_x20;
  long unaff_x23;
  ulong uStack_1d0;
  byte bStack_110;
  ulong auStack_108 [24];
  byte bStack_48;
  
  func_0x000108675948();
  *param_1 = FUN_1086751a0;
  param_1[1] = FUN_1086752a8;
  param_1[0x25] = unaff_x20;
  func_0x000108675a78();
  func_0x000108675ce0();
  if ((*(byte *)((long)unaff_x20 + 0x8c) & 1) == 0) {
    func_0x000108675598();
  }
  else {
    FUN_10886ddf8(param_1 + 4,*unaff_x20,0x32);
    func_0x000108675e24();
    func_0x000108675be8();
    func_0x000108675bdc();
    while ((((bStack_48 & 1) != 0 || ((bStack_110 & 1) != 0)) &&
           (in_ZR = auStack_108[0] == uStack_1d0, !(bool)in_ZR))) {
      FUN_108669804(auStack_108);
      func_0x000108675938();
      func_0x0001009eba34();
      FUN_10866a30c(auStack_108);
    }
    func_0x000108675624();
    func_0x000108675630();
    func_0x000108675440();
    func_0x000108675d60();
    while (func_0x000108675d80(), extraout_x9 != 0) {
      plVar2 = (long *)param_1[0x25];
      func_0x000108675794();
      func_0x000108675bb0();
      func_0x000108675784();
      do {
        func_0x00010867549c();
      } while (extraout_w10 != 0);
      func_0x00010867571c(param_1[0x23]);
      if ((extraout_w8 >> 1 & 1) == 0) {
        func_0x000108675774();
        if (unaff_x23 == 0) {
          func_0x000107c3a5c0();
          unaff_x23 = *plVar2;
        }
        plVar3 = param_1 + 0x22;
        do {
          if (*plVar3 == 0) {
            func_0x0001086756ac();
            plVar3 = extraout_x8_00;
            uVar1 = extraout_w9_00;
            uVar4 = extraout_w10_01;
          }
          else {
            func_0x000108675958();
            plVar3 = extraout_x8;
            uVar1 = extraout_w9;
            uVar4 = extraout_w10_00;
          }
          if ((uVar4 & 1) != 0) {
            func_0x000108675514();
            if ((bool)in_ZR) {
              func_0x0001086754ac();
              func_0x00010867547c();
              func_0x000108675408();
              param_1[0x32] = plVar2;
            }
            func_0x000108675450();
            return;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      func_0x00010867596c();
      func_0x000108675618();
      func_0x0001086756bc();
    }
    func_0x000108675598();
    func_0x0001086756d4();
    func_0x0001086756cc();
  }
  func_0x000108675590();
  func_0x0001086755c8();
  return;
}



/* Entry: 108672618; end: 1086729d3;  */

long * FUN_108672618(long *param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong unaff_x25;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar7 = param_2;
  FUN_108848654();
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar13 = uVar15 - 1;
    uVar14 = (uint)uVar15;
    if ((uVar15 & uVar13) == 0) {
      unaff_x25 = uVar14 - 1 & uVar7;
    }
    else {
      unaff_x25 = uVar7;
      if (uVar15 <= uVar7) {
        uVar1 = 0;
        if (uVar14 != 0) {
          uVar1 = (uint)uVar7 / uVar14;
        }
        unaff_x25 = (ulong)((uint)uVar7 - uVar1 * uVar14);
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_1086726dc;
          uVar5 = plVar12[1];
          if (uVar5 != uVar7) break;
          plVar3 = plVar12 + 2;
          func_0x0001006760a8(plVar3,param_2);
          if (((ulong)plVar3 & 1) != 0) goto LAB_10867299c;
        }
        if ((uVar15 & uVar13) == 0) {
          uVar5 = uVar5 & uVar13;
        }
        else if (uVar15 <= uVar5) {
          uVar6 = 0;
          if (uVar15 != 0) {
            uVar6 = uVar5 / uVar15;
          }
          uVar5 = uVar5 - uVar6 * uVar15;
        }
      } while (uVar5 == unaff_x25);
    }
  }
LAB_1086726dc:
  plVar3 = param_1 + 2;
  plVar12 = (long *)0x40;
  __Znwm();
  uStack_58 = 0;
  *plVar12 = 0;
  plVar12[1] = uVar7;
  plStack_68 = plVar12;
  plStack_60 = plVar3;
  func_0x000107c27994(plVar12 + 2,param_2);
  plVar12[5] = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((uVar15 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar15))
  goto LAB_108672924;
  uVar13 = 1;
  if (2 < uVar15) {
    uVar13 = (ulong)((uVar15 & uVar15 - 1) != 0);
  }
  uVar13 = uVar13 | uVar15 << 1;
  uVar15 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar13 <= uVar15) {
    uVar13 = uVar15;
  }
  if (uVar13 - 1 == 0) {
    uVar13 = 2;
  }
  else if ((uVar13 & uVar13 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar15 = param_1[1];
  if (uVar15 < uVar13) {
LAB_108672794:
    if (uVar13 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1086729c4);
      (*pcVar2)();
    }
    lVar4 = uVar13 << 3;
    __Znwm(lVar4);
    FUN_108674064(param_1,lVar4);
    param_1[1] = uVar13;
    lVar4 = *param_1;
    for (uVar15 = 0; uVar13 != uVar15; uVar15 = uVar15 + 1) {
      *(undefined8 *)(lVar4 + uVar15 * 8) = 0;
    }
    plVar8 = (long *)*plVar3;
    uVar15 = uVar13;
    if (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      uVar6 = uVar13 - 1;
      uVar5 = 0;
      if (uVar13 != 0) {
        uVar5 = uVar10 / uVar13;
      }
      uVar11 = uVar10;
      if (uVar13 <= uVar10) {
        uVar11 = uVar10 - uVar5 * uVar13;
      }
      if ((uVar13 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      *(long **)(lVar4 + uVar11 * 8) = plVar3;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar5 = plVar8[1];
        if ((uVar13 & uVar6) == 0) {
          uVar5 = uVar5 & uVar6;
        }
        else if (uVar13 <= uVar5) {
          uVar10 = 0;
          if (uVar13 != 0) {
            uVar10 = uVar5 / uVar13;
          }
          uVar5 = uVar5 - uVar10 * uVar13;
        }
        if (uVar5 != uVar11) {
          if (*(long *)(lVar4 + uVar5 * 8) == 0) {
            *(long **)(lVar4 + uVar5 * 8) = plVar9;
            uVar11 = uVar5;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar4 + uVar5 * 8);
            **(long **)(lVar4 + uVar5 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (uVar13 < uVar15) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (uVar13 <= uVar5) {
      uVar13 = uVar5;
    }
    if (uVar13 < uVar15) {
      if (uVar13 != 0) goto LAB_108672794;
      FUN_108674064(param_1,0);
      param_1[1] = 0;
      uVar15 = 0;
    }
    else {
      uVar15 = param_1[1];
    }
  }
  if ((uVar15 & uVar15 - 1) == 0) {
    unaff_x25 = (int)uVar15 - 1 & uVar7;
  }
  else {
    unaff_x25 = uVar7;
    if (uVar15 <= uVar7) {
      uVar13 = 0;
      if (uVar15 != 0) {
        uVar13 = uVar7 / uVar15;
      }
      unaff_x25 = uVar7 - uVar13 * uVar15;
    }
  }
LAB_108672924:
  lVar4 = *param_1;
  plVar8 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar12 = *plVar3;
    *plVar3 = (long)plVar12;
    *(long **)(lVar4 + unaff_x25 * 8) = plVar3;
    if (*plVar12 != 0) {
      uVar7 = *(ulong *)(*plVar12 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar7 = uVar7 & uVar15 - 1;
      }
      else if (uVar15 <= uVar7) {
        uVar13 = 0;
        if (uVar15 != 0) {
          uVar13 = uVar7 / uVar15;
        }
        uVar7 = uVar7 - uVar13 * uVar15;
      }
      *(long **)(lVar4 + uVar7 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10867407c(&plStack_68);
LAB_10867299c:
  return plVar12 + 5;
}



/* Entry: 1086729d4; end: 108672ba3;  */

void FUN_1086729d4(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *plVar3;
  long *extraout_x8;
  long *extraout_x8_00;
  uint extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint uVar4;
  undefined8 *unaff_x20;
  long unaff_x23;
  ulong uStack_1d0;
  byte bStack_110;
  ulong auStack_108 [24];
  byte bStack_48;
  
  func_0x000108675948();
  *param_1 = FUN_1086752d4;
  param_1[1] = FUN_1086753dc;
  param_1[0x25] = unaff_x20;
  func_0x000108675a78();
  func_0x000108675ce0();
  if ((*(byte *)((long)unaff_x20 + 0x8d) & 1) == 0) {
    func_0x000108675598();
  }
  else {
    FUN_10886de9c(param_1 + 4,*unaff_x20,0x32);
    func_0x000108675e24();
    func_0x000108675be8();
    func_0x000108675bdc();
    while ((((bStack_48 & 1) != 0 || ((bStack_110 & 1) != 0)) &&
           (in_ZR = auStack_108[0] == uStack_1d0, !(bool)in_ZR))) {
      FUN_108669804(auStack_108);
      func_0x000108675938();
      func_0x0001009eba34();
      FUN_10866a30c(auStack_108);
    }
    func_0x000108675624();
    func_0x000108675630();
    func_0x000108675440();
    func_0x000108675d60();
    while (func_0x000108675d80(), extraout_x9 != 0) {
      plVar2 = (long *)param_1[0x25];
      func_0x000108675794();
      func_0x000108675c64();
      func_0x000108675784();
      do {
        func_0x00010867549c();
      } while (extraout_w10 != 0);
      func_0x00010867571c(param_1[0x23]);
      if ((extraout_w8 >> 1 & 1) == 0) {
        func_0x000108675774();
        if (unaff_x23 == 0) {
          func_0x000107c3a5c0();
          unaff_x23 = *plVar2;
        }
        plVar3 = param_1 + 0x22;
        do {
          if (*plVar3 == 0) {
            func_0x0001086756ac();
            plVar3 = extraout_x8_00;
            uVar1 = extraout_w9_00;
            uVar4 = extraout_w10_01;
          }
          else {
            func_0x000108675958();
            plVar3 = extraout_x8;
            uVar1 = extraout_w9;
            uVar4 = extraout_w10_00;
          }
          if ((uVar4 & 1) != 0) {
            func_0x000108675514();
            if ((bool)in_ZR) {
              func_0x0001086754ac();
              func_0x00010867547c();
              func_0x000108675408();
              param_1[0x32] = plVar2;
            }
            func_0x000108675450();
            return;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      func_0x00010867596c();
      func_0x000108675618();
      func_0x0001086756bc();
    }
    func_0x000108675598();
    func_0x0001086756d4();
    func_0x0001086756cc();
  }
  func_0x000108675590();
  func_0x0001086755c8();
  return;
}



/* Entry: 108672ba4; end: 108672baf;  */

void FUN_108672ba4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  undefined1 auStack_80 [24];
  undefined1 uStack_68;
  long lStack_58;
  
  func_0x000108675c58();
  func_0x000107c31f08();
  lVar2 = *param_1;
  lVar1 = param_1[1];
  func_0x0001086757a4(*(undefined8 *)(param_2 + 8));
  for (; unaff_x22 != lVar1; unaff_x22 = unaff_x22 + 0xd8) {
    func_0x000108672cc0();
    lStack_58 = lStack_58 + 0xd8;
  }
  uStack_68 = 1;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0xd8) {
    FUN_1086716ec(lVar2);
  }
  func_0x000108672d50(auStack_80);
  func_0x000108675668();
  return;
}



/* Entry: 108672bb0; end: 108672c3f;  */

void FUN_108672bb0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  func_0x000107c31f08();
  lVar2 = *param_1;
  lVar1 = param_1[1];
  func_0x0001086757a4(*(undefined8 *)(param_2 + 8));
  for (; unaff_x22 != lVar1; unaff_x22 = unaff_x22 + 0xd8) {
    func_0x000108672cc0();
    lStack_48 = lStack_48 + 0xd8;
  }
  uStack_58 = 1;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0xd8) {
    FUN_1086716ec(lVar2);
  }
  func_0x000108672d50(auStack_70);
  func_0x000108675668();
  return;
}



/* Entry: 108672c40; end: 108672d93;  */

long * FUN_108672c40(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0xd8;
    FUN_1086716ec();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108672d94; end: 108672d9f;  */

void FUN_108672d94(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  undefined1 auStack_80 [24];
  undefined1 uStack_68;
  long lStack_58;
  
  func_0x000108675c58();
  func_0x000107c31f08();
  lVar2 = *param_1;
  lVar1 = param_1[1];
  func_0x0001086757a4(*(undefined8 *)(param_2 + 8));
  for (; unaff_x22 != lVar1; unaff_x22 = unaff_x22 + 0x58) {
    FUN_10866ebe4();
    lStack_58 = lStack_58 + 0x58;
  }
  uStack_68 = 1;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x58) {
    FUN_1088f72bc(lVar2);
  }
  FUN_108672ed0(auStack_80);
  func_0x000108675668();
  return;
}



/* Entry: 108672da0; end: 108672e2f;  */

void FUN_108672da0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  func_0x000107c31f08();
  lVar2 = *param_1;
  lVar1 = param_1[1];
  func_0x0001086757a4(*(undefined8 *)(param_2 + 8));
  for (; unaff_x22 != lVar1; unaff_x22 = unaff_x22 + 0x58) {
    FUN_10866ebe4();
    lStack_48 = lStack_48 + 0x58;
  }
  uStack_58 = 1;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x58) {
    FUN_1088f72bc(lVar2);
  }
  FUN_108672ed0(auStack_70);
  func_0x000108675668();
  return;
}



/* Entry: 108672e30; end: 108672e9f;  */

long * FUN_108672e30(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108672e7c();
  }
  lVar1 = param_4 + param_3 * 0x58;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x58;
  return param_1;
}



/* Entry: 108672ea0; end: 108672ecf;  */

long FUN_108672ea0(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    lVar1 = param_2 * 0x58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108672f00(param_1);
  }
  return param_1;
}



/* Entry: 108672ed0; end: 108672eff;  */

long FUN_108672ed0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108672f00(param_1);
  }
  return param_1;
}



/* Entry: 108672f00; end: 108672f1f;  */

void FUN_108672f00(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x58;
    FUN_1088f72bc();
  }
  return;
}



/* Entry: 108672f20; end: 108672f97;  */

void FUN_108672f20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x58;
    FUN_1088f72bc();
  }
  return;
}



/* Entry: 108672f98; end: 108672ffb;  */

void FUN_108672f98(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0xd8;
      FUN_1086716ec();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 108672ffc; end: 10867305f;  */

undefined8 FUN_108672ffc(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000108673028(&uStack_28);
  return param_1;
}



/* Entry: 108673060; end: 108673067;  */

void FUN_108673060(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c31f08(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    FUN_1088f72bc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108673068; end: 10867309b;  */

void FUN_108673068(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c31f08();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    FUN_1088f72bc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10867309c; end: 108673113;  */

undefined1 * FUN_10867309c(long *param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x0001086755b8();
  uVar4 = 1;
  uStack_28 = extraout_x8;
  FUN_108673114(auStack_40);
  FUN_108673168(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001086733fc();
  func_0x0001086754e4(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001086733fc();
  func_0x000108675728();
  *(undefined8 *)(puVar3 + 8) = uVar4;
  puVar2 = puVar3;
  FUN_10867313c();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 108673114; end: 10867313b;  */

long FUN_108673114(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10867313c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10867313c; end: 108673167;  */

undefined8 * FUN_10867313c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x555555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a61680;
  param_1[1] = 0;
  func_0x0001086731d4(param_1 + 3);
  return param_1;
}



/* Entry: 108673168; end: 1086731ab;  */

undefined8 * FUN_108673168(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a61680;
  param_1[1] = 0;
  func_0x0001086731d4(param_1 + 3);
  return param_1;
}



/* Entry: 1086731ac; end: 1086731af;  */

void FUN_1086731ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61680;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086731b0; end: 1086731c3;  */

void FUN_1086731b0(void)

{
  func_0x0001086733e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086731c4; end: 1086731df;  */

void FUN_1086731c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086731cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086731e0; end: 1086732a7;  */

undefined8 * FUN_1086731e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107e85d8;
  func_0x000108673220(param_1 + 1);
  *param_1 = &PTR_DAT_110a616d0;
  return param_1;
}



/* Entry: 1086732a8; end: 1086732c3;  */

void FUN_1086732a8(long param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  FUN_1086733d8(param_1 + 0x10,&uStack_18);
  return;
}



/* Entry: 1086732c4; end: 10867333f;  */

void FUN_1086732c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c28a24(&uStack_30);
  uVar2 = uStack_28;
  uVar1 = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_40 = 0;
  func_0x000107c27f98(&uStack_40);
  func_0x000107c31f0c();
  func_0x000107c27fec(&uStack_30);
  return;
}



/* Entry: 108673340; end: 108673343;  */

undefined8 * FUN_108673340(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108673344; end: 1086733af;  */

void FUN_108673344(undefined8 *param_1)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c31f08();
  func_0x000107c288b0(*param_1);
  plVar1 = *(long **)(unaff_x20 + 8);
  func_0x00010054eed4(plVar1,unaff_x19 + 8);
  if (*plVar1 != 0) {
    func_0x000100850dfc(unaff_x19);
  }
  func_0x00010054ef0c();
  return;
}



/* Entry: 1086733b0; end: 1086733d7;  */

void FUN_1086733b0(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1086733d8(param_1 + 8,&uStack_18);
  return;
}



/* Entry: 1086733d8; end: 10867340b;  */

long FUN_1086733d8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x0001005fbb90(*param_1,param_1);
  do {
    uStack_38 = 0;
    lVar1 = unaff_x20 + 0x10;
    func_0x0001005ef680(lVar1,&uStack_38,1,2);
    if ((int)lVar1 != 0) {
      if (*(char *)(unaff_x20 + 0xa0) == '\x01') {
        *(undefined1 *)(unaff_x20 + 0xa0) = 0;
      }
      *(undefined8 *)(unaff_x20 + 0x98) = *param_2;
      *(undefined1 *)(unaff_x20 + 0xa0) = 1;
      *(undefined8 *)(unaff_x20 + 0x10) = 2;
      func_0x0001005fb9fc();
      return lVar1;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  return lVar1;
}



/* Entry: 10867340c; end: 108673433;  */

long FUN_10867340c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108673434; end: 10867347f;  */

void FUN_108673434(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  
  func_0x000108675850();
  if (extraout_x8 != 0) {
    do {
      func_0x00010867548c();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c27994(unaff_x19 + 0x18,param_2 + 0x18);
  return;
}



/* Entry: 108673480; end: 1086734a7;  */

undefined8 * FUN_108673480(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_1;
  func_0x000108675d8c();
  *puVar1 = extraout_x8;
  FUN_108670918(puVar1 + 1);
  return param_1;
}



/* Entry: 1086734a8; end: 1086734bb;  */

void FUN_1086734a8(void)

{
  FUN_108673480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086734bc; end: 1086734f3;  */

undefined8 FUN_1086734bc(undefined8 param_1)

{
  func_0x000108675c24();
  FUN_108673694();
  return param_1;
}



/* Entry: 1086734f4; end: 108673517;  */

undefined8 * FUN_1086734f4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_2;
  func_0x000108675d8c(param_2,param_1 + 8);
  *puVar1 = extraout_x8;
  FUN_108673434(puVar1 + 1);
  return param_2;
}



/* Entry: 108673518; end: 10867365b;  */

void FUN_108673518(long param_1)

{
  undefined ***pppuVar1;
  long *plVar2;
  long lStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a609a8;
  uStack_78 = 0;
  uStack_60 = 0x21e;
  pppuVar1 = &ppuStack_80;
  func_0x0001086759d0(pppuVar1);
  func_0x000107c2884c(auStack_58,pppuVar1);
  func_0x000107c2882c(&ppuStack_80);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a8 = &PTR_FUN_110a609a8;
  uStack_a0 = 0;
  uStack_88 = 0x21e;
  pppuVar1 = &ppuStack_a8;
  func_0x0001086759d0(pppuVar1);
  func_0x000107c2884c(&ppuStack_80,pppuVar1);
  func_0x000107c2882c(&ppuStack_a8);
  lStack_b0 = *(long *)(param_1 + 0x18) * 1000;
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),auStack_58,&lStack_b0);
  plVar2 = *(long **)(param_1 + 8);
  func_0x000107c2884c(&ppuStack_a8,&ppuStack_80);
  (**(code **)(*plVar2 + 0x50))(plVar2,&ppuStack_a8);
  func_0x000107c2882c(&ppuStack_a8);
  func_0x000107c2882c(&ppuStack_80);
  func_0x000107c2882c(auStack_58);
  return;
}



/* Entry: 10867365c; end: 108673687;  */

void FUN_10867365c(undefined8 param_1,undefined8 param_2)

{
  func_0x000108675d50(param_2,param_1,&PTR_DAT_110a617e8);
  func_0x000108675aa8();
  return;
}



/* Entry: 108673688; end: 108673693;  */

undefined ** FUN_108673688(void)

{
  return &PTR_DAT_110a617e8;
}



/* Entry: 108673694; end: 1086736bb;  */

undefined8 * FUN_108673694(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_1;
  func_0x000108675d8c();
  *puVar1 = extraout_x8;
  FUN_108673434(puVar1 + 1);
  return param_1;
}



/* Entry: 1086736bc; end: 1086738db;  */

void FUN_1086736bc(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined4 **ppuStack_88;
  undefined4 **ppuStack_80;
  undefined1 uStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  
  lVar5 = param_2;
  func_0x000108675850();
  if (extraout_x8 != 0) {
    do {
      func_0x00010867548c();
    } while (extraout_w10 != 0);
  }
  lVar6 = *(long *)(param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar8;
  if (lVar6 != 0) {
    do {
      func_0x00010867548c();
    } while (extraout_w10_00 != 0);
  }
  puStack_a0 = (undefined8 *)(unaff_x19 + 0x20);
  *puStack_a0 = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  puVar7 = *(undefined4 **)(param_2 + 0x20);
  puVar1 = *(undefined4 **)(param_2 + 0x28);
  uStack_98 = 0;
  bVar3 = puVar7 <= puVar1;
  if ((long)puVar1 - (long)puVar7 != 0) {
    puVar4 = (undefined4 *)(((long)puVar1 - (long)puVar7) / 0xd8);
    func_0x000108675af8();
    if (bVar3) {
      FUN_108672ba4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108673858);
      (*pcVar2)();
    }
    func_0x000108672c88();
    *(undefined4 **)(unaff_x19 + 0x20) = puVar4;
    *(undefined4 **)(unaff_x19 + 0x28) = puVar4;
    *(undefined4 **)(unaff_x19 + 0x30) = puVar4 + lVar5 * 0x36;
    ppuStack_88 = &puStack_70;
    ppuStack_80 = &puStack_68;
    uStack_78 = 0;
    puStack_90 = (undefined8 *)(unaff_x19 + 0x30);
    puStack_70 = puVar4;
    for (; puStack_68 = puVar4, puVar7 != puVar1; puVar7 = puVar7 + 0x36) {
      *puVar4 = *puVar7;
      func_0x000104be0ccc(puVar4 + 2,puVar7 + 2);
      uVar8 = *(undefined8 *)(puVar7 + 10);
      *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)(puVar7 + 0xc);
      *(undefined8 *)(puVar4 + 10) = uVar8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (puVar4 + 0xe,puVar7 + 0xe);
      func_0x000107c279ac(puVar4 + 0x14,puVar7 + 0x14);
      func_0x000107c279ac(puVar4 + 0x1a,puVar7 + 0x1a);
      FUN_10866bd04(puVar4 + 0x20,puVar7 + 0x20);
      puVar4 = puStack_68 + 0x36;
    }
    uStack_78 = 1;
    func_0x000108672d50(&puStack_90);
    *(undefined4 **)(unaff_x19 + 0x28) = puVar4;
  }
  uStack_98 = 1;
  FUN_1086738dc(&puStack_a0);
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c27994(unaff_x19 + 0x40,param_2 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  return;
}



/* Entry: 1086738dc; end: 108673927;  */

long FUN_1086738dc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_108672f98(param_1);
  }
  return param_1;
}



/* Entry: 108673928; end: 10867393b;  */

void FUN_108673928(void)

{
  func_0x000108673908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


