/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077e2b98; end: 1077e2d5b;  */

/* WARNING: Possible PIC construction at 0x0001077e2cd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e2cd4) */
/* WARNING: Removing unreachable block (ram,0x0001077e2d00) */
/* WARNING: Removing unreachable block (ram,0x0001077e2d48) */
/* WARNING: Removing unreachable block (ram,0x0001077e2ce8) */

void FUN_1077e2b98(undefined4 param_1,long param_2)

{
  long lVar1;
  long *extraout_x8;
  undefined4 uStack_11c;
  undefined1 auStack_118 [56];
  undefined1 auStack_e0 [56];
  undefined1 auStack_a8 [104];
  
  func_0x0001077efea0();
  func_0x0001077ee3e4();
  func_0x0001077e2e28(auStack_a8);
  func_0x0001077ee718(auStack_e0);
  func_0x0001077e2e90();
  func_0x0001077ee718(auStack_118);
  func_0x0001077e2ee4();
  func_0x0001077ee718();
  func_0x0001077e2f38();
  uStack_11c = param_1;
  func_0x0001077ee718();
  func_0x0001077e2f58();
  func_0x0001077ee718();
  func_0x0001077e2f78();
  func_0x0001077ee718();
  func_0x0001077e2fac();
  func_0x0001077ee718();
  func_0x0001077e2fcc();
  func_0x0001077ee718();
  func_0x0001077e2fec();
  func_0x0001077ee718();
  func_0x0001077e300c();
  func_0x0001077ee718();
  func_0x0001077e3030();
  func_0x0001077ee718();
  func_0x0001077e3054();
  func_0x0001077ee718();
  func_0x0001077e3074();
  func_0x0001077ee718();
  func_0x0001077e3094();
  func_0x0001077ee718();
  func_0x0001077e30c8();
  lVar1 = param_2 + 0x450;
  func_0x0001077f0f94(lVar1,param_2 + 0x468,auStack_a8,auStack_e0,auStack_118,&uStack_11c);
  func_0x0001077f06b8();
  func_0x0001077e30e8();
  *extraout_x8 = lVar1;
  return;
}



/* Entry: 1077e31b8; end: 1077e31ef;  */

void FUN_1077e31b8(void)

{
  undefined1 auStack_38 [24];
  
  func_0x0001077ef398();
  func_0x0001077dd758(auStack_38);
  func_0x0001077effe4();
  func_0x0001077ef60c();
  return;
}



/* Entry: 1077e3550; end: 1077e356f;  */

undefined8 FUN_1077e3550(void)

{
  undefined8 uStack_18;
  
  func_0x0001077efa78();
  func_0x0001077e3610();
  return uStack_18;
}



/* Entry: 1077e36cc; end: 1077e3723;  */

void FUN_1077e36cc(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x9;
  undefined1 auStack_98 [104];
  
  func_0x0001077ee254();
  func_0x0001077f0980();
  func_0x000107278acc(auStack_98);
  func_0x0001077eec28();
  func_0x0001073df0ac();
  func_0x0001077ef564();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eedc4();
  func_0x0001077ef068();
  func_0x0001077ee270();
  func_0x0001077e3750(extraout_x9);
  return;
}



/* Entry: 1077e383c; end: 1077e3873;  */

undefined4 FUN_1077e383c(undefined4 *param_1,ulong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1[0xc] == 0) {
    param_1 = (undefined4 *)*param_2;
  }
  else if (param_1[0xc] != 1) {
    uVar2 = *(undefined4 *)param_2[3];
    puVar1 = param_1;
    func_0x00010727f740(param_1,param_2[1],param_2[2]);
    if (((ulong)puVar1 >> 0x20 & 1) == 0) {
      if (*(char *)(param_1 + 0xb) == '\x01') {
        uVar2 = param_1[10];
      }
    }
    else {
      uVar2 = SUB84(puVar1,0);
    }
    return uVar2;
  }
  return *param_1;
}



/* Entry: 1077e3950; end: 1077e3983;  */

uint FUN_1077e3950(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return (uint)*(byte *)*param_2;
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    return (uint)*param_1;
  }
  bVar1 = *(byte *)param_2[3];
  pbVar3 = param_1;
  func_0x0001072804a4(param_1,param_2[1],param_2[2]);
  uVar2 = (uint)pbVar3;
  if (((uVar2 >> 8 & 1) == 0) && (uVar2 = (uint)bVar1, param_1[0x29] == 1)) {
    uVar2 = (uint)param_1[0x28];
  }
  return uVar2 & 1;
}



/* Entry: 1077e3b30; end: 1077e3b7f;  */

void FUN_1077e3b30(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001077efa68();
  if (param_2 != 0) {
    func_0x0001077e3b60(param_4);
  }
  func_0x0001077f0f58();
  return;
}



/* Entry: 1077e3cc8; end: 1077e3cf7;  */

void FUN_1077e3cc8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001077ef34c();
  while (func_0x0001077f0fac(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x20;
    func_0x0001077e263c();
  }
  return;
}



/* Entry: 1077e3f34; end: 1077e3f83;  */

void FUN_1077e3f34(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001077ee564();
  while (unaff_x21 != unaff_x19) {
    func_0x0001077efe94();
    func_0x0001077e3cf8();
    func_0x0001077f1b38();
  }
  func_0x0001077efad0();
  func_0x0001077e3c28();
  return;
}



/* Entry: 1077e41f0; end: 1077e4247;  */

/* WARNING: Possible PIC construction at 0x0001077e428c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e4290) */
/* WARNING: Removing unreachable block (ram,0x0001077e4298) */

ulong FUN_1077e41f0(ulong param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  ulong uVar4;
  undefined8 unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined *puVar5;
  undefined1 auStack_1d0 [416];
  undefined1 *puVar3;
  
  func_0x0001077ee32c();
  if ((*(int *)(param_2 + 0x30) == 0) || (in_ZR = *(int *)(param_2 + 0x30) == 1, (bool)in_ZR)) {
    func_0x0001077eea20(1);
  }
  else {
    func_0x0001077ee6d8();
    func_0x0001077ee4ec();
    func_0x0001077ef1a8();
  }
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar5 = &UNK_1077e4248;
    __Unwind_Resume();
    puVar1 = auStack_1d0;
    puVar2 = (undefined1 *)register0x00000008;
    while( true ) {
      puVar3 = puVar1;
      *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
      *(ulong *)(puVar3 + -0x28) = unaff_x21;
      *(ulong *)(puVar3 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
      *(undefined **)(puVar3 + -8) = puVar5;
      if (*(int *)(param_1 + 0x50) != 0) {
        return (ulong)(*(byte *)(param_1 + 0x10) >> 1 & 1);
      }
      uVar4 = param_1;
      func_0x0001077f0cc4();
      if ((int)uVar4 == 0) break;
      unaff_x20 = *(ulong *)(param_1 + 8);
      unaff_x21 = *(ulong *)(param_1 + 0x10);
      if (unaff_x20 == unaff_x21) {
        return 1;
      }
      puVar5 = &UNK_1077e4290;
      unaff_x19 = 0;
      puVar1 = puVar3 + -0x30;
      param_1 = unaff_x20;
      puVar2 = puVar3;
    }
    return 0;
  }
  return param_1;
}



/* Entry: 1077e44bc; end: 1077e451f;  */

void FUN_1077e44bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  
  func_0x0001077eec18();
  func_0x0001077e48e4(param_1 + 8,param_4);
  func_0x0001077f0608(&UNK_1109de790);
  func_0x0001077efe2c(unaff_x19 + 0x450);
  func_0x0001077f05cc(unaff_x19 + 0x468);
  return;
}



/* Entry: 1077e4c28; end: 1077e4c7b;  */

void FUN_1077e4c28(void)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x20;
  undefined1 auStack_e0 [64];
  undefined1 auStack_70 [64];
  
  func_0x0001077ef34c();
  func_0x0001077ee374();
  func_0x0001077e3748(auStack_70);
  func_0x0001077efae0(unaff_x20 + 0xa8);
  func_0x0001077e50d4();
  func_0x0001077ef230();
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077eea08();
    func_0x0001077ef068();
    func_0x0001077ef34c();
    func_0x0001077ee374();
    func_0x0001077e37f4(auStack_e0);
    lVar1 = unaff_x20 + 0x120;
    func_0x0001077efae0(lVar1);
    func_0x0001077e50d4();
    func_0x0001077ef230();
    func_0x0001077ee28c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001077eea08();
      func_0x0001077ef068();
      func_0x0001077f0070();
      func_0x0001077efda8(lVar1 + 0x198);
      return;
    }
  }
  return;
}



/* Entry: 1077e50f0; end: 1077e511f;  */

void FUN_1077e50f0(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x70) != 0) && (uVar1 = *(int *)(param_2 + 0x70) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2 + 8);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077e5170();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077e5254; end: 1077e526f;  */

void FUN_1077e5254(void)

{
  func_0x0001077ef51c();
  func_0x0001077e5270();
  return;
}



/* Entry: 1077e5538; end: 1077e55e7;  */

void FUN_1077e5538(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001077ee3c0();
  func_0x0001077f13a8();
  func_0x0001077efec4();
  func_0x000107561404();
  func_0x0001077ef564();
  func_0x0001077ee2e4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ee3c0();
  func_0x0001077ef844();
  func_0x0001077ef858();
  func_0x0001077ef230();
  func_0x0001077ee2e4();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077ee3c0();
    func_0x0001077ef844();
    func_0x0001077ef858();
    func_0x0001077ef230();
    func_0x0001077ee2e4();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      uVar1 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar1;
      *(undefined4 *)(param_1 + 8) = 1;
      return;
    }
  }
  return;
}



/* Entry: 1077e5760; end: 1077e5787;  */

void FUN_1077e5760(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [48];
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001077ee5cc();
  while (unaff_x22 != unaff_x19) {
    func_0x0001077f1758();
    func_0x0001077e244c();
    func_0x0001077f1858();
  }
  func_0x0001077efeac();
  func_0x0001077ef0e0();
  func_0x0001077e57e4();
  func_0x0001077e5814(auStack_70);
  return;
}



/* Entry: 1077e58e8; end: 1077e593b;  */

void FUN_1077e58e8(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x19;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077efd70();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001077b0f58();
  func_0x0001072c9b9c(&uStack_30);
  func_0x0001077e2760(unaff_x19 + 0x28);
  return;
}



/* Entry: 1077e5abc; end: 1077e5caf;  */

