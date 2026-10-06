/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105984190; end: 1059843eb;  */

void FUN_105984190(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1059843ec; end: 1059844b7;  */

undefined4 * FUN_1059843ec(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_105984c40(param_1 + 2);
  func_0x0001004b4eb0(param_1 + 0x26);
  return param_1;
}



/* Entry: 1059844b8; end: 105984523;  */

void FUN_1059844b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1 + (long)(int)param_2 * 0x30;
  if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
    func_0x00010598443c(param_1,param_2);
  }
  func_0x0001005529b4(lVar1);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  *(int *)(lVar1 + 0x1c) = (int)param_3;
  *(char *)(lVar1 + 0x20) = (char)((ulong)param_3 >> 0x20);
  *(int *)(param_1 + 0xac) = (int)param_2;
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}



/* Entry: 105984524; end: 1059845e7;  */

void FUN_105984524(void)

{
  func_0x000105985034();
  func_0x00010598443c();
  return;
}



/* Entry: 1059845e8; end: 105984a07;  */

void FUN_1059845e8(char *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  undefined1 auStack_108 [40];
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 uStack_d0;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  if ((*(ulong *)(param_1 + 0xb4) >> 0x20 & 1) == 0) goto LAB_1059846fc;
  lVar7 = (long)(int)*(ulong *)(param_1 + 0xb4) * 0x30;
  if ((param_1[lVar7 + 0x30] == '\x01') && (param_1[lVar7 + 0x20] == '\x01')) {
    iVar5 = 1;
    uVar4 = ((byte)param_1[lVar7 + 0x28] ^ 0xffffffff) & 1;
  }
  else {
    uVar4 = 0;
    iVar5 = 0;
  }
  if ((uVar4 | iVar5 << 8) == 0x101) {
    plVar6 = (long *)*param_2;
    FUN_105984a08(&ppuStack_90,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),0);
    func_0x000105985018(*(undefined8 *)(*plVar6 + 0x18));
LAB_105984680:
    func_0x000105985008();
  }
  else {
    if ((param_1[lVar7 + 0x30] == '\0') || ((param_1[lVar7 + 0x20] & 1U) == 0)) {
      plVar6 = (long *)*param_2;
    }
    else {
      plVar6 = (long *)*param_2;
      if ((*(ulong *)(param_1 + lVar7 + 0x24) >> 0x20 & 1) != 0) {
        FUN_105984a08(&ppuStack_90,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),
                      *(ulong *)(param_1 + lVar7 + 0x24) & 0x1ffffffff);
        func_0x000105985018(*(undefined8 *)(*plVar6 + 0x18));
        goto LAB_105984680;
      }
    }
    uVar1 = *(undefined4 *)param_1;
    uVar2 = *(undefined4 *)(param_1 + 4);
    func_0x0001059850c0(param_1,"Unknown");
    FUN_105984b1c(&ppuStack_90,uVar1,uVar2,auStack_108);
    func_0x000105985018(*(undefined8 *)(*plVar6 + 0x18));
    func_0x000105985008();
    func_0x000105984ff8();
  }
LAB_1059846fc:
  if (param_1[0xb0] == '\x01') {
    pcVar8 = param_1 + 0x98;
    func_0x0001005e3518();
    uStack_d0 = 1;
    plVar6 = (long *)*param_2;
    uStack_80 = 0;
    uStack_78 = 0;
    ppuStack_90 = &PTR_FUN_1108c28b8;
    uStack_88 = 0;
    uStack_70 = 0x1c;
    pcStack_d8 = pcVar8;
    func_0x000105985078();
    func_0x00010002b838(auStack_a8);
    func_0x000105985064();
    func_0x0001059850dc();
    func_0x000105985048();
    puVar3 = auStack_c0;
    func_0x00010002b838(puVar3);
    func_0x0001059850a4();
    func_0x000105985070();
    FUN_10596dc7c(auStack_108,puVar3);
    func_0x00010598502c();
    func_0x0001059850c8();
    func_0x000105985008();
    (**(code **)(*plVar6 + 0x20))(plVar6,auStack_108,&pcStack_d8);
    func_0x000100907750(auStack_108);
  }
  iVar5 = *(int *)(param_1 + 4);
  for (lVar7 = 0; lVar7 != 3; lVar7 = lVar7 + 1) {
    pcVar8 = param_1 + 8;
    if (param_1[0x30] == '\x01') {
      if ((param_1[0x20] & 1U) == 0) {
        plVar6 = (long *)*param_2;
        func_0x00010002b838(auStack_108,&UNK_10f31705c);
        func_0x0001059850b0(&ppuStack_90);
        FUN_105984cec();
        (**(code **)(*plVar6 + 0x18))(plVar6,&ppuStack_90);
        func_0x000105985008();
        func_0x000105984ff8();
      }
      else {
        if (param_1[0x28] == '\x01') {
          plVar6 = (long *)*param_2;
          func_0x0001059850b0(&ppuStack_90);
          FUN_105984e7c();
          func_0x0001059850d0(*(undefined8 *)(*plVar6 + 0x18));
        }
        else {
          plVar6 = (long *)*param_2;
          func_0x0001059850b0(&ppuStack_90);
          FUN_105984e7c();
          func_0x0001059850d0(*(undefined8 *)(*plVar6 + 0x18));
        }
        func_0x000105985008();
        func_0x0001005e3518();
        plVar6 = (long *)*param_2;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        ppuStack_90 = &PTR_FUN_1108c28b8;
        uStack_70 = 0x1e;
        puVar3 = auStack_a8;
        pcStack_e0 = pcVar8;
        func_0x000105985078(puVar3);
        func_0x00010002b838();
        func_0x000105985064();
        func_0x0001059850dc();
        func_0x000105985048(auStack_c0);
        func_0x00010002b838();
        func_0x0001059850a4();
        func_0x000100906e58(puVar3,auStack_c0,*(undefined8 *)(extraout_x8 + (long)iVar5 * 8));
        func_0x00010002b838(&pcStack_d8,&DAT_10f317067);
        pcVar8 = "Unknown";
        if ((uint)lVar7 < 3) {
          pcVar8 = (&PTR_DAT_1108c5650)[lVar7];
        }
        func_0x000100906e58(puVar3,&pcStack_d8,pcVar8);
        FUN_10596dc7c(auStack_108,puVar3);
        func_0x000105985010();
        func_0x00010598502c();
        func_0x0001059850c8();
        func_0x000105985008();
        (**(code **)(*plVar6 + 0x20))(plVar6,auStack_108,&pcStack_e0);
        func_0x000100907750(auStack_108);
      }
    }
    param_1 = param_1 + 0x30;
  }
  return;
}



