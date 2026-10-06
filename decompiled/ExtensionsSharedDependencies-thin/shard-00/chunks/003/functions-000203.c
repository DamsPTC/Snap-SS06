/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00483cd0; end: 00483d63;  */

void FUN_00483cd0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5
                 )

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x30;
    func_0x00483da0();
  }
  return;
}



/* Entry: 00483d64; end: 00483d6b;  */

void FUN_00483d64(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00486ef0(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    func_0x00483da0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 00483d6c; end: 00483e2f;  */

void FUN_00483d6c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00486ef0();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    func_0x00483da0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 00483e30; end: 00483ee7;  */

long FUN_00483e30(undefined8 param_1)

{
  long extraout_x8;
  long *unaff_x19;
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00486dc8();
  FUN_00483ee8();
  FUN_00483f7c(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x30,unaff_x19 + 2);
  func_0x00487050(lStack_48,*unaff_x20);
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  uVar3 = unaff_x20[4];
  uVar2 = unaff_x20[3];
  *(undefined8 *)(extraout_x8 + 0x28) = unaff_x20[5];
  *(undefined8 *)(extraout_x8 + 0x20) = uVar3;
  *(undefined8 *)(extraout_x8 + 0x18) = uVar2;
  unaff_x20[4] = 0;
  unaff_x20[5] = 0;
  unaff_x20[3] = 0;
  lStack_48 = lStack_48 + 0x30;
  FUN_00483f38();
  lVar1 = unaff_x19[1];
  func_0x00483fc8(auStack_58);
  return lVar1;
}



/* Entry: 00483ee8; end: 00483f37;  */

ulong FUN_00483ee8(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 < 0x555555555555556) {
    uVar1 = (param_1[2] - *param_1) / 0x30;
    uVar2 = uVar1 * 2;
    if (uVar2 < param_2 || uVar2 - param_2 == 0) {
      uVar2 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar1) {
      uVar2 = 0x555555555555555;
    }
    return uVar2;
  }
  FUN_00483ba8();
  func_0x00486ef0();
  uVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x30) * 0x30;
  _memcpy(uVar2);
  func_0x00486e20();
  return uVar2;
}



/* Entry: 00483f38; end: 00483f7b;  */

void FUN_00483f38(long *param_1,long param_2)

{
  func_0x00486ef0();
  _memcpy(*(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x30) * 0x30);
  func_0x00486e20();
  return;
}



/* Entry: 00483f7c; end: 00483ff3;  */

long * FUN_00483f7c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_00483bb4();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 00483ff4; end: 00483ffb;  */

void FUN_00483ff4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00486ef0(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x30;
    func_0x00483da0();
  }
  return;
}



/* Entry: 00483ffc; end: 0048402f;  */

void FUN_00483ffc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00486ef0();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x30;
    func_0x00483da0();
  }
  return;
}



/* Entry: 00484030; end: 0048405b;  */

void FUN_00484030(long param_1)

{
  func_0x004870e0();
  func_0x004872b4(param_1 + 0x18);
  return;
}



/* Entry: 0048405c; end: 00484077;  */

void FUN_0048405c(long param_1)

{
  FUN_00484078();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 00484078; end: 00484097;  */

void FUN_00484078(void)

{
  func_0x00486f80();
  FUN_00484098();
  return;
}



/* Entry: 00484098; end: 004840df;  */

void FUN_00484098(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x00486e74();
    FUN_00483b48();
    func_0x00486f34();
    FUN_004840e0();
  }
  func_0x00487100();
  return;
}



/* Entry: 004840e0; end: 0048410f;  */

void FUN_004840e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_00484110();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 00484110; end: 00484123;  */

void FUN_00484110(void)

{
  FUN_00484124();
  return;
}



/* Entry: 00484124; end: 0048416f;  */

void FUN_00484124(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x00486d5c();
  while (unaff_x21 != unaff_x19) {
    func_0x004871f4();
    FUN_00483c54();
    func_0x00486f20();
  }
  func_0x00487110();
  return;
}



/* Entry: 00484170; end: 0048418f;  */

void FUN_00484170(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_00484190();
  }
  return;
}



/* Entry: 00484190; end: 004841bb;  */

undefined8 FUN_00484190(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00483d2c(&uStack_28);
  return param_1;
}



/* Entry: 004841bc; end: 004841eb;  */

void FUN_004841bc(long param_1)

{
  func_0x004870e0();
  FUN_00425cb4(param_1 + 0x18);
  return;
}



/* Entry: 004841ec; end: 0048420b;  */

void FUN_004841ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e83a8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0048420c; end: 0048429b;  */

void FUN_0048420c(long param_1)