void FUN_1077e5abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_78 [4];
  undefined1 auStack_58 [24];
  long lVar2;
  
  func_0x0001077efc88();
  func_0x0001077e63ec(auStack_78);
  func_0x0001077e642c(&uStack_a0,unaff_x20 + 8,param_2,param_3);
  func_0x0001077e608c(auStack_78);
  if (*(int *)(unaff_x20 + 0x90) == 0) {
    bVar1 = 0;
  }
  else if (*(int *)(unaff_x20 + 0x90) == 1) {
    bVar1 = *(byte *)(unaff_x20 + 0x60);
  }
  else {
    lVar2 = unaff_x20 + 0x60;
    func_0x000107280464(lVar2,param_2,param_3,0);
    bVar1 = (byte)lVar2;
  }
  func_0x0001077e999c(auStack_58);
  if ((*(int *)(unaff_x20 + 0xe0) == 0) || (*(int *)(unaff_x20 + 0xe0) == 1)) {
    func_0x0001077f0cfc(&uStack_b8);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_78,auStack_58);
    func_0x00010727f9d8(&uStack_b8,unaff_x20 + 0x98,param_2,param_3,auStack_78);
    func_0x0001077ef670();
  }
  func_0x0001077f1358();
  puVar3 = (undefined8 *)0x88;
  __Znwm();
  puVar3[2] = uStack_98;
  puVar3[1] = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  puVar3[4] = uStack_88;
  puVar3[3] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  *(byte *)(puVar3 + 5) = bVar1 & 1;
  puVar3[7] = uStack_b0;
  puVar3[6] = uStack_b8;
  puVar3[8] = uStack_a8;
  puVar4 = puVar3;
  func_0x0001077f0b1c();
  *puVar4 = &PTR_DAT_1109dea20;
  func_0x0001078cb570(auStack_78,puVar3 + 1);
  func_0x0001077f100c();
  func_0x0001077f0ad8();
  func_0x0001074b019c();
  puVar3[9] = auStack_78[0];
  func_0x0001077dd758(auStack_78);
  func_0x0001077f0470();
  func_0x0001077effd4(puVar3 + 10);
  func_0x0001077ef670();
  func_0x0001077ef60c();
  func_0x0001077e608c(&uStack_a0);
  *unaff_x19 = puVar3;
  return;
}



/* Entry: 1077e5fd8; end: 1077e5fdf;  */

void FUN_1077e5fd8(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001077ef34c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x0001077e5f08(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077e6184; end: 1077e61af;  */

void FUN_1077e6184(long param_1)

{
  long unaff_x19;
  
  func_0x0001077ef34c();
  func_0x00010727da70();
  func_0x0001077e61b0(param_1 + 0x28,unaff_x19 + 0x28);
  return;
}



/* Entry: 1077e6298; end: 1077e62a7;  */

undefined8 FUN_1077e6298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1077e65c4; end: 1077e6a57;  */

/* WARNING: Possible PIC construction at 0x0001077e69b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e69b4) */
/* WARNING: Removing unreachable block (ram,0x0001077e69ec) */
/* WARNING: Removing unreachable block (ram,0x0001077e69f8) */
/* WARNING: Removing unreachable block (ram,0x0001077e6a30) */
/* WARNING: Removing unreachable block (ram,0x0001077e6a54) */
/* WARNING: Removing unreachable block (ram,0x0001077e69e0) */
/* WARNING: Removing unreachable block (ram,0x0001077ee7e4) */

void FUN_1077e65c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  undefined1 uVar1;
  long lVar2;
  long *extraout_x8;
  undefined1 auStack_260 [16];
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 auStack_248 [27];
  undefined1 uStack_22d;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined1 uStack_21a;
  undefined1 uStack_219;
  undefined4 uStack_218;
  undefined1 uStack_214;
  undefined3 uStack_213;
  undefined4 uStack_210;
  undefined1 uStack_20c;
  undefined4 uStack_208;
  undefined1 uStack_204;
  undefined4 uStack_200;
  undefined1 uStack_1fc;
  undefined4 uStack_1f8;
  undefined1 uStack_1f4;
  undefined4 uStack_1f0;
  undefined1 uStack_1ec;
  undefined4 uStack_1e8;
  undefined1 uStack_1e4;
  undefined4 uStack_1e0;
  undefined1 uStack_1dc;
  undefined4 uStack_1d8;
  undefined1 uStack_1d4;
  undefined4 uStack_1d0;
  undefined1 uStack_1cc;
  undefined4 uStack_1c8;
  undefined1 uStack_1c4;
  undefined1 uStack_1c0;
  undefined1 uStack_1bf;
  undefined1 uStack_1be;
  undefined1 uStack_1bd;
  undefined1 auStack_1bc [20];
  undefined1 auStack_1a8 [20];
  undefined1 auStack_194 [20];
  undefined1 auStack_180 [22];
  undefined1 uStack_16a;
  undefined1 uStack_169;
  undefined1 uStack_168;
  undefined1 uStack_167;
  undefined1 uStack_166;
  undefined1 uStack_165;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 uStack_119;
  undefined1 auStack_118 [56];
  undefined1 auStack_e0 [56];
  undefined1 auStack_a8 [104];
  
  func_0x0001077efea0();
  lVar2 = param_5;
  func_0x0001077ee3e4();
  func_0x0001077e6be4();
  uStack_119 = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6c08();
  uStack_12c = param_1;
  uStack_128 = param_2;
  uStack_124 = param_3;
  uStack_120 = param_4;
  func_0x0001077ee718();
  func_0x0001077e6c2c();
  uStack_130 = param_1;
  func_0x0001077ee718();
  func_0x0001077e6c4c();
  uStack_134 = param_1;
  func_0x0001077ee718();
  func_0x0001077e6c6c();
  uStack_144 = param_1;
  uStack_140 = param_2;
  uStack_13c = param_3;
  uStack_138 = param_4;
  func_0x0001077ee718();
  func_0x0001077e6c98();
  uStack_148 = param_1;
  func_0x0001077ee718();
  func_0x0001077e6cb8();
  uStack_150 = param_1;
  uStack_14c = param_2;
  func_0x0001077ee718();
  func_0x0001077e6cf0();
  uStack_154 = param_1;
  func_0x0001077ee718();
  func_0x0001077e6d10();
  uStack_164 = param_1;
  uStack_160 = param_2;
  uStack_15c = param_3;
  uStack_158 = param_4;
  func_0x0001077ee718();
  func_0x0001077e6d34();
  uStack_165 = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6d5c();
  uStack_166 = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6d88();
  uStack_167 = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6dac();
  uStack_168 = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6dd4();
  uStack_169 = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6dfc();
  uStack_16a = (undefined1)lVar2;
  func_0x0001077ee718(auStack_180);
  func_0x0001077e6e24();
  func_0x0001077ee718(auStack_194);
  func_0x0001077e6e44();
  func_0x0001077ee718(auStack_1a8);
  func_0x0001077e6e64();
  func_0x0001077ee718(auStack_1bc);
  func_0x0001077e6e84();
  func_0x0001077ee718();
  func_0x0001077e6ea4();
  uStack_1bd = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6ec8();
  uStack_1be = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6eec();
  uStack_1bf = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6f10();
  uStack_1c0 = (undefined1)lVar2;
  func_0x0001077ee718();
  func_0x0001077e6f34();
  uStack_1c8 = (undefined4)lVar2;
  uStack_1c4 = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e6f58();
  uStack_1d0 = (undefined4)lVar2;
  uStack_1cc = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e6f84();
  uStack_1d8 = (undefined4)lVar2;
  uStack_1d4 = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e6fb4();
  uStack_1e0 = (undefined4)lVar2;
  uStack_1dc = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e6fd8();
  uStack_1e8 = (undefined4)lVar2;
  uStack_1e4 = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e6ffc();
  uStack_1f0 = (undefined4)lVar2;
  uStack_1ec = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e7020();
  uStack_1f8 = (undefined4)lVar2;
  uStack_1f4 = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e7044();
  uStack_200 = (undefined4)lVar2;
  uStack_1fc = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e7068();
  uStack_208 = (undefined4)lVar2;
  uStack_204 = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e708c();
  uStack_210 = (undefined4)lVar2;
  uStack_20c = (undefined1)((ulong)lVar2 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e70b0();
  uStack_218 = (undefined4)lVar2;
  _uStack_214 = CONCAT31(uStack_213,(char)((ulong)lVar2 >> 0x20));
  func_0x0001077ee718(auStack_a8);
  uStack_219 = (undefined1)lVar2;
  func_0x0001077e70d4();
  func_0x0001077ee718(auStack_e0);
  func_0x0001077e713c();
  func_0x0001077ee718(auStack_118);
  func_0x0001077e7190();
  func_0x0001077ee718();
  func_0x0001077e71e4();
  uStack_21a = uStack_219;
  func_0x0001077ee718();
  func_0x0001077e7208();
  uVar1 = uStack_21a;
  func_0x0001077ee718();
  func_0x0001077e722c();
  uStack_22c = param_1;
  uStack_228 = param_2;
  uStack_224 = param_3;
  uStack_220 = param_4;
  func_0x0001077ee718();
  func_0x0001077e7258();
  stack0xfffffffffffffdd0 = CONCAT13(uVar1,auStack_248._24_3_);
  func_0x0001077ee718(auStack_248);
  func_0x0001077e7284();
  func_0x0001077ee718();
  FUN_1077e72d4();
  uStack_24c = param_1;
  func_0x0001077ee718();
  func_0x0001077e72f4();
  uStack_250 = param_1;
  func_0x0001077ee718(auStack_260);
  func_0x0001077e7314();
  func_0x0001077ee718();
  func_0x0001077e735c();
  lVar2 = param_5 + 0xc80;
  func_0x0001077f0928(lVar2,param_5 + 0xc98,&uStack_119,&uStack_12c,&uStack_130,&uStack_134);
  func_0x0001077f16d0();
  func_0x0001077f1230();
  func_0x0001077e737c();
  *extraout_x8 = lVar2;
  return;
}



/* Entry: 1077e72d4; end: 1077e7313;  */

void FUN_1077e72d4(void)

{
  func_0x0001077efa88();
  func_0x0001077ee880();
  return;
}



/* Entry: 1077e7620; end: 1077e762f;  */

undefined8 FUN_1077e7620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x228);
}



/* Entry: 1077e7d24; end: 1077e7dc3;  */

