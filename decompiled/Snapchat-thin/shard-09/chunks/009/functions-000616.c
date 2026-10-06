/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10730f6d0; end: 10730f737;  */

void FUN_10730f6d0(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  *puVar2 = &PTR_FUN_11099f6f8;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10730f71c);
  (*pcVar1)();
}



/* Entry: 10730f738; end: 10730f74b;  */

void FUN_10730f738(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10730f74c; end: 10730f777;  */

undefined * FUN_10730f74c(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 8) - 1;
  if (uVar1 < 3) {
    return (&PTR_DAT_11099f710)[uVar1];
  }
  return &UNK_10f409ff7;
}



/* Entry: 10730f778; end: 10730f78f;  */

long FUN_10730f778(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10730f790; end: 10730f7b7;  */

long FUN_10730f790(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10730f7b8; end: 10730f81b;  */

void FUN_10730f7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  undefined1 auStack_48 [24];
  
  func_0x000107311614();
  func_0x00010002b838();
  FUN_10729d62c(unaff_x19 + 0x20,auStack_48,param_3,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  *(undefined1 *)(unaff_x19 + 0x4c) = 1;
  return;
}



/* Entry: 10730f81c; end: 10730f847;  */

long FUN_10730f81c(long param_1)

{
  FUN_10730f848(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return param_1;
}



/* Entry: 10730f848; end: 10730f8db;  */

undefined8 FUN_10730f848(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auStack_38 [24];
  
  uVar3 = param_2 >> 0x10 & 0xffff;
  if ((uint)uVar3 < 0xd) {
    puVar2 = (&PTR_DAT_1131ad560)[uVar3];
  }
  else {
    puVar2 = &UNK_10f3158b1;
  }
  func_0x00010002b838(auStack_38,puVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x33) {
    puVar2 = (&PTR_DAT_1131ad5c8)[uVar1];
  }
  else {
    puVar2 = &UNK_10f3158c2;
  }
  FUN_10729d5c0(param_1,auStack_38,puVar2);
  func_0x0001073115f0();
  return param_1;
}



/* Entry: 10730f8dc; end: 10730f943;  */

void FUN_10730f8dc(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x00010731169c();
  if ((char)param_2[4] != '\x01') {
    return;
  }
  plVar1 = (long *)param_2[3];
  if (plVar1 != (long *)0x0) {
    if (plVar1 == param_2) {
      func_0x0001073114c8();
      func_0x0001073115d8();
      goto LAB_10730f924;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(long **)(unaff_x19 + 0x18) = plVar1;
LAB_10730f924:
  *(undefined1 *)(unaff_x19 + 0x20) = 1;
  return;
}



/* Entry: 10730f944; end: 10730f98b;  */

long FUN_10730f944(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (*(long *)(param_1 + 0x18) == param_1) {
      uVar1 = 0x20;
    }
    else {
      if (*(long *)(param_1 + 0x18) == 0) {
        return param_1;
      }
      uVar1 = 0x28;
    }
    func_0x0001073114dc(uVar1);
  }
  return param_1;
}



/* Entry: 10730f98c; end: 10730f9ab;  */

void FUN_10730f98c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10730f9ac();
  }
  return;
}



/* Entry: 10730f9ac; end: 10730f9d7;  */

undefined8 FUN_10730f9ac(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10730f9d8(&uStack_28);
  return param_1;
}



/* Entry: 10730f9d8; end: 10730fa33;  */

void FUN_10730f9d8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x20;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10730fa34; end: 10730fa53;  */

void FUN_10730fa34(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lStack_40;
  long lStack_38;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010730fa44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  lStack_38 = plVar4[1];
  lStack_40 = *plVar4;
  if (plVar4[1] != 0) {
    plVar1 = (long *)(plVar4[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10730fab4(extraout_x8,&lStack_40,plVar4[2]);
  func_0x0001073115b8();
  return;
}



/* Entry: 10730fa54; end: 10730fab3;  */

void FUN_10730fa54(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10730fab4(param_1,&uStack_30,param_2[2]);
  func_0x0001073115b8();
  return;
}



/* Entry: 10730fab4; end: 10730faeb;  */

undefined8 * FUN_10730fab4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[2] = param_3;
  func_0x0001073115b8();
  return param_1;
}



/* Entry: 10730faec; end: 10730fb17;  */

void FUN_10730faec(void)

{
  func_0x00010731169c();
  FUN_10730fb18();
  return;
}



/* Entry: 10730fb18; end: 10730fb2b;  */

void FUN_10730fb18(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_10730fb48();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 10730fb2c; end: 10730fb47;  */

void FUN_10730fb2c(long param_1)

{
  FUN_10730fb48();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10730fb48; end: 10730fb8f;  */

long FUN_10730fb48(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001073114c8();
    func_0x0001073115d8();
  }
  else {
    func_0x000107311518();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 10730fb90; end: 10730fbb3;  */

void FUN_10730fb90(void)

{
  func_0x00010731169c();
  FUN_10730fbb4();
  return;
}



/* Entry: 10730fbb4; end: 10730fbc7;  */

void FUN_10730fbb4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_10730fbe4();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 10730fbc8; end: 10730fbe3;  */

void FUN_10730fbc8(long param_1)

{
  FUN_10730fbe4();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10730fbe4; end: 10730fc2f;  */

long FUN_10730fbe4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001073114c8();
    func_0x0001073115d8();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10730fc30; end: 10730fc57;  */

void FUN_10730fc30(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073115e0();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 10730fc58; end: 10730fcbb;  */

void FUN_10730fc58(undefined8 *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long alStack_50 [4];
  long alStack_30 [2];
  
  plVar1 = alStack_50;
  func_0x00010726fc00(alStack_30);
  if (alStack_30[0] != 0) {
    func_0x00010726fc3c();
    func_0x000107311768();
    if (!(bool)in_ZR) {
      func_0x000107311598();
      plVar1 = alStack_30;
      goto LAB_10730fcac;
    }
    func_0x00010726fc88();
  }
  FUN_1072508cc(alStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  alStack_50[0] = 0;
  alStack_50[1] = 0;
LAB_10730fcac:
  FUN_1072508cc(plVar1);
  return;
}



/* Entry: 10730fcbc; end: 10730fcd3;  */

uint FUN_10730fcbc(uint param_1)

{
  FUN_10730fcd4();
  return param_1 ^ 1;
}



/* Entry: 10730fcd4; end: 10730fd1b;  */

bool FUN_10730fcd4(void)

{
  bool bVar1;
  long *aplStack_30 [2];
  
  func_0x00010726fc00(aplStack_30);
  if (aplStack_30[0] == (long *)0x0) {
    bVar1 = true;
  }
  else {
    bVar1 = *aplStack_30[0] == -1;
  }
  FUN_1072508cc(aplStack_30);
  return bVar1;
}



/* Entry: 10730fd1c; end: 10730fd23;  */

void FUN_10730fd1c(void)

{
  return;
}



/* Entry: 10730fd24; end: 10730fd4b;  */

void FUN_10730fd24(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073115fc();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_11099f460;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10730fd4c; end: 10730fd6b;  */

void FUN_10730fd4c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_11099f460;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10730fd6c; end: 1073100ef;  */

void FUN_10730fd6c(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_228 [8];
  undefined8 uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  char cStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_198 [48];
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined1 auStack_138 [48];
  long alStack_108 [5];
  byte bStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined8 **ppuStack_a8;
  undefined1 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x0001073a6a10(auStack_228,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_2 + 8),1);
  uStack_160 = uStack_160 & 0xffffffffffffff00;
  uStack_140 = 0;
  if (cStack_1f8 != '\0') {
    uStack_158 = uStack_210;
    uStack_160 = uStack_218;
    uStack_150 = uStack_208;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_218 = 0;
    uStack_148 = uStack_200;
    uStack_140 = 1;
    func_0x0001073101a0(&uStack_218);
  }
  uStack_168 = uStack_220;
  uStack_220 = 0;
  func_0x000107310124(auStack_138,&uStack_168);
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  func_0x000107310124(auStack_198,&uStack_1d0);
  puStack_1e8 = (undefined8 *)0x0;
  puStack_1e0 = (undefined8 *)0x0;
  puStack_1f0 = (undefined8 *)0x0;
  FUN_107310338(&lStack_d8,auStack_138);
  FUN_107310338(alStack_108,auStack_198);
  ppuStack_a8 = &puStack_1f0;
  uStack_a0 = 0;
  do {
    if ((((bStack_b0 & 1) == 0) && ((bStack_e0 & 1) == 0)) || (lStack_d8 == alStack_108[0])) {
      uStack_a0 = 1;
      FUN_10731030c(&ppuStack_a8);
      func_0x000107311540(alStack_108);
      FUN_1073103ac(&uStack_d0);
      func_0x000107311540(auStack_198);
      func_0x000107311720();
      func_0x000107311540(auStack_138);
      func_0x000107311540(&uStack_168);
      param_1[1] = puStack_1e8;
      *param_1 = puStack_1f0;
      param_1[2] = puStack_1e0;
      puStack_1f0 = (undefined8 *)0x0;
      puStack_1e8 = (undefined8 *)0x0;
      puStack_1e0 = (undefined8 *)0x0;
      *(undefined1 *)(param_1 + 3) = 1;
      FUN_10730f9ac(&puStack_1f0);
      FUN_1073103cc(auStack_228);
      return;
    }
    if ((bStack_b0 & 1) == 0) {
      uVar11 = *(undefined8 *)(lStack_d8 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_98,lStack_d8 + 0x58);
      func_0x0001004c3cd0(auStack_80,&UNK_10f2e0451,auStack_98);
      func_0x00010bcc7444(uVar11,0x65,auStack_80);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    }
    puVar3 = puStack_1e8;
    puVar12 = puStack_1f0;
    if (puStack_1e8 < puStack_1e0) {
      puStack_1e8[2] = uStack_c0;
      puStack_1e8[1] = uStack_c8;
      *puStack_1e8 = uStack_d0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d0 = 0;
      puStack_1e8[3] = uStack_b8;
      puVar13 = puStack_1e8 + 4;
    }
    else {
      lVar14 = (long)puStack_1e8 - (long)puStack_1f0;
      lVar9 = lVar14 >> 5;
      uVar1 = lVar9 + 1;
      if (uVar1 >> 0x3b != 0) {
        FUN_1073101ec();
LAB_107310074:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x107310078);
        (*pcVar4)();
      }
      uVar8 = (long)puStack_1e0 - (long)puStack_1f0 >> 4;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7fffffffffffffdf < (ulong)((long)puStack_1e0 - (long)puStack_1f0)) {
        uVar8 = 0x7ffffffffffffff;
      }
      if (uVar8 >> 0x3b != 0) {
        func_0x000104bd35f4();
        goto LAB_107310074;
      }
      lVar5 = uVar8 << 5;
      __Znwm();
      uVar11 = uStack_c0;
      puVar13 = (undefined8 *)(lVar5 + lVar14);
      puVar13[1] = uStack_c8;
      *puVar13 = uStack_d0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d0 = 0;
      puVar13[2] = uVar11;
      puVar13[3] = uStack_b8;
      puVar10 = puVar13 + lVar9 * -4;
      puVar6 = puVar10;
      for (puVar7 = puVar12; puVar7 != puVar3; puVar7 = puVar7 + 4) {
        uVar15 = puVar7[1];
        uVar11 = *puVar7;
        puVar6[2] = puVar7[2];
        puVar6[1] = uVar15;
        *puVar6 = uVar11;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        puVar6[3] = puVar7[3];
        puVar6 = puVar6 + 4;
      }
      for (; puVar12 != puVar3; puVar12 = puVar12 + 4) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar12);
      }
      puVar13 = puVar13 + 4;
      puStack_1e0 = (undefined8 *)(lVar5 + uVar8 * 0x20);
      bVar2 = puStack_1f0 != (undefined8 *)0x0;
      puStack_1f0 = puVar10;
      if (bVar2) {
        puStack_1e8 = puVar13;
        __ZdlPv();
      }
    }
    puStack_1e8 = puVar13;
    FUN_1073101f8(&lStack_d8);
  } while( true );
}



/* Entry: 1073100f0; end: 107310117;  */

void FUN_1073100f0(undefined8 param_1)

{
  func_0x000107311574();
  func_0x000107311558(param_1,&PTR_DAT_11099f4d0);
  func_0x0001073114b8();
  return;
}



/* Entry: 107310118; end: 107310123;  */

undefined ** FUN_107310118(void)

{
  return &PTR_DAT_11099f4d0;
}



/* Entry: 107310124; end: 1073101c3;  */

void FUN_107310124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    uVar4 = param_2[2];
    uVar3 = param_2[1];
    uVar1 = param_2[3];
    uVar2 = param_2[4];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
    *param_1 = *param_2;
    param_1[2] = uVar4;
    param_1[1] = uVar3;
    param_1[3] = uVar1;
    param_1[4] = uVar2;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  func_0x000107311540();
  return;
}



/* Entry: 1073101c4; end: 1073101eb;  */

void FUN_1073101c4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107311560();
  func_0x000100066230();
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1073101ec; end: 1073101f7;  */

void FUN_1073101ec(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_50 [32];
  
  func_0x0001073116e4();
  lVar2 = *param_1;
  if ((lVar2 != 0) && (func_0x00010054c3a4(), (int)lVar2 != 0)) {
    FUN_1073102c4(auStack_50,*param_1);
    FUN_107310268(param_1 + 1,auStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
    return;
  }
  plVar1 = param_1 + 1;
  if ((char)param_1[5] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(plVar1 + 4) = 0;
  }
  return;
}



/* Entry: 1073101f8; end: 107310267;  */

void FUN_1073101f8(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_40 [32];
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (func_0x00010054c3a4(), (int)lVar2 != 0)) {
    FUN_1073102c4(auStack_40,*param_1);
    FUN_107310268(param_1 + 1,auStack_40);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_40);
    return;
  }
  plVar1 = param_1 + 1;
  if ((char)param_1[5] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(plVar1 + 4) = 0;
  }
  return;
}



/* Entry: 107310268; end: 1073102c3;  */

undefined8 * FUN_107310268(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    FUN_1073101c4(param_1);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    param_1[3] = param_2[3];
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return param_1;
}



/* Entry: 1073102c4; end: 10731030b;  */

void FUN_1073102c4(long param_1,undefined8 param_2)

{
  func_0x00010054c7ec();
  func_0x0001005ecf0c(param_1);
  func_0x00010054c8f4(param_2,1);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



/* Entry: 10731030c; end: 107310337;  */

long FUN_10731030c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10730f9d8(param_1);
  }
  return param_1;
}



/* Entry: 107310338; end: 1073103ab;  */

undefined8 * FUN_107310338(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_2 + 5) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (param_1 + 1,param_2 + 1);
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return param_1;
}



/* Entry: 1073103ac; end: 1073103cb;  */

void FUN_1073103ac(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1073103cc; end: 107310433;  */

undefined8 * FUN_1073103cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 6) != '\0') {
    func_0x0001073101a0(param_1 + 2);
  }
  FUN_1073103ac((ulong)&uStack_50 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x00010054cac4(uVar1);
  FUN_1073103ac(param_1 + 2);
  return param_1;
}



/* Entry: 107310434; end: 10731043b;  */

void FUN_107310434(void)

{
  return;
}



/* Entry: 10731043c; end: 107310463;  */

void FUN_10731043c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073115fc();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_11099f4f0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 107310464; end: 107310483;  */

void FUN_107310464(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_11099f4f0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107310484; end: 1073105cb;  */

void FUN_107310484(long param_1,long *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined8 extraout_x8;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_b8 [32];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  double dStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_38;
  
  func_0x0001073114e8();
  lVar5 = *(long *)(param_1 + 8);
  uStack_38 = extraout_x8;
  if (*(long *)(lVar5 + 0x18) != 0) {
    puStack_98 = &UNK_10e52b660;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    lVar1 = param_2[1];
    for (lVar3 = *param_2; in_ZR = lVar3 == lVar1, !(bool)in_ZR; lVar3 = lVar3 + 0x20) {
      FUN_107310600(auStack_70,&UNK_10f40a014,0xf,lVar3);
      dStack_78 = (double)*(long *)(lVar3 + 0x18);
      FUN_10726c94c(auStack_b8,&puStack_98,auStack_70,&dStack_78);
      func_0x000104c2f714(auStack_70);
    }
    uVar4 = *(undefined8 *)(lVar5 + 0x18);
    FUN_1072790fc(auStack_b8,&puStack_98);
    uStack_58 = 0;
    uVar2 = 0x28;
    __Znwm();
    func_0x00010731167c();
    FUN_1072790fc();
    uStack_58 = uVar2;
    FUN_107292e94(uVar4,auStack_70);
    func_0x000107283e00(auStack_70);
    FUN_10726ae88(auStack_b8);
    FUN_10726ae88();
  }
  func_0x000107311498(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107283e00(auStack_70);
  FUN_10726ae88(auStack_b8);
  FUN_10726ae88(&puStack_98);
  func_0x000107311500();
  func_0x000107311574();
  func_0x000107311558();
  func_0x0001073114b8();
  return;
}



/* Entry: 1073105cc; end: 1073105f3;  */

void FUN_1073105cc(undefined8 param_1)

{
  func_0x000107311574();
  func_0x000107311558(param_1,&PTR_DAT_11099f5f0);
  func_0x0001073114b8();
  return;
}



/* Entry: 1073105f4; end: 1073105ff;  */

undefined ** FUN_1073105f4(void)

{
  return &PTR_DAT_11099f5f0;
}



/* Entry: 107310600; end: 107310653;  */

void FUN_107310600(void)

{
  undefined8 extraout_x8;
  
  func_0x00010731168c();
  FUN_107310654();
  FUN_107310700(extraout_x8);
  return;
}



/* Entry: 107310654; end: 1073106ff;  */

undefined8 * FUN_107310654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  ulong unaff_x19;
  undefined1 auStack_1d0 [3];
  undefined5 uStack_1cd;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined1 *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [256];
  long lStack_40;
  long lStack_38;
  
  puVar5 = &uStack_170;
  func_0x000107311560();
  func_0x0001073114e8();
  lStack_38 = extraout_x8;
  func_0x0001005d466c();
  puStack_158 = auStack_140;
  uStack_148 = 0x100;
  lStack_150 = 0;
  ppuStack_160 = &PTR_FUN_1109965d0;
  lStack_40 = 0;
  puVar8 = (undefined8 *)0xd;
  uStack_170 = param_3;
  uStack_168 = param_2;
  func_0x0001003a9984(&ppuStack_160);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (undefined8 *)(lStack_150 + lStack_40);
  }
  ___stack_chk_fail();
  puVar3 = (undefined8 *)auStack_1d0;
  puVar6 = (undefined8 *)auStack_1d0;
  puVar4 = (undefined8 *)auStack_1d0;
  uVar7 = unaff_x19;
  func_0x0001073114e8();
  uVar2 = uVar7 == 0x25;
  uStack_1a8 = extraout_x8_01;
  if (uVar7 < 0x26) {
    auStack_1d0[2] = 0;
    puVar6 = (undefined8 *)(auStack_1d0 + 2);
    *(undefined1 *)((long)puVar6 + unaff_x19) = 0;
    uVar7 = 0x26;
    auStack_1d0._0_2_ = (short)unaff_x19;
    FUN_107310834();
    extraout_x8_00[1] = lStack_1c8;
    *extraout_x8_00 = CONCAT53(uStack_1cd,CONCAT12(auStack_1d0[2],auStack_1d0._0_2_));
    extraout_x8_00[3] = uStack_1b8;
    extraout_x8_00[2] = uStack_1c0;
    extraout_x8_00[4] = uStack_1b0;
    *(undefined4 *)(extraout_x8_00 + 5) = 1;
    extraout_x8_00[6] = 0xffffffffffffffff;
    puVar4 = puVar8;
  }
  else {
    uVar2 = unaff_x19 == 0x51;
    if (unaff_x19 < 0x52) {
      func_0x000104c302d8(auStack_1d0,0,0);
      puVar1 = (undefined2 *)CONCAT53(uStack_1cd,CONCAT12(auStack_1d0[2],auStack_1d0._0_2_));
      *puVar1 = (short)unaff_x19;
      *(undefined1 *)((long)puVar1 + unaff_x19 + 2) = 0;
      puVar6 = (undefined8 *)(CONCAT53(uStack_1cd,CONCAT12(auStack_1d0[2],auStack_1d0._0_2_)) + 2);
      uVar7 = 0x52;
      FUN_107310834(puVar8);
      extraout_x8_00[1] = lStack_1c8;
      *extraout_x8_00 = CONCAT53(uStack_1cd,CONCAT12(auStack_1d0[2],auStack_1d0._0_2_));
      if (lStack_1c8 != 0) {
        do {
          func_0x0001073115e0();
        } while (extraout_w10 != 0);
      }
      *(undefined4 *)(extraout_x8_00 + 5) = 2;
      extraout_x8_00[6] = 0xffffffffffffffff;
      func_0x000104c2f784();
      puVar4 = puVar3;
    }
    else {
      func_0x000107310864(auStack_1d0,puVar5);
      FUN_1072625b4(extraout_x8_00);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
  }
  func_0x000107311498(uStack_1a8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001073116ac();
    func_0x000104c2f784();
    func_0x000107311500();
    puVar5 = puVar6;
    FUN_1073108a0(puVar6,uVar7,*puVar4,puVar4[1]);
    *(undefined1 *)((long)puVar6 + uVar7) = 0;
    return puVar5;
  }
  return puVar4;
}



/* Entry: 107310700; end: 107310833;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_107310700(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_60;
  puVar4 = (undefined2 *)&uStack_60;
  puVar3 = &uStack_60;
  uVar5 = param_4;
  func_0x0001073114e8();
  uVar1 = uVar5 == 0x25;
  uStack_38 = extraout_x8;
  if (uVar5 < 0x26) {
    uStack_60._2_1_ = 0;
    puVar4 = (undefined2 *)((long)&uStack_60 + 2);
    *(undefined1 *)((long)puVar4 + param_4) = 0;
    uVar5 = 0x26;
    uStack_60._0_2_ = (short)param_4;
    FUN_107310834();
    param_1[1] = lStack_58;
    *param_1 = CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[4] = uStack_40;
    *(undefined4 *)(param_1 + 5) = 1;
    param_1[6] = 0xffffffffffffffff;
    puVar3 = param_5;
  }
  else {
    uVar1 = param_4 == 0x51;
    if (param_4 < 0x52) {
      func_0x000104c302d8(&uStack_60,0,0);
      puVar4 = (undefined2 *)
               CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
      *puVar4 = (short)param_4;
      *(undefined1 *)((long)puVar4 + param_4 + 2) = 0;
      puVar4 = (undefined2 *)
               (CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60)) + 2);
      uVar5 = 0x52;
      FUN_107310834(param_5);
      param_1[1] = lStack_58;
      *param_1 = CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
      if (lStack_58 != 0) {
        do {
          func_0x0001073115e0();
        } while (extraout_w10 != 0);
      }
      *(undefined4 *)(param_1 + 5) = 2;
      param_1[6] = 0xffffffffffffffff;
      func_0x000104c2f784();
      puVar3 = puVar2;
    }
    else {
      func_0x000107310864(&uStack_60,param_6);
      FUN_1072625b4(param_1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
  }
  func_0x000107311498(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x0001073116ac();
    func_0x000104c2f784();
    func_0x000107311500();
    FUN_1073108a0(puVar4,uVar5,*puVar3,puVar3[1]);
    *(undefined1 *)((long)puVar4 + uVar5) = 0;
    return;
  }
  return;
}



/* Entry: 107310834; end: 10731089f;  */

void FUN_107310834(undefined8 *param_1,long param_2,long param_3)

{
  FUN_1073108a0(param_2,param_3,*param_1,param_1[1]);
  *(undefined1 *)(param_2 + param_3) = 0;
  return;
}



/* Entry: 1073108a0; end: 1073108ef;  */

void FUN_1073108a0(void)

{
  func_0x00010731168c();
  func_0x0001005d466c();
  FUN_107268a34();
  return;
}



/* Entry: 1073108f0; end: 107310913;  */

undefined8 FUN_1073108f0(undefined8 param_1)

{
  func_0x00010731167c();
  FUN_10726ae88();
  return param_1;
}



/* Entry: 107310914; end: 107310927;  */

void FUN_107310914(void)

{
  FUN_1073108f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107310928; end: 10731095f;  */

undefined8 FUN_107310928(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x28;
  __Znwm(0x28);
  FUN_107310a94();
  return uVar1;
}



/* Entry: 107310960; end: 107310983;  */

undefined8 FUN_107310960(long param_1,undefined8 param_2)

{
  func_0x00010731167c(param_2,param_1 + 8);
  func_0x000107296178();
  return param_2;
}



/* Entry: 107310984; end: 107310a5f;  */

void FUN_107310984(long param_1,long *param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x00010786978c(auStack_38,param_1 + 8);
  (**(code **)(*param_2 + 0xc0))(param_2,auStack_38);
  FUN_10726b264(auStack_38);
  func_0x000100060b18(auStack_38,&PTR_DAT_11099f5d0);
  auStack_50[0] = 0;
  uStack_40 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x00010726acf0(&uStack_60);
  (**(code **)(*param_2 + 0x110))(param_2,auStack_38,auStack_50,&uStack_60);
  FUN_10726b264(&uStack_60);
  FUN_107279298(auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 107310a60; end: 107310a87;  */

void FUN_107310a60(undefined8 param_1)

{
  func_0x000107311574();
  func_0x000107311558(param_1,&PTR_DAT_11099f5e0);
  func_0x0001073114b8();
  return;
}



/* Entry: 107310a88; end: 107310a93;  */

undefined ** FUN_107310a88(void)

{
  return &PTR_DAT_11099f5e0;
}



/* Entry: 107310a94; end: 107310b1f;  */

undefined8 FUN_107310a94(undefined8 param_1)

{
  func_0x00010731167c();
  func_0x000107296178();
  return param_1;
}



/* Entry: 107310b20; end: 107310b4f;  */

undefined1 * FUN_107310b20(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  FUN_107310b50();
  return param_1;
}



/* Entry: 107310b50; end: 107310ba7;  */

void FUN_107310b50(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107311670();
  FUN_10727fc1c();
  uVar1 = *(uint *)(unaff_x20 + 0x30);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_11099f610)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 107310ba8; end: 107310bc7;  */

void FUN_107310ba8(void)

{
  return;
}



/* Entry: 107310bc8; end: 107310beb;  */

void FUN_107310bc8(long param_1,long param_2)

{
  FUN_10727da70();
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  return;
}



/* Entry: 107310bec; end: 107310c03;  */

void FUN_107310bec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107310c04; end: 107310c43;  */

long * FUN_107310c04(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010730ed24(lVar1 + 0x10);
    }
    func_0x0001073116c8();
  }
  return param_1;
}



/* Entry: 107310c44; end: 107310c67;  */

undefined8 FUN_107310c44(undefined8 param_1)

{
  FUN_107310c68();
  return param_1;
}



/* Entry: 107310c68; end: 107310cc3;  */

void FUN_107310c68(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x30);
  if (*(int *)(param_1 + 0x30) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
        func_0x000107285594((&PTR_FUN_110996f48)[*(uint *)(param_1 + 0x30)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_11099f628)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 107310cc4; end: 107310cd7;  */

void FUN_107310cc4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x30) != 0) {
    uStack_18 = param_3;
    FUN_107310d04(&lStack_20);
  }
  return;
}



/* Entry: 107310cd8; end: 107310d03;  */

void FUN_107310cd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    lStack_20 = param_1;
    uStack_18 = param_3;
    FUN_107310d04(&lStack_20);
  }
  return;
}



