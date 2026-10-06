/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086a887c; end: 1086a88b7;  */

long FUN_1086a887c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a8c558);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  FUN_1086a88b8();
  return param_1;
}



/* Entry: 1086a88b8; end: 1086a890f;  */

void FUN_1086a88b8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b04a8();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086b049c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      FUN_1088f0fa0();
    }
    else {
      FUN_1088f0f70();
    }
  }
  return;
}



/* Entry: 1086a8910; end: 1086a8993;  */

undefined1 * FUN_1086a8910(void)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x0001086b0138();
  uVar4 = 1;
  uStack_28 = extraout_x8;
  FUN_1086a8994(auStack_40);
  puVar1 = puStack_30;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110a636d8;
  puStack_30[1] = 0;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[10] = 0;
  puStack_30[9] = 0;
  puStack_30 = (undefined8 *)0x0;
  *unaff_x19 = (long)(puVar1 + 3);
  unaff_x19[1] = (long)puVar1;
  FUN_1086a8a70();
  func_0x0001086aff54(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_1086a89bc();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1086a8994; end: 1086a89bb;  */

long FUN_1086a8994(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1086a89bc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1086a89bc; end: 1086a89e7;  */

void FUN_1086a89bc(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110a636d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086a89e8; end: 1086a89eb;  */

void FUN_1086a89e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a636d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086a89ec; end: 1086a89ff;  */

void FUN_1086a89ec(void)

{
  func_0x0001086a8a0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086a8a00; end: 1086a8a1f;  */

long FUN_1086a8a00(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_1086a8a50(param_1 + 0x30);
  }
  return param_1 + 0x18;
}



/* Entry: 1086a8a20; end: 1086a8a4f;  */

long FUN_1086a8a20(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1086a8a50(param_1 + 0x18);
  }
  return param_1;
}



/* Entry: 1086a8a50; end: 1086a8a6f;  */

void FUN_1086a8a50(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c27f98();
  }
  return;
}



/* Entry: 1086a8a70; end: 1086a8a7f;  */

void FUN_1086a8a70(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086a8a80; end: 1086a8aef;  */

long FUN_1086a8a80(long param_1)

{
  long lStack_28;
  
  func_0x000107c27938(param_1 + 0x560);
  func_0x000107c27938(param_1 + 0x540);
  FUN_1086a78f0(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1086a8af0; end: 1086a8b47;  */

void FUN_1086a8af0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b04a8();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086b049c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x0001088f0cfc();
    }
    else {
      FUN_1088f0ccc();
    }
  }
  return;
}



/* Entry: 1086a8b48; end: 1086a8d8f;  */

long FUN_1086a8b48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  uVar2 = param_5;
  func_0x0001086aff10();
  FUN_1086858d8(lVar1 + 0x18,uVar2);
  FUN_108639fcc(param_1 + 0x78,param_5);
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  FUN_108639eb0(param_1 + 0xf8,param_3);
  *(undefined1 *)(param_1 + 0x480) = 0;
  *(undefined1 *)(param_1 + 0x548) = 0;
  *(undefined1 *)(param_1 + 0x550) = 0;
  *(undefined1 *)(param_1 + 0x618) = 0;
  *(undefined8 *)(param_1 + 0x620) = param_4;
  *(undefined1 *)(param_1 + 0x628) = 0;
  *(undefined1 *)(param_1 + 0x630) = 0;
  *(undefined1 *)(param_1 + 0x638) = 0;
  *(undefined1 *)(param_1 + 0x640) = 0;
  *(undefined1 *)(param_1 + 0x648) = 0;
  *(undefined1 *)(param_1 + 0x64c) = 0;
  *(undefined1 *)(param_1 + 0x650) = 0;
  *(undefined1 *)(param_1 + 0x654) = 0;
  *(undefined1 *)(param_1 + 0x658) = 0;
  *(undefined1 *)(param_1 + 0x660) = 0;
  *(undefined1 *)(param_1 + 0x688) = 0;
  *(undefined8 *)(param_1 + 0x698) = 0;
  *(undefined8 *)(param_1 + 0x690) = 0;
  *(undefined8 *)(param_1 + 0x6a8) = 0;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  *(undefined8 *)(param_1 + 0x6c0) = 0;
  *(undefined4 *)(param_1 + 0x6c8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x6d8) = 0;
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  *(undefined8 *)(param_1 + 0x6e8) = 0;
  *(undefined8 *)(param_1 + 0x6e0) = 0;
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  *(undefined8 *)(param_1 + 0x708) = 0;
  *(undefined8 *)(param_1 + 0x700) = 0;
  *(undefined8 *)(param_1 + 0x718) = 0;
  *(undefined8 *)(param_1 + 0x710) = 0;
  *(undefined8 *)(param_1 + 0x728) = 0;
  *(undefined8 *)(param_1 + 0x720) = 0;
  *(undefined8 *)(param_1 + 0x730) = 0;
  *(undefined4 *)(param_1 + 0x738) = 0x3f800000;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  func_0x0001052916b0(param_1 + 0x740,&uStack_58,&uStack_70,&uStack_88,&uStack_a0);
  func_0x000104bee7a0(&uStack_a0);
  func_0x000104bee7dc(&uStack_88);
  func_0x000104bee864(&uStack_70);
  func_0x000107c27a04(&uStack_58);
  *(undefined1 *)(param_1 + 0x7a0) = 0;
  *(undefined1 *)(param_1 + 0x7a8) = 0;
  *(undefined1 *)(param_1 + 0x7b0) = 0;
  *(undefined1 *)(param_1 + 0x7c8) = 0;
  *(undefined8 *)(param_1 + 0x7d8) = 0;
  *(undefined8 *)(param_1 + 2000) = 0;
  *(undefined8 *)(param_1 + 0x7e8) = 0;
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  *(undefined4 *)(param_1 + 0x7f0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x800) = 0;
  *(undefined8 *)(param_1 + 0x7f8) = 0;
  *(undefined8 *)(param_1 + 0x810) = 0;
  *(undefined8 *)(param_1 + 0x808) = 0;
  *(undefined4 *)(param_1 + 0x818) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x828) = 0;
  *(undefined8 *)(param_1 + 0x820) = 0;
  *(undefined8 *)(param_1 + 0x838) = 0;
  *(undefined8 *)(param_1 + 0x830) = 0;
  *(undefined4 *)(param_1 + 0x840) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x850) = 0;
  *(undefined8 *)(param_1 + 0x848) = 0;
  *(undefined8 *)(param_1 + 0x860) = 0;
  *(undefined8 *)(param_1 + 0x858) = 0;
  *(undefined4 *)(param_1 + 0x868) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x870) = param_6;
  *(undefined1 *)(param_1 + 0x874) = 0;
  *(undefined1 *)(param_1 + 0x878) = 0;
  *(undefined1 *)(param_1 + 0x880) = 0;
  *(undefined1 *)(param_1 + 0x888) = 0;
  *(undefined1 *)(param_1 + 0x8b8) = 0;
  *(undefined8 *)(param_1 + 0x8d0) = 0;
  *(undefined8 *)(param_1 + 0x8c8) = 0;
  *(undefined8 *)(param_1 + 0x8c0) = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x0001052916b0(param_1 + 0x8d8,&uStack_b8,&uStack_d0,&uStack_e8,&uStack_100);
  func_0x000104bee7a0(&uStack_100);
  func_0x000104bee7dc(&uStack_e8);
  func_0x000104bee864(&uStack_d0);
  func_0x000107c27a04(&uStack_b8);
  *(undefined8 *)(param_1 + 0x948) = 0;
  *(undefined8 *)(param_1 + 0x940) = 0;
  *(undefined8 *)(param_1 + 0x938) = 0;
  *(undefined2 *)(param_1 + 0x950) = 1;
  *(undefined1 *)(param_1 + 0x952) = 0;
  *(undefined1 *)(param_1 + 0x954) = 0;
  *(undefined1 *)(param_1 + 0x958) = 0;
  *(undefined1 *)(param_1 + 0x960) = 0;
  *(undefined1 *)(param_1 + 0x9b8) = 0;
  *(undefined8 *)(param_1 + 0x9c0) = 0;
  *(undefined8 *)(param_1 + 0x9d0) = 0;
  *(undefined8 *)(param_1 + 0x9c8) = 0;
  return param_1;
}