long FUN_1077e7d24(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long unaff_x21;
  undefined1 auStack_c0 [128];
  int iStack_40;
  
  func_0x0001077ee374();
  func_0x0001077f0170();
  func_0x0001077ef8cc();
  func_0x0001077f0360();
  func_0x0001077f02e0();
  if (iStack_40 == 0) {
    func_0x0001077f13c8();
    func_0x000104c2d614();
    if ((int)param_2 != 0) {
      func_0x0001077efcb8();
      goto LAB_1077e7d80;
    }
  }
  func_0x0001077f0354(auStack_c0);
  func_0x0001077ef810();
  func_0x0001077eff90();
LAB_1077e7d80:
  func_0x0001077eef78();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001077eef78();
  func_0x0001077ef068();
  func_0x0001077efa58();
  for (; unaff_x21 != param_2; unaff_x21 = unaff_x21 + 0x18) {
    func_0x0001077efe94();
    func_0x0001077e7dfc();
  }
  return param_2;
}



/* Entry: 1077e7f54; end: 1077e7fa3;  */

ulong FUN_1077e7f54(uint *param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_44 [20];
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  if (param_1[0x10] == 0) {
    func_0x0001077ef5bc();
    param_1 = *(uint **)param_1;
  }
  else if (param_1[0x10] != 1) {
    puVar1 = *(uint **)(param_2 + 0x18);
    uVar2 = *puVar1;
    uVar3 = 0;
    uStack_2c = puVar1[1];
    uStack_28 = puVar1[2];
    uStack_24 = puVar1[3];
    uStack_30 = uVar2;
    func_0x000107438924(auStack_44,param_1,*(undefined8 *)(param_2 + 8),
                        *(undefined8 *)(param_2 + 0x10));
    puVar1 = param_1 + 10;
    if ((char)param_1[0xe] == '\0') {
      puVar1 = &uStack_30;
    }
    func_0x0001074389b0(auStack_44,puVar1);
    return CONCAT44(uVar3,uVar2);
  }
  return (ulong)*param_1;
}



/* Entry: 1077e80ac; end: 1077e80bf;  */