{
  undefined8 extraout_x8;
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x00487200();
  FUN_00484444(extraout_x8,param_1 + 8);
  func_0x004862e0(unaff_x19 + 0x10);
  FUN_004829a4(unaff_x19 + 0xd8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(unaff_x19 + 0xe0);
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x100) = unaff_x20[1];
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 0048429c; end: 004843eb;  */

undefined8 *
FUN_0048429c(long param_1,undefined8 param_2,long param_3,undefined8 *param_4,undefined8 param_5)

{
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  uint uVar14;
  int extraout_w10;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 in_stack_00000050;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 auStack_398 [8];
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  ulong uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  undefined8 *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  long lStack_320;
  undefined8 *puStack_318;
  undefined8 **ppuStack_310;
  code *pcStack_308;
  undefined8 auStack_2f8 [12];
  undefined8 uStack_298;
  long lStack_290;
  long lStack_288;
  undefined8 *puStack_280;
  code *pcStack_278;
  undefined8 auStack_268 [2];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [264];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [256];
  long lStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  func_0x00487390();
  lVar4 = param_1;
  uVar9 = param_2;
  func_0x00486cf4();
  uStack_10 = extraout_x8;
  func_0x00487268();
  func_0x00486eb0(*param_4);
  func_0x00487030();
  uVar16 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(uint *)(param_3 + 0x74);
  bVar3 = *(char *)(param_1 + 0xa4) == '\x01';
  uVar2 = bVar3 && uVar1 == 0;
  uVar14 = 1;
  if (!bVar3 || uVar1 != 0) {
    uVar14 = (uint)((uVar1 & 0xfffffffe) == 2);
  }
  uVar17 = (ulong)uVar14;
  FUN_00484444(auStack_268,param_1 + 8);
  uStack_250 = param_4[1];
  uStack_258 = *param_4;
  if (param_4[1] != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10 != 0);
  }
  FUN_00486160(auStack_248,param_2);
  FUN_00485f00(auStack_140,param_5);
  FUN_00483978(auStack_120,param_3);
  puVar8 = (undefined8 *)(param_3 + 0xa0);
  puVar13 = auStack_268;
  uVar11 = uVar17;
  lVar12 = param_3;
  lStack_20 = lVar4;
  uStack_18 = uVar9;
  FUN_00484480(uVar16,puVar8,uVar17,param_3,puVar13);
  iVar10 = (int)uVar11;
  puVar5 = auStack_268;
  FUN_00485f54(puVar5);
  func_0x00486c9c(uStack_10);
  if ((bool)uVar2) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00486ec4();
  FUN_00485f54();
  func_0x00486da8();
  pcStack_278 = FUN_004843ec;
  lStack_290 = lVar4;
  lStack_288 = param_3;
  puStack_280 = &stack0x00000050;
  func_0x00486ce0();
  puVar5 = auStack_2f8;
  uStack_298 = extraout_x8_00;
  func_0x00485ff8();
  func_0x004871e8();
  func_0x00486dd4();
  func_0x00486d20();
  func_0x00486c9c(uStack_298);
  if ((bool)uVar2) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar6 = puVar5;
  func_0x00486d20();
  func_0x00486da8();
  pcStack_308 = FUN_00484444;
  lVar7 = puVar8[1];
  lStack_320 = lVar4;
  puStack_318 = puVar5;
  ppuStack_310 = &puStack_280;
  *puVar6 = *puVar8;
  if (lVar7 == 0) {
    puVar6[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    puVar6[1] = lVar7;
    if (lVar7 != 0) {
      return puVar6;
    }
  }
  lVar7 = 0;
  FUN_0045a0e4();
  pcStack_328 = FUN_00484480;
  uStack_360 = uVar17;
  uStack_358 = param_5;
  uStack_350 = uVar16;
  uStack_348 = uVar9;
  lStack_340 = lVar4;
  puStack_338 = puVar6;
  pppuStack_330 = &ppuStack_310;
  if (iVar10 == 0) {
    auStack_398[0] = false;
  }
  else {
    lVar4 = lVar7 + 0x18;
    FUN_004845dc(lVar4,puVar8);
    auStack_398[0] = lVar7 + 0x20 == lVar4;
  }
  plVar15 = *(long **)(lVar7 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_3b0,puVar8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_3c8,lVar12);
  uStack_388 = uStack_3a8;
  uStack_390 = uStack_3b0;
  uStack_380 = uStack_3a0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  uStack_370 = uStack_3c0;
  uStack_378 = uStack_3c8;
  uStack_368 = uStack_3b8;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  FUN_004845bc(&uStack_3f0,puVar13);
  uStack_3d8 = uStack_3e8;
  uStack_3e0 = uStack_3f0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  (**(code **)(*plVar15 + 0x10))(plVar15,auStack_398,&uStack_3e0);
  FUN_00485e94(&uStack_3e0);
  func_0x00485eb8(&uStack_3f0);
  puVar8 = (undefined8 *)auStack_398;
  func_0x00485edc(puVar8);
  func_0x004870d0();
  func_0x00487158();
  return puVar8;
}



/* Entry: 004843ec; end: 00484443;  */

undefined8 *
FUN_004843ec(undefined8 param_1,undefined8 *param_2,int param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  long *plVar4;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_88 [12];
  undefined8 uStack_28;
  
  func_0x00486ce0();
  puVar1 = auStack_88;
  uStack_28 = extraout_x8;
  func_0x00485ff8();
  func_0x004871e8();
  func_0x00486dd4();
  func_0x00486d20();
  func_0x00486c9c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00486d20();
  func_0x00486da8();
  lVar2 = param_2[1];
  *puVar1 = *param_2;
  if (lVar2 == 0) {
    puVar1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    puVar1[1] = lVar2;
    if (lVar2 != 0) {
      return puVar1;
    }
  }
  lVar2 = 0;
  FUN_0045a0e4();
  if (param_3 == 0) {
    auStack_128[0] = false;
  }
  else {
    lVar3 = lVar2 + 0x18;
    FUN_004845dc(lVar3,param_2);
    auStack_128[0] = lVar2 + 0x20 == lVar3;
  }
  plVar4 = *(long **)(lVar2 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_140,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_158,param_4);
  uStack_118 = uStack_138;
  uStack_120 = uStack_140;
  uStack_110 = uStack_130;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_100 = uStack_150;
  uStack_108 = uStack_158;
  uStack_f8 = uStack_148;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  FUN_004845bc(&uStack_180,param_5);
  uStack_168 = uStack_178;
  uStack_170 = uStack_180;
  uStack_180 = 0;
  uStack_178 = 0;
  (**(code **)(*plVar4 + 0x10))(plVar4,auStack_128,&uStack_170);
  FUN_00485e94(&uStack_170);
  func_0x00485eb8(&uStack_180);
  puVar1 = (undefined8 *)auStack_128;
  func_0x00485edc(puVar1);
  func_0x004870d0();
  func_0x00487158();
  return puVar1;
}



/* Entry: 00484444; end: 0048447f;  */

undefined8 *
FUN_00484444(undefined8 *param_1,undefined8 *param_2,int param_3,undefined8 param_4,
            undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  lVar1 = 0;
  FUN_0045a0e4();
  if (param_3 == 0) {
    auStack_98[0] = false;
  }
  else {
    lVar2 = lVar1 + 0x18;
    FUN_004845dc(lVar2,param_2);
    auStack_98[0] = lVar1 + 0x20 == lVar2;
  }
  plVar4 = *(long **)(lVar1 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_c8,param_4);
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  uStack_80 = uStack_a0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_70 = uStack_c0;
  uStack_78 = uStack_c8;
  uStack_68 = uStack_b8;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  FUN_004845bc(&uStack_f0,param_5);
  uStack_d8 = uStack_e8;
  uStack_e0 = uStack_f0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  (**(code **)(*plVar4 + 0x10))(plVar4,auStack_98,&uStack_e0);
  FUN_00485e94(&uStack_e0);
  func_0x00485eb8(&uStack_f0);
  puVar3 = (undefined8 *)auStack_98;
  func_0x00485edc(puVar3);
  func_0x004870d0();
  func_0x00487158();
  return puVar3;
}



/* Entry: 00484480; end: 004845bb;  */

void FUN_00484480(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    auStack_78[0] = false;
  }
  else {
    lVar1 = param_1 + 0x18;
    FUN_004845dc(lVar1,param_2);
    auStack_78[0] = param_1 + 0x20 == lVar1;
  }
  plVar2 = *(long **)(param_1 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_90,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_a8,param_4);
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  uStack_60 = uStack_80;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_50 = uStack_a0;
  uStack_58 = uStack_a8;
  uStack_48 = uStack_98;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  FUN_004845bc(&uStack_d0,param_5);
  uStack_b8 = uStack_c8;
  uStack_c0 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  (**(code **)(*plVar2 + 0x10))(plVar2,auStack_78,&uStack_c0);
  FUN_00485e94(&uStack_c0);
  func_0x00485eb8(&uStack_d0);
  func_0x00485edc(auStack_78);
  func_0x004870d0();
  func_0x00487158();
  return;
}



/* Entry: 004845bc; end: 004845db;  */

void FUN_004845bc(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_00484678(&uStack_11,param_1);
  return;
}



/* Entry: 004845dc; end: 00484677;  */

long FUN_004845dc(long param_1)

{
  long unaff_x19;
  uint unaff_w20;
  
  func_0x00486dc8();
  func_0x00484628();
  if ((unaff_x19 + 8 == param_1) || (func_0x004278bc(), (unaff_w20 >> 7 & 1) != 0)) {
    param_1 = unaff_x19 + 8;
  }
  return param_1;
}



/* Entry: 00484678; end: 004846eb;  */