/* Entry: 1086a8d90; end: 1086a8e23;  */

undefined8 FUN_1086a8d90(void)

{
  undefined8 unaff_x19;
  
  func_0x0001086b07b0();
  func_0x0001086a8db4();
  func_0x0001086b050c();
  FUN_1086a8e24();
  return unaff_x19;
}



/* Entry: 1086a8e24; end: 1086a8e3b;  */

void FUN_1086a8e24(long *param_1)

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



/* Entry: 1086a8e3c; end: 1086a8ecf;  */

undefined8 FUN_1086a8e3c(void)

{
  undefined8 unaff_x19;
  
  func_0x0001086b07b0();
  func_0x0001086a8e60();
  func_0x0001086b050c();
  FUN_1086a8ed0();
  return unaff_x19;
}



/* Entry: 1086a8ed0; end: 1086a8ee7;  */

void FUN_1086a8ed0(long *param_1)

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



/* Entry: 1086a8ee8; end: 1086a8f7b;  */

undefined8 FUN_1086a8ee8(void)

{
  undefined8 unaff_x19;
  
  func_0x0001086b07b0();
  func_0x0001086a8f0c();
  func_0x0001086b050c();
  FUN_1086a8f7c();
  return unaff_x19;
}



/* Entry: 1086a8f7c; end: 1086a8f93;  */

void FUN_1086a8f7c(long *param_1)

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



