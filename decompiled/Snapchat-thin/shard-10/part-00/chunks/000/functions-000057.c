/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073e4410; end: 1073e4423;  */

undefined1 FUN_1073e4410(long *param_1)

{
  return *(undefined1 *)(*param_1 + 8);
}



/* Entry: 1073e4424; end: 1073e454f;  */

long * FUN_1073e4424(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  long *extraout_x8_00;
  uint uVar5;
  long *plVar6;
  undefined1 auStack_2f8 [48];
  undefined4 uStack_2c8;
  undefined1 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  undefined1 auStack_290 [56];
  undefined1 uStack_258;
  undefined8 uStack_250;
  long alStack_248 [29];
  undefined8 uStack_160;
  undefined1 auStack_b8 [120];
  int iStack_40;
  undefined8 uStack_38;
  
  func_0x0001073e54fc();
  plVar6 = (long *)*param_1;
  uStack_38 = extraout_x8;
  func_0x0001077512dc(*(undefined4 *)*plVar6,alStack_248);
  lVar4 = *plVar6;
  uStack_160 = *(undefined8 *)(lVar4 + 8);
  auStack_290[0] = 0;
  uStack_258 = 0;
  uStack_250 = *(undefined8 *)(lVar4 + 0x40);
  func_0x000107753050(auStack_b8,*param_2,alStack_248,auStack_290);
  uVar2 = iStack_40 == 1;
  if ((bool)uVar2) {
    puVar3 = auStack_b8;
    func_0x00010727f7dc();
    func_0x000107775990();
    uVar5 = (uint)puVar3;
    uVar2 = ((ulong)puVar3 & 0x100) == 0;
    bVar1 = (bool)uVar2;
  }
  else {
    uVar5 = 0;
    bVar1 = true;
  }
  func_0x0001073e5a80(auStack_b8);
  if (bVar1) {
    uVar2 = *(char *)((long)param_2 + 0x29) == '\x01';
    if ((bool)uVar2) {
      uVar5 = (uint)*(byte *)(param_2 + 5);
    }
    else {
      uVar5 = 0;
    }
  }
  func_0x00010724b3d8(auStack_290);
  func_0x000107267da8(alStack_248);
  func_0x0001073e54d8(uStack_38);
  if ((bool)uVar2) {
    return (long *)(ulong)(uVar5 & 0xff);
  }
  ___stack_chk_fail();
  func_0x0001073e5a80(auStack_b8);
  func_0x00010724b3d8(auStack_290);
  plVar6 = alStack_248;
  func_0x000107267da8();
  func_0x0001073e5640();
  if ((int)plVar6[6] != -1) {
    return plVar6;
  }
  pcStack_2a8 = FUN_1073e4550;
  puStack_2b0 = &stack0xfffffffffffffff0;
  func_0x00010563ab98();
  uStack_2b8 = 0x1073e456c;
  auStack_2f8[0] = *(undefined1 *)(*plVar6 + 8);
  uStack_2c8 = 0;
  plVar6 = extraout_x8_00;
  puStack_2c0 = (undefined1 *)&puStack_2b0;
  FUN_1073e46e0(extraout_x8_00,auStack_2f8);
  func_0x0001073e5cbc();
  return plVar6;
}



/* Entry: 1073e4550; end: 1073e45cf;  */

void FUN_1073e4550(long *param_1)

{
  undefined8 extraout_x8;
  undefined1 auStack_58 [48];
  undefined4 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if ((int)param_1[6] != -1) {
    return;
  }
  func_0x00010563ab98();
  uStack_18 = 0x1073e456c;
  auStack_58[0] = *(undefined1 *)(*param_1 + 8);
  uStack_28 = 0;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_1073e46e0(extraout_x8,auStack_58);
  func_0x0001073e5cbc();
  return;
}



/* Entry: 1073e45d0; end: 1073e46df;  */

undefined1 * FUN_1073e45d0(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  long *plVar4;
  undefined1 auStack_248 [48];
  undefined4 uStack_218;
  undefined1 auStack_210 [56];
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [48];
  undefined4 uStack_198;
  undefined8 uStack_e0;
  undefined8 uStack_38;
  
  lVar3 = param_3;
  func_0x0001073e54fc();
  uVar1 = ((*(byte *)(lVar3 + 0x10) ^ 0xff) & 6) == 0;
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    plVar4 = (long *)*param_2;
    func_0x0001077512dc(*(undefined4 *)*plVar4,auStack_1c8);
    lVar3 = *plVar4;
    uStack_e0 = *(undefined8 *)(lVar3 + 8);
    auStack_210[0] = 0;
    uStack_1d8 = 0;
    uStack_1d0 = *(undefined8 *)(lVar3 + 0x40);
    func_0x0001073e47a0(param_3,auStack_1c8,auStack_210,0);
    auStack_248[0] = (undefined1)param_3;
    uStack_218 = 0;
    FUN_1073e46e0(param_1,auStack_248);
    func_0x0001073e5cbc();
    func_0x00010724b3d8(auStack_210);
    puVar2 = auStack_1c8;
    func_0x000107267da8();
  }
  else {
    func_0x0001073e47e0(auStack_1c8,param_3);
    uStack_198 = 1;
    FUN_1073e46e0(param_1,auStack_1c8);
    puVar2 = auStack_1c8;
    FUN_1073e434c();
  }
  func_0x0001073e54d8(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_210);
  puVar2 = auStack_1c8;
  func_0x000107267da8();
  func_0x0001073e5640();
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 0x30) = 0xffffffff;
  FUN_1073e4710();
  return puVar2;
}



/* Entry: 1073e46e0; end: 1073e470f;  */

undefined1 * FUN_1073e46e0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  FUN_1073e4710();
  return param_1;
}



/* Entry: 1073e4710; end: 1073e476b;  */

void FUN_1073e4710(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e5d6c();
  FUN_1073e434c();
  uVar1 = *(uint *)(unaff_x20 + 0x30);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109ac6f0)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 1073e476c; end: 1073e477b;  */

void FUN_1073e476c(undefined8 *param_1,undefined1 *param_2)

{
  *(undefined1 *)*param_1 = *param_2;
  return;
}



/* Entry: 1073e477c; end: 1073e4803;  */

void FUN_1073e477c(long param_1,long param_2)

{
  func_0x00010727da70();
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  return;
}



/* Entry: 1073e4804; end: 1073e48a3;  */

undefined1 ** FUN_1073e4804(long *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 uStack_a9;
  undefined1 auStack_a8 [120];
  int iStack_30;
  undefined8 uStack_28;
  
  func_0x0001073e54fc();
  puVar2 = (undefined1 *)*param_1;
  uStack_28 = extraout_x8;
  func_0x000107753050(auStack_a8);
  uVar1 = iStack_30 == 1;
  if ((bool)uVar1) {
    puVar2 = auStack_a8;
    func_0x00010727f7dc();
    param_2 = &uStack_a9;
    func_0x0001077759ac();
    puVar6 = (undefined1 *)(ulong)((uint)puVar2 >> 8 & 0xff);
    puVar5 = puVar2;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    puVar5 = (undefined1 *)0x0;
  }
  func_0x0001073e5a80(auStack_a8);
  func_0x0001073e54d8(uStack_28);
  if ((bool)uVar1) {
    return (undefined1 **)(ulong)((uint)puVar5 & 0xff | (int)puVar6 << 8);
  }
  ___stack_chk_fail();
  func_0x0001073e5a80(auStack_a8);
  func_0x0001073e5640();
  pcStack_b8 = FUN_1073e48a4;
  puStack_c8 = puVar2;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x0001073e59f4();
  FUN_1073dd910(param_2);
  uVar4 = (ulong)*(uint *)(puVar2 + 0x30);
  if (*(uint *)(puVar2 + 0x30) == 0xffffffff) {
    uVar4 = 0xffffffffffffffff;
  }
  ppuVar3 = &puStack_c8;
  puStack_c8 = puVar6;
  (*(code *)(&PTR_FUN_1109ac700)[uVar4])(ppuVar3);
  return ppuVar3;
}