long FUN_00484678(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00486cf4();
  uStack_28 = extraout_x8;
  FUN_004846ec(auStack_40,1);
  FUN_00484744();
  func_0x004871d0();
  func_0x00485e84();
  func_0x00486c9c(uStack_28);
  if ((bool)in_ZR) {
    return lStack_30;
  }
  ___stack_chk_fail();
  func_0x00486e9c();
  func_0x00485e84();
  lVar1 = lStack_30;
  func_0x00486da8();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  FUN_00484714();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 004846ec; end: 00484713;  */

long FUN_004846ec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_00484714();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 00484714; end: 00484743;  */

undefined8 * FUN_00484714(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x67b23a5440cf65) {
    puVar1 = (undefined8 *)(param_2 * 0x278);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(puVar1);
    return puVar1;
  }
  FUN_0040cee8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e84a0;
  FUN_004847a0(param_1 + 3);
  return param_1;
}



/* Entry: 00484744; end: 0048477f;  */

undefined8 * FUN_00484744(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e84a0;
  FUN_004847a0(param_1 + 3);
  return param_1;
}



/* Entry: 00484780; end: 00484783;  */

void FUN_00484780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e84a0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00484784; end: 00484797;  */

void FUN_00484784(void)

{
  FUN_00485e78();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00484798; end: 0048479f;  */

void FUN_00484798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00486f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004847a0; end: 004847bf;  */

void FUN_004847a0(void)

{
  func_0x00487458();
  FUN_004847e0();
  return;
}



/* Entry: 004847c0; end: 004847c3;  */

void FUN_004847c0(void)

{
  func_0x00487458();
  FUN_00485f54();
  return;
}



/* Entry: 004847c4; end: 004847d7;  */

void FUN_004847c4(void)

{
  FUN_00484890();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004847d8; end: 004847df;  */

void FUN_004847d8(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  double dVar7;
  undefined1 auStack_528 [24];
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 auStack_4e0 [192];
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 uStack_3a0;
  undefined8 uStack_39c;
  undefined8 uStack_394;
  undefined4 uStack_38c;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 auStack_360 [24];
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  long lStack_2f0;
  long lStack_2e8;
  undefined1 auStack_2e0 [56];
  long lStack_2a8;
  long lStack_2a0;
  undefined1 auStack_298 [264];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [256];
  long alStack_70 [3];
  undefined1 uStack_58;
  double dStack_50;
  long lStack_48;
  undefined8 uStack_38;
  
  param_1 = param_1 + 8;
  plVar5 = &lStack_2f0;
  func_0x00486ce0();
  uStack_38 = extraout_x8;
  func_0x0048740c(*(undefined8 *)(param_1 + 0x10));
  (*extraout_x8_00)();
  lStack_2e8 = unaff_x19[1];
  lStack_2f0 = *unaff_x19;
  if (unaff_x19[1] != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10 != 0);
  }
  FUN_00484de8(auStack_2e0,param_2);
  lStack_2a0 = unaff_x19[3];
  lStack_2a8 = unaff_x19[2];
  if (unaff_x19[3] != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10_00 != 0);
  }
  FUN_00486160(auStack_298,unaff_x19 + 4);
  FUN_00485f00(auStack_190,unaff_x19 + 0x25);
  FUN_00483978(auStack_170,unaff_x19 + 0x29);
  plVar4 = alStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar4,unaff_x19 + 0x3d);
  uStack_58 = (undefined1)unaff_x19[0x3c];
  lStack_48 = unaff_x19[0x4a];
  dVar7 = (double)unaff_x19[0x49];
  dStack_50 = dVar7;
  func_0x004870b8();
  uVar2 = *plVar4 == *(long *)(*unaff_x19 + 0x38);
  if ((bool)uVar2) {
    FUN_00484a20(&lStack_2f0);
  }
  else {
    FUN_00484d90(*(long *)(*unaff_x19 + 0x38),&lStack_2f0);
  }
  func_0x00485e2c();
  func_0x00486c9c(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00486e9c();
  func_0x00485e2c();
  func_0x00486da8();
  plStack_348 = plVar5 + 0x2c;
  plVar4 = plVar5 + 0x30;
  plStack_340 = plVar4;
  plStack_338 = plVar5 + 9;
  FUN_006ad024(auStack_360,"grpc::grpcService::makeGRPCCall");
  if (*(char *)(*plVar5 + 0x34) == '\x01') {
    if ((char)plVar5[0x53] == '\x01') {
      func_0x004872bc();
    }
    else {
      func_0x0048707c(plVar5 + 0x50);
    }
    FUN_00425cb4(&uStack_3f0,"Service disposed");
    func_0x00486ea8(auStack_4e0);
    func_0x00486f14();
  }
  else {
    func_0x00487268();
    func_0x0033a204();
    FUN_0033a2e8();
    FUN_005b9d30(plVar5 + 0x50,(long)dVar7);
    iVar3 = (int)plVar5 + 0x10;
    FUN_005b9944();
    if (iVar3 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_408,plVar5 + 0x50);
      FUN_005b90a8(auStack_4e0,*(long *)(*plVar5 + 0x18) + 0x80);
      FUN_005b9d8c(&uStack_420,auStack_4e0);
      uVar1 = *(undefined4 *)(*plVar5 + 0xa0);
      FUN_00425cb4(&uStack_4f8,"unknown");
      FUN_00425cb4(&uStack_510,"");
      uStack_3e0 = uStack_3f8;
      uStack_378 = uStack_500;
      uStack_3e8 = uStack_400;
      uStack_3f0 = uStack_408;
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3d0 = uStack_418;
      uStack_3d8 = uStack_420;
      uStack_3c8 = uStack_410;
      uStack_420 = 0;
      uStack_418 = 0;
      uStack_410 = 0;
      uStack_408 = 0;
      uStack_3b0 = uStack_4f0;
      uStack_3b8 = uStack_4f8;
      uStack_3a8 = uStack_4e8;
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      uStack_4e8 = 0;
      uStack_3a0 = 0;
      uStack_38c = 0xffffffff;
      uStack_394 = 0xffffffffffffffff;
      uStack_39c = 0xffffffffffffffff;
      uStack_380 = uStack_508;
      uStack_388 = uStack_510;
      uStack_510 = 0;
      uStack_508 = 0;
      uStack_500 = 0;
      uStack_370 = 0;
      uStack_3c0 = uVar1;
      func_0x00487130();
      func_0x00487334();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_420);
      func_0x00465c30(auStack_4e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_408);
      plVar4 = plVar5 + 2;
      FUN_005b99e0(plVar4);
      if ((char)plVar5[0x53] == '\x01') {
        FUN_005b9d10(plVar5 + 0x50,plVar4);
        func_0x004873bc();
        FUN_005b9eac();
      }
      else {
        func_0x005b9d20(plVar5 + 0x50,plVar4);
        func_0x004873bc();
        FUN_005ba190();
      }
      func_0x004870b0();
      FUN_0046e000(auStack_4e0,plVar4,auStack_528);
      func_0x00486f14();
      func_0x004870d8();
      func_0x00486dc0();
      FUN_00485b5c(&uStack_3f0);
      goto LAB_00484c88;
    }
    if (*(long *)(*plVar5 + 0x68) != 0) {
      plVar6 = (long *)plVar5[9];
      (**(code **)(*plVar6 + 0x20))(plVar6,plVar4);
      FUN_004850ac(plVar5 + 0xb,plVar5 + 2,(long)dVar7,plVar4);
      goto LAB_00484c88;
    }
    if ((char)plVar5[0x53] == '\x01') {
      func_0x004872bc();
    }
    else {
      func_0x0048707c(plVar5 + 0x50);
    }
    FUN_00425cb4(&uStack_3f0,"Resources aren\'t ready");
    func_0x00486ea8(auStack_4e0);
    func_0x00486f14();
  }
  func_0x004870d8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_3f0);