/* Entry: 1086a8f94; end: 1086a8fe3;  */

void FUN_1086a8f94(void)

{
  func_0x000107c3247c();
  func_0x0001086a8fb8();
  return;
}



/* Entry: 1086a8fe4; end: 1086a8feb;  */

void FUN_1086a8fe4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c324b0(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x20) {
    func_0x000107c27914(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086a8fec; end: 1086a902b;  */

void FUN_1086a8fec(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c324b0();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x20) {
    func_0x000107c27914(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086a902c; end: 1086a907b;  */

void FUN_1086a902c(void)

{
  func_0x000107c3247c();
  func_0x0001086a9050();
  return;
}



/* Entry: 1086a907c; end: 1086a9083;  */

void FUN_1086a907c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001086b01cc(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -7;
    func_0x0001086a90b4();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086a9084; end: 1086a9127;  */

void FUN_1086a9084(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086b01cc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x38;
    func_0x0001086a90b4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086a9128; end: 1086a912f;  */

void FUN_1086a9128(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001086b01cc(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x11;
    func_0x0001086a9160();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086a9130; end: 1086a921b;  */

void FUN_1086a9130(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086b01cc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x88;
    func_0x0001086a9160();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086a921c; end: 1086a9233;  */

void FUN_1086a921c(long *param_1)

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



/* Entry: 1086a9234; end: 1086a9293;  */

void FUN_1086a9234(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000100864b68();
  }
  return;
}



/* Entry: 1086a9294; end: 1086a92e3;  */

void FUN_1086a9294(void)

{
  func_0x000107c3247c();
  func_0x0001086a92b8();
  return;
}



/* Entry: 1086a92e4; end: 1086a92eb;  */

void FUN_1086a92e4(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001086b01cc(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -6;
    func_0x000107c2a484();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086a92ec; end: 1086a948b;  */

void FUN_1086a92ec(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086b01cc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x30;
    func_0x000107c2a484();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086a948c; end: 1086a94f3;  */

void FUN_1086a948c(void)

{
  undefined8 uStack_48;
  
  func_0x0001086b0370();
  func_0x0001086b0eec();
  FUN_1086a9550();
  func_0x0001086b00d4();
  FUN_1086a95f0();
  func_0x0001086b0a24(uStack_48);
  func_0x000107c32508();
  FUN_1086a95a8();
  func_0x0001086b0ee0();
  func_0x0001086a97b0();
  return;
}



/* Entry: 1086a94f4; end: 1086a954f;  */

void FUN_1086a94f4(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 in_register_00005008;
  
  func_0x000107c324b0();
  func_0x0001086aff10();
  FUN_1086b0c90();
  *(undefined8 *)(unaff_x20 + 0x80) = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x78) = in_register_00005008;
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x98) = *(undefined8 *)(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x20 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xa0) = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  return;
}



/* Entry: 1086a9550; end: 1086a95a7;  */

long * FUN_1086a9550(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x186186186186187) {
    uVar1 = (param_1[2] - *param_1) / 0xa8;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0xc30c30c30c30c2 < uVar1) {
      plVar2 = (long *)0x186186186186186;
    }
    return plVar2;
  }
  FUN_1086a95e4();
  func_0x000107c324b0();
  func_0x0001086b0b14();
  FUN_1086a9674();
  func_0x0001086b0008();
  return param_1;
}



/* Entry: 1086a95a8; end: 1086a95e3;  */

void FUN_1086a95a8(void)

{
  func_0x000107c324b0();
  func_0x0001086b0b14();
  FUN_1086a9674();
  func_0x0001086b0008();
  return;
}



/* Entry: 1086a95e4; end: 1086a95ef;  */

void FUN_1086a95e4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001086b0284();
  func_0x000107c32550();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001086a9628(param_4);
  }
  func_0x0001086b0484(0xa8);
  return;
}



/* Entry: 1086a95f0; end: 1086a9647;  */

void FUN_1086a95f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c32550();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001086a9628(param_4);
  }
  func_0x0001086b0484(0xa8);
  return;
}



/* Entry: 1086a9648; end: 1086a9673;  */

void FUN_1086a9648(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0x186186186186187) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xa8);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107c32464();
  func_0x0001086b0320();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0xa8) {
    FUN_1086a94f4(param_4,unaff_x22);
    param_4 = lStack_48 + 0xa8;
    lStack_48 = param_4;
  }
  func_0x0001086b0be0();
  func_0x0001086b0588();
  FUN_1086a96e4();
  FUN_1086a9744(auStack_70);
  return;
}



/* Entry: 1086a9674; end: 1086a96e3;  */

void FUN_1086a9674(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x000107c32464();
  func_0x0001086b0320();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0xa8) {
    FUN_1086a94f4(in_x3,unaff_x22);
    in_x3 = lStack_38 + 0xa8;
    lStack_38 = in_x3;
  }
  func_0x0001086b0be0();
  func_0x0001086b0588();
  FUN_1086a96e4();
  FUN_1086a9744(auStack_60);
  return;
}