/* Entry: 105984a08; end: 105984b1b;  */

void FUN_105984a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long alStack_58 [4];
  undefined4 uStack_38;
  
  if (param_4 >> 0x20 == 0) {
    func_0x0001059850e8();
    alStack_58[2] = 0;
    alStack_58[3] = 0;
    alStack_58[0] = extraout_x8 + 0x10;
    alStack_58[1] = 0;
    uStack_38 = 0x1a;
    func_0x000105985078();
    func_0x00010002b838(auStack_70);
    func_0x000105985064();
    plVar1 = alStack_58;
    func_0x000100906e58(plVar1,auStack_70,*(undefined8 *)(extraout_x8_00 + (long)(int)param_2 * 8));
    func_0x000105985048();
    func_0x0001059850c0();
    func_0x0001059850a4();
    func_0x000100906e58(plVar1,auStack_88,*(undefined8 *)(extraout_x8_01 + (long)(int)param_3 * 8));
    func_0x000105985094();
    func_0x000105985084();
    func_0x000105984ff8();
    func_0x000105985054();
    func_0x000100907750(alStack_58);
  }
  else {
    func_0x00010002b838(alStack_58,(&PTR_DAT_1108c55a8)[(int)param_4]);
    FUN_105984b1c(param_1,param_2,param_3,alStack_58);
    func_0x000105985010();
  }
  return;
}



/* Entry: 105984b1c; end: 105984c3f;  */

void FUN_105984b1c(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long alStack_58 [4];
  undefined4 uStack_38;
  
  func_0x0001059850e8();
  alStack_58[2] = 0;
  alStack_58[3] = 0;
  alStack_58[0] = extraout_x8 + 0x10;
  alStack_58[1] = 0;
  uStack_38 = 0x1a;
  func_0x000105985078();
  func_0x00010002b838(auStack_70);
  func_0x000105985064();
  func_0x000100906e58(alStack_58,auStack_70,*(undefined8 *)(extraout_x8_00 + (long)param_2 * 8));
  func_0x000105985048();
  puVar1 = auStack_88;
  func_0x00010002b838(puVar1);
  func_0x0001059850a4();
  func_0x000105985070();
  func_0x000105985094();
  func_0x00010002b838(auStack_a0,&DAT_10f685520);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b8,param_4);
  FUN_105973c64(puVar1,auStack_a0,auStack_b8);
  func_0x000105985084();
  func_0x000105984ff8();
  func_0x000105985054();
  func_0x000105985010();
  func_0x00010598502c();
  func_0x000100907750(alStack_58);
  return;
}



/* Entry: 105984c40; end: 105984c67;  */

void FUN_105984c40(long param_1)

{
  FUN_105984c68();
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}



/* Entry: 105984c68; end: 105984c87;  */

void FUN_105984c68(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(undefined1 *)(param_1 + lVar1) = 0;
    ((undefined1 *)(param_1 + lVar1))[0x28] = 0;
    lVar1 = lVar1 + 0x30;
  } while (lVar1 != 0x90);
  return;
}



/* Entry: 105984c88; end: 105984ceb;  */

undefined8 FUN_105984c88(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x0001059850c0(param_1,PTR_DAT_11310f058);
  func_0x000100906e58(param_1,auStack_38,(&PTR_DAT_11310f088)[(uint)param_2 & 0x17]);
  func_0x000105984fec();
  return param_2;
}



/* Entry: 105984cec; end: 105984e7b;  */

void FUN_105984cec(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long alStack_68 [4];
  undefined4 uStack_48;
  
  alStack_68[2] = 0;
  func_0x0001059850e8();
  alStack_68[3] = 0;
  alStack_68[0] = extraout_x8 + 0x10;
  alStack_68[1] = 0;
  uStack_48 = 0x1d;
  func_0x000105985078();
  func_0x00010002b838(auStack_80);
  func_0x000105985064();
  plVar1 = alStack_68;
  func_0x000100906e58(plVar1,auStack_80,*(undefined8 *)(extraout_x8_00 + (long)param_2 * 8));
  func_0x000105985048();
  func_0x00010002b838(auStack_98);
  func_0x0001059850a4();
  func_0x000100906e58(plVar1,auStack_98,*(undefined8 *)(extraout_x8_01 + (long)param_3 * 8));
  puVar2 = auStack_b0;
  func_0x00010002b838(puVar2,&DAT_10f317067);
  func_0x000105985070();
  func_0x000105985094();
  func_0x00010002b838(auStack_c8,&DAT_10f685520);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e0,param_5);
  FUN_105973c64(puVar2,auStack_c8,auStack_e0);
  func_0x000105985084();
  func_0x00010598508c();
  func_0x00010598509c();
  func_0x000105985040();
  func_0x00010598505c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  func_0x000100907750(alStack_68);
  return;
}