LAB_00484c88:
  FUN_006ad0cc(auStack_360);
  return;
}



/* Entry: 004847e0; end: 0048488f;  */

undefined8 * FUN_004847e0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10 != 0);
  }
  FUN_00486160(param_1 + 4,param_2 + 4);
  FUN_00485f00(param_1 + 0x25,param_2 + 0x25);
  FUN_00483978(param_1 + 0x29,param_2 + 0x29);
  uVar2 = param_2[0x49];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x49] = uVar2;
  return param_1;
}



/* Entry: 00484890; end: 004848af;  */

void FUN_00484890(void)

{
  func_0x00487458();
  FUN_00485f54();
  return;
}



/* Entry: 004848b0; end: 00484a1f;  */

void FUN_004848b0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  double dVar7;
  undefined1 auStack_528 [24];
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 auStack_4e0 [192];
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 uStack_3a0;
  undefined8 uStack_39c;
  undefined8 uStack_394;
  undefined4 uStack_38c;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 auStack_360 [24];
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  long lStack_2f0;
  long lStack_2e8;
  undefined1 auStack_2e0 [56];
  long lStack_2a8;
  long lStack_2a0;
  undefined1 auStack_298 [264];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [256];
  long alStack_70 [3];
  undefined1 uStack_58;
  double dStack_50;
  long lStack_48;
  undefined8 uStack_38;
  
  plVar5 = &lStack_2f0;
  func_0x00486ce0();
  uStack_38 = extraout_x8;
  func_0x0048740c(*(undefined8 *)(param_1 + 0x10));
  (*extraout_x8_00)();
  lStack_2e8 = unaff_x19[1];
  lStack_2f0 = *unaff_x19;
  if (unaff_x19[1] != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10 != 0);
  }
  FUN_00484de8(auStack_2e0,param_2);
  lStack_2a0 = unaff_x19[3];
  lStack_2a8 = unaff_x19[2];
  if (unaff_x19[3] != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10_00 != 0);
  }
  FUN_00486160(auStack_298,unaff_x19 + 4);
  FUN_00485f00(auStack_190,unaff_x19 + 0x25);
  FUN_00483978(auStack_170,unaff_x19 + 0x29);
  plVar4 = alStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar4,unaff_x19 + 0x3d);
  uStack_58 = (undefined1)unaff_x19[0x3c];
  lStack_48 = unaff_x19[0x4a];
  dVar7 = (double)unaff_x19[0x49];
  dStack_50 = dVar7;
  func_0x004870b8();
  uVar2 = *plVar4 == *(long *)(*unaff_x19 + 0x38);
  if ((bool)uVar2) {
    FUN_00484a20(&lStack_2f0);
  }
  else {
    FUN_00484d90(*(long *)(*unaff_x19 + 0x38),&lStack_2f0);
  }
  func_0x00485e2c();
  func_0x00486c9c(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00486e9c();
  func_0x00485e2c();
  func_0x00486da8();
  plStack_348 = plVar5 + 0x2c;
  plVar4 = plVar5 + 0x30;
  plStack_340 = plVar4;
  plStack_338 = plVar5 + 9;
  FUN_006ad024(auStack_360,"grpc::grpcService::makeGRPCCall");
  if (*(char *)(*plVar5 + 0x34) == '\x01') {
    if ((char)plVar5[0x53] == '\x01') {
      func_0x004872bc();
    }
    else {
      func_0x0048707c(plVar5 + 0x50);
    }
    FUN_00425cb4(&uStack_3f0,"Service disposed");
    func_0x00486ea8(auStack_4e0);
    func_0x00486f14();
  }
  else {
    func_0x00487268();
    func_0x0033a204();
    FUN_0033a2e8();
    FUN_005b9d30(plVar5 + 0x50,(long)dVar7);
    iVar3 = (int)plVar5 + 0x10;
    FUN_005b9944();
    if (iVar3 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_408,plVar5 + 0x50);
      FUN_005b90a8(auStack_4e0,*(long *)(*plVar5 + 0x18) + 0x80);
      FUN_005b9d8c(&uStack_420,auStack_4e0);
      uVar1 = *(undefined4 *)(*plVar5 + 0xa0);
      FUN_00425cb4(&uStack_4f8,"unknown");
      FUN_00425cb4(&uStack_510,"");
      uStack_3e0 = uStack_3f8;
      uStack_378 = uStack_500;
      uStack_3e8 = uStack_400;
      uStack_3f0 = uStack_408;
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3d0 = uStack_418;
      uStack_3d8 = uStack_420;
      uStack_3c8 = uStack_410;
      uStack_420 = 0;
      uStack_418 = 0;
      uStack_410 = 0;
      uStack_408 = 0;
      uStack_3b0 = uStack_4f0;
      uStack_3b8 = uStack_4f8;
      uStack_3a8 = uStack_4e8;
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      uStack_4e8 = 0;
      uStack_3a0 = 0;
      uStack_38c = 0xffffffff;
      uStack_394 = 0xffffffffffffffff;
      uStack_39c = 0xffffffffffffffff;
      uStack_380 = uStack_508;
      uStack_388 = uStack_510;
      uStack_510 = 0;
      uStack_508 = 0;
      uStack_500 = 0;
      uStack_370 = 0;
      uStack_3c0 = uVar1;
      func_0x00487130();
      func_0x00487334();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_420);
      func_0x00465c30(auStack_4e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_408);
      plVar4 = plVar5 + 2;
      FUN_005b99e0(plVar4);
      if ((char)plVar5[0x53] == '\x01') {
        FUN_005b9d10(plVar5 + 0x50,plVar4);
        func_0x004873bc();
        FUN_005b9eac();
      }
      else {
        func_0x005b9d20(plVar5 + 0x50,plVar4);
        func_0x004873bc();
        FUN_005ba190();
      }
      func_0x004870b0();
      FUN_0046e000(auStack_4e0,plVar4,auStack_528);
      func_0x00486f14();
      func_0x004870d8();
      func_0x00486dc0();
      FUN_00485b5c(&uStack_3f0);
      goto LAB_00484c88;
    }
    if (*(long *)(*plVar5 + 0x68) != 0) {
      plVar6 = (long *)plVar5[9];
      (**(code **)(*plVar6 + 0x20))(plVar6,plVar4);
      FUN_004850ac(plVar5 + 0xb,plVar5 + 2,(long)dVar7,plVar4);
      goto LAB_00484c88;
    }
    if ((char)plVar5[0x53] == '\x01') {
      func_0x004872bc();
    }
    else {
      func_0x0048707c(plVar5 + 0x50);
    }
    FUN_00425cb4(&uStack_3f0,"Resources aren\'t ready");
    func_0x00486ea8(auStack_4e0);
    func_0x00486f14();
  }
  func_0x004870d8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_3f0);
LAB_00484c88:
  FUN_006ad0cc(auStack_360);
  return;
}



/* Entry: 00484a20; end: 00484d8f;  */