/* Entry: 1086a96e4; end: 1086a9743;  */

void FUN_1086a96e4(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0xa8) {
    func_0x0001086a9714();
  }
  return;
}



/* Entry: 1086a9744; end: 1086a976f;  */

void FUN_1086a9744(void)

{
  uint extraout_w8;
  
  func_0x0001086b0f98();
  if ((extraout_w8 & 1) == 0) {
    FUN_1086a9770();
  }
  return;
}



/* Entry: 1086a9770; end: 1086a977f;  */

void FUN_1086a9770(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x0001086b0c70();
  while (param_3 != param_5) {
    param_3 = param_3 + -0xa8;
    func_0x0001086a9714();
  }
  return;
}



/* Entry: 1086a9780; end: 1086a97db;  */

void FUN_1086a9780(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0xa8;
    func_0x0001086a9714();
  }
  return;
}



/* Entry: 1086a97dc; end: 1086a97e3;  */

void FUN_1086a97dc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c324b0(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0xa8;
    func_0x0001086a9714();
  }
  return;
}



/* Entry: 1086a97e4; end: 1086a9817;  */

void FUN_1086a97e4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c324b0();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0xa8;
    func_0x0001086a9714();
  }
  return;
}



/* Entry: 1086a9818; end: 1086a982f;  */

void FUN_1086a9818(long *param_1,long param_2)

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



/* Entry: 1086a9830; end: 1086a984f;  */

void FUN_1086a9830(void)

{
  func_0x0001086b050c();
  FUN_1086a9850();
  return;
}



/* Entry: 1086a9850; end: 1086a9867;  */