undefined1  [16] FUN_1077e80ac(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar2 = *(ulong *)(param_2 + 8);
  uVar3 = (ulong)**(uint **)(param_2 + 0x18);
  uVar4 = (ulong)(*(uint **)(param_2 + 0x18))[1];
  uVar1 = param_1;
  func_0x0001073394f4(param_1,uVar2,*(undefined8 *)(param_2 + 0x10));
  if ((uVar2 & 1) == 0) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      uVar3 = (ulong)*(uint *)(param_1 + 0x28);
      uVar4 = (ulong)*(uint *)(param_1 + 0x2c);
    }
  }
  else {
    uVar3 = uVar1 & 0xffffffff;
    uVar4 = uVar1 >> 0x20;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 1077e827c; end: 1077e82e7;  */

void FUN_1077e827c(undefined8 *param_1)

{
  undefined1 in_ZR;
  
  func_0x0001077ee420();
  func_0x0001077ef734(*param_1);
  func_0x0001077efcac();
  if ((bool)in_ZR) {
    func_0x0001077ef72c();
    func_0x000107775ce8();
    func_0x0001077f00ac();
  }
  else {
    func_0x0001077f007c();
  }
  func_0x0001077ee79c();
  func_0x0001077ee2e4();
  if ((bool)in_ZR) {
    func_0x0001077f00a0();
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ee510();
  func_0x0001077ef068();
  func_0x0001077ee210();
  func_0x0001077e8304();
  return;
}



/* Entry: 1077e84a4; end: 1077e850f;  */

void FUN_1077e84a4(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x9;
  
  func_0x0001077ee420();
  func_0x0001077ef734(*param_1);
  func_0x0001077efcac();
  if ((bool)in_ZR) {
    func_0x0001077ef72c();
    func_0x000107775d20();
    func_0x0001077f00ac();
  }
  else {
    func_0x0001077f007c();
  }
  func_0x0001077ee79c();
  func_0x0001077ee2e4();
  if ((bool)in_ZR) {
    func_0x0001077f00a0();
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ee510();
  func_0x0001077ef068();
  func_0x0001077ee270();
  func_0x0001077e8534(extraout_x9);
  return;
}



/* Entry: 1077e872c; end: 1077e875b;  */

uint FUN_1077e872c(uint param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001077f00b8();
  func_0x0001077e875c();
  if (((param_1 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)in_ZR)) {
    param_1 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return param_1 & 0xff;
}



/* Entry: 1077e8954; end: 1077e8983;  */

uint FUN_1077e8954(uint param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001077f00b8();
  func_0x0001077e8984();
  if (((param_1 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)in_ZR)) {
    param_1 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return param_1 & 0xff;
}



/* Entry: 1077e8c4c; end: 1077e8c67;  */

void FUN_1077e8c4c(void)

{
  func_0x0001077ee448();
  func_0x0001077e8c68();
  return;
}



/* Entry: 1077e8dc8; end: 1077e8dcf;  */

void FUN_1077e8dc8(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077e8f74; end: 1077e8f7b;  */

/* WARNING: Possible PIC construction at 0x000107544d4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107544d50) */
/* WARNING: Removing unreachable block (ram,0x000107544d78) */
/* WARNING: Removing unreachable block (ram,0x000107544d8c) */
/* WARNING: Removing unreachable block (ram,0x000107544d64) */

undefined8 * FUN_1077e8f74(undefined8 *param_1)

{
  undefined1 auStack_60 [64];
  
  func_0x0001075491f8(param_1,"");
  func_0x000100060964(auStack_60);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107544dec(param_1,auStack_60,&UNK_10dd62ad6,&UNK_10dd62ad6,&UNK_10dd62ad6,&UNK_10dd62ad6
                      ,&UNK_10dd62ad6,&UNK_10dd62ad6,&UNK_10dd62ad6,&UNK_10dd62ad6,&UNK_10dd62ad6,
                      &UNK_10dd62ad6);
  return param_1;
}



/* Entry: 1077e9140; end: 1077e91a7;  */

void FUN_1077e9140(void)

{
  func_0x0001077eef14();
  func_0x0001077e91a8();
  func_0x0001077f0db4();
  func_0x0001077e9204();
  func_0x0001077f1814();
  func_0x0001077e620c();
  func_0x0001077efec4();
  func_0x0001077e91d0();
  func_0x0001077f1000();
  func_0x0001077e9368();
  return;
}



/* Entry: 1077e92fc; end: 1077e9327;  */

void FUN_1077e92fc(void)

{
  uint extraout_w8;
  
  func_0x0001077f0c60();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001077e9328();
  }
  return;
}



/* Entry: 1077e948c; end: 1077e9647;  */

void FUN_1077e948c(undefined1 *param_1,undefined1 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001077ef424();
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  param_1[0x50] = param_2[0x50];
  param_1[0x51] = param_2[0x51];
  uVar2 = *(undefined8 *)(param_2 + 0x5c);
  uVar1 = *(undefined8 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x5c) = uVar2;
  *(undefined8 *)(param_1 + 0x54) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x84);
  uVar1 = *(undefined8 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x84) = uVar2;
  *(undefined8 *)(param_1 + 0x7c) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  func_0x000107278acc(param_1 + 0x100,param_2 + 0x100);
  func_0x000104c2fe00(unaff_x19 + 0x160,unaff_x20 + 0x160);
  func_0x000104c2fe00(unaff_x19 + 0x198,unaff_x20 + 0x198);
  *(undefined1 *)(unaff_x19 + 0x1d0) = *(undefined1 *)(unaff_x20 + 0x1d0);
  *(undefined1 *)(unaff_x19 + 0x1d1) = *(undefined1 *)(unaff_x20 + 0x1d1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1d4);
  *(undefined8 *)(unaff_x19 + 0x1dc) = *(undefined8 *)(unaff_x20 + 0x1dc);
  *(undefined8 *)(unaff_x19 + 0x1d4) = uVar1;
  *(undefined1 *)(unaff_x19 + 0x1e4) = *(undefined1 *)(unaff_x20 + 0x1e4);
  func_0x0001072787e4(unaff_x19 + 0x1e8,unaff_x20 + 0x1e8);
  *(undefined4 *)(unaff_x19 + 0x200) = *(undefined4 *)(unaff_x20 + 0x200);
  *(undefined4 *)(unaff_x19 + 0x204) = *(undefined4 *)(unaff_x20 + 0x204);
  func_0x0001072f64f4(unaff_x19 + 0x208,unaff_x20 + 0x208);
  *(undefined4 *)(unaff_x19 + 0x218) = *(undefined4 *)(unaff_x20 + 0x218);
  return;
}



/* Entry: 1077e97d4; end: 1077e9837;  */

void FUN_1077e97d4(void)

{
  func_0x0001077efe7c();
  func_0x0001077f1230();
  func_0x0001077ef838();
  func_0x0001077ef864();
  func_0x0001077ef464();
  func_0x0001077e9838();
  func_0x0001077eefe8();
  func_0x0001077ef370();
  return;
}



/* Entry: 1077e9bf0; end: 1077e9c53;  */

void FUN_1077e9bf0(void)

{
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_88 [88];
  
  func_0x0001077ee9f8();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x20) {
    func_0x0001077e9aac(auStack_88,unaff_x21);
    func_0x0001077efec4();
    func_0x0001077ecf80();
    func_0x0001077e5f08(auStack_88);
  }
  return;
}



/* Entry: 1077ea4cc; end: 1077eab73;  */

ulong FUN_1077ea4cc(char param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x9;
  long lVar4;
  long extraout_x9_00;
  long extraout_x10;
  long lVar5;
  long extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 uVar6;
  undefined8 extraout_x11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  char unaff_w19;
  ulong uVar7;
  long unaff_x20;
  undefined1 auStack_70 [26];
  char cStack_56;
  char cStack_55;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  char cStack_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  char cStack_38;
  char cStack_37;
  char cStack_36;
  char cStack_35;
  char cStack_34;
  char cStack_33;
  char cStack_32;
  char cStack_31;
  char cStack_30;
  char cStack_2f;
  char cStack_2e;
  char cStack_2d;
  char cStack_2c;
  char cStack_2b;
  char cStack_29;
  
  puVar3 = auStack_70;
  func_0x0001077ee3c0();
  cStack_56 = param_1 + '\b';
  FUN_1077ec65c();
  cStack_55 = unaff_w19 + '@';
  func_0x0001077df060();
  cStack_54 = unaff_w19 + -0x78;
  func_0x0001077df020();
  cStack_53 = unaff_w19 + -0x40;
  func_0x0001077df020();
  cStack_52 = unaff_w19 + -8;
  func_0x0001077df060();
  cStack_51 = unaff_w19 + '@';
  func_0x0001077df020();
  cStack_50 = unaff_w19 + 'x';
  func_0x0001077df040();
  cStack_4f = unaff_w19 + -0x48;
  func_0x0001077df020();
  cStack_4e = unaff_w19 + -0x10;
  func_0x0001077df060();
  cStack_4d = unaff_w19 + '8';
  func_0x0001077ec67c();
  cStack_4c = unaff_w19 + 'p';
  func_0x0001077ec69c();
  cStack_4b = unaff_w19 + -0x58;
  func_0x0001077ec6bc();
  cStack_4a = unaff_w19 + -0x20;
  func_0x0001077ec6dc();
  cStack_49 = unaff_w19 + '\x18';
  func_0x0001077ec6dc();
  cStack_48 = unaff_w19 + 'P';
  func_0x0001077ec6dc();
  cStack_47 = unaff_w19 + -0x78;
  func_0x0001077ec6fc();
  cStack_46 = unaff_w19 + -0x28;
  func_0x0001077ec6fc();
  cStack_45 = unaff_w19 + '(';
  func_0x0001077ec6fc();
  cStack_44 = unaff_w19 + 'x';
  func_0x0001077ec6fc();
  cStack_43 = unaff_w19 + -0x38;
  func_0x0001077ec71c();
  func_0x0001077ec73c();
  cStack_41 = unaff_w19 + '8';
  func_0x0001077ec75c();
  cStack_40 = unaff_w19 + 'p';
  func_0x0001077ec77c();
  cStack_3f = unaff_w19 + -0x58;
  func_0x0001077ec79c();
  cStack_3e = unaff_w19 + -0x10;
  func_0x0001077ec79c();
  cStack_3d = unaff_w19 + '8';
  func_0x0001077ec79c();
  cStack_3c = unaff_w19 + -0x80;
  func_0x0001077ec79c();
  cStack_3b = unaff_w19 + -0x38;
  func_0x0001077ec79c();
  cStack_3a = unaff_w19 + '\x10';
  func_0x0001077ec79c();
  cStack_39 = unaff_w19 + 'X';
  func_0x0001077ec79c();
  cStack_38 = unaff_w19 + -0x60;
  func_0x0001077ec79c();
  cStack_37 = unaff_w19 + -0x18;
  func_0x0001077ec79c();
  cStack_36 = unaff_w19 + '0';
  func_0x0001077ec79c();
  cStack_35 = unaff_w19 + 'x';
  func_0x0001077ec79c();
  cStack_34 = unaff_w19 + -0x40;
  func_0x0001077df000();
  cStack_33 = unaff_w19 + '`';
  func_0x0001077df888();
  cStack_32 = unaff_w19 + -0x28;
  func_0x0001077df888();
  cStack_31 = unaff_w19 + 'P';
  func_0x0001077e42ac();
  cStack_30 = unaff_w19 + -0x78;
  func_0x0001077e42ac();
  cStack_2f = unaff_w19 + -0x40;
  func_0x0001077df060();
  cStack_2e = unaff_w19 + '\b';
  func_0x0001077ec7bc();
  cStack_2d = unaff_w19 + '@';
  func_0x0001077e1f20();
  cStack_2c = unaff_w19 + -0x70;
  func_0x0001077df020();
  cStack_2b = unaff_w19 + -0x38;
  func_0x0001077df020();
  func_0x0001077ec7dc();
  cStack_29 = unaff_w19 + 'H';
  func_0x0001077df020();
  FUN_1077df080(auStack_70,&cStack_56,0x2e);
  func_0x0001077ee860(0);
  uVar7 = extraout_x8;
  lVar4 = extraout_x9;
  lVar5 = extraout_x10;
  uVar6 = extraout_x11;
  while( true ) {
    uVar2 = lVar4 == lVar5 && (int)uVar7 == (int)uVar6;
    uVar7 = (ulong)(byte)uVar2;
    if (((bool)uVar2) || (func_0x0001077f03b4(), (extraout_w13 & 1) == 0)) break;
    func_0x0001077f038c();
    lVar4 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar2) {
      uVar1 = extraout_w8 + 1;
    }
    uVar7 = (ulong)uVar1;
    lVar5 = extraout_x10_00;
    uVar6 = extraout_x11_00;
  }
  func_0x000104be7d74(auStack_70);
  func_0x0001077ee2e4();
  if ((bool)uVar2) {
    return uVar7;
  }
  ___stack_chk_fail();
  func_0x0001077ef424();
  func_0x00010755ff6c();
  func_0x000107432d30(puVar3 + 0x38,unaff_x20 + 0x38);
  func_0x00010727d9cc(uVar7 + 0x80,unaff_x20 + 0x80);
  func_0x00010727d9cc(uVar7 + 0xb8,unaff_x20 + 0xb8);
  func_0x000107432d30(uVar7 + 0xf0,unaff_x20 + 0xf0);
  func_0x00010727d9cc(uVar7 + 0x138,unaff_x20 + 0x138);
  func_0x0001073390b4(uVar7 + 0x170,unaff_x20 + 0x170);
  func_0x00010727d9cc(uVar7 + 0x1b0,unaff_x20 + 0x1b0);
  func_0x000107432d30(uVar7 + 0x1e8,unaff_x20 + 0x1e8);
  func_0x0001075600c4(uVar7 + 0x230,unaff_x20 + 0x230);
  func_0x000107560b84(uVar7 + 0x268,unaff_x20 + 0x268);
  func_0x00010756021c(uVar7 + 0x2a0,unaff_x20 + 0x2a0);
  func_0x000107560374(uVar7 + 0x2d8,unaff_x20 + 0x2d8);
  func_0x000107560374(uVar7 + 0x310,unaff_x20 + 0x310);
  func_0x000107560374(uVar7 + 0x348,unaff_x20 + 0x348);
  func_0x000107561290(uVar7 + 0x388,unaff_x20 + 0x388);
  func_0x000107561290(uVar7 + 0x3d8,unaff_x20 + 0x3d8);
  func_0x000107561290(uVar7 + 0x428,unaff_x20 + 0x428);
  func_0x000107561290(uVar7 + 0x478,unaff_x20 + 0x478);
  func_0x0001075604cc(uVar7 + 0x4c0,unaff_x20 + 0x4c0);
  func_0x000107560624(uVar7 + 0x4f8,unaff_x20 + 0x4f8);
  func_0x00010756077c(uVar7 + 0x530,unaff_x20 + 0x530);
  func_0x0001075608d4(uVar7 + 0x568,unaff_x20 + 0x568);
  func_0x00010733ab70(uVar7 + 0x5a8,unaff_x20 + 0x5a8);
  func_0x00010733ab70(uVar7 + 0x5f0,unaff_x20 + 0x5f0);
  func_0x00010733ab70(uVar7 + 0x638,unaff_x20 + 0x638);
  func_0x00010733ab70(uVar7 + 0x680,unaff_x20 + 0x680);
  func_0x00010733ab70(uVar7 + 0x6c8,unaff_x20 + 0x6c8);
  func_0x00010733ab70(uVar7 + 0x710,unaff_x20 + 0x710);
  func_0x00010733ab70(uVar7 + 0x758,unaff_x20 + 0x758);
  func_0x00010733ab70(uVar7 + 0x7a0,unaff_x20 + 0x7a0);
  func_0x00010733ab70(uVar7 + 0x7e8,unaff_x20 + 0x7e8);
  func_0x00010733ab70(uVar7 + 0x830,unaff_x20 + 0x830);
  func_0x00010733ab70(uVar7 + 0x878,unaff_x20 + 0x878);
  func_0x0001074830a8(uVar7 + 0x8c0,unaff_x20 + 0x8c0);
  func_0x0001073244ec(uVar7 + 0x960,unaff_x20 + 0x960);
  func_0x0001073244ec(uVar7 + 0x9d8,unaff_x20 + 0x9d8);
  func_0x000107310b20(uVar7 + 0xa48,unaff_x20 + 0xa48);
  func_0x000107310b20(uVar7 + 0xa80,unaff_x20 + 0xa80);
  func_0x000107432d30(uVar7 + 0xab8,unaff_x20 + 0xab8);
  func_0x000107560a2c(uVar7 + 0xb00,unaff_x20 + 0xb00);
  func_0x00010755fb14(uVar7 + 0xb38,unaff_x20 + 0xb38);
  func_0x00010727d9cc(uVar7 + 0xb88,unaff_x20 + 0xb88);
  func_0x00010727d9cc(uVar7 + 0xbc0,unaff_x20 + 0xbc0);
  func_0x0001072f5e80(uVar7 + 0xbf8,unaff_x20 + 0xbf8);
  func_0x00010727d9cc(uVar7 + 0xc40,unaff_x20 + 0xc40);
  return uVar7;
}



/* Entry: 1077eb5f4; end: 1077eb633;  */

void FUN_1077eb5f4(long param_1)

{
  func_0x0001077efaa8();
  func_0x0001077effa0(param_1 + 0xb90);
  return;
}



/* Entry: 1077ebcf8; end: 1077ebd27;  */

void FUN_1077ebcf8(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x40) != 0) && (uVar1 = *(int *)(param_2 + 0x40) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ebd78();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ebe5c; end: 1077ebe77;  */

void FUN_1077ebe5c(void)

{
  func_0x0001077ef51c();
  func_0x0001077ebe78();
  return;
}



/* Entry: 1077ebfa8; end: 1077ebfdb;  */

void FUN_1077ebfa8(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ebff8();
  return;
}



/* Entry: 1077ec0f8; end: 1077ec127;  */

void FUN_1077ec0f8(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x30) != 0) && (uVar1 = *(int *)(param_2 + 0x30) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ec178();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ec25c; end: 1077ec277;  */

void FUN_1077ec25c(void)

{
  func_0x0001077ef51c();
  func_0x0001077ec278();
  return;
}



/* Entry: 1077ec3a8; end: 1077ec3db;  */

void FUN_1077ec3a8(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ec3f8();
  return;
}



/* Entry: 1077ec4f8; end: 1077ec527;  */

void FUN_1077ec4f8(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x30) != 0) && (uVar1 = *(int *)(param_2 + 0x30) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ec578();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ec65c; end: 1077ec7fb;  */

byte FUN_1077ec65c(long param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    bVar1 = *(byte *)(param_1 + 0x10) >> 1 & 1;
    if (*(int *)(param_1 + 0x30) == 1) {
      bVar1 = 1;
    }
    return bVar1;
  }
  return 1;
}



/* Entry: 1077ed044; end: 1077ed06b;  */

long * FUN_1077ed044(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x2e8ba2e8ba2e8ba < param_2) {
    func_0x0001077ed094();
    func_0x0001077ef34c();
    func_0x0001077f068c();
    func_0x0001077ed11c();
    func_0x0001077ee520();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x58;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x1745d1745d1745c < uVar1) {
    plVar2 = (long *)0x2e8ba2e8ba2e8ba;
  }
  return plVar2;
}