/* Entry: 1073e48a4; end: 1073e48cf;  */

void FUN_1073e48a4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001073e59f4();
  FUN_1073dd910(param_2);
  uVar1 = (ulong)*(uint *)(unaff_x19 + 0x30);
  if (*(uint *)(unaff_x19 + 0x30) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  (*(code *)(&PTR_FUN_1109ac700)[uVar1])(&stack0xffffffffffffffe8);
  return;
}



/* Entry: 1073e48d0; end: 1073e490b;  */

void FUN_1073e48d0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uStack_18;
  
  uVar1 = (ulong)*(uint *)(param_2 + 0x30);
  if (*(uint *)(param_2 + 0x30) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  uStack_18 = param_1;
  (*(code *)(&PTR_FUN_1109ac700)[uVar1])(&uStack_18);
  return;
}



/* Entry: 1073e490c; end: 1073e492b;  */

undefined4 FUN_1073e490c(long *param_1)

{
  return *(undefined4 *)(*param_1 + 8);
}



/* Entry: 1073e492c; end: 1073e49ef;  */

long * FUN_1073e492c(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long *unaff_x20;
  long *plStack_248;
  undefined1 auStack_220 [56];
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  long alStack_1d8 [29];
  undefined8 uStack_f0;
  undefined8 uStack_48;
  
  func_0x0001073e59f4();
  func_0x0001073e54fc();
  uStack_48 = extraout_x8;
  func_0x0001077512dc(*(undefined4 *)*param_1,alStack_1d8);
  uStack_f0 = *(undefined8 *)(*unaff_x20 + 8);
  auStack_220[0] = 0;
  uStack_1e8 = 0;
  uStack_1e0 = *(undefined8 *)(*unaff_x20 + 0x40);
  plVar4 = alStack_1d8;
  func_0x00010727f6f4(0);
  func_0x00010724b3d8(auStack_220);
  plVar2 = alStack_1d8;
  func_0x000107267da8();
  func_0x0001073e54d8(uStack_48);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_220);
  plVar3 = alStack_1d8;
  func_0x000107267da8();
  func_0x0001073e5640();
  func_0x0001073e59f4();
  *(char *)plVar3 = (char)*plVar4;
  uVar1 = *(uint *)(plVar4 + 7);
  if ((int)plVar3[7] != -1 || uVar1 != 0xffffffff) {
    plVar4 = unaff_x20 + 1;
    if (uVar1 == 0xffffffff) {
      FUN_1073e434c(plVar4);
    }
    else {
      plStack_248 = plVar4;
      (*(code *)(&PTR_FUN_1109ac718)[uVar1])(&plStack_248,plVar4,plVar2 + 1);
    }
  }
  *(char *)(unaff_x20 + 8) = (char)plVar2[8];
  *(undefined4 *)((long)unaff_x20 + 0x44) = *(undefined4 *)((long)plVar2 + 0x44);
  *(int *)(unaff_x20 + 9) = (int)plVar2[9];
  *(undefined1 *)((long)unaff_x20 + 0x4c) = *(undefined1 *)((long)plVar2 + 0x4c);
  FUN_1073ddfa0(unaff_x20 + 10,plVar2 + 10);
  return unaff_x20 + 10;
}



/* Entry: 1073e49f0; end: 1073e4a8f;  */

long FUN_1073e49f0(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  uint uVar2;
  long unaff_x19;
  long unaff_x20;
  long lStack_28;
  
  func_0x0001073e59f4();
  *param_1 = *param_2;
  uVar2 = *(uint *)(param_2 + 0x38);
  if (*(int *)(param_1 + 0x38) != -1 || uVar2 != 0xffffffff) {
    lVar1 = unaff_x20 + 8;
    if (uVar2 == 0xffffffff) {
      FUN_1073e434c(lVar1);
    }
    else {
      lStack_28 = lVar1;
      (*(code *)(&PTR_FUN_1109ac718)[uVar2])(&lStack_28,lVar1,unaff_x19 + 8);
    }
  }
  *(undefined1 *)(unaff_x20 + 0x40) = *(undefined1 *)(unaff_x19 + 0x40);
  *(undefined4 *)(unaff_x20 + 0x44) = *(undefined4 *)(unaff_x19 + 0x44);
  *(undefined4 *)(unaff_x20 + 0x48) = *(undefined4 *)(unaff_x19 + 0x48);
  *(undefined1 *)(unaff_x20 + 0x4c) = *(undefined1 *)(unaff_x19 + 0x4c);
  FUN_1073ddfa0(unaff_x20 + 0x50,unaff_x19 + 0x50);
  return unaff_x20 + 0x50;
}



/* Entry: 1073e4a90; end: 1073e4b87;  */