void FUN_00484a20(double param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auStack_238 [24];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [192];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plStack_58 = param_2 + 0x2c;
  plVar4 = param_2 + 0x30;
  plStack_50 = plVar4;
  plStack_48 = param_2 + 9;
  FUN_006ad024(auStack_70,"grpc::grpcService::makeGRPCCall");
  if (*(char *)(*param_2 + 0x34) == '\x01') {
    if ((char)param_2[0x53] == '\x01') {
      func_0x004872bc();
    }
    else {
      func_0x0048707c(param_2 + 0x50);
    }
    FUN_00425cb4(&uStack_100,"Service disposed");
    func_0x00486ea8(auStack_1f0);
    func_0x00486f14();
  }
  else {
    func_0x00487268();
    func_0x0033a204();
    FUN_0033a2e8();
    FUN_005b9d30(param_2 + 0x50,(long)param_1);
    iVar2 = (int)param_2 + 0x10;
    FUN_005b9944();
    if (iVar2 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_118,param_2 + 0x50);
      FUN_005b90a8(auStack_1f0,*(long *)(*param_2 + 0x18) + 0x80);
      FUN_005b9d8c(&uStack_130,auStack_1f0);
      uVar1 = *(undefined4 *)(*param_2 + 0xa0);
      FUN_00425cb4(&uStack_208,"unknown");
      FUN_00425cb4(&uStack_220,"");
      uStack_f0 = uStack_108;
      uStack_88 = uStack_210;
      uStack_f8 = uStack_110;
      uStack_100 = uStack_118;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_e0 = uStack_128;
      uStack_e8 = uStack_130;
      uStack_d8 = uStack_120;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_c0 = uStack_200;
      uStack_c8 = uStack_208;
      uStack_b8 = uStack_1f8;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_b0 = 0;
      uStack_9c = 0xffffffff;
      uStack_a4 = 0xffffffffffffffff;
      uStack_ac = 0xffffffffffffffff;
      uStack_90 = uStack_218;
      uStack_98 = uStack_220;
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_80 = 0;
      uStack_d0 = uVar1;
      func_0x00487130();
      func_0x00487334();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_130);
      func_0x00465c30(auStack_1f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_118);
      plVar4 = param_2 + 2;
      FUN_005b99e0(plVar4);
      if ((char)param_2[0x53] == '\x01') {
        FUN_005b9d10(param_2 + 0x50,plVar4);
        func_0x004873bc();
        FUN_005b9eac();
      }
      else {
        func_0x005b9d20(param_2 + 0x50,plVar4);
        func_0x004873bc();
        FUN_005ba190();
      }
      func_0x004870b0();
      FUN_0046e000(auStack_1f0,plVar4,auStack_238);
      func_0x00486f14();
      func_0x004870d8();
      func_0x00486dc0();
      FUN_00485b5c(&uStack_100);
      goto LAB_00484c88;
    }
    if (*(long *)(*param_2 + 0x68) != 0) {
      plVar3 = (long *)param_2[9];
      (**(code **)(*plVar3 + 0x20))(plVar3,plVar4);
      FUN_004850ac(param_2 + 0xb,param_2 + 2,(long)param_1,plVar4);
      goto LAB_00484c88;
    }
    if ((char)param_2[0x53] == '\x01') {
      func_0x004872bc();
    }
    else {
      func_0x0048707c(param_2 + 0x50);
    }
    FUN_00425cb4(&uStack_100,"Resources aren\'t ready");
    func_0x00486ea8(auStack_1f0);
    func_0x00486f14();
  }
  func_0x004870d8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_100);
LAB_00484c88:
  FUN_006ad0cc(auStack_70);
  return;
}



/* Entry: 00484d90; end: 00484de7;  */

void FUN_00484d90(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [96];
  undefined8 uStack_28;
  
  func_0x00486ce0();
  puVar1 = auStack_88;
  uStack_28 = extraout_x8;
  func_0x00485b90();
  func_0x004871e8();
  func_0x00486dd4();
  func_0x00486d20();
  func_0x00486c9c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00486d20();
  func_0x00486da8();
  func_0x00484e14();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x25);
  *(undefined8 *)(puVar1 + 0x2d) = *(undefined8 *)(param_2 + 0x2d);
  *(undefined8 *)(puVar1 + 0x25) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = uVar2;
  return;
}



/* Entry: 00484de8; end: 00484e33;  */

void FUN_00484de8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00484e14();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x25);
  *(undefined8 *)(param_1 + 0x2d) = *(undefined8 *)(param_2 + 0x2d);
  *(undefined8 *)(param_1 + 0x25) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 00484e34; end: 00484e87;  */

void FUN_00484e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00486e74();
    FUN_00484e88();
    func_0x00486f34();
    FUN_00484eb8();
  }
  uStack_38 = 1;
  func_0x0048504c(&uStack_40);
  return;
}



/* Entry: 00484e88; end: 00484eb7;  */

void FUN_00484e88(long param_1)

{
  undefined1 in_CY;
  long lVar1;
  
  func_0x00487254();
  if ((bool)in_CY) {
    FUN_00484ee8();
    lVar1 = param_1 + 0x10;
    func_0x00484f34();
    *(long *)(param_1 + 8) = lVar1;
  }
  else {
    FUN_00484ef4(param_1 + 0x10);
    func_0x004873d0();
  }
  return;
}



/* Entry: 00484eb8; end: 00484ee7;  */

void FUN_00484eb8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x00484f34();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 00484ee8; end: 00484ef3;  */

void FUN_00484ee8(void)

{
  func_0x00486f54();
  FUN_00484f14();
  return;
}



/* Entry: 00484ef4; end: 00484f13;  */

void FUN_00484ef4(void)

{
  FUN_00484f14();
  return;
}



/* Entry: 00484f14; end: 00484f47;  */

void FUN_00484f14(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  
  func_0x00487254();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0x30);
    return;
  }
  FUN_0040cee8();
  FUN_00484f48();
  return;
}



/* Entry: 00484f48; end: 00484f9f;  */

void FUN_00484f48(void)

{
  long unaff_x19;
  long unaff_x21;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  
  func_0x00486d5c();
  while (unaff_x21 != unaff_x19) {
    func_0x004871f4();
    FUN_00484fa0();
    func_0x00486f20();
  }
  uStack_48 = 1;
  FUN_00484fcc(auStack_60);
  return;
}



/* Entry: 00484fa0; end: 00484fcb;  */

void FUN_00484fa0(void)

{
  func_0x00486dc8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x00486f74();
  return;
}



/* Entry: 00484fcc; end: 00484ffb;  */

long FUN_00484fcc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_00484ffc(param_1);
  }
  return param_1;
}



/* Entry: 00484ffc; end: 0048501b;  */

void FUN_00484ffc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    func_0x00470bb0();
  }
  return;
}



/* Entry: 0048501c; end: 00485077;  */

void FUN_0048501c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5
                 )

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x30;
    func_0x00470bb0();
  }
  return;
}



/* Entry: 00485078; end: 004850ab;  */