/* Entry: 1077ed1d4; end: 1077ed1e3;  */

void FUN_1077ed1d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x0001077efce8();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x58;
    func_0x0001077e5f08(param_3);
  }
  return;
}



/* Entry: 1077ed374; end: 1077ed3d3;  */

void FUN_1077ed374(void)

{
  func_0x0001077efe7c();
  func_0x0001077f14b0();
  func_0x0001077ef838();
  func_0x0001077ef864();
  func_0x0001077ef464();
  func_0x0001077ed3d4();
  func_0x0001077eefe8();
  func_0x0001077ef370();
  return;
}



/* Entry: 1077eda5c; end: 1077eda6f;  */

void FUN_1077eda5c(void)

{
  func_0x0001077edb4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077edc18; end: 1077eddcb;  */

undefined1 * FUN_1077edc18(undefined4 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  int extraout_w8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong uVar7;
  long extraout_x9;
  long lVar8;
  long extraout_x9_00;
  long extraout_x10;
  long lVar9;
  long extraout_x10_00;
  int extraout_w11;
  int iVar10;
  int extraout_w11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  long *unaff_x19;
  undefined1 *puVar11;
  long unaff_x21;
  undefined4 unaff_w22;
  undefined1 uStack_41c;
  undefined1 uStack_41b;
  undefined1 uStack_41a;
  char cStack_419;
  undefined1 auStack_418 [24];
  undefined1 *puStack_400;
  undefined1 *puStack_3f8;
  undefined1 **ppuStack_3f0;
  undefined *puStack_3e8;
  undefined1 auStack_3d8 [72];
  undefined1 auStack_390 [16];
  undefined4 uStack_380;
  undefined4 uStack_368;
  undefined4 uStack_350;
  undefined1 auStack_348 [72];
  undefined1 auStack_300 [416];
  undefined1 *puStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [56];
  undefined1 auStack_e8 [56];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_78;
  
  func_0x0001077efea0();
  func_0x0001077ee3e4();
  uStack_78 = extraout_x8;
  FUN_1077ee13c(auStack_e8);
  uVar5 = *(int *)(param_2 + 0x78) == 1;
  if (!(bool)uVar5) {
    if (*(int *)(param_2 + 0x78) != 0) {
      func_0x0001077f14e4();
      func_0x0001077ef0b8(auStack_120,param_2 + 0x10);
      func_0x0001073393c0();
      func_0x0001077effcc();
      goto LAB_1077edc98;
    }
    func_0x0001077f1964();
  }
  func_0x000104c2fe00();
LAB_1077edc98:
  func_0x0001077f0ce4();
  uStack_b0 = 0;
  func_0x0001077ef238();
  FUN_1077ee13c();
  uStack_b0 = 0;
  func_0x0001077ef238();
  FUN_1077ee13c();
  uStack_b0 = 0;
  func_0x0001077ef238();
  FUN_1077ee13c();
  __Znwm(0x90);
  func_0x0001077efcc4();
  func_0x0001077f13f4();
  func_0x0001077f0398();
  *(undefined4 *)(unaff_x21 + 0x48) = param_1;
  func_0x0001077f0778(&PTR_DAT_1109de670);
  func_0x0001077f0a0c(&uStack_b0);
  func_0x0001077f07ac(&uStack_b0);
  func_0x0001077f0748(&uStack_b0);
  puVar11 = (undefined1 *)CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(unaff_x21 + 0x50) = puVar11;
  func_0x0001077dd758(&uStack_b0);
  func_0x0001077f0470();
  func_0x0001077effd4(unaff_x21 + 0x58);
  func_0x0001077f072c();
  func_0x0001077ef230();
  *unaff_x19 = unaff_x21;
  func_0x0001077ee344(uStack_78);
  if ((bool)uVar5) {
    return puVar11;
  }
  ___stack_chk_fail();
  func_0x0001077effcc();
  func_0x000104c2f714(auStack_e8);
  func_0x0001077ef068();
  puStack_128 = &DAT_1077eddcc;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x0001077ee358();
  func_0x0001077efc18();
  FUN_1077ee13c(auStack_348);
  uVar2 = unaff_w22;
  uVar3 = unaff_w22;
  uVar4 = unaff_w22;
  if (*(int *)(unaff_x21 + 0x78) != 0) {
    uVar5 = *(int *)(unaff_x21 + 0x78) == 1;
    if ((bool)uVar5) {
      uVar2 = 1;
      uVar3 = 1;
      uVar4 = 1;
    }
    else {
      func_0x0001077efe74(auStack_300);
      func_0x0001077ef0c4(auStack_390,unaff_x21 + 0x10,auStack_300);
      func_0x0001074332fc(auStack_300);
      uVar2 = uStack_380;
      uVar3 = uStack_368;
      uVar4 = uStack_350;
    }
  }
  uStack_350 = uVar4;
  uStack_368 = uVar3;
  uStack_380 = uVar2;
  func_0x000104c2f714(auStack_348);
  func_0x0001077f1340(auStack_300,unaff_x21 + 0x80);
  func_0x0001077f1340(auStack_348,unaff_x21 + 0xb8);
  func_0x0001077f1340(auStack_3d8,unaff_x21 + 0xf0);
  func_0x0001077ef1ec(auStack_390);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_390);
  func_0x0001077ef1ec(auStack_300);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_300);
  func_0x0001077ef1ec(auStack_348);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_348);
  func_0x0001077ef1ec(auStack_3d8);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_3d8);
  puVar6 = auStack_3d8;
  func_0x0001073ebef4();
  func_0x0001077f0d50();
  func_0x0001077f0e44();
  func_0x0001077f09ac();
  func_0x0001077ee314();
  if ((bool)uVar5) {
    return puVar6;
  }
  ___stack_chk_fail();
  uStack_41c = SUB81(auStack_348,0);
  func_0x000104c2f714();
  func_0x0001077ef998();
  func_0x0001077ef0b0();
  puStack_3e8 = &DAT_1077edf44;
  puStack_400 = puVar6;
  puStack_3f8 = puVar11;
  ppuStack_3f0 = &puStack_130;
  func_0x0001077ef1b8();
  func_0x0001077df888();
  uStack_41b = uStack_41c;
  func_0x0001077f1184();
  uStack_41a = uStack_41b;
  func_0x0001077f118c();
  cStack_419 = (char)puVar11 + -0x10;
  func_0x0001077df020();
  FUN_1077df080(auStack_418,&uStack_41c,4);
  func_0x0001077ee5f4();
  uVar7 = extraout_x8_00;
  lVar8 = extraout_x9;
  lVar9 = extraout_x10;
  iVar10 = extraout_w11;
  while( true ) {
    uVar5 = lVar8 == lVar9 && (int)uVar7 == iVar10;
    puVar11 = (undefined1 *)(ulong)(byte)uVar5;
    if (((bool)uVar5) || (func_0x0001077f03b4(), (extraout_w13 & 1) == 0)) break;
    func_0x0001077f038c();
    lVar8 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar5) {
      uVar1 = extraout_w8 + 1;
    }
    uVar7 = (ulong)uVar1;
    lVar9 = extraout_x10_00;
    iVar10 = extraout_w11_00;
  }
  func_0x0001077eff98();
  return puVar11;
}



/* Entry: 1077ee13c; end: 1077ee15b;  */