void FUN_1086a9850(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x0001086b0b34(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x0001086a98a0(unaff_x19 + 0x18);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086a9868; end: 1086a98ef;  */

void FUN_1086a9868(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001086b0b34();
  if ((bool)in_ZR) {
    func_0x0001086a98a0(unaff_x19 + 0x18);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086a98f0; end: 1086a98f7;  */

void FUN_1086a98f0(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001086b01cc(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -9;
    FUN_10891cac8();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086a98f8; end: 1086a9927;  */

void FUN_1086a98f8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086b01cc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x48;
    FUN_10891cac8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086a9928; end: 1086a9933;  */

void FUN_1086a9928(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001086b0284();
  func_0x0001086b0fa4();
  while (unaff_x20 != unaff_x19[2]) {
    unaff_x19[2] = unaff_x19[2] + -0x48;
    FUN_10891cac8();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1086a9934; end: 1086a99c7;  */

void FUN_1086a9934(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001086b0fa4();
  while (unaff_x20 != unaff_x19[2]) {
    unaff_x19[2] = unaff_x19[2] + -0x48;
    FUN_10891cac8();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1086a99c8; end: 1086a99cf;  */

void FUN_1086a99c8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001086b01cc(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x15;
    func_0x0001086a9a00();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086a99d0; end: 1086a9aab;  */

void FUN_1086a99d0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086b01cc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xa8;
    func_0x0001086a9a00();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086a9aac; end: 1086a9ac3;  */

void FUN_1086a9aac(long *param_1)

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



/* Entry: 1086a9ac4; end: 1086a9bf7;  */

/* WARNING: Possible PIC construction at 0x0001086a9ae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086a9ae4) */
/* WARNING: Removing unreachable block (ram,0x0001086b0394) */

long FUN_1086a9ac4(long param_1)

{
  long lStack_48;
  
  func_0x000104bee630(param_1 + 0xb8);
  lStack_48 = param_1 + 0xa0;
  func_0x000100100fd4(&lStack_48);
  return param_1 + 0xa0;
}



/* Entry: 1086a9bf8; end: 1086a9bff;  */

void FUN_1086a9bf8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001086b01cc(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x18;
    func_0x0001086a9c30();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086a9c00; end: 1086a9c57;  */

void FUN_1086a9c00(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086b01cc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xc0;
    func_0x0001086a9c30();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086a9c58; end: 1086a9cbb;  */

void FUN_1086a9c58(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c324b4();
  func_0x0001086b0e90();
  func_0x0001086b0e20();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x70,unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
  func_0x000107c27994(unaff_x19 + 0x90,unaff_x20 + 0x90);
  return;
}



/* Entry: 1086a9cbc; end: 1086a9ccf;  */

undefined8 * FUN_1086a9cbc(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110a98cb0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010892a274();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x00010892a11c(0,*(undefined8 *)(param_2 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000107c2a26c(0,*(undefined8 *)(param_2 + 0x20));
  }
  param_1[4] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 0x38);
  param_1[6] = uVar3;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 1086a9cd0; end: 1086a9d33;  */

void FUN_1086a9cd0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086b01cc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xa8;
    func_0x0001086a9714();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086a9d34; end: 1086a9d53;  */

void FUN_1086a9d34(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x000107c2a3ec();
  }
  return;
}



/* Entry: 1086a9d54; end: 1086a9d5f;  */

void FUN_1086a9d54(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,&UNK_10066ad78);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,&UNK_10066ad78);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 1086a9d60; end: 1086a9dab;  */

void FUN_1086a9d60(void)

{
  func_0x0001086a9d78();
  return;
}



/* Entry: 1086a9dac; end: 1086a9f1b;  */

undefined1  [16] FUN_1086a9dac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  ulong extraout_x9_00;
  ulong uVar5;
  ulong extraout_x10;
  long *unaff_x19;
  long *unaff_x21;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x25;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  func_0x0001086b0c34();
  func_0x0001086b0290();
  uVar7 = unaff_x19[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    uVar5 = param_3;
    if ((uVar7 & uVar8) == 0) {
      unaff_x25 = uVar8 & param_3;
      in_ZR = 1;
      in_NG = 0;
    }
    else {
      in_NG = (long)(param_3 - uVar7) < 0;
      in_ZR = param_3 == uVar7;
      unaff_x25 = param_3;
      if (uVar7 <= param_3) {
        func_0x0001086b0adc();
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar6;
          if (unaff_x21 == (long *)0x0) goto LAB_1086a9e4c;
          uVar4 = unaff_x21[1];
          in_NG = (long)(uVar4 - param_3) < 0;
          in_ZR = uVar4 == param_3;
          plVar6 = unaff_x21;
          if (!(bool)in_ZR) break;
          func_0x0001086b0a78();
          if ((uVar5 & 1) != 0) {
            uVar3 = 0;
            goto LAB_1086a9f04;
          }
        }
        if ((uVar7 & uVar8) == 0) {
          uVar4 = uVar4 & uVar8;
        }
        else if (uVar7 <= uVar4) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar4 / uVar7;
          }
          uVar4 = uVar4 - uVar1 * uVar7;
        }
        in_NG = (long)(uVar4 - unaff_x25) < 0;
        in_ZR = uVar4 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_1086a9e4c:
  func_0x000107c324ec(&stack0x00000008);
  FUN_1086a9f54();
  func_0x0001086b0124();
  if ((uVar7 == 0) ||
     (func_0x0001086b0a10(param_1,param_2,(float)uVar7), uVar5 = unaff_x25, (bool)in_NG)) {
    func_0x0001086b04dc();
    uVar2 = uVar7 == 3;
    func_0x0001086b00f0();
    func_0x0001086a9fa0();
    func_0x0001086b0b04();
    if ((bool)uVar2) {
      in_ZR = 1;
      uVar5 = extraout_x8 & param_3;
    }
    else {
      in_ZR = param_3 == uVar7;
      uVar5 = param_3;
      if (uVar7 <= param_3) {
        func_0x0001086b0adc();
        uVar5 = unaff_x25;
      }
    }
  }
  if (*(long *)(*unaff_x19 + uVar5 * 8) == 0) {
    func_0x0001086b0920();
    if (extraout_x9 != 0) {
      func_0x0001086b0b24();
      if ((bool)in_ZR) {
        uVar5 = extraout_x9_00 & extraout_x10;
      }
      else {
        uVar5 = extraout_x9_00;
        if (uVar7 <= extraout_x9_00) {
          uVar5 = 0;
          if (uVar7 != 0) {
            uVar5 = extraout_x9_00 / uVar7;
          }
          uVar5 = extraout_x9_00 - uVar5 * uVar7;
        }
      }
      *(long **)(extraout_x8_00 + uVar5 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001086b0f4c();
  }
  func_0x0001086b04b4();
  FUN_1086aa134();
  uVar3 = 1;
LAB_1086a9f04:
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = unaff_x21;
  return auVar9;
}



/* Entry: 1086a9f1c; end: 1086a9f3f;  */

void FUN_1086a9f1c(undefined8 param_1,long param_2)

{
  undefined1 uStack_11;
  
  func_0x000107c278c4(&uStack_11,*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  return;
}



/* Entry: 1086a9f40; end: 1086a9f53;  */

bool FUN_1086a9f40(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  puVar6 = (ulong *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  puVar7 = (ulong *)(*(ulong *)(param_3 + 0x10) & 0xfffffffffffffffc);
  bVar3 = *(byte *)((long)puVar6 + 0x17);
  uVar1 = puVar6[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)puVar7 + 0x17);
  uVar2 = puVar7[1];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar1 == uVar2) {
    puVar5 = (ulong *)*puVar6;
    if (-1 < (char)bVar3) {
      puVar5 = puVar6;
    }
    puVar6 = (ulong *)*puVar7;
    if (-1 < (char)bVar4) {
      puVar6 = puVar7;
    }
    func_0x000107c610b0(puVar5,puVar6);
    return (int)puVar5 == 0;
  }
  return false;
}



/* Entry: 1086a9f54; end: 1086aa037;  */

undefined8 * FUN_1086a9f54(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  undefined8 unaff_x20;
  
  func_0x0001086b0418();
  puVar1 = param_1 + 2;
  func_0x0001086b0a2c();
  *extraout_x8 = param_1;
  extraout_x8[1] = puVar1;
  extraout_x8[2] = 1;
  puVar1 = param_1 + 2;
  *param_1 = 0;
  param_1[1] = unaff_x20;
  puVar2 = puVar1;
  func_0x000107c31e5c(&UNK_110a81f58,puVar1,0);
  puVar2[2] = &DAT_11383d918;
  *(undefined4 *)(puVar2 + 3) = 0;
  func_0x000107c287d0();
  return puVar1;
}



/* Entry: 1086aa038; end: 1086aa0ff;  */

void FUN_1086aa038(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1086aa100(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_1086aa118(lVar2);
    FUN_1086aa100(param_1,lVar2);
    func_0x000107c32584();
    uVar3 = extraout_x9;
    while (param_2 != uVar3) {
      func_0x000107c3258c();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x000107c32544();
      func_0x000107c32540();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9_01;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            *plVar4 = *plVar6;
            func_0x000107c32458();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_02;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1086aa100; end: 1086aa117;  */

void FUN_1086aa100(long *param_1,long param_2)

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



/* Entry: 1086aa118; end: 1086aa133;  */

void FUN_1086aa118(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001086b050c();
  FUN_1086aa154();
  return;
}



/* Entry: 1086aa134; end: 1086aa153;  */

void FUN_1086aa134(void)

{
  func_0x0001086b050c();
  FUN_1086aa154();
  return;
}



/* Entry: 1086aa154; end: 1086aa16b;  */

void FUN_1086aa154(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x0001086b0b34(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x000107c2a2e0(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086aa16c; end: 1086aa1a3;  */

void FUN_1086aa16c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001086b0b34();
  if ((bool)in_ZR) {
    func_0x000107c2a2e0(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086aa1a4; end: 1086aa1e3;  */

ulong * FUN_1086aa1a4(void)

{
  ulong uVar1;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  func_0x000107c3254c();
  while( true ) {
    if (unaff_x21 == unaff_x19) {
      return unaff_x19;
    }
    uVar1 = *unaff_x21;
    func_0x0001086b0dc0();
    if ((uVar1 & 1) != 0) break;
    unaff_x21 = unaff_x21 + 1;
  }
  return unaff_x21;
}



/* Entry: 1086aa1e4; end: 1086aa297;  */

void FUN_1086aa1e4(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c324b0();
  func_0x000107c27cfc();
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x48);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar6;
  *(undefined1 *)(unaff_x20 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  FUN_108919e8c(unaff_x20 + 0x50,unaff_x19 + 0x50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (unaff_x20 + 200,unaff_x19 + 200);
  uVar2 = *(undefined8 *)(unaff_x19 + 0xe0);
  *(undefined8 *)(unaff_x20 + 0xe8) = *(undefined8 *)(unaff_x19 + 0xe8);
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar2;
  FUN_1086aa298(unaff_x20 + 0xf0,unaff_x19 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x110);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x120);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x130);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x139);
  *(undefined8 *)(unaff_x20 + 0x141) = *(undefined8 *)(unaff_x19 + 0x141);
  *(undefined8 *)(unaff_x20 + 0x139) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x128) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x120) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x138) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x130) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x118) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x110) = uVar2;
  func_0x000107c28d24(unaff_x20 + 0x150,unaff_x19 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x170);
  *(undefined1 *)(unaff_x20 + 0x180) = *(undefined1 *)(unaff_x19 + 0x180);
  *(undefined8 *)(unaff_x20 + 0x178) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x170) = uVar2;
  func_0x000107c28d24(unaff_x20 + 0x188,unaff_x19 + 0x188);
  return;
}



/* Entry: 1086aa298; end: 1086aa2bf;  */

void FUN_1086aa298(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  bVar2 = cVar1 == *(char *)(param_2 + 0x18);
  if (!bVar2) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        func_0x000104bee630();
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      return;
    }
    FUN_10867be90();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001086b03a8();
    if (!bVar2) {
      FUN_1086aa2f0();
    }
    return;
  }
  return;
}



/* Entry: 1086aa2c0; end: 1086aa2ef;  */

void FUN_1086aa2c0(void)

{
  undefined1 in_ZR;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    FUN_1086aa2f0();
  }
  return;
}



/* Entry: 1086aa2f0; end: 1086aa2ff;  */

void FUN_1086aa2f0(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  
  uVar1 = (param_3 - param_2) / 0x18;
  if ((ulong)((param_1[2] - *param_1) / 0x18) < uVar1) {
    plVar2 = param_1;
    func_0x00010865f9e0(param_1);
    func_0x0001086b0500();
    func_0x00010528d690();
    FUN_10867bf20(param_1,plVar2);
  }
  else {
    lVar3 = param_1[1] - *param_1;
    if (uVar1 <= (ulong)(lVar3 / 0x18)) {
      func_0x0001086b0ac4();
      FUN_1086aa3e8();
      func_0x000104befd58();
      while (param_1 != unaff_x19) {
        param_1 = param_1 + -3;
        func_0x000100100fec();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1086aa3e8(param_2,param_2 + lVar3);
    param_2 = param_2 + lVar3;
  }
  plVar2 = param_1 + 2;
  FUN_10867bf9c(plVar2,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 1086aa300; end: 1086aa3e7;  */

void FUN_1086aa300(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *unaff_x19;
  long unaff_x20;
  long lVar2;
  
  if ((ulong)((param_1[2] - *param_1) / 0x18) < param_4) {
    plVar1 = param_1;
    func_0x00010865f9e0(param_1);
    func_0x0001086b0500();
    func_0x00010528d690();
    FUN_10867bf20(param_1,plVar1);
  }
  else {
    lVar2 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar2 / 0x18)) {
      func_0x0001086b0ac4();
      FUN_1086aa3e8();
      func_0x000104befd58();
      while (param_1 != unaff_x19) {
        param_1 = param_1 + -3;
        func_0x000100100fec();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1086aa3e8(param_2,param_2 + lVar2);
    param_2 = param_2 + lVar2;
  }
  plVar1 = param_1 + 2;
  FUN_10867bf9c(plVar1,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 1086aa3e8; end: 1086aa403;  */

void FUN_1086aa3e8(void)

{
  func_0x0001086b0210();
  FUN_1086aa404();
  return;
}



/* Entry: 1086aa404; end: 1086aa447;  */

void FUN_1086aa404(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001086b0178();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x18) {
    func_0x0001086b07c8();
    func_0x000107c27cfc();
  }
  func_0x0001086b0314();
  return;
}



/* Entry: 1086aa448; end: 1086aa463;  */

void FUN_1086aa448(void)

{
  func_0x0001086b0210();
  FUN_1086aa464();
  return;
}



/* Entry: 1086aa464; end: 1086aa4a7;  */

void FUN_1086aa464(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001086b0178();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x1a8) {
    func_0x0001086b07c8();
    func_0x000107c28950();
  }
  func_0x0001086b0314();
  return;
}



/* Entry: 1086aa4a8; end: 1086aa5eb;  */

void FUN_1086aa4a8(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x48) != 0xb) {
    FUN_1088f9614(param_1);
    *(undefined4 *)(param_1 + 0x48) = 0xb;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b039c();
    }
    func_0x0001086aa4f8();
    *(ulong *)(param_1 + 0x40) = uVar1;
  }
  return;
}



/* Entry: 1086aa5ec; end: 1086aa61b;  */

void FUN_1086aa5ec(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086b0fa4();
  func_0x000107c28a9c();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x1a8;
  return;
}



/* Entry: 1086aa61c; end: 1086aa687;  */

void FUN_1086aa61c(void)

{
  undefined8 uStack_48;
  
  func_0x0001086b0370();
  func_0x0001086b0eec();
  FUN_10867b544();
  func_0x0001086b00d4();
  FUN_10867b638();
  func_0x000107c28a9c(uStack_48);
  func_0x000107c32508();
  FUN_10867b5a4();
  func_0x0001086b0ee0();
  func_0x00010867b814();
  return;
}



/* Entry: 1086aa688; end: 1086aa6c3;  */

long FUN_1086aa688(ulong param_1)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001086b04cc();
  while( true ) {
    if (unaff_x20 == unaff_x21) {
      return unaff_x20;
    }
    func_0x0001086b0314();
    func_0x000107c28078();
    if ((param_1 & 1) != 0) break;
    unaff_x20 = unaff_x20 + 0x18;
  }
  return unaff_x20;
}



/* Entry: 1086aa6c4; end: 1086aa6ff;  */

void FUN_1086aa6c4(long param_1,long param_2,long param_3)

{
  if ((param_1 != param_2) && (param_2 != param_3)) {
    FUN_1086aa700(param_1,param_2,param_3);
  }
  return;
}



/* Entry: 1086aa700; end: 1086aa797;  */

long FUN_1086aa700(long param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x0001086b0418();
  lVar3 = param_1;
  while( true ) {
    lVar4 = unaff_x20;
    lVar3 = lVar3 + 0x18;
    func_0x0001086b0ad0();
    FUN_10867c53c();
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
    if (param_2 == unaff_x19) break;
    unaff_x20 = param_2;
    if (param_1 != lVar4) {
      unaff_x20 = lVar4;
    }
  }
  lVar1 = lVar4;
  if (param_1 != lVar4) {
    do {
      while( true ) {
        lVar2 = lVar1;
        func_0x0001086b0ad0();
        FUN_10867c53c();
        param_1 = param_1 + 0x18;
        lVar4 = lVar4 + 0x18;
        if (lVar4 == unaff_x19) break;
        lVar1 = lVar4;
        if (param_1 != lVar2) {
          lVar1 = lVar2;
        }
      }
      lVar1 = lVar2;
      lVar4 = lVar2;
    } while (param_1 != lVar2);
  }
  return lVar3;
}



/* Entry: 1086aa798; end: 1086aa7f3;  */

void FUN_1086aa798(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (puVar2 = (undefined8 *)((long)puVar1 + (param_2 - param_4)); puVar2 < param_3;
      puVar2 = puVar2 + 3) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    uVar3 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar3;
    puVar1[2] = puVar2[2];
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar1 = puVar1 + 3;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  func_0x0001086b0210(param_2);
  FUN_1086aa99c();
  return;
}



/* Entry: 1086aa7f4; end: 1086aa8cb;  */

void FUN_1086aa7f4(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x19;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  func_0x000107c324fc();
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (uVar2 == *(ulong *)(param_1 + 0x18)) {
    uVar4 = *unaff_x19;
    uVar3 = unaff_x19[1];
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = (long)(uVar2 - uVar4) / 0x18 << 1;
      if (uVar2 - uVar4 == 0) {
        uVar3 = 1;
      }
      func_0x000107c27ab8(&uStack_60,uVar3,uVar3 >> 2,unaff_x19[4]);
      FUN_1086aa9f4(&uStack_60,unaff_x19[1],unaff_x19[2]);
      uVar4 = unaff_x19[1];
      uVar2 = *unaff_x19;
      uVar5 = unaff_x19[3];
      uVar3 = unaff_x19[2];
      unaff_x19[1] = uStack_58;
      *unaff_x19 = uStack_60;
      unaff_x19[3] = uStack_48;
      unaff_x19[2] = uStack_50;
      uStack_60 = uVar2;
      uStack_58 = uVar4;
      uStack_50 = uVar3;
      uStack_48 = uVar5;
      func_0x000107c27ac0(&uStack_60);
      uVar2 = unaff_x19[2];
    }
    else {
      lVar1 = ((long)(uVar3 - uVar4) / 0x18 + 1) / -2;
      FUN_10867cbd8(uVar3,uVar2,uVar3 + lVar1 * 0x18);
      unaff_x19[1] = unaff_x19[1] + lVar1 * 0x18;
      unaff_x19[2] = uVar2;
    }
  }
  func_0x000107c27994(uVar2);
  unaff_x19[2] = unaff_x19[2] + 0x18;
  return;
}



/* Entry: 1086aa8cc; end: 1086aa97f;  */

undefined8 FUN_1086aa8cc(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  func_0x000107c32464();
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x000107c27abc(param_1 + 0x10);
  lVar3 = *unaff_x21;
  lVar2 = unaff_x20[1];
  unaff_x20[2] = unaff_x20[2] + (unaff_x21[1] - unaff_x19);
  unaff_x21[1] = unaff_x19;
  func_0x000107c27abc(unaff_x21 + 2);
  unaff_x20[1] = lVar2 + ((unaff_x19 - lVar3) / -0x18) * 0x18;
  lVar3 = *unaff_x21;
  unaff_x21[1] = lVar3;
  *unaff_x21 = unaff_x20[1];
  unaff_x20[1] = lVar3;
  lVar3 = unaff_x21[1];
  unaff_x21[1] = unaff_x20[2];
  unaff_x20[2] = lVar3;
  lVar3 = unaff_x21[2];
  unaff_x21[2] = unaff_x20[3];
  unaff_x20[3] = lVar3;
  *unaff_x20 = unaff_x20[1];
  return uVar1;
}



/* Entry: 1086aa980; end: 1086aa99b;  */

void FUN_1086aa980(void)

{
  func_0x0001086b0210();
  FUN_1086aa99c();
  return;
}



/* Entry: 1086aa99c; end: 1086aa9f3;  */

void FUN_1086aa99c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x21;
  
  func_0x0001086b0178();
  for (; param_3 != unaff_x21; param_3 = param_3 + -0x18) {
    func_0x0001086b0ad0();
    func_0x000107c3194c();
  }
  func_0x0001086b0314();
  return;
}



/* Entry: 1086aa9f4; end: 1086aaa4f;  */

void FUN_1086aa9f4(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (param_3 - (long)param_2) / 0x18;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar2 + lVar3 * 3;
  for (lVar3 = lVar3 * 0x18; lVar3 != 0; lVar3 = lVar3 + -0x18) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    uVar4 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar4;
    puVar2[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puVar2 = puVar2 + 3;
    param_2 = param_2 + 3;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  return;
}



/* Entry: 1086aaa50; end: 1086aaa83;  */

void FUN_1086aaa50(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b039c();
    }
    func_0x000107c28fa8();
    *(ulong *)(param_1 + 0x88) = uVar1;
  }
  return;
}