/* Entry: 105984e7c; end: 105984feb;  */

void FUN_105984e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  undefined1 *puVar1;
  char *pcVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long alStack_58 [4];
  undefined4 uStack_38;
  
  if (param_5 >> 0x20 == 0) {
    func_0x0001059850e8();
    alStack_58[2] = 0;
    alStack_58[3] = 0;
    alStack_58[0] = extraout_x8 + 0x10;
    alStack_58[1] = 0;
    uStack_38 = 0x1d;
    func_0x000105985078();
    func_0x00010002b838(auStack_70);
    func_0x000105985064();
    func_0x000100906e58(alStack_58,auStack_70,
                        *(undefined8 *)(extraout_x8_00 + (long)(int)param_2 * 8));
    func_0x000105985048();
    puVar1 = auStack_88;
    func_0x00010002b838(puVar1);
    func_0x0001059850a4();
    func_0x000105985070();
    func_0x00010002b838(auStack_a0,&DAT_10f317067);
    if ((uint)param_4 < 3) {
      pcVar2 = (&PTR_DAT_1108c5650)[param_4 & 0xffffffff];
    }
    else {
      pcVar2 = "Unknown";
    }
    func_0x000100906e58(puVar1,auStack_a0,pcVar2);
    func_0x000105985094();
    func_0x000105985084();
    func_0x00010598508c();
    func_0x00010598509c();
    func_0x000105985040();
    func_0x000100907750(alStack_58);
  }
  else {
    func_0x00010002b838(alStack_58,(&PTR_DAT_1108c55a8)[(int)param_5]);
    FUN_105984cec(param_1,param_2,param_3,param_4,alStack_58);
    func_0x00010598505c();
  }
  return;
}



/* Entry: 105984fec; end: 1059850f3;  */

void FUN_105984fec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 1059850f4; end: 1059851fb;  */

void FUN_1059850f4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_1059851fc(&uStack_180);
    param_1[1] = uStack_178;
    *param_1 = uStack_180;
    uStack_180 = 0;
    uStack_178 = 0;
    FUN_10598552c(&uStack_180);
  }
  else {
    FUN_10597f3fc(auStack_50,param_2 + 0x18,param_2 + 0x90);
    FUN_10597f6e8(auStack_60,auStack_50,param_3,param_4);
    FUN_105985218(&uStack_180,param_2);
    FUN_105985290(&uStack_190,auStack_60,&uStack_180);
    param_1[1] = uStack_188;
    *param_1 = uStack_190;
    uStack_190 = 0;
    uStack_188 = 0;
    FUN_105985858(&uStack_190);
    FUN_105985370(&uStack_180);
    func_0x000105985550(auStack_60);
    func_0x00010046e224(auStack_50);
  }
  return;
}



/* Entry: 1059851fc; end: 105985217;  */

void FUN_1059851fc(void)

{
  undefined1 uStack_11;
  
  FUN_1059853a4(&uStack_11);
  return;
}



/* Entry: 105985218; end: 10598528f;  */

void FUN_105985218(long param_1,long param_2)

{
  FUN_10597fc34();
  *(undefined8 *)(param_1 + 0x20) = 1;
  func_0x00010028af84(param_1 + 0x28,param_2 + 0x30);
  func_0x00010028af84(param_1 + 0x48,param_2 + 0x50);
  FUN_10597f514(param_1 + 0x68,param_2 + 0x90);
  return;
}



/* Entry: 105985290; end: 1059852b3;  */

void FUN_105985290(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_105985574(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1059852b4; end: 105985347;  */

void FUN_1059852b4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined8 in_stack_ffffffffffffffc0;
  undefined8 in_stack_ffffffffffffffc8;
  
  lVar1 = param_2 + 0x90;
  func_0x000100902384(lVar1,0x11);
  if ((int)lVar1 != 0) {
    FUN_105985348(&stack0xffffffffffffffc0,param_2,param_3,param_4);
    param_1[1] = in_stack_ffffffffffffffc8;
    *param_1 = in_stack_ffffffffffffffc0;
    FUN_105985a98(&stack0xffffffffffffffc0);
    return;
  }
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_1059851fc(&uStack_180);
    param_1[1] = uStack_178;
    *param_1 = uStack_180;
    uStack_180 = 0;
    uStack_178 = 0;
    FUN_10598552c(&uStack_180);
  }
  else {
    FUN_10597f3fc(auStack_50,param_2 + 0x18,param_2 + 0x90);
    FUN_10597f6e8(auStack_60,auStack_50,param_3,param_4);
    FUN_105985218(&uStack_180,param_2);
    FUN_105985290(&uStack_190,auStack_60,&uStack_180);
    param_1[1] = uStack_188;
    *param_1 = uStack_190;
    uStack_190 = 0;
    uStack_188 = 0;
    FUN_105985858(&uStack_190);
    FUN_105985370(&uStack_180);
    func_0x000105985550(auStack_60);
    func_0x00010046e224(auStack_50);
  }
  return;
}



/* Entry: 105985348; end: 10598536f;  */