void FUN_1077ee13c(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077f1c8c; end: 1077f1cb3;  */

long FUN_1077f1c8c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong *unaff_x20;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  
  func_0x0001077f23d4();
  lVar6 = 0;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar7 = *unaff_x20;
  uVar5 = uVar7 >> 0xc ^ param_1 >> 7;
  bVar3 = (byte)param_1;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      iVar4 = (int)uVar1 + (int)uVar9 * 0x110;
      func_0x000107283140();
      if (iVar4 != 0) {
        return *unaff_x20 + uVar9;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return 0;
}



/* Entry: 1077f2550; end: 1077f259f;  */

uint FUN_1077f2550(undefined8 param_1)

{
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar1;
  int extraout_w9;
  int extraout_w9_00;
  int iVar2;
  long unaff_x23;
  
  func_0x0001077f35ec();
  func_0x0001077f362c(&UNK_1109deb28);
  do {
    if (unaff_x23 == 0) {
      func_0x0001077f35f8();
      iVar2 = extraout_w9_00;
      uVar1 = extraout_w8_00;
      goto LAB_1077f2594;
    }
    func_0x0001077f35cc();
    func_0x0001077f35a8();
    func_0x0001077f35e0();
  } while ((int)param_1 == 0);
  func_0x0001077f3604();
  iVar2 = extraout_w9;
  uVar1 = extraout_w8;
LAB_1077f2594:
  return uVar1 | iVar2 << 8;
}



/* Entry: 1077f2814; end: 1077f2867;  */

/* WARNING: Removing unreachable block (ram,0x0001077f2858) */

uint FUN_1077f2814(undefined8 param_1)

{
  uint extraout_w8;
  int extraout_w9;
  
  func_0x0001077f35ec();
  do {
    func_0x0001077f35cc();
    func_0x0001077f35a8();
    func_0x0001077f35e0();
  } while ((int)param_1 == 0);
  func_0x0001077f3604();
  return extraout_w8 | extraout_w9 << 8;
}



/* Entry: 1077f2a88; end: 1077f2ad7;  */

uint FUN_1077f2a88(undefined8 param_1)

{
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar1;
  int extraout_w9;
  int extraout_w9_00;
  int iVar2;
  long unaff_x23;
  
  func_0x0001077f35ec();
  func_0x0001077f362c(&UNK_1109ded98);
  do {
    if (unaff_x23 == 0) {
      func_0x0001077f35f8();
      iVar2 = extraout_w9_00;
      uVar1 = extraout_w8_00;
      goto LAB_1077f2acc;
    }
    func_0x0001077f35cc();
    func_0x0001077f35a8();
    func_0x0001077f35e0();
  } while ((int)param_1 == 0);
  func_0x0001077f3604();
  iVar2 = extraout_w9;
  uVar1 = extraout_w8;
LAB_1077f2acc:
  return uVar1 | iVar2 << 8;
}



/* Entry: 1077f2cf8; end: 1077f2d97;  */

uint FUN_1077f2cf8(undefined8 param_1)

{
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar1;
  int extraout_w9;
  int extraout_w9_00;
  int iVar2;
  long unaff_x23;
  
  func_0x0001077f35ec();
  func_0x0001077f3638(&UNK_1109dee88);
  do {
    if (unaff_x23 == 0) {
      func_0x0001077f35f8();
      iVar2 = extraout_w9_00;
      uVar1 = extraout_w8_00;
      goto LAB_1077f2d3c;
    }
    func_0x0001077f35cc();
    func_0x0001077f35a8();
    func_0x0001077f35e0();
  } while ((int)param_1 == 0);
  func_0x0001077f3604();
  iVar2 = extraout_w9;
  uVar1 = extraout_w8;
LAB_1077f2d3c:
  return uVar1 | iVar2 << 8;
}



/* Entry: 1077f378c; end: 1077f378f;  */

undefined8 * FUN_1077f378c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11099a118;
  func_0x0001072a9040(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 1077f39b0; end: 1077f39c3;  */

void FUN_1077f39b0(void)

{
  func_0x000104bd47e8(&UNK_10f42ac7f);
  func_0x0001077f39e8();
  return;
}



/* Entry: 1077f3bd4; end: 1077f3c1f;  */

long FUN_1077f3bd4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1077f3d94; end: 1077f3ddb;  */

void FUN_1077f3d94(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  func_0x0001077f3cac(param_1,&uStack_40);
  func_0x0001077f3e24(&uStack_40);
  return;
}



/* Entry: 1077f4410; end: 1077f44a7;  */

uint FUN_1077f4410(float *param_1)

{
  return (int)*param_1 & 0xffffU | (int)param_1[1] << 0x10;
}



/* Entry: 1077f47fc; end: 1077f4d87;  */

undefined8 *
FUN_1077f47fc(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
             float param_7,float param_8,undefined8 *param_9,long *param_10,undefined8 *param_11,
             float *param_12,int param_13,undefined8 param_14,undefined4 *param_15)

{
  int iVar1;
  short *psVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long lVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  double dVar18;
  ulong uVar19;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float *pfStack_a0;
  long lStack_88;
  ulong uVar20;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_9 = 0;
  param_9[1] = 0;
  param_9[2] = 0;
  puVar5 = param_9 + 3;
  func_0x0001072a689c(puVar5,param_14);
  *(bool *)(param_9 + 0x27) = param_13 != 0;
  if ((((param_1 == 0.0) && (param_2 == 0.0)) && (param_3 == 0.0)) && (param_4 == 0.0))
  goto LAB_1077f4ce4;
  fVar25 = param_1 * param_5 - param_6;
  fVar29 = param_6 + param_5 * param_2;
  fVar31 = param_3 * param_5 - param_6;
  param_6 = param_6 + param_5 * param_4;
  if (*(char *)(param_12 + 4) == '\x01') {
    fVar31 = fVar31 - param_5 * *param_12;
    fVar25 = fVar25 - param_5 * param_12[1];
    param_6 = param_6 + param_5 * param_12[2];
    fVar29 = fVar29 + param_5 * param_12[3];
  }
  if (param_13 != 0) {
    fVar29 = fVar29 - fVar25;
    if (0.0 < fVar29) {
      uStack_b0 = *param_11;
      puVar5 = &uStack_b0;
      FUN_1077f4410();
      param_6 = param_6 - fVar31;
      if (fVar29 <= param_5 * 10.0) {
        fVar29 = param_5 * 10.0;
      }
      uStack_b4 = SUB84(puVar5,0);
      fVar31 = *(float *)(param_11 + 1);
      cVar3 = *(char *)(param_11 + 3);
      lVar9 = param_11[2];
      fVar25 = fVar29 * 0.5;
      uVar6 = (uint)(param_6 / fVar25);
      if ((int)uVar6 < 2) {
        uVar6 = 1;
      }
      dVar18 = (double)param_7;
      _log2();
      iVar11 = (int)((float)(dVar18 * 0.4 + 1.0) * (float)uVar6 * 0.5);
      fVar29 = fVar29 * -0.5;
      fVar28 = param_6 * -0.5;
      uVar19 = (ulong)(uint)(param_6 * -0.125);
      lVar7 = 1;
      if (cVar3 != '\0') {
        lVar7 = lVar9 + 1;
      }
      lVar9 = -lVar7;
      lVar7 = lVar7 * 4;
      fVar30 = fVar29;
      do {
        lVar7 = lVar7 + -4;
        if (lVar9 == 0) {
          if (fVar28 < fVar30) goto LAB_1077f4ce4;
          lVar9 = 0;
          lVar8 = *param_10;
          goto LAB_1077f4af0;
        }
        puVar5 = (undefined8 *)(*param_10 + lVar7);
        func_0x0001077f4424(puVar5,&uStack_b4);
        fVar30 = fVar30 - (float)uVar19;
        lVar8 = *param_10;
        uStack_b4 = *(undefined4 *)(lVar8 + lVar7);
        lVar9 = lVar9 + 1;
      } while (fVar28 + param_6 * -0.125 < fVar30);
      lVar9 = -lVar9;
LAB_1077f4af0:
      puVar5 = (undefined8 *)(lVar8 + lVar9 * 4);
      func_0x0001077f4424(puVar5,(long)puVar5 + 4);
      iVar10 = -iVar11;
      iVar1 = uVar6 + iVar11;
      if (iVar1 < iVar10) {
        iVar1 = -iVar11;
      }
      for (; iVar10 != iVar1; iVar10 = iVar10 + 1) {
        fVar17 = fVar25 * (float)iVar10;
        uVar20 = (ulong)(uint)fVar17;
        fVar27 = fVar17 + fVar28 + fVar17;
        if (0.0 <= fVar17) {
          fVar27 = fVar28 + fVar17;
        }
        fVar26 = (fVar17 - param_6) + fVar27;
        if (fVar17 <= param_6) {
          fVar26 = fVar27;
        }
        if (fVar30 <= fVar26) {
          lVar7 = lVar9 << 2;
          while( true ) {
            fVar27 = (float)uVar19 + fVar30;
            if (fVar26 <= fVar27) break;
            if ((ulong)(param_10[1] - *param_10 >> 2) <= lVar9 + 2U) goto LAB_1077f4ce4;
            lVar9 = lVar9 + 1;
            puVar5 = (undefined8 *)(*param_10 + lVar7 + 4);
            func_0x0001077f4424();
            lVar7 = lVar7 + 4;
            uVar19 = uVar20;
            fVar30 = fVar27;
          }
          psVar2 = (short *)(*param_10 + lVar7);
          fVar27 = (fVar26 - fVar30) / (float)uVar19;
          fVar17 = (float)(int)*psVar2 + (float)((int)psVar2[2] - (int)*psVar2) * fVar27;
          fVar32 = (float)(int)psVar2[1] + (float)((int)psVar2[3] - (int)psVar2[1]) * fVar27;
          fVar27 = 0.0;
          if (fVar25 <= ABS(fVar26 - fVar29)) {
            fVar27 = (fVar26 - fVar29) * 0.8;
          }
          pfVar12 = (float *)param_9[1];
          if (pfVar12 < (float *)param_9[2]) {
            *pfVar12 = fVar17;
            pfVar12[1] = fVar32;
            pfVar12[2] = fVar31;
            pfVar12[3] = fVar29;
            pfVar12[4] = fVar29;
            pfVar12[5] = fVar25;
            pfVar12[6] = fVar25;
            pfVar12[7] = fVar27;
            pfVar12 = pfVar12 + 8;
            param_9[1] = pfVar12;
          }
          else {
            func_0x0001077f5168();
            func_0x0001077f514c();
            func_0x0001077f513c();
            puVar5 = &uStack_b0;
            func_0x0001077f4fac();
            *pfStack_a0 = fVar17;
            pfStack_a0[1] = fVar32;
            pfStack_a0[2] = fVar31;
            pfStack_a0[3] = fVar29;
            pfStack_a0[4] = fVar29;
            pfStack_a0[5] = fVar25;
            pfStack_a0[6] = fVar25;
            pfStack_a0[7] = fVar27;
            func_0x0001077f5158();
            func_0x0001077f5130();
            pfVar12 = (float *)param_9[1];
            func_0x0001077f5184();
          }
          param_9[1] = pfVar12;
        }
      }
    }
    goto LAB_1077f4ce4;
  }
  uVar4 = 0.0 <= param_8;
  if (param_8 == 0.0) {
    func_0x0001077f51b4(*param_15,param_15[1]);
    if (!(bool)uVar4) goto LAB_1077f4ca4;
    func_0x0001077f5168();
    func_0x0001077f514c();
    func_0x0001077f513c();
    func_0x0001077f5178();
    func_0x0001077f5104(pfStack_a0);
    func_0x0001077f5158();
    func_0x0001077f5130();
LAB_1077f4cd8:
    lVar9 = param_9[1];
    func_0x0001077f5184();
  }
  else {
    uVar21 = 0;
    uVar13 = SUB84(((double)param_8 * 3.141592653589793) / 180.0,0);
    uStack_b0 = CONCAT44(fVar25,fVar31);
    func_0x0001077f5124();
    uStack_b0 = CONCAT44(fVar25,param_6);
    uVar22 = uVar21;
    uVar14 = uVar13;
    func_0x0001077f5124();
    uStack_b0 = CONCAT44(fVar29,fVar31);
    uVar23 = uVar22;
    uVar15 = uVar14;
    func_0x0001077f5124();
    uStack_b0 = CONCAT44(fVar29,param_6);
    uVar24 = uVar23;
    uVar16 = uVar15;
    func_0x0001077f5124();
    uStack_b0 = CONCAT44(uVar14,uVar13);
    uStack_a8 = uVar15;
    uStack_a4 = uVar16;
    func_0x0001077f518c();
    uStack_b0 = CONCAT44(uVar14,uVar13);
    uStack_a8 = uVar15;
    uStack_a4 = uVar16;
    func_0x0001077f5198();
    uStack_b0 = CONCAT44(uVar22,uVar21);
    uStack_a8 = uVar23;
    uStack_a4 = uVar24;
    func_0x0001077f518c();
    uStack_b0 = CONCAT44(uVar22,uVar21);
    uStack_a8 = uVar23;
    uStack_a4 = uVar24;
    func_0x0001077f5198();
    func_0x0001077f51b4();
    if ((bool)uVar4) {
      func_0x0001077f5168();
      func_0x0001077f514c();
      func_0x0001077f513c();
      func_0x0001077f5178();
      func_0x0001077f5104(pfStack_a0);
      func_0x0001077f5158();
      func_0x0001077f5130();
      goto LAB_1077f4cd8;
    }
LAB_1077f4ca4:
    func_0x0001077f5104();
    lVar9 = extraout_x8 + 0x20;
    param_9[1] = lVar9;
  }
  param_9[1] = lVar9;
LAB_1077f4ce4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_9;
  }
  ___stack_chk_fail();
  func_0x0001077f5184();
  func_0x0001072a6b0c(param_9 + 3);
  func_0x0001073e799c(param_9);
  __Unwind_Resume();
  func_0x0001077f5044();
  return puVar5;
}



/* Entry: 1077f5020; end: 1077f5043;  */

void FUN_1077f5020(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x20;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1077f54e4; end: 1077f5567;  */

undefined8 FUN_1077f54e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001077f5568(param_2,&uStack_50,param_3);
  uStack_50 = CONCAT44((float)param_4,(float)param_4);
  uStack_48 = 0;
  func_0x0001077f5568(param_2,&uStack_50,param_3);
  return param_1;
}



/* Entry: 1077f6258; end: 1077f6273;  */

float FUN_1077f6258(float *param_1)

{
  return *param_1 - param_1[2];
}



/* Entry: 1077f7548; end: 1077f760f;  */

void FUN_1077f7548(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 **ppuVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001077f8664();
  uStack_70 = param_5;
  uStack_68 = param_6;
  puStack_60 = param_3;
  puStack_58 = param_1;
  while ((unaff_x20 != unaff_x19 && (puStack_60 != param_4))) {
    if (*(uint *)(unaff_x20 + 4) < *(uint *)(puStack_60 + 4)) {
      param_1 = &uStack_70;
      func_0x0001077f7bf4();
      ppuVar2 = &puStack_58;
    }
    else {
      if (*(uint *)(unaff_x20 + 4) <= *(uint *)(puStack_60 + 4)) {
        func_0x0001077f8700();
        puStack_58 = param_1;
      }
      ppuVar2 = &puStack_60;
    }
    func_0x0001077f8700();
    *ppuVar2 = param_1;
    unaff_x20 = puStack_58;
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  while (unaff_x20 != unaff_x19) {
    puVar1 = &uStack_50;
    func_0x0001077f7bf4(puVar1,unaff_x20 + 4);
    func_0x0001077f8700();
    unaff_x20 = puVar1;
  }
  return;
}



/* Entry: 1077f79bc; end: 1077f79f7;  */

void FUN_1077f79bc(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0001077f828c();
  }
  return;
}



/* Entry: 1077f7df4; end: 1077f7e33;  */

long * FUN_1077f7df4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001072792b8(lVar1 + 0x28);
    }
    func_0x0001077f8708();
  }
  return param_1;
}