void FUN_00485078(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *extraout_x8;
  
  if (*(long *)(*param_1 + 0x18) == 0) {
                    /* WARNING: Could not recover jumptable at 0x004850a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)param_1[2] + 0x30))(*(long **)param_1[2],param_1[1],param_2,0);
    return;
  }
  plVar1 = *(long **)(*param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0048533c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x004686dc(0,param_1[1]);
  uVar2 = 0x340;
  __Znwm();
  FUN_004854e8();
  *extraout_x8 = uVar2;
  return;
}



/* Entry: 004850ac; end: 0048532b;  */

void FUN_004850ac(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_128 [24];
  long alStack_68 [3];
  
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x34) == '\x01') {
    func_0x005b9d20(param_1 + 0x1c,0x10);
    func_0x00487320();
    func_0x00486de4();
    func_0x00487068();
    func_0x00486d3c();
  }
  else {
    if (*(byte **)(param_4 + 0xf0) != (byte *)0x0) {
      if ((**(byte **)(param_4 + 0xf0) & 1) != 0) {
        func_0x0048707c(param_1 + 0x1c);
        func_0x00487320();
        func_0x00486de4();
        func_0x00487068();
        func_0x00486d3c();
        goto LAB_00485290;
      }
      lVar2 = *param_1;
    }
    if (*(long *)(lVar2 + 0x68) != 0) {
      auStack_128[0] = *(undefined8 *)(lVar2 + 0x80);
      FUN_0048534c(alStack_68,lVar2 + 0x38,param_1 + 0x1f,param_4,lVar2 + 0x30,auStack_128);
      if (*(long *)(param_4 + 0xf0) != 0) {
        FUN_004853b4(*(long *)(param_4 + 0xf0),alStack_68[0] + 0x120);
      }
      lVar2 = alStack_68[0];
      if (*(char *)(param_4 + 0x90) == '\x01') {
        func_0x004870b0();
        FUN_00409258(lVar2 + 0x120,auStack_128,param_4 + 0x78);
        func_0x00486dc0();
      }
      lVar2 = alStack_68[0];
      lVar3 = *param_1;
      FUN_005b90a8(auStack_128,*(long *)(lVar3 + 0x18) + 0x80);
      FUN_00485408(lVar3,lVar2 + 0x120,param_4,param_3,auStack_128,param_2);
      puVar1 = auStack_128;
      func_0x00465c30(puVar1);
      lVar2 = alStack_68[0];
      FUN_005b950c();
      FUN_00485470(auStack_128,param_1 + 2,lVar2 + 0x120,param_1 + 0x1b,param_4,puVar1);
      FUN_005bc160(*(undefined8 *)(*param_1 + 0x80),param_4,alStack_68[0]);
      lVar2 = alStack_68[0];
      alStack_68[0] = 0;
      FUN_004685ac(auStack_128[0],lVar2 + 0x318,lVar2 + 0x2e0);
      lVar2 = alStack_68[0];
      alStack_68[0] = 0;
      if (lVar2 == 0) {
        return;
      }
      func_0x00486f48();
      return;
    }
    func_0x0048707c(param_1 + 0x1c);
    func_0x00487320();
    func_0x00486de4();
    func_0x00487068();
    func_0x00486d3c();
  }
LAB_00485290:
  FUN_00464a10(auStack_128);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_68);
  return;
}



/* Entry: 0048532c; end: 0048534b;  */

void FUN_0048532c(long param_1)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0048533c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x004686dc();
  uVar1 = 0x340;
  __Znwm();
  FUN_004854e8();
  *extraout_x8 = uVar1;
  return;
}



/* Entry: 0048534c; end: 004853b3;  */

void FUN_0048534c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x340;
  __Znwm();
  FUN_004854e8();
  *param_1 = uVar1;
  return;
}



/* Entry: 004853b4; end: 00485407;  */

void FUN_004853b4(long param_1)

{
  char *unaff_x19;
  long unaff_x20;
  
  func_0x00486dc8();
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  *(long *)(unaff_x19 + 0x48) = unaff_x20;
  if ((unaff_x20 != 0) && (*unaff_x19 == '\x01')) {
    FUN_00409548();
  }
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(unaff_x19 + 8);
  return;
}



/* Entry: 00485408; end: 0048546f;  */

void FUN_00485408(long param_1,undefined8 param_2,long param_3)

{
  code *extraout_x8;
  long *plVar1;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00486eb0();
    (*extraout_x8)();
    func_0x0048740c(*(undefined8 *)(param_1 + 0x58));
    func_0x00487030();
  }
  plVar1 = (long *)(param_3 + 0x58);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_00409258(param_2,plVar1 + 2,plVar1 + 5);
  }
  return;
}



/* Entry: 00485470; end: 004854e7;  */

void FUN_00485470(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x23;
  long lVar2;
  
  func_0x0048705c();
  lVar2 = *param_1;
  FUN_004859e8(param_1 + 2);
  if (*(int *)(param_4 + 0xc0) != 0) {
    FUN_00409474();
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x68);
  func_0x0046cf94(extraout_x8,uVar1,param_1[1]);
  func_0x0046cd18();
  func_0x0046cf78();
  FUN_004683d0();
  *unaff_x23 = uVar1;
  return;
}



/* Entry: 004854e8; end: 00485533;  */

void FUN_004854e8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int extraout_w10;
  
  FUN_00485534(param_1,param_2,param_4,param_5);
  func_0x004873e4();
  lVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0x328) = *param_3;
  *(long *)(param_1 + 0x330) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(param_1 + 0x338) = param_6;
  return;
}



/* Entry: 00485534; end: 004855c3;  */

undefined8 *
FUN_00485534(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00485824();
  *puVar1 = &PTR_FUN_009e85c0;
  FUN_00483978(puVar1 + 4,param_3);
  FUN_0040910c(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[99] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 100) = param_4;
  return param_1;
}



/* Entry: 004855c4; end: 004855c7;  */

undefined8 * FUN_004855c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x004873e4();
  func_0x00486b00(puVar1 + 0x65);
  *param_1 = &PTR_FUN_009e85c0;
  if (param_1[0x22] != 0) {
    FUN_0048593c(param_1[0x22],param_1 + 0x24);
  }
  FUN_00468b24(param_1 + 99);
  FUN_00464a10(param_1 + 0x5c);
  FUN_004091e4(param_1 + 0x24);
  func_0x00467d18(param_1 + 4);
  *param_1 = &PTR_DAT_009e8600;
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 004855c8; end: 004855db;  */

void FUN_004855c8(void)

{
  FUN_004858ac();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004855dc; end: 0048578b;  */

void FUN_004855dc(long param_1,int param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  char *pcStack_68;
  ulong uStack_60;
  byte bStack_51;
  
  func_0x005bc6ec(*(undefined8 *)(param_1 + 0x338),param_1 + 0x20);
  plVar4 = *(long **)(param_1 + 0x328);
  if (param_2 == 0) {
    func_0x004872f4();
    func_0x00486ea8(&pcStack_68);
    func_0x00487068();
    func_0x00486ebc(plVar4,param_1 + 0x20,&pcStack_68);
    func_0x0048733c();
    func_0x00487130();
  }
  else {
    lVar3 = param_1 + 0x120;
    func_0x00485974(lVar3);
    (**(code **)(*plVar4 + 0x28))(plVar4,param_1 + 0x20,lVar3);
    if (*(int *)(param_1 + 0x2e0) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00485760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x328) + 0x38))
                (*(long **)(param_1 + 0x328),param_1 + 0x20,param_1 + 0x318);
      return;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&pcStack_68,param_1 + 0x300);
    uVar1 = uStack_60;
    if (-1 < (char)bStack_51) {
      uVar1 = (ulong)bStack_51;
    }
    func_0x00487334();
    if (uVar1 == 0) {
      FUN_00469398(param_1 + 0x228);
      pcStack_68 = "grpc-status-details-bin";
      uStack_60 = 0x17;
      lVar3 = param_1 + 0x248;
      FUN_00464080(lVar3,&pcStack_68);
      FUN_00469398(param_1 + 0x228);
      if (param_1 + 0x250 != lVar3) {
        uVar2 = *(undefined4 *)(param_1 + 0x2e0);
        func_0x004872f4();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
                  (auStack_98,*(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x38));
        FUN_00469348(&pcStack_68,uVar2,auStack_80,auStack_98);
        FUN_00469ae8(param_1 + 0x2e0,&pcStack_68);
        func_0x0048733c();
        func_0x00486dc0();
        func_0x00487130();
      }
    }
    lVar3 = param_1 + 0x120;
    func_0x00485974();
    (**(code **)(**(long **)(param_1 + 0x328) + 0x30))
              (*(long **)(param_1 + 0x328),param_1 + 0x20,param_1 + 0x2e0,
               *(long *)(lVar3 + 0x10) != 0);
  }
  return;
}