void FUN_105985348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10598587c(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 105985370; end: 1059853a3;  */

long FUN_105985370(long param_1)

{
  func_0x000100609698(param_1 + 0x68);
  func_0x0001001148fc(param_1 + 0x48);
  func_0x000105985b5c();
  func_0x0001001a3db4(param_1 + 8);
  func_0x000100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 1059853a4; end: 105985417;  */

void FUN_1059853a4(void)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  puVar2 = auStack_40;
  func_0x000105985adc();
  uVar3 = 1;
  FUN_105985434(auStack_40);
  *puStack_30 = &PTR_FUN_1108c5678;
  puStack_30[1] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_FUN_1108c4e98;
  func_0x000105985b78();
  FUN_105985418();
  FUN_10598551c();
  func_0x000105985ac4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *extraout_x8 = puVar2;
  extraout_x8[1] = uVar3;
  puVar1 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2 + 8;
  }
  if ((puVar1 != (undefined1 *)0x0) &&
     ((*(long *)(puVar1 + 8) == 0 || (*(long *)(*(long *)(puVar1 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_105985418;
    lStack_68 = extraout_x8[1];
    puStack_70 = puVar2;
    puStack_50 = &stack0xfffffffffffffff0;
    if (lStack_68 != 0) {
      do {
        func_0x000105985b00();
      } while (extraout_w11 != 0);
      do {
        func_0x000105985b00();
      } while (extraout_w11_00 != 0);
    }
    func_0x000105985b8c();
    func_0x000105980894();
    FUN_10598552c(&puStack_70);
    return;
  }
  return;
}



/* Entry: 105985418; end: 105985433;  */

void FUN_105985418(long *param_1,long param_2,long param_3)

{
  long lVar1;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_30;
  long lStack_28;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_28 = param_1[1];
    lStack_30 = param_2;
    if (lStack_28 != 0) {
      do {
        func_0x000105985b00();
      } while (extraout_w11 != 0);
      do {
        func_0x000105985b00();
      } while (extraout_w11_00 != 0);
    }
    func_0x000105985b8c();
    func_0x000105980894();
    FUN_10598552c(&lStack_30);
    return;
  }
  return;
}



/* Entry: 105985434; end: 10598545b;  */

long FUN_105985434(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10598545c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10598545c; end: 105985487;  */

void FUN_10598545c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1108c5678;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105985488; end: 10598548b;  */

void FUN_105985488(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c5678;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10598548c; end: 10598549f;  */

void FUN_10598548c(void)

{
  func_0x0001059854a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059854a0; end: 1059854b3;  */

void FUN_1059854a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105985afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1059854b4; end: 10598551b;  */

void FUN_1059854b4(long param_1,long param_2,undefined8 param_3)

{
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_28 = *(long *)(param_1 + 8);
    uStack_30 = param_3;
    if (lStack_28 != 0) {
      do {
        func_0x000105985b00();
      } while (extraout_w11 != 0);
      do {
        func_0x000105985b00();
      } while (extraout_w11_00 != 0);
    }
    func_0x000105985b8c();
    func_0x000105980894();
    FUN_10598552c(&uStack_30);
    return;
  }
  return;
}



/* Entry: 10598551c; end: 10598552b;  */

void FUN_10598551c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10598552c; end: 105985573;  */

void FUN_10598552c(long param_1)

{
  func_0x000105985b30();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105985574; end: 1059855e7;  */

void FUN_105985574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 *extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  puVar2 = auStack_50;
  func_0x000105985adc();
  FUN_105985604(auStack_50,1);
  FUN_10598565c(uStack_40,param_2,param_3);
  func_0x000105985b78();
  FUN_1059855e8();
  FUN_105985848();
  func_0x000105985ac4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105985b6c();
  FUN_105985848();
  func_0x000105985b10();
  *extraout_x8 = puVar2;
  extraout_x8[1] = param_2;
  puVar1 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2 + 8;
  }
  if ((puVar1 != (undefined1 *)0x0) &&
     ((*(long *)(puVar1 + 8) == 0 || (*(long *)(*(long *)(puVar1 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_1059855e8;
    lStack_78 = extraout_x8[1];
    puStack_80 = puVar2;
    puStack_60 = &stack0xfffffffffffffff0;
    if (lStack_78 != 0) {
      do {
        func_0x000105985b00();
      } while (extraout_w11 != 0);
      do {
        func_0x000105985b00();
      } while (extraout_w11_00 != 0);
    }
    func_0x000105985b8c();
    FUN_105985824();
    FUN_105985858(&puStack_80);
    return;
  }
  return;
}



/* Entry: 1059855e8; end: 105985603;  */

void FUN_1059855e8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_30;
  long lStack_28;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_28 = param_1[1];
    lStack_30 = param_2;
    if (lStack_28 != 0) {
      do {
        func_0x000105985b00();
      } while (extraout_w11 != 0);
      do {
        func_0x000105985b00();
      } while (extraout_w11_00 != 0);
    }
    func_0x000105985b8c();
    FUN_105985824();
    FUN_105985858(&lStack_30);
    return;
  }
  return;
}



/* Entry: 105985604; end: 10598562b;  */

long FUN_105985604(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10598562c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10598562c; end: 10598565b;  */

undefined8 * FUN_10598562c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xba2e8ba2e8ba2f) {
    puVar1 = (undefined8 *)(param_2 * 0x160);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108c56c8;
  FUN_1059856b4(param_1 + 3);
  return param_1;
}



/* Entry: 10598565c; end: 105985693;  */

undefined8 * FUN_10598565c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108c56c8;
  FUN_1059856b4(param_1 + 3);
  return param_1;
}



/* Entry: 105985694; end: 105985697;  */

void FUN_105985694(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c56c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105985698; end: 1059856ab;  */

void FUN_105985698(void)

{
  func_0x0001059857b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059856ac; end: 1059856b3;  */

void FUN_1059856ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105985afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1059856b4; end: 10598572f;  */

undefined8 FUN_1059856b4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_150 [288];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_105985730(auStack_150,param_3);
  FUN_105985ba0(param_1,&uStack_30,auStack_150);
  FUN_105985370(auStack_150);
  func_0x000105985550(&uStack_30);
  return param_1;
}



/* Entry: 105985730; end: 1059857a3;  */

long FUN_105985730(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1059857a4();
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  func_0x00010028af84(lVar1 + 0x28,param_2 + 0x28);
  func_0x00010028af84(param_1 + 0x48,param_2 + 0x48);
  func_0x000100601f8c(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



/* Entry: 1059857a4; end: 1059857bb;  */

undefined8 * FUN_1059857a4(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_1108c9350;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_2 = param_2 + 0x10;
  func_0x0001002a0e60(param_2,0);
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 1059857bc; end: 105985823;  */

void FUN_1059857bc(long param_1,long param_2,undefined8 param_3)

{
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_28 = *(long *)(param_1 + 8);
    uStack_30 = param_3;
    if (lStack_28 != 0) {
      do {
        func_0x000105985b00();
      } while (extraout_w11 != 0);
      do {
        func_0x000105985b00();
      } while (extraout_w11_00 != 0);
    }
    func_0x000105985b8c();
    FUN_105985824();
    FUN_105985858(&uStack_30);
    return;
  }
  return;
}



/* Entry: 105985824; end: 105985847;  */

void FUN_105985824(long param_1)

{
  func_0x000105985b30();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 105985848; end: 105985857;  */

void FUN_105985848(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105985858; end: 10598587b;  */

void FUN_105985858(long param_1)

{
  func_0x000105985b30();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10598587c; end: 1059858ff;  */

undefined1 *
FUN_10598587c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long *unaff_x19;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  puVar2 = auStack_50;
  func_0x000105985adc();
  FUN_105985900(auStack_50,1);
  FUN_105985954(lStack_40,param_2,param_3,param_4);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *unaff_x19 = lVar1 + 0x18;
  unaff_x19[1] = lVar1;
  func_0x000105985a88();
  func_0x000105985ac4();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000105985b6c();
  func_0x000105985a88();
  func_0x000105985b10();
  *(undefined8 *)(puVar2 + 8) = param_2;
  puVar3 = puVar2;
  FUN_105985928();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 105985900; end: 105985927;  */

long FUN_105985900(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_105985928();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 105985928; end: 105985953;  */

undefined8 * FUN_105985928(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    puVar1 = (undefined8 *)(param_2 * 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108c5718;
  FUN_1059859ac(param_1 + 3);
  return param_1;
}



/* Entry: 105985954; end: 10598598b;  */

undefined8 * FUN_105985954(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108c5718;
  FUN_1059859ac(param_1 + 3);
  return param_1;
}



/* Entry: 10598598c; end: 10598598f;  */

void FUN_10598598c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c5718;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105985990; end: 1059859a3;  */

void FUN_105985990(void)

{
  FUN_105985a7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059859a4; end: 1059859ab;  */

void FUN_1059859a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105985afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1059859ac; end: 105985a7b;  */

undefined8
FUN_1059859ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [200];
  
  FUN_10598036c(auStack_f8);
  uStack_108 = param_3[1];
  uStack_110 = *param_3;
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
  uStack_118 = param_4[1];
  uStack_120 = *param_4;
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
  FUN_10598013c(param_1,auStack_f8,&uStack_110,&uStack_120);
  func_0x00010048b850(&uStack_120);
  func_0x000100450be4(&uStack_110);
  func_0x00010595f16c(auStack_f8);
  return param_1;
}



/* Entry: 105985a7c; end: 105985a97;  */

void FUN_105985a7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c5718;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105985a98; end: 105985abb;  */

void FUN_105985a98(long param_1)

{
  func_0x000105985b30();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105985abc; end: 105985b9f;  */

void FUN_105985abc(void)

{
  return;
}



/* Entry: 105985ba0; end: 105985c17;  */

undefined8 * FUN_105985ba0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108c5768;
  uVar1 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_105985730(param_1 + 5,param_3);
  return param_1;
}



/* Entry: 105985c18; end: 105985f27;  */

void FUN_105985c18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *plVar7;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [32];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [32];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 auStack_128 [96];
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10597f868(auStack_128,param_2,param_3,param_4,param_1 + 0x28);
  uStack_178 = *(undefined8 *)(param_1 + 0x10);
  uStack_180 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      FUN_105986220();
    } while (extraout_w10 != 0);
  }
  FUN_10597f0f8(auStack_170,param_2);
  uStack_148 = param_5[1];
  uStack_150 = *param_5;
  if (param_5[1] != 0) {
    do {
      FUN_105986220();
    } while (extraout_w10_00 != 0);
  }
  uStack_1b8 = *(undefined8 *)(param_1 + 0x10);
  uStack_1c0 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      FUN_105986220();
    } while (extraout_w10_01 != 0);
  }
  FUN_10597f0f8(auStack_1b0,param_2);
  uStack_188 = param_5[1];
  uStack_190 = *param_5;
  if (param_5[1] != 0) {
    do {
      FUN_105986220();
    } while (extraout_w10_02 != 0);
  }
  puVar3 = (undefined8 *)0x80;
  __Znwm();
  plVar7 = puVar3 + 1;
  *plVar7 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_1108c57d8;
  pcStack_98 = FUN_105985ffc;
  ppuStack_90 = &PTR_FUN_1108c5818;
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  puVar4[1] = uStack_178;
  *puVar4 = uStack_180;
  uStack_180 = 0;
  uStack_178 = 0;
  FUN_10597f0f8(puVar4 + 2,auStack_170);
  puVar4[7] = uStack_148;
  puVar4[6] = uStack_150;
  uStack_150 = 0;
  uStack_148 = 0;
  pcStack_c8 = FUN_1059860d0;
  ppuStack_c0 = &PTR_FUN_1108c5830;
  puVar5 = (undefined8 *)0x40;
  puStack_88 = puVar4;
  __Znwm();
  puVar5[1] = uStack_1b8;
  *puVar5 = uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  FUN_10597f0f8(puVar5 + 2,auStack_1b0);
  puVar5[7] = uStack_188;
  puVar5[6] = uStack_190;
  uStack_190 = 0;
  uStack_188 = 0;
  puVar4 = puVar3 + 3;
  *puVar4 = &PTR_DAT_1108c5858;
  puVar3[4] = pcStack_98;
  (*(code *)ppuStack_90[2])(puVar3 + 5,&ppuStack_90);
  puVar3[10] = FUN_1059860d0;
  puVar3[0xb] = &PTR_FUN_1108c5830;
  puVar3[0xc] = puVar5;
  uStack_b8 = 0;
  FUN_105986120(&ppuStack_c0);
  func_0x000105986290(ppuStack_90);
  puStack_138 = puVar4;
  puStack_130 = puVar3;
  FUN_105985f28(&uStack_1c0);
  func_0x000105985f50(&uStack_180);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_1d0 = puVar4;
  puStack_1c8 = puVar3;
  FUN_105989e70(uVar6,auStack_128,param_1 + 0x90,&puStack_1d0);
  func_0x0001059861f8(&puStack_1d0);
  func_0x0001059861d0(&puStack_138);
  FUN_10599c348(auStack_128);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x0001059861f8(&puStack_1d0);
    func_0x0001059861d0(&puStack_138);
    do {
      FUN_10599c348(auStack_128);
      func_0x00010598629c();
      FUN_105985824(&uStack_1c0);
      func_0x000105985f50(&uStack_180);
    } while( true );
  }
  return;
}



/* Entry: 105985f28; end: 105985f77;  */

long FUN_105985f28(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000105986284();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x000105985b30();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 105985f78; end: 105985f7b;  */

undefined8 * FUN_105985f78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c5768;
  FUN_105985370(param_1 + 5);
  func_0x000105985550(param_1 + 3);
  FUN_105985824(param_1 + 1);
  return param_1;
}



/* Entry: 105985f7c; end: 105985f8f;  */

void FUN_105985f7c(void)

{
  FUN_105985f90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105985f90; end: 105985fd3;  */

undefined8 * FUN_105985f90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c5768;
  FUN_105985370(param_1 + 5);
  func_0x000105985550(param_1 + 3);
  FUN_105985824(param_1 + 1);
  return param_1;
}



/* Entry: 105985fd4; end: 105985fd7;  */

void FUN_105985fd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c57d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105985fd8; end: 105985feb;  */

void FUN_105985fd8(void)

{
  FUN_1059861c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105985fec; end: 105985ffb;  */

void FUN_105985fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105985ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105985ffc; end: 10598606b;  */

void FUN_105985ffc(void)

{
  long unaff_x19;
  long *plVar1;
  ulong unaff_x20;
  undefined8 uStack_30;
  
  func_0x000105986248();
  if (uStack_30 != 0) {
    plVar1 = *(long **)(unaff_x19 + 0x30);
    func_0x00010597fbfc();
    if (unaff_x20 >> 0x20 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    else {
      (**(code **)(*plVar1 + 0x18))(plVar1,unaff_x20);
    }
  }
  func_0x000105986264();
  return;
}



/* Entry: 10598606c; end: 1059860ab;  */

void FUN_10598606c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1059860ac; end: 1059860cb;  */

void FUN_1059860ac(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000105985f50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1059860cc; end: 1059860cf;  */

void FUN_1059860cc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1059860d0; end: 10598611f;  */

void FUN_1059860d0(void)

{
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uStack_30;
  
  func_0x000105986248();
  if (uStack_30 != 0) {
    func_0x00010597fbd8();
    (**(code **)(**(long **)(unaff_x19 + 0x30) + 0x18))(*(long **)(unaff_x19 + 0x30),unaff_x20);
  }
  func_0x000105986264();
  return;
}



/* Entry: 105986120; end: 10598613f;  */

void FUN_105986120(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_105985f28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105986140; end: 105986147;  */

void FUN_105986140(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105986148; end: 10598615b;  */

void FUN_105986148(void)

{
  FUN_10598617c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598615c; end: 10598617b;  */

void FUN_10598615c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105986168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_3);
  return;
}



/* Entry: 10598617c; end: 1059861bf;  */

undefined8 * FUN_10598617c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108c5858;
  (**(code **)param_1[8])();
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 1059861c0; end: 1059861cf;  */

void FUN_1059861c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c57d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1059861d0; end: 10598621f;  */

long FUN_1059861d0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105986220; end: 1059862a3;  */

void FUN_105986220(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1059862a4; end: 105986317;  */

undefined8 *
FUN_1059862a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = &PTR_FUN_1108c58d8;
  param_1[1] = uVar1;
  (**(code **)(param_2[1] + 0x10))(param_1 + 2);
  param_1[7] = *param_3;
  (**(code **)(param_3[1] + 0x10))(param_1 + 8,param_3 + 1);
  uVar1 = *param_4;
  param_1[0xe] = param_4[1];
  param_1[0xd] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  return param_1;
}



/* Entry: 105986318; end: 10598642f;  */

undefined1 * FUN_105986318(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_e0 [64];
  char *pcStack_a0;
  code *pcStack_90;
  undefined **ppuStack_88;
  
  puVar2 = auStack_e0;
  func_0x000105986718();
  if (extraout_x8 != 0) {
    do {
      func_0x000105986708();
    } while (extraout_w10 != 0);
  }
  func_0x0001059866c0(*(undefined8 *)(param_2 + 0x10));
  pcStack_a0 = "onComplete";
  func_0x00010028c49c();
  lVar3 = *(long *)(unaff_x21 + 0x10);
  __ZNSt3__15mutex4lockEv(lVar3 + 8);
  lVar3 = *(long *)(lVar3 + 0x70);
  pcStack_90 = FUN_105986600;
  ppuStack_88 = &PTR_FUN_1108c5920;
  plVar1 = (long *)0x48;
  __Znwm();
  func_0x000105986694();
  *(char **)(unaff_x20 + 0x40) = pcStack_a0;
  func_0x000105986770();
  func_0x000105986684();
  func_0x000105986738();
  if (lVar3 == 0) {
    func_0x00010598677c();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000105986708();
      } while (extraout_w10_00 != 0);
    }
    (**(code **)(*plVar1 + 0x10))();
    func_0x000105986750();
  }
  FUN_105986430();
  func_0x000105986758();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105986750();
    FUN_105986430(auStack_e0);
    __Unwind_Resume(puVar2);
    func_0x000105986740();
    if (*(long *)(puVar2 + 8) != 0) {
      func_0x0001000df548();
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 105986430; end: 10598644f;  */

void FUN_105986430(void)

{
  long unaff_x19;
  
  func_0x000105986740();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105986450; end: 105986577;  */

undefined1 * FUN_105986450(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  long unaff_x23;
  undefined1 auStack_e0 [64];
  undefined *puStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  
  puVar2 = auStack_e0;
  lVar3 = param_2;
  func_0x000105986718();
  if (extraout_x8 != 0) {
    do {
      func_0x000105986708();
    } while (extraout_w10 != 0);
  }
  func_0x0001059866c0(*(undefined8 *)(lVar3 + 0x40));
  puStack_a0 = &DAT_10f6846a0;
  uStack_98 = (undefined4)param_2;
  func_0x00010028c49c();
  lVar3 = *(long *)(unaff_x21 + 0x10);
  __ZNSt3__15mutex4lockEv(lVar3 + 8);
  lVar3 = *(long *)(lVar3 + 0x70);
  uStack_90 = 0x105986640;
  ppuStack_88 = &PTR_FUN_1108c5938;
  plVar1 = (long *)0x50;
  __Znwm();
  func_0x000105986694();
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x23 + 0x40);
  *(undefined4 *)(unaff_x20 + 0x48) = *(undefined4 *)(unaff_x23 + 0x48);
  func_0x000105986770();
  func_0x000105986684();
  func_0x000105986738();
  if (lVar3 == 0) {
    func_0x00010598677c();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000105986708();
      } while (extraout_w10_00 != 0);
    }
    (**(code **)(*plVar1 + 0x10))();
    func_0x000105986750();
  }
  FUN_105986578();
  func_0x000105986758();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105986750();
    FUN_105986578(auStack_e0);
    __Unwind_Resume(puVar2);
    func_0x000105986740();
    if (*(long *)(puVar2 + 8) != 0) {
      func_0x0001000df548();
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 105986578; end: 105986597;  */

void FUN_105986578(void)

{
  long unaff_x19;
  
  func_0x000105986740();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105986598; end: 10598659b;  */

undefined8 * FUN_105986598(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c58d8;
  func_0x000100558bb4(param_1 + 0xd);
  (**(code **)param_1[8])();
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 10598659c; end: 1059865af;  */

void FUN_10598659c(void)

{
  FUN_1059865b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059865b0; end: 1059865ff;  */

undefined8 * FUN_1059865b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c58d8;
  func_0x000100558bb4(param_1 + 0xd);
  (**(code **)param_1[8])();
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 105986600; end: 10598661b;  */

void FUN_105986600(long param_1)

{
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 8) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105986618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 10598661c; end: 10598663b;  */

void FUN_10598661c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_105986430();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10598663c; end: 10598665f;  */

void FUN_10598663c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105986660; end: 10598667f;  */

void FUN_105986660(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_105986578();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105986680; end: 10598678f;  */

void FUN_105986680(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105986790; end: 1059868e7;  */

undefined8 FUN_105986790(int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [28];
  int iStack_54;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = 1;
  switch(param_1) {
  case 1:
    break;
  case 2:
  case 5:
  case 0xb:
    uVar2 = 0;
    break;
  case 8:
    uVar2 = 4;
    break;
  case 0xc:
    uVar2 = 3;
    break;
  default:
    if (param_1 != -0x80000000 && param_1 != 0x7fffffff) {
      return 1;
    }
  case 0:
  case 3:
  case 4:
  case 6:
  case 7:
  case 9:
  case 10:
    uVar2 = 0x10;
    iStack_54 = param_1;
    ___cxa_allocate_exception(0x10);
    puStack_50 = &UNK_10f3170c0;
    uStack_48 = 0;
    uStack_40 = 0x29;
    uStack_38 = 0;
    func_0x0001003a91d4(&UNK_10f3170ba);
    func_0x0001003a9204(auStack_88);
    FUN_105986a00(&puStack_50,&iStack_54,auStack_88);
    func_0x0001003a91d4(&UNK_10f317092);
    func_0x0001003a9204(auStack_70);
    FUN_1052768d8(uVar2,auStack_70);
    ___cxa_throw(uVar2,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1059868ac);
    (*pcVar1)();
  }
  return uVar2;
}



/* Entry: 1059868e8; end: 1059869ff;  */

undefined4 FUN_1059868e8(int param_1)

{
  if (param_1 - 1U < 7) {
    return *(undefined4 *)(&UNK_10ddc6e3c + (ulong)(param_1 - 1U) * 4);
  }
  return 1;
}



/* Entry: 105986a00; end: 105986a43;  */

undefined8 * FUN_105986a00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x0001005d466c();
  *param_1 = param_2;
  param_1[1] = FUN_105976768;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 105986a44; end: 105986b1b;  */

void FUN_105986a44(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  long lStack_48;
  long lStack_40;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  func_0x0001098f428c(&lStack_48);
  for (lVar2 = lStack_48; lVar2 != lStack_40; lVar2 = lVar2 + 0x18) {
    lVar1 = param_2;
    func_0x0001098f422c(param_2,lVar2);
    if (*(char *)(lVar1 + 8) == '\x04') {
      func_0x0001098f3384(auStack_60);
      func_0x00010060413c(param_1,lVar2);
      func_0x000100066230();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
    }
  }
  func_0x0001000e30f4(&lStack_48);
  return;
}



/* Entry: 105986b1c; end: 105986c7b;  */

void FUN_105986b1c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [40];
  byte bStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x000100114fd0(auStack_a8,param_2,&uStack_78);
  if ((bStack_80 & 1) != 0) {
    FUN_105986a44(param_1,auStack_a8);
    func_0x00010011a53c(auStack_a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
    return;
  }
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  puStack_60 = &UNK_10f317265;
  uStack_58 = 0;
  uStack_50 = 0x26;
  uStack_48 = 0;
  func_0x0001003a91d4(&UNK_10f31725f);
  func_0x0001003a9204(auStack_d8);
  FUN_105986d04(&puStack_60,&uStack_78,param_2,auStack_d8);
  func_0x0001003a91d4(&UNK_10f317206);
  func_0x0001003a9204(auStack_c0);
  FUN_1052768d8(uVar2,auStack_c0);
  ___cxa_throw(uVar2,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105986c20);
  (*pcVar1)();
}



/* Entry: 105986c7c; end: 105986d03;  */

void FUN_105986c7c(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_58 [40];
  
  if ((bRam000000011381a5a0 & 1) == 0) {
    iVar1 = 0x1381a5a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105986d70(0x11381a468,0x1000);
      ___cxa_guard_release(0x11381a5a0);
    }
  }
  func_0x0001098f3d8c(0x11381a470);
  func_0x00010002b838(auStack_58,&UNK_10f3172b7);
  FUN_105986ffc(0x11381a4a0,auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  __ZNSt3__18ios_base5clearEj(*(long *)(lRam000000011381a498 + -0x18) + 0x11381a498,0);
  plVar3 = (long *)(param_2 + 0x10);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    func_0x0001001193c4(auStack_58,plVar3 + 5);
    uVar2 = 0x11381a470;
    func_0x0001098f426c(0x11381a470,plVar3 + 2);
    func_0x0001001150b4(auStack_58,uVar2);
    func_0x0001001151c0(auStack_58);
  }
  (**(code **)(*plRam000000011381a468 + 0x10))(plRam000000011381a468,0x11381a470,0x11381a498);
  FUN_105491b64(param_1,0x11381a4a0);
  return;
}



/* Entry: 105986d04; end: 105986d6f;  */

undefined8 *
FUN_105986d04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  func_0x0001005d466c();
  uVar2 = uVar1;
  func_0x0001005d466c();
  uVar3 = uVar2;
  func_0x0001005d466c();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  param_1[4] = param_4;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 105986d70; end: 105986eff;  */

long * FUN_105986d70(long *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_50 [48];
  
  puVar1 = auStack_90;
  puVar2 = auStack_90;
  *param_1 = 0;
  *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xfe00;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  FUN_1054901a8(param_1 + 6);
  func_0x0001098f5ff8(auStack_50);
  func_0x0001098f3160(&uStack_78,&UNK_10f3172b7);
  func_0x00010002b838(auStack_90,&UNK_10f3172b8);
  func_0x00010598702c();
  func_0x0001001150b4(&uStack_78,puVar1);
  func_0x000105987024();
  func_0x000105987038();
  func_0x0001098f3160(&uStack_78,&DAT_10f684ec4);
  func_0x00010002b838(auStack_90,&UNK_10f3172c4);
  func_0x00010598702c();
  func_0x0001001150b4(&uStack_78,puVar2);
  func_0x000105987024();
  func_0x000105987038();
  puVar1 = auStack_50;
  func_0x0001098f62d4();
  lVar3 = *param_1;
  *param_1 = (long)puVar1;
  if (lVar3 != 0) {
    func_0x000105987040();
  }
  if (param_2 != 0) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&uStack_78,param_2);
    func_0x000100552dc8(param_1 + 7,&uStack_78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
  }
  func_0x0001098f6274(auStack_50);
  return param_1;
}



/* Entry: 105986f00; end: 105986ffb;  */

void FUN_105986f00(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 auStack_58 [40];
  
  func_0x0001098f3d8c(param_2 + 1);
  func_0x00010002b838(auStack_58,&UNK_10f3172b7);
  FUN_105986ffc(param_2 + 7,auStack_58);
  plVar1 = param_2 + 6;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  __ZNSt3__18ios_base5clearEj((long)plVar1 + *(long *)(*plVar1 + -0x18),0);
  plVar3 = (long *)(param_3 + 0x10);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    func_0x0001001193c4(auStack_58,plVar3 + 5);
    puVar2 = param_2 + 1;
    func_0x0001098f426c(puVar2,plVar3 + 2);
    func_0x0001001150b4(auStack_58,puVar2);
    func_0x0001001151c0(auStack_58);
  }
  (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,param_2 + 1,plVar1);
  FUN_105491b64(param_1,param_2 + 7);
  return;
}