/* Entry: 107310d04; end: 107310d27;  */

void FUN_107310d04(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_10727fc1c(lVar1);
  *(undefined4 *)(lVar1 + 0x30) = 0;
  return;
}



/* Entry: 107310d28; end: 107310d2f;  */

void FUN_107310d28(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  long lStack_20;
  undefined1 *puStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  puStack_18 = param_3;
  FUN_107310d6c(&lStack_20);
  return;
}



/* Entry: 107310d30; end: 107310d6b;  */

void FUN_107310d30(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  long lStack_20;
  undefined1 *puStack_18;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  lStack_20 = param_1;
  puStack_18 = param_3;
  FUN_107310d6c(&lStack_20);
  return;
}



/* Entry: 107310d6c; end: 107310d77;  */

void FUN_107310d6c(undefined8 *param_1)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x000107311560(*param_1,param_1[1]);
  FUN_10727fc1c();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 107310d78; end: 107310da7;  */

void FUN_107310d78(void)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x000107311560();
  FUN_10727fc1c();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 107310da8; end: 107310daf;  */

void FUN_107310da8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x30) == 2) {
    func_0x000107311560(param_2,param_3);
    FUN_10727e15c();
    *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
    return;
  }
  FUN_107310e14(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 107310db0; end: 107310deb;  */

void FUN_107310db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x30) == 2) {
    func_0x000107311560(param_2,param_3);
    FUN_10727e15c();
    *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
    return;
  }
  FUN_107310e14(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 107310dec; end: 107310e13;  */

void FUN_107310dec(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107311560();
  FUN_10727e15c();
  *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 107310e14; end: 107310e1f;  */

void FUN_107310e14(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000107311560(*param_1,param_1[1]);
  FUN_10727fc1c();
  FUN_107310bc8();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 107310e20; end: 107310e8f;  */

void FUN_107310e20(void)

{
  long unaff_x20;
  
  func_0x000107311560();
  FUN_10727fc1c();
  FUN_107310bc8();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 107310e90; end: 107310f63;  */

long FUN_107310e90(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 107310f64; end: 1073112eb;  */

undefined1  [16]
FUN_107310f64(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong extraout_x8;
  long lVar7;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar8;
  ulong extraout_x9_00;
  long *plVar9;
  long *plVar10;
  long *extraout_x10;
  ulong uVar11;
  ulong uVar12;
  ulong extraout_x11;
  long *unaff_x19;
  long *plVar13;
  ulong uVar14;
  ulong unaff_x25;
  ulong uVar15;
  undefined1 auVar16 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  func_0x0001073117a4();
  func_0x000100102e7c();
  uVar14 = unaff_x19[1];
  if (uVar14 != 0) {
    uVar15 = uVar14 - 1;
    if ((uVar14 & uVar15) == 0) {
      unaff_x25 = uVar15 & param_1;
    }
    else {
      unaff_x25 = param_1;
      if (uVar14 <= param_1) {
        uVar6 = 0;
        if (uVar14 != 0) {
          uVar6 = param_1 / uVar14;
        }
        unaff_x25 = param_1 - uVar6 * uVar14;
      }
    }
    plVar13 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_107311024;
          uVar6 = plVar13[1];
          if (uVar6 != param_1) break;
          plVar4 = plVar13 + 2;
          func_0x0001000e107c(plVar4,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            uVar5 = 0;
            goto LAB_1073112b4;
          }
        }
        if ((uVar14 & uVar15) == 0) {
          uVar6 = uVar6 & uVar15;
        }
        else if (uVar14 <= uVar6) {
          uVar8 = 0;
          if (uVar14 != 0) {
            uVar8 = uVar6 / uVar14;
          }
          uVar6 = uVar6 - uVar8 * uVar14;
        }
      } while (uVar6 == unaff_x25);
    }
  }
LAB_107311024:
  uVar5 = *param_4;
  plVar4 = unaff_x19 + 2;
  plVar13 = (long *)0x40;
  __Znwm();
  uStack_58 = 0;
  *plVar13 = 0;
  plVar13[1] = param_1;
  plStack_68 = plVar13;
  plStack_60 = plVar4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar13 + 2,uVar5);
  plVar13[5] = 0;
  plVar13[6] = 0;
  plVar13[7] = 0;
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((uVar14 != 0) && ((float)(unaff_x19[3] + 1) <= *(float *)(unaff_x19 + 4) * (float)uVar14))
  goto LAB_107311238;
  bVar2 = 2 < uVar14;
  bVar3 = uVar14 == 3;
  func_0x000107311790(uVar14 << 1);
  uVar15 = extraout_x8;
  if (!bVar2 || bVar3) {
    uVar15 = extraout_x9;
  }
  if (uVar15 - 1 == 0) {
    uVar15 = 2;
  }
  else if ((uVar15 & uVar15 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar14 = unaff_x19[1];
  if (uVar14 < uVar15) {
LAB_1073110d4:
    if (uVar15 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1073112dc);
      (*pcVar1)();
    }
    __Znwm(uVar15 << 3);
    FUN_1073112ec();
    unaff_x19[1] = uVar15;
    lVar7 = *unaff_x19;
    for (uVar14 = 0; uVar15 != uVar14; uVar14 = uVar14 + 1) {
      *(undefined8 *)(lVar7 + uVar14 * 8) = 0;
    }
    plVar9 = (long *)*plVar4;
    uVar14 = uVar15;
    if (plVar9 != (long *)0x0) {
      uVar11 = plVar9[1];
      uVar8 = uVar15 - 1;
      uVar6 = 0;
      if (uVar15 != 0) {
        uVar6 = uVar11 / uVar15;
      }
      uVar12 = uVar11;
      if (uVar15 <= uVar11) {
        uVar12 = uVar11 - uVar6 * uVar15;
      }
      if ((uVar15 & uVar8) == 0) {
        uVar12 = uVar11 & uVar8;
      }
      *(long **)(lVar7 + uVar12 * 8) = plVar4;
      while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
        uVar6 = plVar9[1];
        if ((uVar15 & uVar8) == 0) {
          uVar6 = uVar6 & uVar8;
        }
        else if (uVar15 <= uVar6) {
          uVar11 = 0;
          if (uVar15 != 0) {
            uVar11 = uVar6 / uVar15;
          }
          uVar6 = uVar6 - uVar11 * uVar15;
        }
        if (uVar6 != uVar12) {
          if (*(long *)(lVar7 + uVar6 * 8) == 0) {
            *(long **)(lVar7 + uVar6 * 8) = plVar10;
            uVar12 = uVar6;
          }
          else {
            func_0x000107311640();
            lVar7 = extraout_x8_00;
            uVar8 = extraout_x9_00;
            plVar9 = extraout_x10;
            uVar12 = extraout_x11;
          }
        }
      }
    }
  }
  else if (uVar15 < uVar14) {
    uVar6 = (ulong)((float)(ulong)unaff_x19[3] / *(float *)(unaff_x19 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x000107311620();
    }
    if (uVar15 <= uVar6) {
      uVar15 = uVar6;
    }
    if (uVar15 < uVar14) {
      if (uVar15 != 0) goto LAB_1073110d4;
      FUN_1073112ec();
      unaff_x19[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = unaff_x19[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x25 = uVar14 - 1 & param_1;
  }
  else {
    unaff_x25 = param_1;
    if (uVar14 <= param_1) {
      uVar15 = 0;
      if (uVar14 != 0) {
        uVar15 = param_1 / uVar14;
      }
      unaff_x25 = param_1 - uVar15 * uVar14;
    }
  }
LAB_107311238:
  lVar7 = *unaff_x19;
  plVar9 = *(long **)(lVar7 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar13 = *plVar4;
    *plVar4 = (long)plVar13;
    *(long **)(lVar7 + unaff_x25 * 8) = plVar4;
    if (*plVar13 != 0) {
      uVar15 = *(ulong *)(*plVar13 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar15 = uVar15 & uVar14 - 1;
      }
      else if (uVar14 <= uVar15) {
        uVar6 = 0;
        if (uVar14 != 0) {
          uVar6 = uVar15 / uVar14;
        }
        uVar15 = uVar15 - uVar6 * uVar14;
      }
      *(long **)(lVar7 + uVar15 * 8) = plVar13;
    }
  }
  else {
    *plVar13 = *plVar9;
    *plVar9 = (long)plVar13;
  }
  plStack_68 = (long *)0x0;
  unaff_x19[3] = unaff_x19[3] + 1;
  func_0x000107310e50(&plStack_68);
  uVar5 = 1;
LAB_1073112b4:
  auVar16._8_8_ = uVar5;
  auVar16._0_8_ = plVar13;
  return auVar16;
}



/* Entry: 1073112ec; end: 107311303;  */

void FUN_1073112ec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107311304; end: 10731132f;  */

undefined8 * FUN_107311304(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099f650;
  FUN_10730dfa0(param_1 + 1);
  return param_1;
}



/* Entry: 107311330; end: 107311343;  */

void FUN_107311330(void)

{
  FUN_107311304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107311344; end: 107311377;  */

undefined8 FUN_107311344(undefined8 param_1)

{
  func_0x0001073115b0();
  FUN_107311444();
  return param_1;
}



/* Entry: 107311378; end: 10731139b;  */

void FUN_107311378(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x000107311670(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_11099f650;
  func_0x00010015bc98(param_2 + 1);
  func_0x000107277f30(param_2 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 10731139c; end: 10731140f;  */

void FUN_10731139c(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  undefined1 auStack_48 [16];
  undefined1 uStack_38;
  
  func_0x000107311560();
  lVar1 = *(long *)(param_1 + 0x10);
  for (lVar2 = *(long *)(param_1 + 8); lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    auStack_48[0] = 0;
    uStack_38 = 0;
    (**(code **)(*unaff_x19 + 0x110))();
    FUN_107279298(auStack_48);
  }
  return;
}



/* Entry: 107311410; end: 107311437;  */

void FUN_107311410(undefined8 param_1)

{
  func_0x000107311574();
  func_0x000107311558(param_1,&PTR_DAT_11099f6b0);
  func_0x0001073114b8();
  return;
}



/* Entry: 107311438; end: 107311443;  */

undefined ** FUN_107311438(void)

{
  return &PTR_DAT_11099f6b0;
}



/* Entry: 107311444; end: 107311497;  */

void FUN_107311444(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000107311670();
  *param_1 = &PTR_FUN_11099f650;
  func_0x00010015bc98(param_1 + 1);
  func_0x000107277f30(param_1 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 107311498; end: 1073117c3;  */

void FUN_107311498(void)

{
  return;
}



/* Entry: 1073117c4; end: 1073119eb;  */

void FUN_1073117c4(double param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lStack_170;
  undefined4 uStack_168;
  undefined1 auStack_160 [24];
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [24];
  undefined4 auStack_c0 [6];
  undefined4 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if (*(char *)(param_2 + 6) == '\x01') {
    puVar1 = param_2;
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (*(char *)(param_2 + 5) == '\x01') {
      uVar4 = *param_2;
      auStack_c0[0] = 0x65;
      uStack_a8 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      ppuStack_a0 = &PTR_FUN_110996720;
      uStack_98 = 0;
      uStack_80 = 0x65;
      uStack_78 = 0;
      uStack_74 = 1;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_70 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_d8,param_2 + 1);
      puVar2 = auStack_c0;
      FUN_10726e300(puVar2,&DAT_10f34bc88,auStack_d8);
      lStack_170 = ((long)puVar1 - param_2[4]) / 1000;
      uStack_148 = *(undefined8 *)*param_2;
      uStack_140 = 3;
      func_0x00010743f9dc(uVar4,puVar2,&lStack_170,&uStack_148,7);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
      FUN_107262330(auStack_c0);
    }
    uStack_148._0_4_ = 0x66;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    ppuStack_128 = &PTR_FUN_110996720;
    uStack_120 = 0;
    uStack_108 = 0x66;
    uStack_100 = 0;
    uStack_fc = 1;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_f8 = 0;
    puVar3 = &uStack_148;
    FUN_1072a0318(puVar3,&DAT_10f34b835,(int)param_1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_160,param_2 + 1);
    FUN_10726e300(puVar3,&DAT_10f34bc88,auStack_160);
    FUN_10726e6c0(auStack_c0,puVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_160);
    FUN_107262330(&uStack_148);
    uStack_148 = CONCAT44(uStack_148._4_4_,1);
    uStack_140 = 0;
    lStack_170 = *(long *)*param_2;
    uStack_168 = 3;
    func_0x00010743fa9c((long *)*param_2,auStack_c0,&uStack_148,&lStack_170,7);
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      *(undefined1 *)(param_2 + 5) = 1;
    }
    param_2[4] = puVar1;
    FUN_107262330(auStack_c0);
  }
  return;
}



/* Entry: 1073119ec; end: 107311a5b;  */

void FUN_1073119ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  FUN_107311a5c(&lStack_28,param_1 + 8,*(undefined8 *)(param_1 + 0x20),param_1 + 0x28);
  lVar1 = lStack_28;
  lStack_28 = 0;
  lVar2 = *(long *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  if (lVar2 != 0) {
    FUN_107311bb8();
    lVar1 = lStack_28;
    lStack_28 = 0;
    if (lVar1 != 0) {
      FUN_107311bb8();
    }
  }
  FUN_1073120b0(*(undefined8 *)(param_1 + 0x38),param_2);
  return;
}



/* Entry: 107311a5c; end: 107311b2b;  */

void FUN_107311a5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  uVar4 = 0xb8;
  __Znwm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_58,param_2);
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  if (param_4[1] != 0) {
    plVar1 = (long *)(param_4[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_107311f80(uVar4,auStack_58,param_3,&uStack_70);
  *param_1 = uVar4;
  func_0x00010726eedc(&uStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 107311b2c; end: 107311b57;  */

void FUN_107311b2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107311b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
  return;
}



/* Entry: 107311b58; end: 107311b6b;  */

void FUN_107311b58(void)

{
  FUN_107311b6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