/* Entry: 1077f80b8; end: 1077f80ef;  */

long FUN_1077f80b8(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109df7c0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1077f82d0; end: 1077f82d7;  */

void FUN_1077f82d0(void)

{
  return;
}



/* Entry: 1077f84d4; end: 1077f8513;  */

long * FUN_1077f84d4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001072a8888(lVar1 + 0x18);
    }
    func_0x0001077f8708();
  }
  return param_1;
}



/* Entry: 1077f90b4; end: 1077f90d3;  */

long FUN_1077f90b4(long param_1)

{
  func_0x0001077fa5b4();
  FUN_1077f99ec();
  return param_1 + 0x28;
}



/* Entry: 1077f94a8; end: 1077f950f;  */

void FUN_1077f94a8(undefined8 *param_1,long param_2)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar1;
  
  func_0x0001077fa5cc();
  puVar1 = (undefined8 *)*param_1;
  while (puVar1 != param_1 + 1) {
    puVar1 = unaff_x19;
    func_0x0001077fa304();
    if ((undefined8 *)(param_2 + 8) == puVar1) {
      puVar1 = unaff_x20;
      func_0x0001077fa378();
    }
    else {
      func_0x0001077fa614();
    }
  }
  return;
}



/* Entry: 1077f97d0; end: 1077f97e7;  */

void FUN_1077f97d0(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x0001077fa4fc(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x0001074f5144(unaff_x19 + 0x30);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077f99ec; end: 1077f9a43;  */

undefined1  [16] FUN_1077f99ec(long *param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_60;
  
  func_0x0001077fa56c();
  func_0x0001077f9904();
  lVar2 = *param_1;
  bVar1 = lVar2 == 0;
  if (bVar1) {
    func_0x0001077fa588();
    func_0x0001077f9a44();
    func_0x0001077fa644();
    func_0x0001077f9954();
    func_0x0001077fa61c();
    lVar2 = uStack_60;
  }
  auVar3[8] = bVar1;
  auVar3._0_8_ = lVar2;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 1077f9cc8; end: 1077f9d6f;  */

void FUN_1077f9cc8(void)

{
  undefined1 in_ZR;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x0001077fa480();
  func_0x0001077fa5a4();
  if ((bool)in_ZR) {
    *unaff_x21 = unaff_x20;
  }
  func_0x0001077fa430();
  return;
}



/* Entry: 1077f9fe4; end: 1077f9fff;  */

bool FUN_1077f9fe4(long param_1)

{
  func_0x0001072720a4();
  return param_1 != 0;
}



/* Entry: 1077fa20c; end: 1077fa22f;  */

void FUN_1077fa20c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  func_0x0001077fa230(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1077fa3d8; end: 1077fa407;  */

void FUN_1077fa3d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  func_0x0001074f4fa4(param_1,*puVar1);
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 1077fa994; end: 1077fabdf;  */

void FUN_1077fa994(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,long param_7,int param_8)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dStack_70;
  double dStack_68;
  
  do {
    param_8 = param_8 + 1;
    if (param_8 == 0x22) {
      return;
    }
    dVar10 = (param_1 + param_3) * 0.5;
    dVar11 = (param_2 + param_4) * 0.5;
    dVar9 = (param_5 + param_3) * 0.5;
    dVar8 = (param_6 + param_4) * 0.5;
    dVar12 = (dVar10 + dVar9) * 0.5;
    dVar7 = (dVar11 + dVar8) * 0.5;
    dVar2 = param_5 - param_1;
    dVar3 = param_6 - param_2;
    dVar4 = -(dVar2 * (param_4 - param_6)) + dVar3 * (param_3 - param_5);
    if (ABS(dVar4) <= 1e-30) {
      dVar5 = dVar3 * dVar3 + dVar2 * dVar2;
      dVar4 = param_3 - param_1;
      dVar6 = param_4 - param_2;
      if (dVar5 == 0.0) {
        dVar2 = dVar6 * dVar6 + dVar4 * dVar4;
      }
      else {
        dVar5 = (dVar3 * dVar6 + dVar2 * dVar4) / dVar5;
        bVar1 = false;
        if ((0.0 < dVar5) && (bVar1 = false, !NAN(dVar5))) {
          bVar1 = dVar5 < 1.0;
        }
        if (bVar1) {
          return;
        }
        if (dVar5 <= 0.0) {
          dVar2 = param_1 - param_3;
          dVar3 = param_2 - param_4;
        }
        else if (1.0 <= dVar5) {
          dVar2 = param_5 - param_3;
          dVar3 = param_6 - param_4;
        }
        else {
          dVar2 = (param_1 + dVar2 * dVar5) - param_3;
          dVar3 = (param_2 + dVar3 * dVar5) - param_4;
        }
        dVar2 = dVar3 * dVar3 + dVar2 * dVar2;
      }
      dStack_70 = param_3;
      dStack_68 = param_4;
      if (dVar2 < *(double *)(param_7 + 8)) goto LAB_1077fabb4;
    }
    else if (dVar4 * dVar4 <= (dVar3 * dVar3 + dVar2 * dVar2) * *(double *)(param_7 + 8)) {
      dVar2 = *(double *)(param_7 + 0x10);
      dStack_70 = dVar12;
      dStack_68 = dVar7;
      if (dVar2 < 0.01) {
LAB_1077fabb4:
        func_0x0001077fabe0(param_7 + 0x20,&dStack_70);
        return;
      }
      dVar3 = param_6 - param_4;
      _atan2(dVar3,param_5 - param_3);
      param_4 = param_4 - param_2;
      _atan2(param_4,param_3 - param_1);
      dVar3 = ABS(dVar3 - param_4);
      if (3.141592653589793 <= dVar3) {
        dVar3 = 6.283185307179586 - dVar3;
      }
      if (dVar3 < dVar2) goto LAB_1077fabb4;
    }
    FUN_1077fa994(param_1,param_2,dVar10,dVar11,dVar12,param_7,param_8);
    param_2 = dVar7;
    param_1 = dVar12;
    param_3 = dVar9;
    param_4 = dVar8;
  } while( true );
}



/* Entry: 1077fb434; end: 1077fb4d7;  */

void FUN_1077fb434(long param_1,undefined8 param_2,double *param_3)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  long *unaff_x19;
  double *unaff_x21;
  double dVar4;
  
  func_0x000107809f40();
  pfVar3 = *(float **)(param_1 + 8);
  if (pfVar3 < *(float **)(param_1 + 0x10)) {
    dVar4 = *param_3;
    *pfVar3 = (float)*unaff_x21;
    pfVar3[1] = (float)dVar4;
    param_3 = (double *)(pfVar3 + 2);
  }
  else {
    func_0x000107809094((long)pfVar3 - *unaff_x19);
    lVar1 = *unaff_x19;
    lVar2 = unaff_x19[1];
    if (param_1 != 0) {
      func_0x0001077fe1fc();
    }
    func_0x000107809350(param_1 + (lVar2 - lVar1),(float)*unaff_x21,(float)*param_3);
    func_0x000107809d60();
  }
  unaff_x19[1] = (long)param_3;
  return;
}



/* Entry: 1077fbc7c; end: 1077fbd5f;  */

void FUN_1077fbc7c(long *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_58 [24];
  ulong uStack_40;
  undefined8 uStack_38;
  
  func_0x0001077fe9fc();
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x8;
    __Znwm();
    func_0x0001077fe9fc(puVar2);
    *puVar2 = extraout_x8;
    func_0x0001077fe9fc();
    puVar2 = (undefined8 *)*puVar2;
    func_0x0001097599e8();
    if ((int)puVar2 != 0) {
      puVar3 = puVar2;
      func_0x0001077fe9fc();
      puVar3 = (undefined8 *)*puVar3;
      __ZdlPv();
      func_0x0001077fe9fc();
      *puVar3 = 0;
      func_0x0001078099e4();
      uStack_40 = (ulong)puVar2 & 0xffffffff;
      uStack_38 = 0;
      func_0x0001003a91d4(&UNK_10f42adef);
      func_0x0001003a9204(auStack_58);
      func_0x0001077fa908(puVar3,auStack_58);
      ___cxa_throw(puVar3,&PTR_DAT_1109df880,&DAT_1077fa850);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1077fbd40);
      (*pcVar1)();
    }
  }
  func_0x0001077fe9fc();
  return;
}