/* Entry: 0048578c; end: 00485793;  */

undefined8 FUN_0048578c(void)

{
  return 1;
}



/* Entry: 00485794; end: 0048581b;  */

void FUN_00485794(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [56];
  
  uVar1 = *(undefined8 *)(param_1 + 0x328);
  FUN_00425cb4(auStack_70,"Service was shutdown");
  func_0x00486ea8(auStack_58);
  func_0x00487068();
  func_0x00486ebc(uVar1,param_1 + 0x20,auStack_58);
  func_0x00487294();
  func_0x00486f6c();
  FUN_004859c0(param_1 + 0x328);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 0048581c; end: 0048585f;  */

undefined1 FUN_0048581c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 00485860; end: 0048588f;  */

undefined8 * FUN_00485860(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_009e8600;
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 00485890; end: 004858ab;  */

void FUN_00485890(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x485894);
  (*pcVar1)();
}



/* Entry: 004858ac; end: 004858d7;  */

undefined8 * FUN_004858ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x004873e4();
  func_0x00486b00(puVar1 + 0x65);
  *param_1 = &PTR_FUN_009e85c0;
  if (param_1[0x22] != 0) {
    FUN_0048593c(param_1[0x22],param_1 + 0x24);
  }
  FUN_00468b24(param_1 + 99);
  FUN_00464a10(param_1 + 0x5c);
  FUN_004091e4(param_1 + 0x24);
  func_0x00467d18(param_1 + 4);
  *param_1 = &PTR_DAT_009e8600;
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 004858d8; end: 0048593b;  */

undefined8 * FUN_004858d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e85c0;
  if (param_1[0x22] != 0) {
    FUN_0048593c(param_1[0x22],param_1 + 0x24);
  }
  FUN_00468b24(param_1 + 99);
  FUN_00464a10(param_1 + 0x5c);
  FUN_004091e4(param_1 + 0x24);
  func_0x00467d18(param_1 + 4);
  *param_1 = &PTR_DAT_009e8600;
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 0048593c; end: 004859bf;  */

void FUN_0048593c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00486dc8();
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  if (*(long *)(unaff_x19 + 0x48) == unaff_x20) {
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(unaff_x19 + 8);
  return;
}



/* Entry: 004859c0; end: 004859e7;  */

void FUN_004859c0(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x00486b00(&uStack_20);
  return;
}



/* Entry: 004859e8; end: 00485afb;  */

void FUN_004859e8(long param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  undefined8 **ppuStack_58;
  long lStack_50;
  byte bStack_41;
  
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    func_0x00486e64();
    if ((*(char *)(param_1 + 8) == '\x01') && ((*(byte *)(unaff_x19 + 200) & 1) == 0)) {
      uVar6 = *unaff_x21;
      func_0x00487268();
      uVar4 = 3;
      func_0x0033a104(uVar6,3);
      FUN_0033a118(param_1,param_2,uVar6,uVar4);
      *(long *)(unaff_x20 + 0x68) = param_1;
      *(undefined8 *)(unaff_x20 + 0x70) = param_2;
    }
    if (*(char *)(unaff_x21 + 7) == '\x01') {
      plVar5 = unaff_x21 + 4;
      while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&ppuStack_58,plVar5 + 2);
        pppuVar7 = (undefined8 ***)ppuStack_58;
        pppuVar1 = (undefined8 ***)((long)ppuStack_58 + lStack_50);
        if (-1 < (char)bStack_41) {
          pppuVar7 = &ppuStack_58;
          pppuVar1 = (undefined8 ***)((long)&ppuStack_58 + (ulong)bStack_41);
        }
        for (; pppuVar7 != pppuVar1; pppuVar7 = (undefined8 ***)((long)pppuVar7 + 1)) {
          uVar2 = *(undefined1 *)pppuVar7;
          ___tolower();
          *(undefined1 *)pppuVar7 = uVar2;
        }
        lVar3 = unaff_x19 + 0x48;
        FUN_00473c20(lVar3,&ppuStack_58);
        if (lVar3 == 0) {
          FUN_00409258();
        }
        func_0x00486dc0();
      }
    }
  }
  return;
}



/* Entry: 00485afc; end: 00485b23;  */

long * FUN_00485afc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00486d98();
                    /* WARNING: Could not recover jumptable at 0x00485b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 200))();
    return param_1;
  }
  return (long *)0x0;
}



/* Entry: 00485b24; end: 00485b5b;  */

undefined1  [16] FUN_00485b24(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  uVar1 = param_1[1] - param_2;
  if (param_2 <= (ulong)param_1[1]) {
    if (param_3 <= uVar1) {
      uVar1 = param_3;
    }
    auVar3._8_8_ = uVar1;
    auVar3._0_8_ = *param_1 + param_2;
    return auVar3;
  }
  pcVar2 = "string_view::substr";
  FUN_00435534("string_view::substr");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pcVar2 + 0x68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pcVar2 + 0x38);
  func_0x004870f0();
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (pcVar2);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = pcVar2;
  return auVar4;
}



/* Entry: 00485b5c; end: 00485bbb;  */