void FUN_1073e4a90(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  if (*(int *)(puVar1 + 0x30) == 0) {
    *param_2 = *param_3;
  }
  else {
    FUN_1073e434c(puVar1);
    *puVar1 = *param_3;
    *(undefined4 *)(puVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 1073e4b88; end: 1073e4cbb;  */

void FUN_1073e4b88(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001073e5d6c();
  FUN_1073ded34();
  FUN_1073deb50(param_1 + 0x38,unaff_x20 + 0x38);
  FUN_1073e4cbc(unaff_x19 + 0x80,unaff_x20 + 0x80);
  FUN_1073ded34(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  FUN_1073ded34(unaff_x19 + 0xd8,unaff_x20 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x110);
  *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x19 + 0x110) = uVar1;
  FUN_1073dec58(unaff_x19 + 0x120,unaff_x20 + 0x120);
  FUN_1073ded34(unaff_x19 + 0x160,unaff_x20 + 0x160);
  FUN_1073ded34(unaff_x19 + 0x198,unaff_x20 + 0x198);
  FUN_1073dedb8(unaff_x19 + 0x1d8,unaff_x20 + 0x1d8);
  *(undefined8 *)(unaff_x19 + 0x2a0) = *(undefined8 *)(unaff_x20 + 0x2a0);
  *(undefined1 *)(unaff_x19 + 0x2a8) = *(undefined1 *)(unaff_x20 + 0x2a8);
  FUN_1073ded34(unaff_x19 + 0x2b0,unaff_x20 + 0x2b0);
  return;
}



/* Entry: 1073e4cbc; end: 1073e4cf7;  */

void FUN_1073e4cbc(long param_1)

{
  long unaff_x20;
  
  func_0x0001073e5d6c();
  func_0x0001072f64f4();
  func_0x0001072f64f4(param_1 + 0x10,unaff_x20 + 0x10);
  return;
}



/* Entry: 1073e4cf8; end: 1073e4dfb;  */

/* WARNING: Possible PIC construction at 0x0001073e4d0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073e4d10) */

void FUN_1073e4cf8(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  puVar3 = puVar1;
  func_0x0001072dbda8();
  pcVar2 = pcRam00000001138369a8;
  if ((puVar3 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_48 = *(undefined8 *)(param_1 + 0x18);
    uStack_50 = *puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    (*pcVar2)(&uStack_50);
    func_0x0001000df524(&uStack_50);
  }
  func_0x0001072dbde4(puVar1);
  return;
}



/* Entry: 1073e4dfc; end: 1073e4f4b;  */

void FUN_1073e4dfc(long *param_1,undefined1 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [48];
  uint uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b4;
  undefined1 uStack_ac;
  undefined1 auStack_a8 [56];
  undefined1 *apuStack_70 [2];
  
  puVar2 = (undefined8 *)0x430;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_1109ac738;
  auStack_f8[0] = *param_2;
  auStack_f0[0] = 0;
  uStack_c0 = 0xffffffff;
  FUN_1073e434c(auStack_f0);
  uVar1 = *(uint *)(param_2 + 0x38);
  if (uVar1 != 0xffffffff) {
    apuStack_70[0] = auStack_f0;
    (*(code *)(&PTR_DAT_1109ac778)[uVar1])(apuStack_70,param_2 + 8);
    uStack_c0 = uVar1;
  }
  uStack_b8 = param_2[0x40];
  uStack_b4 = *(undefined8 *)(param_2 + 0x44);
  uStack_ac = param_2[0x4c];
  FUN_1073ded34(auStack_a8,param_2 + 0x50);
  FUN_107452a18(*param_4,puVar2 + 3,auStack_f8,param_3,*param_5,param_6,param_7);
  func_0x0001073e4b5c(auStack_f8);
  *param_1 = (long)(puVar2 + 3);
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 1073e4f4c; end: 1073e4f4f;  */

void FUN_1073e4f4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ac738;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073e4f50; end: 1073e4f63;  */

void FUN_1073e4f50(void)

{
  func_0x0001073e4f7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073e4f64; end: 1073e4f8b;  */

undefined8 * FUN_1073e4f64(long param_1)

{
  func_0x000104c2f714(param_1 + 1000);
  func_0x000107455584(param_1 + 0x3a0);
  func_0x0001074554f4(param_1 + 0x388);
  func_0x0001074553d4(param_1 + 400);
  func_0x00010730b10c(param_1 + 0x170);
  func_0x00010730b13c(param_1 + 0x138);
  func_0x000107261dac(param_1 + 0x118);
  FUN_1073eb118(param_1 + 0x100);
  func_0x00010730b05c(param_1 + 0xe8);
  func_0x00010745526c(param_1 + 200);
  func_0x0001073e4b5c(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 1073e4f8c; end: 1073e4fb3;  */

long FUN_1073e4f8c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073e4fb4; end: 1073e4fbb;  */

void FUN_1073e4fb4(void)

{
  return;
}



/* Entry: 1073e4fbc; end: 1073e4fe3;  */

void FUN_1073e4fbc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073e5bac();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109ac798;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1073e4fe4; end: 1073e500b;  */

void FUN_1073e4fe4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109ac798;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073e500c; end: 1073e5043;  */

long FUN_1073e500c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109ac7f8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073e5044; end: 1073e5053;  */

undefined ** FUN_1073e5044(void)

{
  return &PTR_DAT_1109ac7f8;
}



/* Entry: 1073e5054; end: 1073e5067;  */

void FUN_1073e5054(void)

{
  FUN_1073e53cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073e5068; end: 1073e506b;  */

void FUN_1073e5068(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,param_2 + 0x260);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1073e506c; end: 1073e532f;  */

long ** FUN_1073e506c(void)

{
  long **pplVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  long **pplVar5;
  long **pplVar6;
  undefined1 *puVar7;
  long **pplVar8;
  undefined8 uVar9;
  long **pplVar10;
  long **pplVar11;
  long *plVar12;
  long *plVar13;
  long *in_x3;
  long *plVar14;
  ulong in_x4;
  ulong uVar15;
  undefined8 in_x5;
  long **in_x6;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long *plVar16;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  code *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar17;
  long **unaff_x20;
  long **pplVar18;
  long **unaff_x23;
  long *plVar19;
  long **unaff_x25;
  long **pplVar20;
  long **pplVar21;
  long lVar22;
  long **pplVar23;
  undefined1 auStack_a41 [9];
  long **pplStack_a38;
  undefined8 ***pppuStack_a30;
  code *pcStack_a28;
  long **pplStack_a18;
  long *plStack_a10;
  long lStack_a08;
  undefined1 auStack_9f8 [24];
  long *plStack_9e0;
  long lStack_9d8;
  undefined1 auStack_9c8 [56];
  undefined1 auStack_990 [56];
  undefined1 auStack_958 [56];
  undefined1 uStack_920;
  undefined8 uStack_918;
  undefined1 auStack_8e0 [400];
  undefined1 auStack_750 [64];
  undefined8 uStack_710;
  long **pplStack_700;
  long **pplStack_6f8;
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined1 *puStack_6e0;
  long lStack_6d8;
  long **pplStack_6d0;
  long *plStack_6c8;
  long **pplStack_6c0;
  undefined1 ***pppuStack_6b0;
  code *pcStack_6a8;
  long *aplStack_6a0 [2];
  long lStack_690;
  undefined1 *puStack_678;
  undefined8 uStack_670;
  long alStack_668 [3];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [24];
  char cStack_620;
  undefined1 auStack_618 [24];
  undefined1 auStack_600 [24];
  undefined8 uStack_5e8;
  long **pplStack_5e0;
  long **pplStack_5d8;
  long **pplStack_5d0;
  long **pplStack_5c8;
  long **pplStack_5c0;
  long **pplStack_5b8;
  long **pplStack_5b0;
  long **pplStack_5a8;
  long **pplStack_5a0;
  ulong uStack_598;
  undefined1 **ppuStack_590;
  code *pcStack_588;
  undefined1 auStack_578 [400];
  undefined8 uStack_3e8;
  long **pplStack_3e0;
  long **pplStack_3d8;
  undefined1 *puStack_3d0;
  code *pcStack_3c8;
  undefined1 *puStack_3c0;
  undefined8 uStack_380;
  undefined1 auStack_368 [24];
  long **pplStack_350;
  undefined1 auStack_2f0 [112];
  long *aplStack_280 [2];
  long *plStack_270;
  long *plStack_268;
  undefined1 auStack_220 [432];
  undefined8 uStack_70;
  
  func_0x0001073e59f4();
  func_0x0001073e54fc();
  func_0x0001073e5554();
  func_0x0001073e59ac();
  func_0x0001073e598c();
  func_0x000107288cd8(aplStack_280);
  func_0x0001073e58e4();
  func_0x0001073e5c4c();
  func_0x0001073e57e0();
  func_0x0001073e5974();
  func_0x0001073e5c14();
  func_0x0001073e57cc();
  func_0x0001073e591c();
  func_0x0001073e5684();
  FUN_10745f750(auStack_368,unaff_x20[0x3a]);
  pplVar5 = (long **)unaff_x20[0x3b];
  FUN_10750a49c(auStack_2f0);
  func_0x0001073e573c();
  func_0x0001073e59a4();
  func_0x0001073e5bfc();
  func_0x0001073e56a4();
  func_0x0001073e58f4();
  pplVar18 = (long **)0x0;
  pplVar21 = (long **)unaff_x20[0x1a];
  for (pplVar23 = (long **)unaff_x20[0x19]; pplVar23 != pplVar21; pplVar23 = pplVar23 + 0xb) {
    unaff_x23 = pplVar23 + 1;
    pplVar6 = pplStack_350;
    FUN_107454dc8(pplStack_350,unaff_x23);
    pplVar18 = (long **)((long)pplVar6 + (long)pplVar18);
  }
  pplVar6 = pplStack_350;
  func_0x0001073e5cf0();
  pplVar11 = pplVar18;
  func_0x000107454e54();
  pplVar1 = (long **)unaff_x20[0x1a];
  pplVar23 = aplStack_280;
  pplVar20 = (long **)unaff_x20[0x19];
  while (pplVar20 != pplVar1) {
    func_0x0001073e5824();
    func_0x0001073e59a4();
    pplVar21 = aplStack_280;
    FUN_107330078();
    func_0x0001073e5d4c(uStack_380);
    (*extraout_x8)();
    func_0x00010726236c(auStack_2f0);
    puVar7 = auStack_2f0;
    func_0x0001073e553c(aplStack_280);
    func_0x0001073e5ac4();
    func_0x00010786967c();
    puStack_3c0 = puVar7;
    func_0x0001073e5aec();
    func_0x0001073e5a60();
    func_0x0001073e56a4();
    func_0x0001073e5594();
    func_0x0001073e573c();
    (*extraout_x9)(auStack_220);
    func_0x0001073e5aa8();
    func_0x0001073e5c58();
    pplVar6 = aplStack_280;
    func_0x0001073e03f8();
    func_0x0001073e5b54();
    (*extraout_x8_00)();
    in_x6 = pplVar18 + -4;
    unaff_x25 = pplVar18 + -2;
    pplVar11 = pplVar6;
    func_0x0001073e56c0();
    func_0x0001073e5a24();
    func_0x0001073e58ec();
    func_0x0001073e5a1c();
    pplVar20 = pplVar18 + 4;
  }
  uVar3 = pplStack_350[0x1d] == pplStack_350[0x1e];
  if (!(bool)uVar3) {
    pplVar5 = (long **)unaff_x20[1];
    unaff_x20 = unaff_x20 + 2;
    while (uVar3 = pplVar5 == unaff_x20, !(bool)uVar3) {
      func_0x0001073e5d24();
      if (extraout_x8_01 != 0) {
        do {
          func_0x0001073e54ec();
        } while (extraout_w10 != 0);
      }
      plStack_268 = pplVar5[0xc];
      plStack_270 = pplVar5[0xb];
      if (pplVar5[0xc] != (long *)0x0) {
        do {
          func_0x0001073e54ec();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001073e59d4();
      func_0x0001073e08f4(aplStack_280);
      func_0x00010002c7d4();
      pplVar6 = pplVar5;
    }
  }
  func_0x0001073e59bc();
  func_0x0001073e592c();
  func_0x0001073e5984();
  func_0x0001073e54d8(uStack_70);
  if ((bool)uVar3) {
    return pplVar6;
  }
  ___stack_chk_fail();
  pplVar8 = pplVar6;
  func_0x0001073e59bc();
  func_0x0001073e592c();
  func_0x0001073e5984();
  func_0x0001073e5640();
  if (((ulong)pplVar8[0x53] & 1) != 0) {
    return (long **)0x1;
  }
  pcStack_3c8 = FUN_1073e5330;
  pplVar10 = pplVar8 + 0x3f;
  pplStack_3e0 = unaff_x20;
  pplStack_3d8 = pplVar6;
  puStack_3d0 = &stack0xfffffffffffffff0;
  func_0x0001073ec044();
  uStack_3e8 = extraout_x8_02;
  func_0x000107751284(auStack_578);
  uVar3 = *(char *)(pplVar8 + 0x41) == '\x01';
  if ((bool)uVar3) {
    plVar16 = pplVar8[0x3f];
    uVar3 = (char)plVar16[4] == '\x01';
    if ((bool)uVar3) {
      uVar17 = (ulong)(*(byte *)((long)plVar16 + 0x22) ^ 1);
    }
    else {
      uVar17 = 1;
    }
  }
  else {
    uVar17 = 0;
  }
  func_0x000107267da8(auStack_578);
  func_0x0001073ec008(uStack_3e8);
  if ((bool)uVar3) {
    return (long **)(ulong)((uint)uVar17 & 1);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pplVar6 = (long **)0x0;
  pplVar8 = aplStack_6a0;
  pcStack_588 = FUN_1073eb6b8;
  plVar14 = in_x3;
  uVar15 = in_x4;
  pplStack_5e0 = pplVar1;
  pplStack_5d8 = pplVar23;
  pplStack_5d0 = pplVar20;
  pplStack_5c8 = unaff_x25;
  pplStack_5c0 = pplVar21;
  pplStack_5b8 = unaff_x23;
  pplStack_5b0 = pplVar18;
  pplStack_5a8 = pplVar5;
  pplStack_5a0 = unaff_x20;
  uStack_598 = uVar17;
  ppuStack_590 = &puStack_3d0;
  func_0x0001073ec044();
  uStack_5e8 = extraout_x8_04;
  *(undefined4 *)(extraout_x8_03 + 0x10) = 1;
  *(undefined4 *)(extraout_x8_03 + 0x28) = 1;
  *(undefined4 *)(extraout_x8_03 + 0x40) = 1;
  plVar16 = *pplVar11;
  plVar12 = pplVar11[1];
  func_0x0001072d306c();
  plVar19 = (long *)lStack_690;
  do {
    if (plVar19 == (long *)0x0) {
      func_0x0001005d0538();
      func_0x0001073ec008(uStack_5e8);
      if ((bool)uVar3) {
        return pplVar8;
      }
      ___stack_chk_fail();
      func_0x0001073ebef4(extraout_x8_03);
      __Unwind_Resume(pplVar8);
      uStack_6f0 = 2;
      pcStack_6a8 = FUN_1073eb8e0;
      plVar13 = plVar12;
      pplStack_a18 = in_x6;
      pplStack_700 = pplVar1;
      pplStack_6f8 = pplVar23;
      puStack_6e8 = auStack_650;
      puStack_6e0 = auStack_618;
      lStack_6d8 = (long)plVar19;
      pplStack_6d0 = pplVar10;
      plStack_6c8 = in_x3;
      pplStack_6c0 = pplVar8;
      pppuStack_6b0 = &ppuStack_590;
      func_0x0001073ec044();
      pplVar18 = (long **)*plVar13;
      uStack_710 = extraout_x8_05;
      (*(code *)(*pplVar18)[2])();
      pplVar23 = pplVar18;
      for (pplVar21 = (long **)0x0; bVar4 = pplVar21 == pplVar18, !bVar4;
          pplVar21 = (long **)((long)pplVar21 + 1)) {
        (**(code **)(*(long *)*plVar12 + 0x18))(&plStack_9e0,(long *)*plVar12,pplVar21);
        (**(code **)(*plStack_9e0 + 0x30))();
        func_0x00010726236c(auStack_750);
        func_0x0001072e7640(auStack_8e0,auStack_750,0x1138369c0);
        uVar9 = in_x5;
        func_0x000107869b38(auStack_958,in_x5,auStack_8e0);
        func_0x00010786967c();
        FUN_1073dcf84(auStack_9f8,auStack_958,uVar9);
        FUN_1073de9d8(auStack_958);
        func_0x000104c2f714(auStack_8e0);
        lStack_a08 = lStack_9d8;
        plStack_a10 = plStack_9e0;
        if (lStack_9d8 != 0) {
          plVar19 = (long *)(lStack_9d8 + 8);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar4) {
              *plVar19 = *plVar19 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x000104c2fe00(auStack_9c8,plVar14);
        (**(code **)(*(long *)*plVar12 + 0x20))(auStack_990);
        func_0x0001073c4f74(auStack_958,auStack_9c8);
        func_0x000107751444(plVar16,&plStack_a10,auStack_958);
        plVar16[0x1c] = (long)auStack_9f8;
        func_0x000107751334(auStack_8e0,plVar16);
        func_0x000107267e8c(auStack_958);
        func_0x000107267eac(auStack_9c8);
        func_0x000107267e44(&plStack_a10);
        auStack_958[0] = 0;
        uStack_920 = 0;
        uStack_918 = 0;
        uVar17 = uVar15;
        func_0x00010777faa8(uVar15,auStack_8e0,auStack_958);
        func_0x00010724b3d8(auStack_958);
        if ((uVar17 & 1) != 0) {
          FUN_1073ebfe0(pplStack_a18,auStack_8e0);
        }
        func_0x000107267da8(auStack_8e0);
        func_0x00010726b264(auStack_9f8);
        func_0x00010724b3d8(auStack_750);
        pplVar23 = &plStack_9e0;
        FUN_107330fdc();
      }
      func_0x0001073ec008(uStack_710);
      if (bVar4) {
        return pplVar23;
      }
      ___stack_chk_fail();
      func_0x000107267da8(auStack_8e0);
      func_0x00010726b264(auStack_9f8);
      func_0x00010724b3d8(auStack_750);
      FUN_107330fdc(&plStack_9e0);
      pplVar18 = pplVar23;
      __Unwind_Resume();
      pcStack_a28 = FUN_1073ebb78;
      pplVar21 = pplVar18;
      if (*(uint *)(pplVar18 + 2) != 0xffffffff) {
        pplVar21 = (long **)auStack_a41;
        auStack_a41._1_8_ = in_x5;
        pplStack_a38 = pplVar23;
        pppuStack_a30 = &pppuStack_6b0;
        (*(code *)(&PTR_FUN_1109acee0)[*(uint *)(pplVar18 + 2)])(pplVar21,pplVar18);
      }
      *(undefined4 *)(pplVar18 + 2) = 0xffffffff;
      return pplVar21;
    }
    if (((uint)in_x4 >> 8 & 1) == 0) {
LAB_1073eb724:
      plVar16 = plVar19 + 2;
      pplVar6 = pplVar10;
      plVar12 = in_x3;
      FUN_10746e408();
      if ((int)pplVar6 != 0) {
        plVar16 = plVar19 + 2;
        plVar12 = in_x3;
        FUN_10746e5cc(auStack_650,pplVar10);
        uVar3 = false;
        if (cStack_620 == '\x01') {
          FUN_1073ebbdc(auStack_618,extraout_x8_03);
          FUN_1073ebbdc(auStack_600,auStack_650);
          uStack_670 = 2;
          puStack_678 = auStack_618;
          func_0x0001073ec054();
          FUN_1073ebc60(extraout_x8_03,alStack_668);
          FUN_1073ebb78(alStack_668);
          lVar22 = 0x18;
          do {
            FUN_1073ebb78(auStack_618 + lVar22);
            lVar22 = lVar22 + -0x18;
          } while (lVar22 != -0x18);
          FUN_1073ebbdc(auStack_618,extraout_x8_03 + 0x18);
          FUN_1073ebbdc(auStack_600,auStack_638);
          uStack_670 = 2;
          puStack_678 = auStack_618;
          func_0x0001073ec054();
          plVar16 = alStack_668;
          FUN_1073ebc60(extraout_x8_03 + 0x18);
          FUN_1073ebb78(alStack_668);
          pplVar23 = (long **)0x18;
          do {
            FUN_1073ebb78(auStack_618 + (long)pplVar23);
            pplVar23 = pplVar23 + -3;
            uVar3 = pplVar23 == (long **)0xffffffffffffffe8;
          } while (!(bool)uVar3);
        }
        pplVar6 = (long **)0x0;
        FUN_1073ebeac();
      }
    }
    else if ((in_x4 & 1) == 0) {
      func_0x0001073ec06c((*pplVar10)[6]);
      if (((ulong)pplVar6 & 1) == 0) goto LAB_1073eb724;
    }
    else {
      func_0x0001073ec06c((*pplVar10)[6]);
      if (((ulong)pplVar6 & 1) != 0) goto LAB_1073eb724;
    }
    plVar19 = (long *)*plVar19;
  } while( true );
}



/* Entry: 1073e5330; end: 1073e5347;  */

long ** FUN_1073e5330(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                     ulong param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 extraout_x8;
  long lVar15;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  uint uVar16;
  long *plVar17;
  long **pplVar18;
  undefined1 auStack_681 [9];
  long **pplStack_678;
  undefined1 ***pppuStack_670;
  code *pcStack_668;
  undefined8 uStack_658;
  long *plStack_650;
  long lStack_648;
  undefined1 auStack_638 [24];
  long *plStack_620;
  long lStack_618;
  undefined1 auStack_608 [56];
  undefined1 auStack_5d0 [56];
  undefined1 auStack_598 [56];
  undefined1 uStack_560;
  undefined8 uStack_558;
  undefined1 auStack_520 [400];
  undefined1 auStack_390 [64];
  undefined8 uStack_350;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  long *aplStack_2e0 [2];
  long lStack_2d0;
  undefined1 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  char cStack_260;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined8 uStack_228;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined1 auStack_1b8 [400];
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x298) & 1) != 0) {
    return (long **)0x1;
  }
  plVar9 = (long *)(param_1 + 0x1f8U);
  func_0x0001073ec044();
  uStack_28 = extraout_x8;
  func_0x000107751284(auStack_1b8);
  uVar2 = *(char *)(param_1 + 0x208) == '\x01';
  if ((bool)uVar2) {
    lVar15 = *(long *)(param_1 + 0x1f8U);
    uVar2 = *(char *)(lVar15 + 0x20) == '\x01';
    if ((bool)uVar2) {
      uVar16 = *(byte *)(lVar15 + 0x22) ^ 1;
    }
    else {
      uVar16 = 1;
    }
  }
  else {
    uVar16 = 0;
  }
  func_0x000107267da8(auStack_1b8);
  func_0x0001073ec008(uStack_28);
  if ((bool)uVar2) {
    return (long **)(ulong)(uVar16 & 1);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar4 = (long *)0x0;
  pplVar5 = aplStack_2e0;
  pcStack_1c8 = FUN_1073eb6b8;
  puVar13 = param_4;
  uVar14 = param_5;
  puStack_1d0 = &stack0xfffffffffffffff0;
  func_0x0001073ec044();
  *(undefined4 *)(extraout_x8_00 + 0x10) = 1;
  *(undefined4 *)(extraout_x8_00 + 0x28) = 1;
  *(undefined4 *)(extraout_x8_00 + 0x40) = 1;
  puVar10 = (undefined1 *)*param_3;
  puVar11 = (undefined8 *)param_3[1];
  uStack_228 = extraout_x8_01;
  func_0x0001072d306c();
  plVar17 = (long *)lStack_2d0;
  do {
    if (plVar17 == (long *)0x0) {
      func_0x0001005d0538();
      func_0x0001073ec008(uStack_228);
      if ((bool)uVar2) {
        return pplVar5;
      }
      ___stack_chk_fail();
      func_0x0001073ebef4(extraout_x8_00);
      __Unwind_Resume(pplVar5);
      pcStack_2e8 = FUN_1073eb8e0;
      puVar12 = puVar11;
      uStack_658 = param_7;
      ppuStack_2f0 = &puStack_1d0;
      func_0x0001073ec044();
      pplVar6 = (long **)*puVar12;
      uStack_350 = extraout_x8_02;
      (*(code *)(*pplVar6)[2])();
      pplVar5 = pplVar6;
      for (pplVar18 = (long **)0x0; bVar3 = pplVar18 == pplVar6, !bVar3;
          pplVar18 = (long **)((long)pplVar18 + 1)) {
        (**(code **)(*(long *)*puVar11 + 0x18))(&plStack_620,(long *)*puVar11,pplVar18);
        (**(code **)(*plStack_620 + 0x30))();
        func_0x00010726236c(auStack_390);
        func_0x0001072e7640(auStack_520,auStack_390,0x1138369c0);
        uVar7 = param_6;
        func_0x000107869b38(auStack_598,param_6,auStack_520);
        func_0x00010786967c();
        FUN_1073dcf84(auStack_638,auStack_598,uVar7);
        FUN_1073de9d8(auStack_598);
        func_0x000104c2f714(auStack_520);
        lStack_648 = lStack_618;
        plStack_650 = plStack_620;
        if (lStack_618 != 0) {
          plVar9 = (long *)(lStack_618 + 8);
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = *plVar9 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        func_0x000104c2fe00(auStack_608,puVar13);
        (**(code **)(*(long *)*puVar11 + 0x20))(auStack_5d0);
        func_0x0001073c4f74(auStack_598,auStack_608);
        func_0x000107751444(puVar10,&plStack_650,auStack_598);
        *(undefined1 **)(puVar10 + 0xe0) = auStack_638;
        func_0x000107751334(auStack_520,puVar10);
        func_0x000107267e8c(auStack_598);
        func_0x000107267eac(auStack_608);
        func_0x000107267e44(&plStack_650);
        auStack_598[0] = 0;
        uStack_560 = 0;
        uStack_558 = 0;
        uVar8 = uVar14;
        func_0x00010777faa8(uVar14,auStack_520,auStack_598);
        func_0x00010724b3d8(auStack_598);
        if ((uVar8 & 1) != 0) {
          FUN_1073ebfe0(uStack_658,auStack_520);
        }
        func_0x000107267da8(auStack_520);
        func_0x00010726b264(auStack_638);
        func_0x00010724b3d8(auStack_390);
        pplVar5 = &plStack_620;
        FUN_107330fdc();
      }
      func_0x0001073ec008(uStack_350);
      if (bVar3) {
        return pplVar5;
      }
      ___stack_chk_fail();
      func_0x000107267da8(auStack_520);
      func_0x00010726b264(auStack_638);
      func_0x00010724b3d8(auStack_390);
      FUN_107330fdc(&plStack_620);
      pplVar6 = pplVar5;
      __Unwind_Resume();
      pcStack_668 = FUN_1073ebb78;
      pplVar18 = pplVar6;
      if (*(uint *)(pplVar6 + 2) != 0xffffffff) {
        pplVar18 = (long **)auStack_681;
        auStack_681._1_8_ = param_6;
        pplStack_678 = pplVar5;
        pppuStack_670 = &ppuStack_2f0;
        (*(code *)(&PTR_FUN_1109acee0)[*(uint *)(pplVar6 + 2)])(pplVar18,pplVar6);
      }
      *(undefined4 *)(pplVar6 + 2) = 0xffffffff;
      return pplVar18;
    }
    if (((uint)param_5 >> 8 & 1) == 0) {
LAB_1073eb724:
      puVar10 = (undefined1 *)(plVar17 + 2);
      plVar4 = plVar9;
      puVar11 = param_4;
      FUN_10746e408();
      if ((int)plVar4 != 0) {
        puVar10 = (undefined1 *)(plVar17 + 2);
        puVar11 = param_4;
        FUN_10746e5cc(auStack_290,plVar9);
        uVar2 = false;
        if (cStack_260 == '\x01') {
          FUN_1073ebbdc(auStack_258,extraout_x8_00);
          FUN_1073ebbdc(auStack_240,auStack_290);
          uStack_2b0 = 2;
          puStack_2b8 = auStack_258;
          func_0x0001073ec054();
          FUN_1073ebc60(extraout_x8_00,auStack_2a8);
          FUN_1073ebb78(auStack_2a8);
          lVar15 = 0x18;
          do {
            FUN_1073ebb78(auStack_258 + lVar15);
            lVar15 = lVar15 + -0x18;
          } while (lVar15 != -0x18);
          FUN_1073ebbdc(auStack_258,extraout_x8_00 + 0x18);
          FUN_1073ebbdc(auStack_240,auStack_278);
          uStack_2b0 = 2;
          puStack_2b8 = auStack_258;
          func_0x0001073ec054();
          puVar10 = auStack_2a8;
          FUN_1073ebc60(extraout_x8_00 + 0x18);
          FUN_1073ebb78(auStack_2a8);
          lVar15 = 0x18;
          do {
            FUN_1073ebb78(auStack_258 + lVar15);
            lVar15 = lVar15 + -0x18;
            uVar2 = lVar15 == -0x18;
          } while (!(bool)uVar2);
        }
        plVar4 = (long *)0x0;
        FUN_1073ebeac();
      }
    }
    else if ((param_5 & 1) == 0) {
      func_0x0001073ec06c(*(undefined8 *)(*plVar9 + 0x30));
      if (((ulong)plVar4 & 1) == 0) goto LAB_1073eb724;
    }
    else {
      func_0x0001073ec06c(*(undefined8 *)(*plVar9 + 0x30));
      if (((ulong)plVar4 & 1) != 0) goto LAB_1073eb724;
    }
    plVar17 = (long *)*plVar17;
  } while( true );
}



/* Entry: 1073e5348; end: 1073e53cb;  */

long FUN_1073e5348(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x0001073e54fc();
  uStack_28 = extraout_x8;
  func_0x0001073e5cc4();
  if (*(long *)(param_2 + 0xf0) != 0) {
    ppuStack_48 = &PTR_FUN_1109ac880;
    pppuStack_30 = &ppuStack_48;
    lStack_40 = param_2;
    func_0x0001073e5ca4();
    func_0x0001073e5890();
  }
  func_0x0001073e5cb0();
  func_0x0001073e5a58();
  func_0x0001073e54d8(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001073e5890();
  func_0x0001073e5a58();
  func_0x0001073e5640();
  func_0x0001073e5ad4(&PTR_DAT_1109ac818);
  func_0x0001073e59e4();
  func_0x0001073e5ae4();
  FUN_1073e0028(param_1 + 0x1e0);
  func_0x0001073e4b5c(param_1 + 0x140);
  func_0x000107266af0(param_1 + 0xe0);
  FUN_1073e00c4(param_1 + 200);
  func_0x0001073e5870();
  func_0x000107331000(param_1 + 0x70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x58);
  func_0x0001073e5ce8();
  func_0x0001073e0164(param_2);
  return param_1;
}



/* Entry: 1073e53cc; end: 1073e543b;  */

long FUN_1073e53cc(long param_1)

{
  func_0x0001073e5ad4(&PTR_DAT_1109ac818);
  func_0x0001073e59e4();
  func_0x0001073e5ae4();
  FUN_1073e0028(param_1 + 0x1e0);
  func_0x0001073e4b5c(param_1 + 0x140);
  func_0x000107266af0(param_1 + 0xe0);
  FUN_1073e00c4(param_1 + 200);
  func_0x0001073e5870();
  func_0x000107331000(param_1 + 0x70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x58);
  func_0x0001073e5ce8();
  func_0x0001073e0164();
  return param_1;
}



/* Entry: 1073e543c; end: 1073e5443;  */

void FUN_1073e543c(void)

{
  return;
}



/* Entry: 1073e5444; end: 1073e546b;  */

void FUN_1073e5444(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073e5bac();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109ac880;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1073e546c; end: 1073e5493;  */

void FUN_1073e546c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109ac880;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073e5494; end: 1073e54cb;  */

long FUN_1073e5494(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109ac8e0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073e54cc; end: 1073e5d8b;  */

undefined ** FUN_1073e54cc(void)

{
  return &PTR_DAT_1109ac8e0;
}



/* Entry: 1073e5d8c; end: 1073e5e5f;  */

void FUN_1073e5d8c(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  undefined8 unaff_x21;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_80;
  undefined8 auStack_78 [7];
  byte bStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  FUN_1073e25c0(auStack_78);
  iVar3 = (int)param_4;
  if ((bStack_40 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    unaff_x21 = 0x48;
    __Znwm();
    puVar4 = auStack_78;
    iVar3 = param_3;
    func_0x000107795134();
    uStack_80 = 0;
    *param_1 = unaff_x21;
    func_0x0001073e600c(&uStack_80);
  }
  puVar1 = auStack_78;
  func_0x00010724b3d8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume(puVar1);
  }
  else {
    __ZdlPv(unaff_x21);
  }
  func_0x000104bd46a0(puVar1);
  uVar2 = 0x710;
  __Znwm();
  uStack_c8 = puVar4[1];
  uStack_d0 = *puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  FUN_1073ece88();
  func_0x000107331000(&uStack_d0);
  *extraout_x8 = uVar2;
  return;
}



/* Entry: 1073e5e60; end: 1073e5eff;  */

void FUN_1073e5e60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0x710;
  __Znwm();
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  FUN_1073ece88();
  func_0x000107331000(&uStack_50);
  *param_1 = uVar1;
  return;
}



/* Entry: 1073e5f00; end: 1073e5f97;  */

void FUN_1073e5f00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1073e5f98(&uStack_50,param_3);
  uVar1 = 0x1260;
  __Znwm();
  uStack_38 = uStack_48;
  uStack_40 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1074a03f8();
  FUN_1073e5fe0(&uStack_40);
  *param_1 = uVar1;
  FUN_1073e5fe0(&uStack_50);
  return;
}



/* Entry: 1073e5f98; end: 1073e5fdf;  */

void FUN_1073e5f98(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = uVar5;
  *param_1 = uVar4;
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_1073e5fe0(&uStack_20);
  return;
}



/* Entry: 1073e5fe0; end: 1073e6033;  */

long FUN_1073e5fe0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073e6034; end: 1073e604b;  */

void FUN_1073e6034(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107781c1c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073e604c; end: 1073e6067;  */

void FUN_1073e604c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107781c1c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073e6068; end: 1073e6073;  */

undefined ** FUN_1073e6068(void)

{
  return &PTR_DAT_1109d9600;
}



/* Entry: 1073e6074; end: 1073e61f7;  */

void FUN_1073e6074(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined1 uStack_1b1;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined1 uStack_170;
  byte bStack_168;
  undefined1 auStack_160 [24];
  undefined1 uStack_148;
  undefined1 auStack_140 [16];
  undefined1 uStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [144];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [16];
  char cStack_40;
  undefined8 uStack_38;
  
  func_0x0001073e67a4();
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_38 = extraout_x8;
  (**(code **)(*param_3 + 0x38))(auStack_50,param_3 + 1,&DAT_10f41019d);
  uVar1 = cStack_40 == '\x01';
  if ((bool)uVar1) {
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    FUN_1073e61f8(auStack_128);
    auStack_180[0] = 0;
    uStack_170 = 0;
    auStack_140[0] = 0;
    uStack_130 = 0;
    auStack_160[0] = 0;
    uStack_148 = 0;
    FUN_1075375e8(auStack_118,auStack_128,auStack_180,auStack_140,auStack_160);
    func_0x0001001148fc(auStack_160);
    func_0x000107323f70(auStack_140);
    FUN_107323ef8(auStack_180);
    FUN_107323f90(auStack_128);
    puVar4 = &uStack_88;
    func_0x000107799cb4(auStack_180,auStack_50,puVar4,auStack_118,param_2);
    iVar3 = (int)puVar4;
    if ((bStack_168 & 1) == 0) {
      *unaff_x19 = 0;
    }
    else {
      iVar3 = (int)auStack_180;
      FUN_1073e62c0(&uStack_70);
    }
    FUN_1073e6568(auStack_180);
    func_0x000107324968(auStack_118);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
    if (bStack_168 == 0) {
      func_0x0001072f5f4c(auStack_50);
      goto LAB_1073e61c0;
    }
  }
  func_0x0001072f5f4c(auStack_50);
  uVar2 = 0x48;
  __Znwm();
  uStack_198 = uStack_68;
  uStack_1a0 = uStack_70;
  uStack_190 = uStack_60;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  func_0x00010779a748();
  iVar3 = (int)param_2;
  *unaff_x19 = uVar2;
  FUN_1073e6588(&uStack_1a0);
LAB_1073e61c0:
  FUN_1073e6588(&uStack_70);
  func_0x0001073e67b8(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  pcStack_1a8 = FUN_1073e61f8;
  puStack_1b0 = &stack0xfffffffffffffff0;
  FUN_1073e6620(&uStack_1b1);
  return;
}



/* Entry: 1073e61f8; end: 1073e6217;  */

void FUN_1073e61f8(void)

{
  undefined1 uStack_11;
  
  FUN_1073e6620(&uStack_11);
  return;
}



/* Entry: 1073e6218; end: 1073e62b7;  */

void FUN_1073e6218(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar6 = param_3[1];
  uVar5 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001073e679c();
  uVar4 = 0x60;
  __Znwm();
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = uVar5;
  uStack_28 = uVar6;
  FUN_1074b6e48();
  func_0x0001073e679c();
  *param_1 = uVar4;
  func_0x0001073e65f8(&uStack_40);
  return;
}



/* Entry: 1073e62b8; end: 1073e62bf;  */

void FUN_1073e62b8(void)

{
  return;
}



/* Entry: 1073e62c0; end: 1073e632f;  */

void FUN_1073e62c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x0001073e62f8();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 1073e6330; end: 1073e6337;  */

void FUN_1073e6330(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x1b0;
    func_0x0001073e6370();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1073e6338; end: 1073e63af;  */

void FUN_1073e6338(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x1b0;
    func_0x0001073e6370();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1073e63b0; end: 1073e63f3;  */

void FUN_1073e63b0(long param_1)

{
  if (*(uint *)(param_1 + 0x128) != 0xffffffff) {
    func_0x0001073e677c((&PTR_FUN_1109ac9b0)[*(uint *)(param_1 + 0x128)]);
  }
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  return;
}



/* Entry: 1073e63f4; end: 1073e6413;  */

void FUN_1073e63f4(void)

{
  return;
}



/* Entry: 1073e6414; end: 1073e6483;  */

long FUN_1073e6414(long param_1)

{
  func_0x000107266a30(param_1 + 0xb0);
  FUN_10732442c(param_1 + 0x40);
  func_0x000107266a30(param_1);
  return param_1;
}



/* Entry: 1073e6484; end: 1073e64c7;  */

void FUN_1073e6484(long param_1)

{
  if (*(uint *)(param_1 + 0x50) != 0xffffffff) {
    func_0x0001073e677c((&PTR_FUN_1109ac9d8)[*(uint *)(param_1 + 0x50)]);
  }
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  return;
}



/* Entry: 1073e64c8; end: 1073e64d7;  */

void FUN_1073e64c8(void)

{
  return;
}



/* Entry: 1073e64d8; end: 1073e651b;  */

void FUN_1073e64d8(long param_1)

{
  if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
    func_0x0001073e677c((&PTR_FUN_1109ac9f0)[*(uint *)(param_1 + 0x38)]);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 1073e651c; end: 1073e652b;  */

void FUN_1073e651c(void)

{
  return;
}



/* Entry: 1073e652c; end: 1073e6567;  */

long FUN_1073e652c(long param_1)

{
  func_0x000107266a30(param_1 + 0xe8);
  FUN_10732442c(param_1 + 0x78);
  func_0x000107266a30(param_1 + 0x38);
  func_0x000107266a30(param_1);
  return param_1;
}



/* Entry: 1073e6568; end: 1073e6587;  */

void FUN_1073e6568(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1073e6588();
  }
  return;
}



/* Entry: 1073e6588; end: 1073e661f;  */

undefined8 FUN_1073e6588(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001073e65bc(&uStack_28);
  return param_1;
}



/* Entry: 1073e6620; end: 1073e669f;  */

undefined1 * FUN_1073e6620(void)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x0001073e67a4();
  uVar4 = 1;
  uStack_28 = extraout_x8;
  FUN_1073e66a0(auStack_40);
  FUN_1073e66e4(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *unaff_x19 = lVar1 + 0x18;
  unaff_x19[1] = lVar1;
  func_0x0001073e6764();
  func_0x0001073e67b8(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001073e6764(auStack_40);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_1073e66c8();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1073e66a0; end: 1073e66c7;  */

long FUN_1073e66a0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1073e66c8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1073e66c8; end: 1073e66e3;  */

undefined8 * FUN_1073e66c8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x38 == 0) {
    puVar1 = (undefined8 *)(param_2 << 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109aca18;
  param_1[1] = 0;
  FUN_107550e80(param_1 + 3);
  return param_1;
}



/* Entry: 1073e66e4; end: 1073e672b;  */

undefined8 * FUN_1073e66e4(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109aca18;
  param_1[1] = 0;
  FUN_107550e80(param_1 + 3);
  return param_1;
}



/* Entry: 1073e672c; end: 1073e672f;  */

void FUN_1073e672c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109aca18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073e6730; end: 1073e6743;  */

void FUN_1073e6730(void)

{
  func_0x0001073e6750();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073e6744; end: 1073e67d7;  */

undefined8 FUN_1073e6744(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  FUN_107550f24();
  func_0x000107276ba4(param_1 + 0x58);
  FUN_1075518e4(param_1 + 0x38);
  func_0x000107553d1c(param_1 + 0x18);
  if (extraout_x8 != 0) {
    FUN_1075519a4(unaff_x19);
    func_0x000107553b14();
  }
  return unaff_x19;
}



/* Entry: 1073e67d8; end: 1073e6877;  */

void FUN_1073e67d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [56];
  char cStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1073e25c0(auStack_68);
  if (cStack_30 == '\x01') {
    uVar1 = 0x48;
    __Znwm();
    param_4 = param_3;
    func_0x00010779bb94();
  }
  else {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  func_0x00010724b3d8(auStack_68);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  pcStack_78 = FUN_1073e6878;
  uStack_90 = param_3;
  puStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_1073e6900(&uStack_b0,param_4);
  uVar1 = 0x398;
  __Znwm();
  uStack_98 = uStack_a8;
  uStack_a0 = uStack_b0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  FUN_1074b723c();
  FUN_1073e6950(&uStack_a0);
  *extraout_x8 = uVar1;
  FUN_1073e6950(&uStack_b0);
  return;
}



/* Entry: 1073e6878; end: 1073e68ff;  */

void FUN_1073e6878(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1073e6900(&uStack_40,param_3);
  uVar1 = 0x398;
  __Znwm();
  uStack_28 = uStack_38;
  uStack_30 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1074b723c();
  FUN_1073e6950(&uStack_30);
  *param_1 = uVar1;
  FUN_1073e6950(&uStack_40);
  return;
}



/* Entry: 1073e6900; end: 1073e6947;  */

void FUN_1073e6900(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = uVar5;
  *param_1 = uVar4;
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_1073e6950(&uStack_20);
  return;
}



/* Entry: 1073e6948; end: 1073e694f;  */

void FUN_1073e6948(void)

{
  return;
}



/* Entry: 1073e6950; end: 1073e697b;  */

long FUN_1073e6950(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073e697c; end: 1073e6987;  */

undefined ** FUN_1073e697c(void)

{
  return &PTR_DAT_1109d9ac0;
}



/* Entry: 1073e6988; end: 1073e6a5b;  */

void FUN_1073e6988(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  undefined8 unaff_x21;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_80;
  undefined8 auStack_78 [7];
  byte bStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  FUN_1073e25c0(auStack_78);
  iVar3 = (int)param_4;
  if ((bStack_40 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    unaff_x21 = 0x48;
    __Znwm();
    puVar4 = auStack_78;
    iVar3 = param_3;
    func_0x00010779d358();
    uStack_80 = 0;
    *param_1 = unaff_x21;
    func_0x0001072ca74c(&uStack_80);
  }
  puVar1 = auStack_78;
  func_0x00010724b3d8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume(puVar1);
  }
  else {
    __ZdlPv(unaff_x21);
  }
  func_0x000104bd46a0(puVar1);
  uVar2 = 0x218;
  __Znwm();
  uStack_c8 = puVar4[1];
  uStack_d0 = *puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  FUN_1073f2ddc();
  func_0x000107331000(&uStack_d0);
  *extraout_x8 = uVar2;
  return;
}



/* Entry: 1073e6a5c; end: 1073e6af3;  */

void FUN_1073e6a5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0x218;
  __Znwm();
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  FUN_1073f2ddc();
  func_0x000107331000(&uStack_50);
  *param_1 = uVar1;
  return;
}



/* Entry: 1073e6af4; end: 1073e6b8b;  */

void FUN_1073e6af4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1073e6b8c(&uStack_50,param_3);
  uVar1 = 0x440;
  __Znwm();
  uStack_38 = uStack_48;
  uStack_40 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1074b9a30();
  FUN_1073e6bdc(&uStack_40);
  *param_1 = uVar1;
  FUN_1073e6bdc(&uStack_50);
  return;
}



/* Entry: 1073e6b8c; end: 1073e6bd3;  */

void FUN_1073e6b8c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = uVar5;
  *param_1 = uVar4;
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_1073e6bdc(&uStack_20);
  return;
}



/* Entry: 1073e6bd4; end: 1073e6bdb;  */

void FUN_1073e6bd4(void)

{
  return;
}



/* Entry: 1073e6bdc; end: 1073e6d1f;  */

long FUN_1073e6bdc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073e6d20; end: 1073e6d37;  */

void FUN_1073e6d20(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073e6d38; end: 1073e6e6b;  */

long FUN_1073e6d38(long param_1)

{
  func_0x0001073e6d5c(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1073e6e6c; end: 1073e6e73;  */

void FUN_1073e6e6c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0xc0;
    func_0x0001073e6eac();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1073e6e74; end: 1073e6f63;  */

void FUN_1073e6e74(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0xc0;
    func_0x0001073e6eac();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1073e6f64; end: 1073e6f6b;  */

void FUN_1073e6f64(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x638;
    func_0x0001073e6fa4();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1073e6f6c; end: 1073e7077;  */

void FUN_1073e6f6c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x638;
    func_0x0001073e6fa4();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1073e7078; end: 1073e70af;  */

void FUN_1073e7078(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x0001073e7278();
  if (!(bool)in_ZR) {
    func_0x0001073e7260((&PTR_FUN_1109acb18)[extraout_x8]);
  }
  func_0x0001073e72a0();
  return;
}



/* Entry: 1073e70b0; end: 1073e70b7;  */

void FUN_1073e70b0(void)

{
  return;
}



/* Entry: 1073e70b8; end: 1073e70ef;  */

void FUN_1073e70b8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x0001073e7278();
  if (!(bool)in_ZR) {
    func_0x0001073e7260((&PTR_FUN_1109acb28)[extraout_x8]);
  }
  func_0x0001073e72a0();
  return;
}



/* Entry: 1073e70f0; end: 1073e70f7;  */

void FUN_1073e70f0(void)

{
  return;
}



/* Entry: 1073e70f8; end: 1073e712f;  */

void FUN_1073e70f8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x0001073e7278();
  if (!(bool)in_ZR) {
    func_0x0001073e7260((&PTR_FUN_1109acb38)[extraout_x8]);
  }
  func_0x0001073e72a0();
  return;
}



/* Entry: 1073e7130; end: 1073e7137;  */

void FUN_1073e7130(void)

{
  return;
}



/* Entry: 1073e7138; end: 1073e716f;  */

void FUN_1073e7138(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x0001073e7278();
  if (!(bool)in_ZR) {
    func_0x0001073e7260((&PTR_FUN_1109acb48)[extraout_x8]);
  }
  func_0x0001073e72a0();
  return;
}



/* Entry: 1073e7170; end: 1073e7177;  */

void FUN_1073e7170(void)

{
  return;
}



/* Entry: 1073e7178; end: 1073e71bb;  */

void FUN_1073e7178(long param_1)

{
  if (*(uint *)(param_1 + 0x90) != 0xffffffff) {
    func_0x0001073e7260((&PTR_FUN_1109acb58)[*(uint *)(param_1 + 0x90)]);
  }
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  return;
}



/* Entry: 1073e71bc; end: 1073e71cb;  */

void FUN_1073e71bc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010727599c(param_2);
  func_0x0001001148fc();
  func_0x000107274878();
  return;
}



/* Entry: 1073e71cc; end: 1073e7203;  */

void FUN_1073e71cc(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x0001073e7278();
  if (!(bool)in_ZR) {
    func_0x0001073e7260((&PTR_FUN_1109acb68)[extraout_x8]);
  }
  func_0x0001073e72a0();
  return;
}