/* Entry: 1077fc368; end: 1077fc37f;  */

int * FUN_1077fc368(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  iVar3 = *param_1;
  param_1 = param_1 + 2;
  if (iVar3 != 4) {
    param_1 = (int *)0x0;
  }
  piVar1 = (int *)0x0;
  if (1 < iVar3 - 5U) {
    piVar1 = param_1;
  }
  piVar2 = (int *)0x0;
  if (iVar3 != 7) {
    piVar2 = piVar1;
  }
  return piVar2;
}



/* Entry: 1077fdde8; end: 1077fde4f;  */

void FUN_1077fdde8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  func_0x0001077fbeb0(param_2,param_4 + 0x18);
  func_0x000107812ce4(param_1,*(undefined8 *)(param_2 + 8),param_3,param_4);
  return;
}



/* Entry: 1077fe1f0; end: 1077fe1fb;  */

undefined1  [16] FUN_1077fe1f0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  func_0x0001078090a4();
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1077fe578; end: 1077fe5cf;  */

long * FUN_1077fe578(long *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x0001077fe47c(param_1 + 3);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x18;
      func_0x0001077fe47c(lVar1);
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1077feaa0; end: 1077feacb;  */

undefined8 * FUN_1077feaa0(undefined8 *param_1)

{
  func_0x0001077feacc(param_1,*param_1,param_1[1]);
  if (param_1[2] != 0) {
    func_0x0001077feb80(param_1,param_1);
  }
  return param_1;
}



/* Entry: 1077fec0c; end: 1077fec93;  */

void FUN_1077fec0c(long *param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (0x7ffffffffffffff6 < param_3) {
    func_0x000107407b68();
    plVar1 = param_2 + 1;
    lVar3 = *plVar1;
    *param_1 = *param_2;
    plVar4 = param_1 + 1;
    *plVar4 = lVar3;
    lVar5 = param_2[2];
    param_1[2] = lVar5;
    if (lVar5 == 0) {
      *param_1 = (long)plVar4;
      return;
    }
    *(long **)(lVar3 + 0x10) = plVar4;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
    return;
  }
  plVar1 = param_1;
  if (param_3 < 0xb) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    if (param_3 == 0) goto LAB_1077fec84;
  }
  else {
    uVar2 = 0xd;
    if ((param_3 | 3) != 0xb) {
      uVar2 = (param_3 | 3) + 1;
    }
    func_0x000107407b7c();
    param_1[1] = param_3;
    param_1[2] = uVar2 | 0x8000000000000000;
    *param_1 = (long)plVar1;
  }
  _memmove(plVar1,param_2,param_3 << 1);
  param_1 = plVar1;
LAB_1077fec84:
  *(undefined2 *)((long)param_1 + param_3 * 2) = 0;
  return;
}



/* Entry: 1077feecc; end: 1077fef0f;  */

void FUN_1077feecc(long *param_1,long param_2)

{
  func_0x000107808f04();
  func_0x0001077fefb4(param_1 + 2,*param_1,param_1[1],
                      *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x88) * 0x88);
  func_0x00010780910c();
  return;
}



/* Entry: 1077ff0d4; end: 1077ff12f;  */

void FUN_1077ff0d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x88;
    func_0x0001074058d8();
  }
  return;
}



/* Entry: 1077ff30c; end: 1077ff34b;  */

void FUN_1077ff30c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107808f04();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x30) {
    func_0x000107405908(lVar1 + -0x20);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077ff5f8; end: 1077ff667;  */

void FUN_1077ff5f8(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000107808f04();
  if (param_2 < 0) {
    for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + 1) {
      func_0x0001077ff5ac();
    }
  }
  else {
    while (0 < unaff_x19) {
      func_0x0001077ff588();
      unaff_x19 = unaff_x19 + -1;
    }
  }
  return;
}



/* Entry: 1077ff8c0; end: 1077ffa2f;  */

/* WARNING: Possible PIC construction at 0x0001077ff8ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077ff8f0) */
/* WARNING: Removing unreachable block (ram,0x0001077ff908) */
/* WARNING: Removing unreachable block (ram,0x0001077ff918) */
/* WARNING: Removing unreachable block (ram,0x0001077ff928) */

void FUN_1077ff8c0(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (param_3 != 0) {
code_r0x0001077ffa30:
    iVar3 = (int)*param_2;
    if ((iVar3 != iVar3 >> 0x1f) && ((-1 < iVar3 || (param_2[1] != 0)))) {
      return;
    }
    func_0x00010bdb14c4();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1077ffa74);
    (*pcVar4)();
  }
  func_0x0001077ffc80();
  plVar8 = param_2 + 1;
  lVar11 = *param_2 << 5;
  do {
    if (lVar11 == 0) {
      return;
    }
    param_2 = plVar8;
    func_0x0001077ffc1c(plVar8,*(undefined8 *)(param_1 + 0x10));
    if ((int)param_2 != 0) {
      plVar12 = *(long **)(param_1 + 0x18);
      plVar13 = (long *)plVar12[1];
      if ((long *)plVar12[2] <= plVar13) {
        lVar9 = *plVar12;
        lVar10 = (long)plVar13 - lVar9;
        uVar1 = (lVar10 >> 5) + 1;
        if (uVar1 >> 0x3b == 0) {
          uVar6 = plVar12[2] - lVar9;
          uVar7 = (long)uVar6 >> 4;
          if (uVar7 <= uVar1) {
            uVar7 = uVar1;
          }
          if (0x7fffffffffffffdf < uVar6) {
            uVar7 = 0x7ffffffffffffff;
          }
          if (uVar7 >> 0x3b == 0) {
            lVar5 = uVar7 << 5;
            __Znwm();
            plVar2 = (long *)(lVar5 + lVar10);
            lVar16 = *plVar8;
            lVar15 = plVar8[3];
            lVar14 = plVar8[2];
            plVar2[1] = plVar8[1];
            *plVar2 = lVar16;
            plVar2[3] = lVar15;
            plVar2[2] = lVar14;
            plVar13 = plVar2 + 4;
            _memcpy(plVar2 + (lVar10 >> 5) * -4,lVar9,lVar10);
            *plVar12 = (long)(plVar2 + (lVar10 >> 5) * -4);
            plVar12[1] = (long)plVar13;
            plVar12[2] = lVar5 + uVar7 * 0x20;
            if (lVar9 != 0) {
              __ZdlPv(lVar9);
            }
            goto LAB_1077ffa08;
          }
          func_0x000104bd35f4();
        }
        func_0x0001077ffccc();
        goto code_r0x0001077ffa30;
      }
      lVar9 = *plVar8;
      lVar5 = plVar8[3];
      lVar10 = plVar8[2];
      plVar13[1] = plVar8[1];
      *plVar13 = lVar9;
      plVar13[3] = lVar5;
      plVar13[2] = lVar10;
      plVar13 = plVar13 + 4;
LAB_1077ffa08:
      plVar12[1] = (long)plVar13;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    }
    plVar8 = plVar8 + 4;
    lVar11 = lVar11 + -0x20;
  } while( true );
}



/* Entry: 1077ffb80; end: 1077ffb83;  */

undefined8 * FUN_1077ffb80(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR____cxa_pure_virtual_1108775d8;
  param_1[1] = &PTR_DAT_1109dfae0;
  func_0x000105301370(param_1 + 2,param_2 + 0x10);
  *param_1 = &PTR_DAT_1109dfa68;
  param_1[1] = &PTR_DAT_1109dfa98;
  param_1[2] = &PTR_DAT_1109dfac0;
  return param_1;
}



/* Entry: 1077ffd0c; end: 1077ffd2b;  */

void FUN_1077ffd0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x0001077ffd2c(param_1,&uStack_20);
  return;
}



/* Entry: 1078010f8; end: 107801243;  */

void FUN_1078010f8(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x24;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar5 = (uint)param_1;
  if (1 < param_3) {
    lVar4 = ((long)param_4 - param_1) / 0x28;
    uVar9 = param_3 - 2U >> 1;
    if (lVar4 <= (long)uVar9) {
      uVar2 = lVar4 << 1 | 1;
      puVar7 = (undefined8 *)(param_1 + uVar2 * 0x28);
      uVar1 = lVar4 * 2 + 2;
      puVar8 = puVar7;
      uVar10 = uVar2;
      if ((long)uVar1 < param_3) {
        unaff_x24 = puVar7 + 5;
        func_0x000107809dfc(*param_2);
        puVar8 = unaff_x24;
        uVar10 = uVar1;
        if (uVar5 == 0) {
          puVar8 = puVar7;
          uVar10 = uVar2;
        }
      }
      func_0x0001078090f4(*param_2);
      if ((uVar5 & 1) == 0) {
        uVar13 = param_4[1];
        uVar11 = *param_4;
        uVar16 = param_4[3];
        uVar15 = param_4[2];
        uVar6 = param_4[4];
        uVar12 = uVar11;
        uVar14 = uVar13;
        do {
          func_0x00010780a1ac();
          param_4[2] = uVar14;
          param_4[1] = uVar12;
          param_4[3] = puVar8[3];
          param_4[4] = puVar8[4];
          if ((long)uVar9 < (long)uVar10) break;
          uVar2 = uVar10 << 1 | 1;
          puVar7 = (undefined8 *)(param_1 + uVar2 * 0x28);
          uVar1 = uVar10 * 2 + 2;
          puVar8 = puVar7;
          uVar10 = uVar2;
          if ((long)uVar1 < param_3) {
            func_0x0001078090f4(*param_2);
            puVar8 = puVar7 + 5;
            uVar10 = uVar1;
            if (uVar5 == 0) {
              puVar8 = puVar7;
              uVar10 = uVar2;
            }
          }
          func_0x0001078099a8();
          bVar3 = uVar5 == 0;
          uVar5 = 0;
          param_4 = unaff_x24;
        } while (bVar3);
        *unaff_x24 = uVar11;
        unaff_x24[2] = uVar15;
        unaff_x24[1] = uVar13;
        unaff_x24[3] = uVar16;
        unaff_x24[4] = uVar6;
      }
    }
  }
  return;
}