void FUN_00485b5c(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  func_0x004870f0();
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 00485bbc; end: 00485bd3;  */

void FUN_00485bbc(double param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_238 [24];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [192];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar5 = *(long **)(param_2 + 0x10);
  plStack_58 = plVar5 + 0x2c;
  plVar4 = plVar5 + 0x30;
  plStack_50 = plVar4;
  plStack_48 = plVar5 + 9;
  FUN_006ad024(auStack_70,"grpc::grpcService::makeGRPCCall");
  if (*(char *)(*plVar5 + 0x34) == '\x01') {
    if ((char)plVar5[0x53] == '\x01') {
      func_0x004872bc();
    }
    else {
      func_0x0048707c(plVar5 + 0x50);
    }
    FUN_00425cb4(&uStack_100,"Service disposed");
    func_0x00486ea8(auStack_1f0);
    func_0x00486f14();
  }
  else {
    func_0x00487268();
    func_0x0033a204();
    FUN_0033a2e8();
    FUN_005b9d30(plVar5 + 0x50,(long)param_1);
    iVar2 = (int)plVar5 + 0x10;
    FUN_005b9944();
    if (iVar2 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_118,plVar5 + 0x50);
      FUN_005b90a8(auStack_1f0,*(long *)(*plVar5 + 0x18) + 0x80);
      FUN_005b9d8c(&uStack_130,auStack_1f0);
      uVar1 = *(undefined4 *)(*plVar5 + 0xa0);
      FUN_00425cb4(&uStack_208,"unknown");
      FUN_00425cb4(&uStack_220,"");
      uStack_f0 = uStack_108;
      uStack_88 = uStack_210;
      uStack_f8 = uStack_110;
      uStack_100 = uStack_118;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_e0 = uStack_128;
      uStack_e8 = uStack_130;
      uStack_d8 = uStack_120;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_c0 = uStack_200;
      uStack_c8 = uStack_208;
      uStack_b8 = uStack_1f8;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_b0 = 0;
      uStack_9c = 0xffffffff;
      uStack_a4 = 0xffffffffffffffff;
      uStack_ac = 0xffffffffffffffff;
      uStack_90 = uStack_218;
      uStack_98 = uStack_220;
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_80 = 0;
      uStack_d0 = uVar1;
      func_0x00487130();
      func_0x00487334();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_130);
      func_0x00465c30(auStack_1f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_118);
      plVar4 = plVar5 + 2;
      FUN_005b99e0(plVar4);
      if ((char)plVar5[0x53] == '\x01') {
        FUN_005b9d10(plVar5 + 0x50,plVar4);
        func_0x004873bc();
        FUN_005b9eac();
      }
      else {
        func_0x005b9d20(plVar5 + 0x50,plVar4);
        func_0x004873bc();
        FUN_005ba190();
      }
      func_0x004870b0();
      FUN_0046e000(auStack_1f0,plVar4,auStack_238);
      func_0x00486f14();
      func_0x004870d8();
      func_0x00486dc0();
      FUN_00485b5c(&uStack_100);
      goto LAB_00484c88;
    }
    if (*(long *)(*plVar5 + 0x68) != 0) {
      plVar3 = (long *)plVar5[9];
      (**(code **)(*plVar3 + 0x20))(plVar3,plVar4);
      FUN_004850ac(plVar5 + 0xb,plVar5 + 2,(long)param_1,plVar4);
      goto LAB_00484c88;
    }
    if ((char)plVar5[0x53] == '\x01') {
      func_0x004872bc();
    }
    else {
      func_0x0048707c(plVar5 + 0x50);
    }
    FUN_00425cb4(&uStack_100,"Resources aren\'t ready");
    func_0x00486ea8(auStack_1f0);
    func_0x00486f14();
  }
  func_0x004870d8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_100);
LAB_00484c88:
  FUN_006ad0cc(auStack_70);
  return;
}



/* Entry: 00485bd4; end: 00485bf3;  */

void FUN_00485bd4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00485e2c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00485bf4; end: 00485bf7;  */

void FUN_00485bf4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 00485bf8; end: 00485c33;  */

void FUN_00485bf8(void)

{
  func_0x00486e8c();
  __Znwm(0x2b0);
  FUN_00485c34();
  func_0x00487248();
  return;
}



/* Entry: 00485c34; end: 00485d3b;  */

undefined8 * FUN_00485c34(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10 != 0);
  }
  FUN_00484de8(param_1 + 2,param_2 + 2);
  lVar1 = param_2[10];
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10_00 != 0);
  }
  FUN_00485d3c(param_1 + 0xb,param_2 + 0xb);
  FUN_00485dd8(param_1 + 0x2c,param_2 + 0x2c);
  FUN_00483978(param_1 + 0x30,param_2 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x50,param_2 + 0x50);
  uVar3 = param_2[0x54];
  uVar2 = param_2[0x53];
  param_1[0x55] = param_2[0x55];
  param_1[0x54] = uVar3;
  param_1[0x53] = uVar2;
  return param_1;
}



/* Entry: 00485d3c; end: 00485dd7;  */

void FUN_00485d3c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x00486dc8();
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10 != 0);
  }
  func_0x004862e0(unaff_x19 + 0x10,unaff_x20 + 0x10);
  FUN_004829a4(unaff_x19 + 0xd8,unaff_x20 + 0xd8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0xe0,unaff_x20 + 0xe0);
  lVar1 = *(long *)(unaff_x20 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x20 + 0x100);
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 00485dd8; end: 00485e77;  */

long FUN_00485dd8(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x0048740c(*(undefined8 *)(param_2 + 0x18));
    func_0x00487030();
  }
  else {
    func_0x00486eb0();
    (*extraout_x8)();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 00485e78; end: 00485e93;  */

void FUN_00485e78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e84a0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00485e94; end: 00485eff;  */

void FUN_00485e94(long param_1)

{
  func_0x00486fa4();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00485f00; end: 00485f53;  */

long FUN_00485f00(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x0048740c(*(undefined8 *)(param_2 + 0x18));
    func_0x00487030();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 00485f54; end: 00486023;  */

undefined8 FUN_00485f54(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00467d18(param_1 + 0x148);
  func_0x00485f90(param_1 + 0x128);
  FUN_004861f0(param_1 + 0x20);
  func_0x00485fd4(param_1 + 0x10);
  func_0x0046cd3c();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 00486024; end: 0048602b;  */

void FUN_00486024(long param_1)

{
  long lVar1;
  undefined1 auStack_58 [56];
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_0048607c(auStack_58);
  FUN_004850ac(lVar1,auStack_58,0,lVar1 + 0x108);
  FUN_00470b00(auStack_58);
  return;
}



/* Entry: 0048602c; end: 0048607b;  */

void FUN_0048602c(long param_1)

{
  undefined1 auStack_58 [56];
  
  FUN_0048607c(auStack_58);
  FUN_004850ac(param_1,auStack_58,0,param_1 + 0x108);
  FUN_00470b00(auStack_58);
  return;
}



/* Entry: 0048607c; end: 004860b7;  */

void FUN_0048607c(undefined8 *param_1)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_28 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  FUN_00470b00(&uStack_28);
  return;
}



/* Entry: 004860b8; end: 004860c7;  */

void FUN_004860b8(undefined8 param_1,undefined8 param_2)

{
  func_0x00486e8c(param_1,&PTR_FUN_009e8648,param_2);
  __Znwm(0x208);
  FUN_00486128();
  func_0x00487248();
  return;
}



/* Entry: 004860c8; end: 004860e7;  */

void FUN_004860c8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00486224();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 004860e8; end: 004860eb;  */

void FUN_004860e8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 004860ec; end: 00486127;  */

void FUN_004860ec(void)

{
  func_0x00486e8c();
  __Znwm(0x208);
  FUN_00486128();
  func_0x00487248();
  return;
}



/* Entry: 00486128; end: 0048615f;  */

void FUN_00486128(long param_1)

{
  long unaff_x20;
  
  func_0x00486dc8();
  FUN_00486160();
  FUN_00483978(param_1 + 0x108,unaff_x20 + 0x108);
  return;
}



/* Entry: 00486160; end: 004861ef;  */

undefined8 * FUN_00486160(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_004830d4(param_1 + 2,param_2 + 2);
  FUN_004829a4(param_1 + 0x1b,param_2 + 0x1b);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x1c,param_2 + 0x1c);
  lVar1 = param_2[0x20];
  uVar2 = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00486d10();
    } while (extraout_w10 != 0);
  }
  return param_1;
}


