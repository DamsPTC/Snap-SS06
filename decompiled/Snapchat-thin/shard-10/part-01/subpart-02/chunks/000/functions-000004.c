/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10777f460; end: 10777f4cb;  */

void FUN_10777f460(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_a8 [16];
  undefined8 *puStack_98;
  undefined1 auStack_48 [40];
  
  if ((ulong)(param_1[2] - *param_1 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      func_0x0001074b33a0();
      plVar1 = param_1;
      func_0x00010777f9fc();
      func_0x00010777f924();
      func_0x00010777fa9c();
      puVar3 = (undefined8 *)plVar1[1];
      if (puVar3 < (undefined8 *)plVar1[2]) {
        uVar4 = *unaff_x20;
        puVar3[1] = unaff_x20[1];
        *puVar3 = uVar4;
        puVar3 = puVar3 + 2;
      }
      else {
        plVar2 = param_1;
        func_0x0001074b331c(param_1,((long)puVar3 - *param_1 >> 4) + 1);
        func_0x0001074b33ac(auStack_a8,plVar2,param_1[1] - *param_1 >> 4,plVar1 + 2);
        uVar4 = *unaff_x20;
        puStack_98[1] = unaff_x20[1];
        *puStack_98 = uVar4;
        puStack_98 = puStack_98 + 2;
        func_0x00010777fa24();
        puVar3 = (undefined8 *)param_1[1];
        func_0x00010777f9fc();
      }
      param_1[1] = (long)puVar3;
      return;
    }
    func_0x0001074b33ac(auStack_48,param_2,param_1[1] - *param_1 >> 4);
    func_0x00010777fa24();
    func_0x00010777f9fc();
  }
  return;
}



/* Entry: 10777f884; end: 10777f887;  */

void FUN_10777f884(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d6c40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10777fcac; end: 10777fcb7;  */

void FUN_10777fcac(void)

{
  uint in_stack_000000c0;
  
  if (in_stack_000000c0 != 0xffffffff) {
    func_0x000107285594((&PTR_DAT_110996f18)[in_stack_000000c0]);
  }
  return;
}



/* Entry: 107780018; end: 107780153;  */

undefined8 **
FUN_107780018(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined1 uVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined1 *unaff_x23;
  undefined1 unaff_w24;
  long unaff_x25;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *apuStack_e0 [3];
  char cStack_c8;
  undefined1 auStack_c0 [24];
  char cStack_a8;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  ppuVar2 = apuStack_e0;
  ppuVar3 = apuStack_e0;
  func_0x000107781398();
  uStack_48 = extraout_x8;
  func_0x000107264c5c();
  func_0x00010787759c(apuStack_e0);
  uVar1 = cStack_c8 == '\x01';
  if ((bool)uVar1) {
    unaff_x23 = auStack_c0;
    func_0x000104c2fe00(auStack_c0,param_2);
    func_0x00010028af84(auStack_88,param_3);
    func_0x00010028af84(auStack_68,param_4);
    FUN_107780f3c(param_1,auStack_c0);
    func_0x000107473150(auStack_c0);
  }
  else {
    func_0x00010028af84(auStack_c0,param_2 + 0x40);
    func_0x0001001148fc(auStack_c0);
    uVar1 = cStack_a8 == '\x01';
    if ((bool)uVar1) {
      func_0x000104c2fe00(auStack_c0,param_2);
      func_0x000107478ef8(param_1,auStack_c0);
    }
    else {
      func_0x000104c2fe00(auStack_c0,param_2);
      func_0x00010778100c(param_1,auStack_c0);
    }
    func_0x000107781428();
  }
  func_0x0001001148fc();
  func_0x000107781384(uStack_48);
  if ((bool)uVar1) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  func_0x0001001148fc(unaff_x23 + 0x38);
  func_0x000107781428();
  func_0x0001001148fc(apuStack_e0);
  func_0x0001077813bc();
  func_0x000107781450();
  func_0x0001073243b8((undefined1 *)((long)ppuVar3 + 0x20),unaff_x25 + 8);
  *(undefined1 *)((long)ppuVar2 + 0x90) = unaff_w24;
  uVar5 = param_6[1];
  uVar4 = *param_6;
  uVar6 = param_6[2];
  *(undefined8 *)((long)ppuVar2 + 0xb0) = param_6[3];
  *(undefined8 *)((long)ppuVar2 + 0xa8) = uVar6;
  *(undefined8 *)((long)ppuVar2 + 0xa0) = uVar5;
  *(undefined8 *)((long)ppuVar2 + 0x98) = uVar4;
  func_0x000107780cbc((undefined1 *)((long)ppuVar2 + 0xb8),param_7);
  func_0x00010727fe7c((undefined1 *)((long)ppuVar2 + 0xf8),param_8);
  func_0x000107780dfc((undefined1 *)((long)ppuVar2 + 0x130),param_9);
  uVar4 = *apuStack_e0[0];
  *apuStack_e0[0] = 0;
  *(undefined8 *)((long)ppuVar2 + 0x1c8) = uVar4;
  return (undefined8 **)(undefined1 *)ppuVar2;
}



/* Entry: 1077808d4; end: 107780973;  */

/* WARNING: Possible PIC construction at 0x000107780b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107780b70) */
/* WARNING: Removing unreachable block (ram,0x000107780b9c) */
/* WARNING: Removing unreachable block (ram,0x000107780b74) */

long **** FUN_1077808d4(long ****param_1,long param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  long ***ppplVar4;
  long ****pppplVar5;
  long **UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 auStack_170 [32];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *apuStack_130 [2];
  long **applStack_120 [2];
  undefined1 auStack_110 [56];
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long ***ppplStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  pppplVar5 = param_1;
  func_0x000107781398();
  *pppplVar5 = (long ***)&UNK_10e52b660;
  pppplVar5[1] = (long ***)0x0;
  pppplVar5[2] = (long ***)0x0;
  pppplVar5[3] = (long ***)0x0;
  uStack_80 = 0;
  ppplStack_88 = (long ***)pppplVar5;
  uStack_38 = extraout_x8;
  for (; bVar2 = param_2 == param_3, !bVar2; param_2 = param_2 + 0x38) {
    func_0x000104c2fe00(auStack_70,param_2);
    pppplVar5 = &ppplStack_88;
    func_0x000107761870();
    func_0x000107781428();
  }
  func_0x000107781384(uStack_38);
  if (bVar2) {
    return pppplVar5;
  }
  ___stack_chk_fail();
  func_0x000107781428();
  func_0x000107261dac();
  func_0x000107781400();
  pppplVar5 = param_1;
  func_0x000107781398();
  uVar3 = *(char *)(pppplVar5 + 0x38) == '\x01';
  if ((bool)uVar3) {
    auStack_110[0] = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = extraout_x8_01;
    func_0x0001072d124c(auStack_170);
    func_0x000107781440(applStack_120,param_1 + 0x26);
    func_0x000107781418();
    func_0x000107781438();
    auStack_110[0] = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x0001072d124c(auStack_170);
    func_0x000107781440(apuStack_130,param_1 + 0x2f);
    func_0x000107781418();
    func_0x000107781438();
    FUN_1077808d4(auStack_110,*applStack_120[0],applStack_120[0][1]);
    func_0x0001077509dc(&uStack_140,auStack_110);
    extraout_x8_00[1] = uStack_138;
    *extraout_x8_00 = uStack_140;
    uStack_140 = 0;
    uStack_138 = 0;
    *(undefined4 *)(extraout_x8_00 + 2) = 2;
    FUN_1077808d4(auStack_170,*apuStack_130[0],apuStack_130[0][1]);
    func_0x0001077509dc(&uStack_150,auStack_170);
    extraout_x8_00[4] = uStack_148;
    extraout_x8_00[3] = uStack_150;
    uStack_150 = 0;
    uStack_148 = 0;
    *(undefined4 *)(extraout_x8_00 + 5) = 2;
    *(undefined4 *)(extraout_x8_00 + 8) = 1;
    func_0x0001073e0028(&uStack_150);
    func_0x000107261dac(auStack_170);
    func_0x0001073e0028(&uStack_140);
    func_0x000107261dac(auStack_110);
    func_0x00010726b09c(apuStack_130);
    pppplVar5 = (long ****)applStack_120;
    func_0x00010726b09c();
    func_0x000107781384(uStack_c8);
    if ((bool)uVar3) {
      return pppplVar5;
    }
  }
  else {
    pppplVar5 = (long ****)param_1[0x39];
    UNRECOVERED_JUMPTABLE = (*pppplVar5)[3];
    func_0x000107781384(extraout_x8_01);
    if ((bool)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x000107780adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)(extraout_x8_00);
      return pppplVar5;
    }
  }
  ___stack_chk_fail();
  func_0x0001073ebb78(extraout_x8_00);
  func_0x0001073e0028(&uStack_140);
  func_0x000107261dac(auStack_110);
  func_0x00010726b09c(apuStack_130);
  ppplVar4 = applStack_120;
  func_0x00010726b09c();
  func_0x000107781400();
  if (*(char *)(ppplVar4 + 0x38) == '\x01') {
    if (*(int *)(ppplVar4 + 0x2e) != 0) {
      uVar1 = *(byte *)(ppplVar4 + 0x28) >> 1 & 1;
      if (*(int *)(ppplVar4 + 0x2e) == 1) {
        uVar1 = 1;
      }
      return (long ****)(ulong)uVar1;
    }
    return (long ****)0x1;
  }
  pppplVar5 = (long ****)ppplVar4[0x39];
                    /* WARNING: Could not recover jumptable at 0x000107780b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*pppplVar5)[4])();
  return pppplVar5;
}



/* Entry: 107780dac; end: 107780dcf;  */

void FUN_107780dac(void)

{
  return;
}



/* Entry: 107780f3c; end: 107780f63;  */

long FUN_107780f3c(long param_1)

{
  func_0x000107780f64(param_1 + 8);
  return param_1;
}



/* Entry: 107781148; end: 107781173;  */

void FUN_107781148(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x000107781484();
  *param_1 = &PTR_DAT_1109d6cc0;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 10778126c; end: 10778127f;  */

void FUN_10778126c(long param_1)

{
  func_0x000107780ec8(param_1 + 0x168);
  func_0x000107410b98(param_1 + 0x100);
  func_0x000107266af0(param_1 + 0xa0);
  func_0x00010724b3d8(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 10778149c; end: 1077814e7;  */

void FUN_10778149c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x000104c318bc();
  lVar4 = param_3[1];
  uVar5 = *param_3;
  *(undefined8 *)(param_1 + 0x40) = param_3[1];
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return;
}



/* Entry: 107781b94; end: 107781c1b;  */

undefined8 * FUN_107781b94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_1 = &PTR_DAT_1109d6e58;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[3] = 0;
  param_1[4] = &UNK_107783258;
  param_1[5] = &PTR_PTR_1131ada18;
  func_0x00010726ed14(param_1 + 6);
  param_1[8] = param_1;
  return param_1;
}



/* Entry: 107782240; end: 1077822db;  */

void FUN_107782240(undefined1 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  long unaff_x24;
  undefined8 auStack_80 [7];
  undefined8 uStack_48;
  
  puVar4 = auStack_80;
  puVar2 = auStack_80;
  puVar1 = param_1;
  puVar3 = param_2;
  lVar6 = param_3;
  func_0x000107783740();
  uStack_48 = extraout_x8;
  func_0x000107783824();
  puVar5 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    func_0x0001077838cc(param_2[1]);
    func_0x000104c318bc(auStack_80,param_3 + 8);
    func_0x000104c33004(unaff_x24 + 0x38);
    func_0x000104c2f714();
    puVar1 = (undefined1 *)puVar2;
    puVar5 = puVar4;
  }
  func_0x000107783804(*param_2);
  param_1[0x10] = (char)puVar3;
  func_0x00010778372c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = puVar5;
  func_0x000107783824();
  if (((ulong)puVar3 & 1) != 0) {
    func_0x0001077838cc(puVar5[1]);
    func_0x00010724ae4c(unaff_x24 + 0x38,*(undefined8 *)(lVar6 + 8));
  }
  func_0x000107783804(*puVar5);
  puVar1[0x10] = (char)puVar3;
  return;
}



/* Entry: 107782fdc; end: 1077830c3;  */

void FUN_107782fdc(long *param_1,long *param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 *extraout_x8_02;
  undefined1 auStack_100 [40];
  int iStack_d8;
  undefined8 uStack_c8;
  undefined1 auStack_70 [40];
  int iStack_48;
  undefined8 uStack_38;
  
  uVar3 = param_5;
  uVar4 = param_6;
  func_0x000107783740();
  uStack_38 = extraout_x8;
  if ((bRam00000001131ad3b0 & 1) == 0) {
    func_0x0001077837ec();
    func_0x000107264c5c(auStack_70);
    func_0x0001077838dc();
  }
  uVar2 = param_4;
  func_0x000107783970(auStack_70,param_2);
  if (iStack_48 == 0) {
    (**(code **)(*param_2 + 0x50))(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    param_3 = auStack_70;
    func_0x000107783430(param_3);
    FUN_107783450(param_1,param_3);
    param_2 = param_1;
    param_4 = uVar2;
    param_5 = uVar3;
    param_6 = uVar4;
  }
  func_0x00010778375c();
  func_0x00010778372c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077838dc();
  func_0x0001077837a0();
  func_0x000107783740();
  uStack_c8 = extraout_x8_01;
  if ((bRam00000001131ad3b0 & 1) == 0) {
    func_0x0001077837ec();
    func_0x000107264c5c(auStack_100);
    func_0x0001077838dc();
  }
  func_0x000107783970(auStack_100,param_2,param_4,param_5);
  if (iStack_d8 == 0) {
    (**(code **)(*param_2 + 0x58))(extraout_x8_00,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    puVar1 = auStack_100;
    func_0x000107783430(puVar1);
    FUN_107783450(extraout_x8_00,puVar1);
  }
  func_0x00010778375c();
  func_0x00010778372c(uStack_c8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077838dc();
  func_0x0001077837a0();
  *extraout_x8_02 = 0;
  extraout_x8_02[0x18] = 0;
  return;
}



/* Entry: 1077832e0; end: 1077832f7;  */

void FUN_1077832e0(long param_1,long param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x0001072995d0();
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return;
}



/* Entry: 107783450; end: 10778348b;  */

undefined1 * FUN_107783450(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  func_0x00010778348c();
  return param_1;
}



/* Entry: 107783584; end: 10778358b;  */

void FUN_107783584(undefined8 param_1,long param_2)

{
  long lStack_20;
  long lStack_18;
  
  lStack_18 = param_2 + 0x38;
  lStack_20 = param_2;
  func_0x0001077835c0(param_1,param_2,&UNK_10dd5b8f9,&lStack_20,&lStack_18);
  return;
}



/* Entry: 1077839b8; end: 107783a87;  */

undefined8 * FUN_1077839b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_1109d6f40;
  func_0x000104c2fe00(param_1 + 1);
  func_0x000104c2fe00(param_1 + 8,param_3);
  func_0x000104c2f64c(param_1 + 0xf);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  func_0x0001073730ac(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0x7f800000ff800000;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return param_1;
}



/* Entry: 107783cf4; end: 107783cf7;  */

undefined8 * FUN_107783cf4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d6e58;
  func_0x00010778350c(param_1 + 6);
  func_0x000107783268(param_1 + 3);
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 107784250; end: 1077848bf;  */

/* WARNING: Possible PIC construction at 0x0001077842fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107784300) */
/* WARNING: Removing unreachable block (ram,0x000107784568) */
/* WARNING: Removing unreachable block (ram,0x000107784570) */
/* WARNING: Removing unreachable block (ram,0x000107784584) */
/* WARNING: Removing unreachable block (ram,0x000107784308) */
/* WARNING: Removing unreachable block (ram,0x00010778431c) */
/* WARNING: Removing unreachable block (ram,0x000107784324) */
/* WARNING: Removing unreachable block (ram,0x000107784678) */
/* WARNING: Removing unreachable block (ram,0x00010778432c) */
/* WARNING: Removing unreachable block (ram,0x000107784680) */
/* WARNING: Removing unreachable block (ram,0x000107784688) */
/* WARNING: Removing unreachable block (ram,0x00010778468c) */

void FUN_107784250(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 uVar6;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long *unaff_x19;
  uint uVar7;
  long alStack_148 [3];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  byte bStack_d8;
  byte bStack_c8;
  byte bStack_c0;
  byte bStack_60;
  undefined8 uStack_58;
  
  func_0x000107786398();
  uStack_130 = param_2;
  uStack_128 = param_3;
  uStack_58 = extraout_x8;
  func_0x00010772d2fc(&uStack_100,&uStack_130);
  ppuVar3 = &PTR_DAT_1109d7058;
  func_0x000107785358(&PTR_DAT_1109d7058,&UNK_1109d7148,&uStack_100);
  uVar2 = ppuVar3 == (undefined **)&UNK_1109d7148;
  if ((bool)uVar2) {
LAB_1077842c4:
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)(unaff_x19 + 3) = 0;
    goto LAB_10778479c;
  }
  puVar4 = &uStack_100;
  func_0x000107785400(puVar4,ppuVar3);
  if ((int)puVar4 != 0) goto LAB_1077842c4;
  bVar1 = *(byte *)(ppuVar3 + 1);
  uVar2 = bVar1 == 3;
  switch(bVar1) {
  case 0:
    func_0x0001077864b4();
    func_0x0001077863fc();
    goto code_r0x0001077848c0;
  case 1:
    func_0x0001077864b4();
    func_0x0001077863fc();
    func_0x0001073398b8();
    if ((bStack_c0 & 1) == 0) {
      func_0x000107786458();
      if (extraout_x8_06 != 0) {
        func_0x000107786488();
        func_0x0001077864c8();
        func_0x000107786498();
        func_0x0001077864d4();
        func_0x0001077865d0();
      }
      func_0x0001077863dc();
    }
    else {
      func_0x0001077866ac();
      puVar4 = &uStack_100;
      func_0x000107785dfc(puVar4,extraout_x8_02 + 0x248);
      if (((ulong)puVar4 & 1) == 0) {
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
          func_0x000107786574();
          func_0x000107786708(lStack_120);
          func_0x0001077864a8();
          func_0x000107786530();
        }
        else {
          func_0x000107786708(*param_5);
        }
        func_0x0001077864f0();
        func_0x000107786584();
      }
      func_0x000107786624();
    }
    func_0x0001077866b8();
    func_0x000107339974();
    break;
  case 2:
    func_0x0001077864b4();
    func_0x0001077863fc();
    func_0x00010733b904();
    if ((bStack_c8 & 1) == 0) {
      func_0x000107786458();
      if (extraout_x8_04 != 0) {
        func_0x000107786488();
        func_0x0001077864c8();
        func_0x000107786498();
        func_0x0001077864d4();
        func_0x0001077865d0();
      }
      func_0x0001077863dc();
    }
    else {
      func_0x0001077866ac();
      puVar4 = &uStack_100;
      func_0x000107786038(puVar4,extraout_x8_00 + 0x2b0);
      if (((ulong)puVar4 & 1) == 0) {
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
          func_0x000107786574();
          func_0x000107786720(lStack_120);
          func_0x0001077864a8();
          func_0x000107786530();
        }
        else {
          func_0x000107786720(*param_5);
        }
        func_0x0001077864f0();
        func_0x000107786584();
      }
      func_0x000107786624();
    }
    func_0x0001077866b8();
    func_0x00010727e950();
    break;
  case 3:
    func_0x0001077864b4();
    func_0x0001077863fc();
    func_0x0001077848dc();
    if ((bStack_60 & 1) == 0) {
      func_0x000107786458();
      if (extraout_x8_05 != 0) {
        func_0x000107786488();
        func_0x0001077864c8();
        func_0x000107786498();
        func_0x0001077864d4();
        func_0x0001077865d0();
      }
      func_0x0001077863dc();
    }
    else {
      func_0x0001077866ac();
      puVar4 = &uStack_100;
      func_0x0001077860a0(puVar4,extraout_x8_01 + 0x310);
      if (((ulong)puVar4 & 1) == 0) {
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
          func_0x000107786574();
          func_0x000107786714(lStack_120);
          func_0x0001077864a8();
          func_0x000107786530();
        }
        else {
          func_0x000107786714(*param_5);
        }
        func_0x0001077864f0();
        func_0x000107786584();
      }
      func_0x000107786624();
    }
    func_0x0001077866b8();
    func_0x00010754f474();
    break;
  default:
    uVar7 = (uint)bVar1;
    uVar2 = (uVar7 & 0xfe) == 8;
    if ((bool)uVar2) {
      func_0x0001077864b4();
      func_0x0001077863fc();
      func_0x00010733e5bc();
      if ((bStack_c8 & 1) == 0) {
        func_0x000107786458();
        if (extraout_x8_07 != 0) {
          func_0x000107786488();
          func_0x0001077864c8();
          func_0x000107786498();
          func_0x0001077864d4();
          func_0x0001077865d0();
        }
        func_0x0001077863dc();
      }
      else {
        func_0x0001077866ac();
        uVar2 = uVar7 == 8;
        if ((bool)uVar2) {
          puVar4 = &uStack_100;
          func_0x000107785b50(puVar4,extraout_x8_03 + 0x168);
          if (((ulong)puVar4 & 1) == 0) {
            if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0))
            {
              func_0x000107786574();
              func_0x00010778661c(lStack_120 + 0x168);
              func_0x0001077864a8();
              func_0x000107786530();
            }
            else {
              func_0x00010778661c(*param_5 + 0x168);
            }
            func_0x0001077864f0();
            func_0x000107786584();
          }
        }
        else {
          puVar4 = &uStack_100;
          func_0x000107785b50(puVar4,extraout_x8_03 + 0x1a0);
          if (((ulong)puVar4 & 1) == 0) {
            if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0))
            {
              func_0x000107786574();
              func_0x00010778661c(lStack_120 + 0x1a0);
              func_0x0001077864a8();
              func_0x000107786530();
            }
            else {
              func_0x00010778661c(*param_5 + 0x1a0);
            }
            func_0x0001077864f0();
            func_0x000107786584();
          }
        }
        func_0x000107786624();
      }
      func_0x0001077866b8();
      func_0x00010733e5d8();
      break;
    }
    lStack_120 = 0;
    lStack_118 = 0;
    lStack_110 = 0;
    func_0x00010754bb48(&uStack_100,param_4,&lStack_120,param_5);
    if ((bStack_d8 & 1) == 0) {
      unaff_x19[1] = lStack_118;
      *unaff_x19 = lStack_120;
      unaff_x19[2] = lStack_110;
      lStack_118 = 0;
      lStack_110 = 0;
      lStack_120 = 0;
      uVar6 = 1;
      goto LAB_107784750;
    }
    uVar2 = uVar7 - 4 == 3;
    switch(uVar7 - 4) {
    case 0:
      if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
        func_0x00010778668c();
        func_0x0001077867b8(alStack_148[0]);
code_r0x000107784738:
        func_0x000107785bb8(param_1 + 8,alStack_148);
        func_0x0001077849ec(alStack_148);
      }
      else {
        func_0x0001077867b8(*(undefined8 *)(param_1 + 8));
      }
      break;
    case 1:
      if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
        func_0x00010778668c();
        puVar4 = (undefined8 *)(alStack_148[0] + 0x288);
        *(undefined1 *)(alStack_148[0] + 0x2a8) = uStack_e0;
code_r0x000107784730:
        puVar4[1] = uStack_f8;
        *puVar4 = uStack_100;
        puVar4[3] = uStack_e8;
        puVar4[2] = uStack_f0;
        goto code_r0x000107784738;
      }
      puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + 0x288);
      *(undefined1 *)(*(long *)(param_1 + 8) + 0x2a8) = uStack_e0;
      goto code_r0x000107784800;
    case 2:
      if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
        func_0x00010778668c();
        puVar4 = (undefined8 *)(alStack_148[0] + 0x2e8);
        *(undefined1 *)(alStack_148[0] + 0x308) = uStack_e0;
        goto code_r0x000107784730;
      }
      puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + 0x2e8);
      *(undefined1 *)(*(long *)(param_1 + 8) + 0x308) = uStack_e0;
code_r0x000107784800:
      puVar4[1] = uStack_f8;
      *puVar4 = uStack_100;
      puVar4[3] = uStack_e8;
      puVar4[2] = uStack_f0;
      break;
    case 3:
      if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
        func_0x00010778668c();
        func_0x0001077867cc(alStack_148[0]);
        goto code_r0x000107784738;
      }
      func_0x0001077867cc(*(undefined8 *)(param_1 + 8));
    }
    func_0x000107786624();
    uVar6 = extraout_w8;
LAB_107784750:
    *(undefined1 *)(unaff_x19 + 3) = uVar6;
    plVar5 = &lStack_120;
    goto LAB_107784798;
  }
  plVar5 = alStack_148;
LAB_107784798:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar5);
LAB_10778479c:
  func_0x00010778634c(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107786524();
  func_0x000107339974(&uStack_100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_148);
  func_0x000107786550();
code_r0x0001077848c0:
  func_0x000107786598();
  func_0x000107556034();
  return;
}



/* Entry: 107784c3c; end: 107784c7b;  */

/* WARNING: Possible PIC construction at 0x000107784d04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107784d08) */
/* WARNING: Removing unreachable block (ram,0x000107784d24) */
/* WARNING: Removing unreachable block (ram,0x000107784d1c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_107784c3c(undefined8 param_1,float *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *extraout_x8;
  float *extraout_x8_00;
  undefined8 extraout_x8_01;
  float *extraout_x8_02;
  float *pfVar8;
  float *extraout_x8_03;
  undefined8 extraout_x8_04;
  float *extraout_x8_05;
  float *pfVar9;
  float *extraout_x8_06;
  float *extraout_x8_07;
  undefined4 *extraout_x8_08;
  float *unaff_x20;
  long lVar10;
  undefined8 *******pppppppuVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  code *pcVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  float afStack_1e0 [8];
  double dStack_1c0;
  undefined8 uStack_188;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  undefined1 auStack_148 [72];
  undefined8 *******pppppppuStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [80];
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_68 [72];
  undefined8 *puVar2;
  
  pfVar6 = param_2;
  func_0x000107786380();
  func_0x00010785e288(auStack_68);
  func_0x000107786470();
  func_0x00010778643c();
  func_0x000107786334();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar2 = (undefined8 *)auStack_e0;
  puStack_78 = &UNK_107784c7c;
  pppppppuVar11 = &ppppppuStack_80;
  ppppppuStack_80 = (undefined8 ******)&stack0xfffffffffffffff0;
  func_0x000107786360();
  func_0x00010778657c();
  func_0x000107786470();
  func_0x00010778643c();
  func_0x000107786334();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar13 = &UNK_107784cb8;
  __Unwind_Resume();
  pfVar5 = extraout_x8_00;
  if (param_2[0xe] != 0.0) {
    uVar4 = 0;
    pfVar7 = param_2;
    pfVar8 = extraout_x8_00;
    pfVar5 = extraout_x8;
    if (param_2[0xe] == 1.4013e-45) {
      puStack_e8 = &UNK_107784cb8;
      pppppppuStack_f0 = pppppppuVar11;
      func_0x000107786380();
      puVar2 = &uStack_1f0;
      puStack_158 = &UNK_107784d08;
      pppppppuVar11 = &pppppppuStack_160;
      pppppppuStack_160 = &pppppppuStack_f0;
      func_0x000107786398(auStack_148);
      afStack_1e0[0] = 0.0;
      afStack_1e0[1] = 0.0;
      afStack_1e0[2] = 0.0;
      afStack_1e0[3] = 0.0;
      afStack_1e0[4] = 0.0;
      afStack_1e0[5] = 0.0;
      uStack_188 = extraout_x8_01;
      func_0x0001072ac134(afStack_1e0,2);
      for (lVar10 = 0; uVar4 = lVar10 == 8, !(bool)uVar4; lVar10 = lVar10 + 4) {
        dStack_1c0 = (double)*(float *)((long)param_2 + lVar10);
        afStack_1e0[6] = 4.2039e-45;
        func_0x0001072aad1c(afStack_1e0,afStack_1e0 + 6);
        func_0x000104c3323c(afStack_1e0 + 6);
      }
      pfVar7 = afStack_1e0;
      func_0x000107327958(&uStack_1f0);
      *extraout_x8 = 0.0;
      *(undefined8 *)(extraout_x8 + 4) = uStack_1e8;
      *(undefined8 *)(extraout_x8 + 2) = uStack_1f0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      func_0x000104c33108(&uStack_1f0);
      pfVar5 = afStack_1e0;
      func_0x000107269124();
      func_0x00010778634c(uStack_188);
      if ((bool)uVar4) {
        return;
      }
      ___stack_chk_fail();
      pfVar6 = afStack_1e0;
      func_0x000107269124();
      puVar13 = &UNK_107784e0c;
      func_0x000107786550();
      pfVar8 = extraout_x8_02;
      unaff_x20 = param_2;
    }
    puVar1 = (undefined1 *)((long)puVar2 + -0x70);
    *(float **)((long)puVar2 + -0x20) = unaff_x20;
    *(float **)((long)puVar2 + -0x18) = pfVar5;
    *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar11;
    *(undefined **)((long)puVar2 + -8) = puVar13;
    puVar12 = (undefined1 *)((long)puVar2 + -0x10);
    func_0x000107786360();
    func_0x00010778657c();
    func_0x000107786470();
    func_0x00010778643c();
    func_0x000107786334();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    pcVar14 = (code *)&UNK_107784e48;
    __Unwind_Resume();
    pfVar5 = extraout_x8_03;
    if (pfVar6[0xc] != 0.0) {
      uVar4 = pfVar6[0xc] == 1.4013e-45;
      pfVar9 = extraout_x8_03;
      if ((bool)uVar4) {
        puVar1 = (undefined1 *)((long)puVar2 + -0xd0);
        *(undefined1 **)((long)puVar2 + -0x80) = puVar12;
        *(undefined **)((long)puVar2 + -0x78) = &UNK_107784e48;
        puVar12 = (undefined1 *)((long)puVar2 + -0x80);
        pfVar7 = extraout_x8_03;
        func_0x000107786418();
        *(undefined8 *)((long)puVar2 + -0x88) = extraout_x8_04;
        fVar15 = *pfVar6;
        *(undefined4 *)((long)puVar2 + -200) = 3;
        *(double *)((long)puVar2 + -0xc0) = (double)fVar15;
        pfVar6 = (float *)((long)puVar2 + -200);
        func_0x000104c32a18();
        *(undefined1 *)(pfVar7 + 0x10) = 1;
        func_0x000107786500();
        func_0x00010778634c(*(undefined8 *)((long)puVar2 + -0x88));
        if ((bool)uVar4) {
          return;
        }
        pcVar14 = FUN_107784ed0;
        ___stack_chk_fail();
        pfVar9 = extraout_x8_05;
      }
      puVar3 = puVar1 + -0x70;
      *(float **)(puVar1 + -0x20) = unaff_x20;
      *(float **)(puVar1 + -0x18) = pfVar8;
      *(undefined1 **)(puVar1 + -0x10) = puVar12;
      *(code **)(puVar1 + -8) = pcVar14;
      puVar12 = puVar1 + -0x10;
      func_0x000107786360();
      func_0x00010778657c();
      func_0x000107786470();
      func_0x00010778643c();
      func_0x000107786334();
      if (!(bool)uVar4) {
        ___stack_chk_fail();
        puVar13 = &UNK_107784f0c;
        __Unwind_Resume();
        pfVar5 = extraout_x8_06;
        if (pfVar7[0x26] == 0.0) goto code_r0x0001077863ac;
        pfVar5 = pfVar7 + 2;
        uVar4 = pfVar7[0x26] == 1.4013e-45;
        pfVar7 = extraout_x8_06;
        if ((bool)uVar4) {
          puVar3 = puVar1 + -0xe0;
          *(float **)(puVar1 + -0x90) = unaff_x20;
          *(float **)(puVar1 + -0x88) = pfVar9;
          *(undefined1 **)(puVar1 + -0x80) = puVar12;
          *(undefined **)(puVar1 + -0x78) = &UNK_107784f0c;
          puVar12 = puVar1 + -0x80;
          func_0x000107786380();
          func_0x00010775f12c(puVar1 + -0xd8);
          func_0x000107786470();
          func_0x00010778647c(1);
          func_0x000107786334();
          if ((bool)uVar4) {
            return;
          }
          ___stack_chk_fail();
          puVar13 = &UNK_107784f80;
          __Unwind_Resume();
          pfVar6 = pfVar5;
          pfVar7 = extraout_x8_07;
        }
        *(float **)(puVar3 + -0x20) = unaff_x20;
        *(float **)(puVar3 + -0x18) = pfVar9;
        *(undefined1 **)(puVar3 + -0x10) = puVar12;
        *(undefined **)(puVar3 + -8) = puVar13;
        func_0x000107786360();
        func_0x00010778657c();
        func_0x000107786470();
        func_0x00010778643c();
        func_0x000107786334();
        if (!(bool)uVar4) {
          ___stack_chk_fail();
          __Unwind_Resume();
          *(float **)(puVar3 + -0x90) = unaff_x20;
          *(float **)(puVar3 + -0x88) = pfVar7;
          *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x78) = &UNK_107784fbc;
          func_0x000107269c1c(puVar3 + -0xa0);
          if (*(char *)(pfVar6 + 2) == '\x01') {
            func_0x0001077867e0(*(undefined8 *)pfVar6);
            func_0x000107785078(puVar3 + -0xc0);
          }
          if (*(char *)(pfVar6 + 6) == '\x01') {
            func_0x0001077867e0(*(undefined8 *)(pfVar6 + 4));
            func_0x0001077850a0(puVar3 + -0xc0,puVar3 + -0xa0,"delay",puVar3 + -0xa8);
          }
          uVar17 = *(undefined8 *)(puVar3 + -0x98);
          uVar16 = *(undefined8 *)(puVar3 + -0xa0);
          *(undefined8 *)(puVar3 + -0xa0) = 0;
          *(undefined8 *)(puVar3 + -0x98) = 0;
          *extraout_x8_08 = 1;
          *(undefined8 *)(extraout_x8_08 + 4) = uVar17;
          *(undefined8 *)(extraout_x8_08 + 2) = uVar16;
          *(undefined8 *)(puVar3 + -0xd0) = 0;
          *(undefined8 *)(puVar3 + -200) = 0;
          func_0x000104c335c0(puVar3 + -0xd0);
          func_0x000104c335c0(puVar3 + -0xa0);
          return;
        }
      }
      return;
    }
  }
code_r0x0001077863ac:
  pfVar5[0x10] = 0.0;
  pfVar5[0x11] = 0.0;
  pfVar5[10] = 0.0;
  pfVar5[0xb] = 0.0;
  pfVar5[8] = 0.0;
  pfVar5[9] = 0.0;
  pfVar5[0xe] = 0.0;
  pfVar5[0xf] = 0.0;
  pfVar5[0xc] = 0.0;
  pfVar5[0xd] = 0.0;
  pfVar5[2] = 0.0;
  pfVar5[3] = 0.0;
  pfVar5[0] = 0.0;
  pfVar5[1] = 0.0;
  pfVar5[6] = 0.0;
  pfVar5[7] = 0.0;
  pfVar5[4] = 0.0;
  pfVar5[5] = 0.0;
  *pfVar5 = 9.80909e-45;
  return;
}



/* Entry: 107784ed0; end: 107784f0b;  */

void FUN_107784ed0(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar4;
  undefined4 *extraout_x8_01;
  undefined8 unaff_x20;
  undefined8 ****ppppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [72];
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [80];
  
  puVar1 = auStack_70;
  ppppuVar5 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x000107786360();
  func_0x00010778657c();
  func_0x000107786470();
  func_0x00010778643c();
  func_0x000107786334();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar6 = &UNK_107784f0c;
    __Unwind_Resume();
    if (*(int *)(param_2 + 0x98) == 0) {
      extraout_x8[8] = 0;
      extraout_x8[5] = 0;
      extraout_x8[4] = 0;
      extraout_x8[7] = 0;
      extraout_x8[6] = 0;
      extraout_x8[1] = 0;
      *extraout_x8 = 0;
      extraout_x8[3] = 0;
      extraout_x8[2] = 0;
      *(undefined4 *)extraout_x8 = 7;
      return;
    }
    puVar3 = (undefined8 *)(param_2 + 8);
    uVar2 = *(int *)(param_2 + 0x98) == 1;
    puVar4 = extraout_x8;
    if ((bool)uVar2) {
      puVar1 = auStack_e0;
      puStack_78 = &UNK_107784f0c;
      pppuStack_80 = ppppuVar5;
      func_0x000107786380();
      func_0x00010775f12c(auStack_d8);
      func_0x000107786470();
      func_0x00010778647c(1);
      func_0x000107786334();
      if ((bool)uVar2) {
        return;
      }
      ___stack_chk_fail();
      puVar6 = &UNK_107784f80;
      __Unwind_Resume();
      param_3 = puVar3;
      puVar4 = extraout_x8_00;
      ppppuVar5 = &pppuStack_80;
    }
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = param_1;
    *(undefined8 *****)(puVar1 + -0x10) = ppppuVar5;
    *(undefined **)(puVar1 + -8) = puVar6;
    func_0x000107786360();
    func_0x00010778657c();
    func_0x000107786470();
    func_0x00010778643c();
    func_0x000107786334();
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      __Unwind_Resume();
      *(undefined8 *)(puVar1 + -0x90) = unaff_x20;
      *(undefined8 **)(puVar1 + -0x88) = puVar4;
      *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
      *(undefined **)(puVar1 + -0x78) = &UNK_107784fbc;
      func_0x000107269c1c(puVar1 + -0xa0);
      if (*(char *)(param_3 + 1) == '\x01') {
        func_0x0001077867e0(*param_3);
        func_0x000107785078(puVar1 + -0xc0);
      }
      if (*(char *)(param_3 + 3) == '\x01') {
        func_0x0001077867e0(param_3[2]);
        func_0x0001077850a0(puVar1 + -0xc0,puVar1 + -0xa0,"delay",puVar1 + -0xa8);
      }
      uVar8 = *(undefined8 *)(puVar1 + -0x98);
      uVar7 = *(undefined8 *)(puVar1 + -0xa0);
      *(undefined8 *)(puVar1 + -0xa0) = 0;
      *(undefined8 *)(puVar1 + -0x98) = 0;
      *extraout_x8_01 = 1;
      *(undefined8 *)(extraout_x8_01 + 4) = uVar8;
      *(undefined8 *)(extraout_x8_01 + 2) = uVar7;
      *(undefined8 *)(puVar1 + -0xd0) = 0;
      *(undefined8 *)(puVar1 + -200) = 0;
      func_0x000104c335c0(puVar1 + -0xd0);
      func_0x000104c335c0(puVar1 + -0xa0);
      return;
    }
  }
  return;
}



/* Entry: 1077850ec; end: 107785107;  */

void FUN_1077850ec(void)

{
  func_0x00010778664c();
  func_0x000107785108();
  return;
}



/* Entry: 1077851f0; end: 10778522f;  */

void FUN_1077851f0(undefined8 param_1,ulong param_2)

{
  func_0x000107786630();
  func_0x00010775e0c0();
  if ((param_2 & 1) != 0) {
    func_0x0001077866c4();
    func_0x000107785230();
  }
  func_0x0001077865ec();
  return;
}



/* Entry: 1077853d8; end: 107785427;  */

bool FUN_1077853d8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((ulong)param_1[2] < (ulong)param_2[1]) {
    return true;
  }
  if ((ulong)param_2[1] < (ulong)param_1[2]) {
    return false;
  }
  pcVar3 = (char *)*param_1;
  pcVar4 = (char *)*param_2;
  do {
    cVar1 = *pcVar3;
    cVar2 = *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0' && cVar1 == cVar2);
  return cVar1 < cVar2;
}



/* Entry: 1077855b0; end: 1077855c3;  */

void FUN_1077855b0(void)

{
  func_0x000107785624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107785854; end: 1077858cb;  */

undefined8 * FUN_107785854(undefined8 *param_1)

{
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0x1a] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 1;
  _bzero(param_1 + 0x27,200);
  *(undefined1 *)(param_1 + 0x3f) = 1;
  return param_1;
}



/* Entry: 107785a2c; end: 107785a4f;  */

void FUN_107785a2c(void)

{
  func_0x000107786790();
  func_0x000107786770();
  return;
}



/* Entry: 107785c5c; end: 107785caf;  */

void FUN_107785c5c(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x40) != -1 || *(int *)(param_2 + 0x40) != -1) {
    if (*(int *)(param_2 + 0x40) == -1) {
      if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
        func_0x00010743b5c8((&PTR_DAT_1109af4a8)[*(uint *)(param_1 + 0x40)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      return;
    }
    func_0x00010778658c();
  }
  return;
}



/* Entry: 107785d88; end: 107785d8f;  */

void FUN_107785d88(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  if (*(int *)(*param_1 + 0x40) == 2) {
    func_0x000107494560(param_2,param_3);
    func_0x0001072f6188();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
    *(undefined1 *)(unaff_x20 + 0x38) = uVar1;
    return;
  }
  func_0x000107786568();
  func_0x000107785dc4();
  return;
}



/* Entry: 107785ed0; end: 107785ef7;  */

void FUN_107785ed0(long param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    func_0x000107786568();
    func_0x000107785ef8();
  }
  return;
}



/* Entry: 107785fd0; end: 107785fff;  */

void FUN_107785fd0(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107786544();
  func_0x0001072f6188();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined1 *)(unaff_x20 + 0x30) = uVar1;
  return;
}



/* Entry: 107786168; end: 10778617b;  */

void FUN_107786168(long *param_1)

{
  if (*(int *)(*param_1 + 0x90) != 0) {
    func_0x000107786568();
    func_0x0001077861a4();
  }
  return;
}



/* Entry: 1077862a4; end: 1077862cf;  */

void FUN_1077862a4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107786544();
  func_0x0001072f6188();
  func_0x000107295ba8(unaff_x20 + 0x28,unaff_x19 + 0x28);
  return;
}



/* Entry: 107786960; end: 107786963;  */

undefined8 * FUN_107786960(undefined8 *param_1)

{
  func_0x0001073bc804(param_1 + 9);
  *param_1 = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 107786ae0; end: 107786b1b;  */

void FUN_107786ae0(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107786ca4(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107786ed8();
  return;
}



/* Entry: 107786d60; end: 107786d87;  */

long FUN_107786d60(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000107786d88();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107786ea0; end: 107786ed7;  */

undefined8 * FUN_107786ea0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001073ad780(&uStack_30);
  return param_1;
}



/* Entry: 107787068; end: 1077870c7;  */

long * FUN_107787068(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    *puVar1 = &PTR_DAT_1109d7470;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = lVar2;
  }
  param_1[1] = (long)puVar1;
  *param_2 = 0;
  return param_1;
}



/* Entry: 1077871e0; end: 1077871e3;  */

undefined8 * FUN_1077871e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d6e58;
  func_0x00010778350c(param_1 + 6);
  func_0x000107783268(param_1 + 3);
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 107788824; end: 10778ac77;  */

/* WARNING: Possible PIC construction at 0x0001077893b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077893b4) */
/* WARNING: Removing unreachable block (ram,0x0001077893fc) */
/* WARNING: Removing unreachable block (ram,0x000107789404) */
/* WARNING: Removing unreachable block (ram,0x000107789418) */
/* WARNING: Removing unreachable block (ram,0x0001077893bc) */
/* WARNING: Removing unreachable block (ram,0x0001077893d0) */
/* WARNING: Removing unreachable block (ram,0x0001077893d8) */
/* WARNING: Removing unreachable block (ram,0x000107789c38) */
/* WARNING: Removing unreachable block (ram,0x0001077893e0) */
/* WARNING: Removing unreachable block (ram,0x000107789c40) */
/* WARNING: Removing unreachable block (ram,0x000107789c48) */
/* WARNING: Removing unreachable block (ram,0x000107789c4c) */

void FUN_107788824(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined1 *param_6,undefined **param_7)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  undefined1 uVar10;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  long extraout_x8_37;
  long extraout_x8_38;
  long extraout_x8_39;
  long extraout_x8_40;
  long extraout_x8_41;
  long extraout_x8_42;
  long extraout_x8_43;
  long extraout_x8_44;
  long extraout_x8_45;
  long extraout_x8_46;
  long extraout_x8_47;
  long extraout_x8_48;
  long extraout_x8_49;
  long extraout_x8_50;
  long extraout_x8_51;
  long extraout_x8_52;
  long extraout_x8_53;
  long extraout_x8_54;
  long extraout_x8_55;
  long extraout_x8_56;
  long extraout_x8_57;
  long extraout_x8_58;
  long extraout_x8_59;
  long extraout_x8_60;
  long extraout_x8_61;
  long extraout_x8_62;
  long extraout_x8_63;
  long extraout_x8_64;
  undefined8 *extraout_x8_65;
  long extraout_x8_66;
  long extraout_x8_67;
  long extraout_x8_68;
  long extraout_x8_69;
  long extraout_x8_70;
  long extraout_x8_71;
  undefined8 *extraout_x8_72;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  undefined8 *extraout_x9_04;
  long extraout_x9_05;
  long lVar11;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  undefined8 *extraout_x9_11;
  long extraout_x9_12;
  long lVar12;
  long *unaff_x19;
  uint uVar13;
  uint uVar14;
  undefined *puVar15;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined1 uStack_151;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined *apuStack_d8 [4];
  undefined1 uStack_b8;
  byte bStack_b0;
  byte bStack_a0;
  byte bStack_98;
  byte bStack_90;
  byte bStack_80;
  byte bStack_60;
  undefined8 uStack_58;
  
  puVar8 = param_6;
  ppuVar9 = param_7;
  func_0x00010778c620();
  puStack_110 = param_4;
  uStack_108 = param_5;
  uStack_58 = extraout_x8;
  func_0x00010772d2fc(apuStack_d8,&puStack_110);
  ppuVar4 = &PTR_DAT_1109d75d8;
  ppuVar6 = (undefined **)&UNK_1109d7e48;
  ppuVar7 = apuStack_d8;
  func_0x000107785358(&PTR_DAT_1109d75d8,&UNK_1109d7e48,ppuVar7);
  uVar3 = ppuVar4 == (undefined **)&UNK_1109d7e48;
  if ((bool)uVar3) {
LAB_107788898:
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)(unaff_x19 + 3) = 0;
    goto LAB_10778a0fc;
  }
  ppuVar5 = apuStack_d8;
  ppuVar6 = ppuVar4;
  func_0x000107785400(ppuVar5,ppuVar4);
  if ((int)ppuVar5 != 0) goto LAB_107788898;
  bVar1 = *(byte *)(ppuVar4 + 1);
  uVar3 = bVar1 == 0x59;
  uVar13 = (uint)bVar1;
  if (bVar1 < 0x5a) {
    uVar14 = (uint)bVar1;
    switch(bVar1) {
    case 0:
    case 3:
    case 6:
    case 0xe:
      func_0x00010778c6a4();
      func_0x00010778c5b0();
      func_0x00010733b904();
      if ((bStack_a0 & 1) != 0) {
        uVar3 = uVar13 == 0xe;
        if ((bool)uVar3) {
          func_0x00010778c79c();
          ppuVar4 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_11 + 0xab8);
          func_0x000107786038(ppuVar4,ppuVar6);
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c7a8(puStack_100 + 0xab8);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c7a8(*param_7 + 0xab8);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar3 = uVar13 == 3;
          if ((bool)uVar3) {
            func_0x00010778c79c();
            ppuVar4 = apuStack_d8;
            ppuVar6 = (undefined **)(extraout_x8_09 + 0x680);
            func_0x000107786038(ppuVar4,ppuVar6);
            if (((ulong)ppuVar4 & 1) == 0) {
              if ((*(long *)(param_3 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                ppuVar6 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c7a8(puStack_100 + 0x680);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c7a8(*param_7 + 0x680);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar3 = uVar13 == 6;
            if ((bool)uVar3) {
              func_0x00010778c79c();
              ppuVar4 = apuStack_d8;
              ppuVar6 = (undefined **)(extraout_x8_10 + 0x7b0);
              func_0x000107786038(ppuVar4,ppuVar6);
              if (((ulong)ppuVar4 & 1) == 0) {
                if ((*(long *)(param_3 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                  ppuVar6 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c7a8(puStack_100 + 0x7b0);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c7a8(*param_7 + 0x7b0);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
            else {
              if (uVar13 != 0) {
                func_0x00010778c9b8();
                func_0x00010778c850();
                uVar3 = uVar13 - 1 == 0xc;
                switch(uVar13 - 1) {
                case 0:
                  goto code_r0x000107788d8c;
                case 1:
                case 3:
                case 9:
                  goto code_r0x000107788ed8;
                case 4:
                  goto code_r0x000107789114;
                case 6:
                case 7:
                case 8:
                case 0xb:
                case 0xc:
                  goto code_r0x0001077888c8;
                case 10:
                  goto code_r0x000107789084;
                }
                goto LAB_10778996c;
              }
              func_0x00010778c79c();
              ppuVar4 = apuStack_d8;
              ppuVar6 = (undefined **)(extraout_x8_02 + 0x548);
              func_0x000107786038(ppuVar4,ppuVar6);
              if (((ulong)ppuVar4 & 1) == 0) {
                if ((*(long *)(param_3 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                  ppuVar6 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c7a8(puStack_100 + 0x548);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c7a8(*param_7 + 0x548);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
          }
        }
        goto code_r0x00010778a0e8;
      }
      func_0x00010778c5cc();
      if (extraout_x8_03 != 0) {
        func_0x00010778c5f4();
        func_0x00010778c698();
        func_0x00010778c604();
code_r0x000107788a44:
        func_0x00010778c6bc();
        func_0x00010778c848();
      }
code_r0x000107788a4c:
      func_0x00010778c590();
      goto code_r0x00010778a0ec;
    case 1:
    case 0xf:
    case 0x13:
code_r0x000107788d8c:
      func_0x00010778c6a4();
      func_0x00010778c5b0();
      func_0x0001077848c0();
      if ((bStack_90 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_13 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          func_0x00010778c6bc();
          func_0x00010778c848();
        }
        func_0x00010778c590();
      }
      else {
        uVar3 = uVar13 == 0x13;
        if ((bool)uVar3) {
          func_0x00010778c79c();
          ppuVar4 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_15 + 0xcb0);
          func_0x000107785bfc(ppuVar4,ppuVar6);
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c8c0(puStack_100 + 0xcb0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c8c0(*param_7 + 0xcb0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar3 = uVar13 == 0xf;
          if ((bool)uVar3) {
            func_0x00010778c79c();
            ppuVar4 = apuStack_d8;
            ppuVar6 = (undefined **)(extraout_x8_14 + 0xb18);
            func_0x000107785bfc(ppuVar4,ppuVar6);
            if (((ulong)ppuVar4 & 1) == 0) {
              if ((*(long *)(param_3 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                ppuVar6 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c8c0(puStack_100 + 0xb18);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c8c0(*param_7 + 0xb18);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar3 = uVar13 == 1;
            if (!(bool)uVar3) {
              ppuVar5 = apuStack_d8;
              func_0x00010754e888();
              func_0x00010778c850();
              uVar3 = uVar14 - 2 == 0x10;
              switch(uVar14 - 2) {
              case 0:
              case 2:
              case 8:
              case 0xe:
                goto code_r0x000107788ed8;
              case 3:
                goto code_r0x000107789114;
              case 5:
              case 6:
              case 7:
              case 10:
              case 0xb:
                goto code_r0x0001077888c8;
              case 9:
              case 0x10:
                goto code_r0x000107789084;
              case 0xf:
                goto code_r0x0001077893a8;
              }
              goto LAB_10778996c;
            }
            func_0x00010778c79c();
            ppuVar4 = apuStack_d8;
            ppuVar6 = (undefined **)(extraout_x8_12 + 0x5a8);
            func_0x000107785bfc(ppuVar4,ppuVar6);
            if (((ulong)ppuVar4 & 1) == 0) {
              if ((*(long *)(param_3 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                ppuVar6 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c8c0(puStack_100 + 0x5a8);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c8c0(*param_7 + 0x5a8);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
        }
        func_0x00010778c888();
      }
      func_0x00010778c8b4();
      func_0x00010754e888();
      break;
    case 2:
    case 4:
    case 10:
    case 0x10:
    case 0x1d:
    case 0x23:
code_r0x000107788ed8:
      func_0x00010778c744();
      func_0x00010778c5b0();
      func_0x0001073398b8();
      if ((bStack_98 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_17 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          goto code_r0x000107788f74;
        }
        goto code_r0x000107788f7c;
      }
      uVar3 = uVar14 == 0x23;
      if ((bool)uVar3) {
        func_0x00010778c79c();
        func_0x00010778c860();
        func_0x000107785dfc();
        if (((ulong)ppuVar5 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7f4(puStack_100);
            func_0x000107785e68();
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7f4(*param_7);
            func_0x000107785e68();
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
      }
      else {
        uVar3 = uVar13 == 4;
        if ((bool)uVar3) {
          func_0x00010778c79c();
          ppuVar4 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_24 + 0x6e0);
          func_0x000107785dfc(ppuVar4,ppuVar6);
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c810(puStack_100 + 0x6e0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c810(*param_7 + 0x6e0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar3 = uVar13 == 10;
          if ((bool)uVar3) {
            func_0x00010778c79c();
            ppuVar4 = apuStack_d8;
            ppuVar6 = (undefined **)(extraout_x8_18 + 0x930);
            func_0x000107785dfc(ppuVar4,ppuVar6);
            if (((ulong)ppuVar4 & 1) == 0) {
              if ((*(long *)(param_3 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                ppuVar6 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c810(puStack_100 + 0x930);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c810(*param_7 + 0x930);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar3 = uVar13 == 0x10;
            if ((bool)uVar3) {
              func_0x00010778c79c();
              ppuVar4 = apuStack_d8;
              ppuVar6 = (undefined **)(extraout_x8_19 + 0xb88);
              func_0x000107785dfc(ppuVar4,ppuVar6);
              if (((ulong)ppuVar4 & 1) == 0) {
                if ((*(long *)(param_3 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                  ppuVar6 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c810(puStack_100 + 0xb88);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c810(*param_7 + 0xb88);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
            else {
              uVar3 = uVar13 == 0x1d;
              if ((bool)uVar3) {
                func_0x00010778c79c();
                func_0x00010778c860();
                func_0x000107785dfc();
                if (((ulong)ppuVar5 & 1) == 0) {
                  if ((*(long *)(param_3 + 0x10) == 0) ||
                     (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                    ppuVar6 = (undefined **)*param_7;
                    func_0x00010778c784();
                    func_0x00010778c7f4(puStack_100);
                    func_0x000107785e68();
                    func_0x00010778c614();
                    func_0x00010778c77c();
                  }
                  else {
                    func_0x00010778c7f4(*param_7);
                    func_0x000107785e68();
                  }
                  func_0x00010778c640();
                  func_0x00010778c78c();
                }
              }
              else {
                uVar3 = uVar13 == 2;
                if (!(bool)uVar3) {
                  ppuVar5 = apuStack_d8;
                  func_0x000107339974();
                  func_0x00010778c850();
                  uVar3 = uVar13 - 5 == 0x1d;
                  switch(uVar13 - 5) {
                  case 0:
                    goto code_r0x000107789114;
                  case 2:
                  case 3:
                  case 4:
                  case 7:
                  case 8:
                  case 0xf:
                  case 0x16:
                  case 0x1a:
                  case 0x1b:
                    goto code_r0x0001077888c8;
                  case 6:
                  case 0xd:
                    goto code_r0x000107789084;
                  case 0xc:
                    goto code_r0x0001077893a8;
                  case 0x10:
                  case 0x11:
                  case 0x12:
                  case 0x13:
                  case 0x14:
                  case 0x17:
                  case 0x1c:
                    goto code_r0x000107789308;
                  case 0x15:
                    goto code_r0x0001077894ec;
                  case 0x19:
                  case 0x1d:
                    goto code_r0x000107789454;
                  }
                  goto LAB_10778996c;
                }
                func_0x00010778c79c();
                ppuVar4 = apuStack_d8;
                ppuVar6 = (undefined **)(extraout_x8_16 + 0x618);
                func_0x000107785dfc(ppuVar4,ppuVar6);
                if (((ulong)ppuVar4 & 1) == 0) {
                  if ((*(long *)(param_3 + 0x10) == 0) ||
                     (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                    ppuVar6 = (undefined **)*param_7;
                    func_0x00010778c784();
                    func_0x00010778c810(puStack_100 + 0x618);
                    func_0x00010778c614();
                    func_0x00010778c77c();
                  }
                  else {
                    func_0x00010778c810(*param_7 + 0x618);
                  }
                  func_0x00010778c640();
                  func_0x00010778c78c();
                }
              }
            }
          }
        }
      }
code_r0x000107789ee4:
      func_0x00010778c888();
      goto code_r0x000107789ee8;
    case 5:
code_r0x000107789114:
      func_0x00010778c6a4();
      func_0x00010778c5b0();
      func_0x0001073398b8();
      if ((bStack_98 & 1) != 0) {
        func_0x00010778c79c();
        ppuVar4 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_22 + 0x748);
        func_0x000107785dfc(ppuVar4,ppuVar6);
        if (((ulong)ppuVar4 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c810(puStack_100 + 0x748);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c810(*param_7 + 0x748);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        goto code_r0x000107789ee4;
      }
      func_0x00010778c5cc();
      if (extraout_x8_23 != 0) {
        func_0x00010778c5f4();
        func_0x00010778c698();
        func_0x00010778c604();
code_r0x000107788f74:
        func_0x00010778c6bc();
        func_0x00010778c848();
      }
code_r0x000107788f7c:
      func_0x00010778c590();
code_r0x000107789ee8:
      func_0x00010778c8b4();
      func_0x000107339974();
      break;
    case 7:
    case 8:
    case 9:
    case 0xc:
    case 0xd:
    case 0x14:
    case 0x1b:
    case 0x1f:
    case 0x20:
    case 0x25:
code_r0x0001077888c8:
      func_0x00010778c744();
      func_0x00010778c5b0();
      func_0x00010733b904();
      if ((bStack_a0 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_01 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          goto code_r0x000107788a44;
        }
        goto code_r0x000107788a4c;
      }
      uVar3 = uVar13 - 7 == 0xd;
      switch(uVar13 - 7) {
      case 0:
        func_0x00010778c79c();
        ppuVar4 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_00 + 0x810);
        func_0x000107786038(ppuVar4,ppuVar6);
        if (((ulong)ppuVar4 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_100 + 0x810);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0x810);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 1:
        func_0x00010778c79c();
        ppuVar4 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_07 + 0x870);
        func_0x000107786038(ppuVar4,ppuVar6);
        if (((ulong)ppuVar4 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_100 + 0x870);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0x870);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 2:
        func_0x00010778c79c();
        ppuVar4 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_05 + 0x8d0);
        func_0x000107786038(ppuVar4,ppuVar6);
        if (((ulong)ppuVar4 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_100 + 0x8d0);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0x8d0);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 3:
      case 4:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
code_r0x000107788a54:
        func_0x00010778c9b8();
        func_0x00010778c850();
        uVar3 = uVar14 - 0xb == 0x19;
        switch(uVar14 - 0xb) {
        case 0:
        case 7:
          goto code_r0x000107789084;
        case 6:
          goto code_r0x0001077893a8;
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0x11:
        case 0x16:
          goto code_r0x000107789308;
        case 0xf:
          goto code_r0x0001077894ec;
        case 0x13:
        case 0x17:
        case 0x19:
          goto code_r0x000107789454;
        }
        goto LAB_10778996c;
      case 5:
        func_0x00010778c79c();
        ppuVar4 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_04 + 0x9f8);
        func_0x000107786038(ppuVar4,ppuVar6);
        if (((ulong)ppuVar4 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_100 + 0x9f8);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0x9f8);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 6:
        func_0x00010778c79c();
        ppuVar4 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_06 + 0xa58);
        func_0x000107786038(ppuVar4,ppuVar6);
        if (((ulong)ppuVar4 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_100 + 0xa58);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0xa58);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 0xd:
        func_0x00010778c79c();
        ppuVar4 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_08 + 0xd20);
        func_0x000107786038(ppuVar4,ppuVar6);
        if (((ulong)ppuVar4 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_100 + 0xd20);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0xd20);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      default:
        uVar3 = uVar13 == 0x1b;
        if ((bool)uVar3) {
          func_0x00010778c79c();
          func_0x00010778c818();
          if (((ulong)ppuVar5 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c6d8(puStack_100);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c6d8(*param_7);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar3 = uVar13 == 0x1f;
          if ((bool)uVar3) {
            func_0x00010778c79c();
            func_0x00010778c818();
            if (((ulong)ppuVar5 & 1) == 0) {
              if ((*(long *)(param_3 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                ppuVar6 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c6d8(puStack_100);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c6d8(*param_7);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar3 = uVar13 == 0x20;
            if ((bool)uVar3) {
              func_0x00010778c79c();
              func_0x00010778c818();
              if (((ulong)ppuVar5 & 1) == 0) {
                if ((*(long *)(param_3 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                  ppuVar6 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c6d8(puStack_100);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c6d8(*param_7);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
            else {
              uVar3 = uVar14 == 0x25;
              if (!(bool)uVar3) goto code_r0x000107788a54;
              func_0x00010778c79c();
              func_0x00010778c818();
              if (((ulong)ppuVar5 & 1) == 0) {
                if ((*(long *)(param_3 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                  ppuVar6 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c6d8(puStack_100);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c6d8(*param_7);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
          }
        }
      }
code_r0x00010778a0e8:
      func_0x00010778c888();
code_r0x00010778a0ec:
      func_0x00010778c8b4();
      func_0x00010727e950();
      break;
    case 0xb:
    case 0x12:
    case 0x53:
    case 0x54:
code_r0x000107789084:
      func_0x00010778c744();
      func_0x00010778c5b0();
      func_0x00010733e5bc();
      if ((bStack_a0 & 1) != 0) {
        uVar3 = uVar13 == 0x54;
        if ((bool)uVar3) {
          func_0x00010778c79c();
          ppuVar4 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_27 + 0x2f8);
          func_0x000107785b50(ppuVar4,ppuVar6);
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c808(puStack_100 + 0x2f8);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c808(*param_7 + 0x2f8);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar3 = uVar13 == 0x12;
          if ((bool)uVar3) {
            func_0x00010778c79c();
            ppuVar4 = apuStack_d8;
            ppuVar6 = (undefined **)(extraout_x8_25 + 0xc50);
            func_0x000107785b50(ppuVar4,ppuVar6);
            if (((ulong)ppuVar4 & 1) == 0) {
              if ((*(long *)(param_3 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                ppuVar6 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c998(puStack_100 + 0xc50);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c998(*param_7 + 0xc50);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar3 = uVar13 == 0x53;
            if ((bool)uVar3) {
              func_0x00010778c79c();
              ppuVar4 = apuStack_d8;
              ppuVar6 = (undefined **)(extraout_x8_26 + 0x2c0);
              func_0x000107785b50(ppuVar4,ppuVar6);
              if (((ulong)ppuVar4 & 1) == 0) {
                if ((*(long *)(param_3 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                  ppuVar6 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c808(puStack_100 + 0x2c0);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c808(*param_7 + 0x2c0);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
            else {
              uVar3 = uVar13 == 0xb;
              if (!(bool)uVar3) {
                func_0x00010778c9b0();
                func_0x00010778c850();
                uVar3 = uVar14 - 0x11 == 0x15;
                switch(uVar14 - 0x11) {
                case 0:
                  goto code_r0x0001077893a8;
                case 1:
                case 2:
                case 3:
                case 10:
                case 0xc:
                case 0xe:
                case 0xf:
                case 0x12:
                case 0x14:
                  break;
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 0xb:
                case 0x10:
                case 0x15:
                  goto code_r0x000107789308;
                case 9:
                  goto code_r0x0001077894ec;
                case 0xd:
                case 0x11:
                case 0x13:
                  goto code_r0x000107789454;
                default:
                  uVar3 = uVar14 - 0x50 == 3;
                  if ((uVar14 - 0x50 < 3) || (uVar3 = true, uVar14 == 0x4e))
                  goto code_r0x0001077897f8;
                  uVar3 = uVar14 == 0x4f;
                  if ((bool)uVar3) goto code_r0x0001077898c0;
                }
                goto LAB_10778996c;
              }
              func_0x00010778c79c();
              ppuVar4 = apuStack_d8;
              ppuVar6 = (undefined **)(extraout_x8_20 + 0x998);
              func_0x000107785b50(ppuVar4,ppuVar6);
              if (((ulong)ppuVar4 & 1) == 0) {
                if ((*(long *)(param_3 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                  ppuVar6 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c998(puStack_100 + 0x998);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c998(*param_7 + 0x998);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
          }
        }
        goto code_r0x00010778a07c;
      }
      func_0x00010778c5cc();
      if (extraout_x8_21 != 0) {
        func_0x00010778c5f4();
        func_0x00010778c698();
        func_0x00010778c604();
code_r0x000107789888:
        func_0x00010778c6bc();
        func_0x00010778c848();
      }
code_r0x000107789890:
      func_0x00010778c590();
      goto code_r0x00010778a080;
    case 0x11:
code_r0x0001077893a8:
      func_0x00010778c744();
      func_0x00010778c5b0();
      puVar15 = (undefined *)0x1077893b4;
      goto code_r0x00010778ac78;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1c:
    case 0x21:
    case 0x26:
code_r0x000107789308:
      func_0x00010778c744();
      func_0x00010778c5b0();
      func_0x000107343028();
      if ((bStack_90 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_29 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          func_0x00010778c6bc();
          func_0x00010778c848();
        }
        func_0x00010778c590();
      }
      else {
        uVar3 = uVar14 - 0x15 == 0x11;
        switch(uVar14 - 0x15) {
        case 0:
          func_0x00010778c79c();
          ppuVar4 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_28 + 0xd80);
          func_0x00010778c12c(ppuVar4,ppuVar6);
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c800(puStack_100 + 0xd80);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c800(*param_7 + 0xd80);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 1:
          func_0x00010778c79c();
          ppuVar4 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_33 + 0xdf0);
          func_0x00010778c12c(ppuVar4,ppuVar6);
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c800(puStack_100 + 0xdf0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c800(*param_7 + 0xdf0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 2:
          func_0x00010778c79c();
          ppuVar4 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_34 + 0xe60);
          func_0x00010778c12c(ppuVar4,ppuVar6);
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c800(puStack_100 + 0xe60);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c800(*param_7 + 0xe60);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 3:
          func_0x00010778c79c();
          ppuVar4 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_35 + 0xed0);
          func_0x00010778c12c(ppuVar4,ppuVar6);
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c800(puStack_100 + 0xed0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c800(*param_7 + 0xed0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 4:
          func_0x00010778c79c();
          ppuVar4 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_36 + 0xf40);
          func_0x00010778c12c(ppuVar4,ppuVar6);
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c800(puStack_100 + 0xf40);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c800(*param_7 + 0xf40);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        default:
          ppuVar5 = (undefined **)0x0;
          func_0x000107343508();
          func_0x00010778c850();
          uVar2 = uVar14 - 0x1a >> 1 & 0x7f | (uVar14 - 0x1a) * 0x80 & 0xff;
          uVar3 = uVar2 - 4 == 2;
          if (1 < uVar2 - 4) {
            if (uVar2 == 0) goto code_r0x0001077894ec;
            uVar3 = uVar2 == 2;
            if (!(bool)uVar3) goto LAB_10778996c;
          }
          goto code_r0x000107789454;
        case 7:
          func_0x00010778c79c();
          func_0x00010778c860();
          func_0x00010778c12c();
          if (((ulong)ppuVar5 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c764(puStack_100);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c764(*param_7);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 0xc:
          func_0x00010778c79c();
          func_0x00010778c860();
          func_0x00010778c12c();
          if (((ulong)ppuVar5 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c764(puStack_100);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c764(*param_7);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 0x11:
          func_0x00010778c79c();
          func_0x00010778c860();
          func_0x00010778c12c();
          if (((ulong)ppuVar5 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c764(puStack_100);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c764(*param_7);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        func_0x00010778c888();
      }
      func_0x00010778c8b4();
      func_0x000107343508();
      break;
    case 0x1a:
code_r0x0001077894ec:
      puStack_128 = (undefined *)0x0;
      uStack_120 = 0;
      uStack_118 = 0;
      func_0x00010778c924();
      func_0x00010755d8d4();
      if ((bStack_a0 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_32 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          func_0x00010778c6bc();
          func_0x00010778c848();
        }
        func_0x00010778c590();
      }
      else {
        func_0x00010778c79c();
        ppuVar4 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_31 + 0xfb0);
        func_0x00010778c198(ppuVar4,ppuVar6);
        if (((ulong)ppuVar4 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c9f4(puStack_100);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c9f4(*param_7);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        func_0x00010778c888();
      }
      func_0x00010778c8b4();
      func_0x00010778b4b4();
      break;
    case 0x1e:
    case 0x22:
    case 0x24:
code_r0x000107789454:
      puStack_128 = (undefined *)0x0;
      uStack_120 = 0;
      uStack_118 = 0;
      func_0x00010778c924();
      func_0x00010755d660();
      if ((bStack_80 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_30 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          func_0x00010778c6bc();
          func_0x00010778c848();
        }
        func_0x00010778c590();
      }
      else {
        uVar3 = uVar14 == 0x24;
        if ((bool)uVar3) {
          func_0x00010778c79c();
          func_0x00010778c860();
          func_0x00010778c348();
          if (((ulong)ppuVar5 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c770(puStack_100);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c770(*param_7);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar3 = uVar13 == 0x22;
          if ((bool)uVar3) {
            func_0x00010778c79c();
            func_0x00010778c860();
            func_0x00010778c348();
            if (((ulong)ppuVar5 & 1) == 0) {
              if ((*(long *)(param_3 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                ppuVar6 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c770(puStack_100);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c770(*param_7);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar3 = uVar13 == 0x1e;
            if (!(bool)uVar3) {
              func_0x00010778b4e4(apuStack_d8);
              goto code_r0x000107789968;
            }
            func_0x00010778c79c();
            func_0x00010778c860();
            func_0x00010778c348();
            if (((ulong)ppuVar5 & 1) == 0) {
              if ((*(long *)(param_3 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                ppuVar6 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c770(puStack_100);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c770(*param_7);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
        }
        func_0x00010778c888();
      }
      func_0x00010778c8b4();
      func_0x00010778b4e4();
      break;
    default:
      goto LAB_10778996c;
    case 0x4e:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x59:
code_r0x0001077897f8:
      func_0x00010778c6a4();
      func_0x00010778c5b0();
      func_0x00010733e5bc();
      if ((bStack_a0 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_38 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          goto code_r0x000107789888;
        }
        goto code_r0x000107789890;
      }
      uVar3 = uVar13 - 0x4e == 0xb;
      switch(uVar13 - 0x4e) {
      case 0:
        func_0x00010778c79c();
        ppuVar4 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_37 + 0x168);
        func_0x000107785b50(ppuVar4,ppuVar6);
        if (((ulong)ppuVar4 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c808(puStack_100 + 0x168);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c808(*param_7 + 0x168);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      default:
        func_0x00010778c9b0();
        func_0x00010778c850();
        uVar2 = uVar13 - 0x4f;
        uVar3 = uVar2 == 9;
        if ((uVar2 < 10) && (uVar3 = (1 << (ulong)(uVar2 & 0x1f) & 0x3c1U) == 0, !(bool)uVar3))
        goto code_r0x0001077898c0;
        goto LAB_10778996c;
      case 2:
        func_0x00010778c79c();
        ppuVar4 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_51 + 0x218);
        func_0x000107785b50(ppuVar4,ppuVar6);
        if (((ulong)ppuVar4 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c808(puStack_100 + 0x218);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c808(*param_7 + 0x218);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 3:
        func_0x00010778c79c();
        ppuVar4 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_50 + 0x250);
        func_0x000107785b50(ppuVar4,ppuVar6);
        if (((ulong)ppuVar4 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c808(puStack_100 + 0x250);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c808(*param_7 + 0x250);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 4:
        func_0x00010778c79c();
        ppuVar4 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_52 + 0x288);
        func_0x000107785b50(ppuVar4,ppuVar6);
        if (((ulong)ppuVar4 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c808(puStack_100 + 0x288);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c808(*param_7 + 0x288);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 0xb:
        func_0x00010778c79c();
        ppuVar4 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_53 + 0x510);
        func_0x000107785b50(ppuVar4,ppuVar6);
        if (((ulong)ppuVar4 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c808(puStack_100 + 0x510);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c808(*param_7 + 0x510);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
      }
code_r0x00010778a07c:
      func_0x00010778c888();
code_r0x00010778a080:
      func_0x00010778c8b4();
      func_0x00010733e5d8();
      break;
    case 0x4f:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
code_r0x0001077898c0:
      func_0x00010778c6a4();
      func_0x00010778c5b0();
      func_0x000107323db4();
      if ((bStack_60 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_41 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          func_0x00010778c6bc();
          func_0x00010778c848();
        }
        func_0x00010778c590();
      }
      else {
        uVar3 = uVar14 - 0x4f == 9;
        switch(uVar14 - 0x4f) {
        case 0:
          func_0x00010778c79c();
          ppuVar4 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_39 + 0x1a0);
          func_0x00010778be7c(ppuVar4,ppuVar6);
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c9e8();
              func_0x00010778c838(extraout_x8_40 + 0x1a8);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c9dc();
              func_0x00010778c838(extraout_x8_55 + 0x1a8);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        default:
          func_0x00010732493c(apuStack_d8);
code_r0x000107789968:
          func_0x00010778c850();
          goto LAB_10778996c;
        case 6:
          func_0x00010778c79c();
          ppuVar4 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_44 + 0x330);
          func_0x00010778be7c(ppuVar4,ppuVar6);
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c9e8();
              func_0x00010778c838(extraout_x8_45 + 0x338);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c9dc();
              func_0x00010778c838(extraout_x8_56 + 0x338);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 7:
          func_0x00010778c79c();
          ppuVar4 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_42 + 0x3a8);
          func_0x00010778be7c(ppuVar4,ppuVar6);
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c9e8();
              func_0x00010778c838(extraout_x8_43 + 0x3b0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c9dc();
              func_0x00010778c838(extraout_x8_54 + 0x3b0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 8:
          func_0x00010778c79c();
          ppuVar4 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_46 + 0x420);
          func_0x00010778be7c(ppuVar4,ppuVar6);
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c9e8();
              func_0x00010778c838(extraout_x8_47 + 0x428);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c9dc();
              func_0x00010778c838(extraout_x8_57 + 0x428);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 9:
          func_0x00010778c79c();
          ppuVar4 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_48 + 0x498);
          func_0x00010778be7c(ppuVar4,ppuVar6);
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c9e8();
              func_0x00010778c838(extraout_x8_49 + 0x4a0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c9dc();
              func_0x00010778c838(extraout_x8_58 + 0x4a0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        func_0x00010778c888();
      }
      func_0x00010778c8b4();
      func_0x00010732493c();
    }
    ppuVar4 = &puStack_128;
    goto LAB_10778a0f8;
  }
LAB_10778996c:
  puStack_100 = (undefined *)0x0;
  lStack_f8 = 0;
  lStack_f0 = 0;
  ppuVar6 = &puStack_100;
  func_0x00010754bb48(apuStack_d8,param_6,ppuVar6,param_7);
  if ((bStack_b0 & 1) == 0) {
    unaff_x19[1] = lStack_f8;
    *unaff_x19 = (long)puStack_100;
    unaff_x19[2] = lStack_f0;
    lStack_f8 = 0;
    lStack_f0 = 0;
    puStack_100 = (undefined *)0x0;
    uVar10 = 1;
    goto LAB_10778a7b4;
  }
  uVar3 = uVar13 - 0x27 == 0x26;
  switch(uVar13 - 0x27) {
  case 0:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      func_0x00010778c728();
      func_0x00010778cb14();
      goto LAB_10778a7b0;
    }
    func_0x00010778c794();
    func_0x00010778c718();
    func_0x00010778cb14();
    goto code_r0x00010778a79c;
  case 1:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778ca9c();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778ca9c();
    goto LAB_10778a7b0;
  case 2:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0x678] = uStack_b8;
code_r0x00010778a700:
      func_0x00010778c7b0();
      extraout_x9_04[1] = in_register_00005008;
      *extraout_x9_04 = param_1;
      extraout_x9_04[3] = in_register_00005028;
      extraout_x9_04[2] = param_2;
      goto code_r0x00010778a79c;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0x678) = uStack_b8;
    break;
  case 3:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0x6d8] = uStack_b8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0x6d8) = uStack_b8;
    break;
  case 4:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778cad8();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778cad8();
    goto LAB_10778a7b0;
  case 5:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0x7a8] = uStack_b8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0x7a8) = uStack_b8;
    break;
  case 6:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0x808] = uStack_b8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0x808) = uStack_b8;
    break;
  case 7:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0x868] = uStack_b8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0x868) = uStack_b8;
    break;
  case 8:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0x8c8] = uStack_b8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0x8c8) = uStack_b8;
    break;
  case 9:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0x928] = uStack_b8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0x928) = uStack_b8;
    break;
  case 10:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778ca74();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778ca74();
    goto LAB_10778a7b0;
  case 0xb:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778caec();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778caec();
    goto LAB_10778a7b0;
  case 0xc:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778cac4();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778cac4();
    goto LAB_10778a7b0;
  case 0xd:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778ca88();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778ca88();
    goto LAB_10778a7b0;
  case 0xe:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778cb00();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778cb00();
    goto LAB_10778a7b0;
  case 0xf:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778cab0();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778cab0();
    goto LAB_10778a7b0;
  case 0x10:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0xbe8] = uStack_b8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0xbe8) = uStack_b8;
    break;
  case 0x11:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0xc48] = uStack_b8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0xc48) = uStack_b8;
    break;
  case 0x12:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0xca8] = uStack_b8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0xca8) = uStack_b8;
    break;
  case 0x13:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0xd18] = uStack_b8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0xd18) = uStack_b8;
    break;
  case 0x14:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0xd78] = uStack_b8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0xd78) = uStack_b8;
    break;
  case 0x15:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0xde8] = uStack_b8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0xde8) = uStack_b8;
    break;
  case 0x16:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0xe58] = uStack_b8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0xe58) = uStack_b8;
    break;
  case 0x17:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0xec8] = uStack_b8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0xec8) = uStack_b8;
    break;
  case 0x18:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0xf38] = uStack_b8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0xf38) = uStack_b8;
    break;
  case 0x19:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      puStack_128[0xfa8] = uStack_b8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0xfa8) = uStack_b8;
    break;
  case 0x1a:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      lVar11 = *(long *)(param_3 + 8) + 0xfe8;
code_r0x00010778aa8c:
      func_0x00010778c7b0(lVar11);
      extraout_x8_72[1] = in_register_00005008;
      *extraout_x8_72 = param_1;
      extraout_x8_72[3] = in_register_00005028;
      extraout_x8_72[2] = param_2;
      *(undefined1 *)(extraout_x8_72 + 4) = uStack_b8;
      goto LAB_10778a7b0;
    }
    func_0x00010778c794();
    puVar15 = puStack_128 + 0xfe8;
    goto code_r0x00010778a78c;
  case 0x1b:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      lVar11 = *(long *)(param_3 + 8);
      lVar12 = 0x1048;
code_r0x00010778aa88:
      lVar11 = lVar11 + lVar12;
      goto code_r0x00010778aa8c;
    }
    func_0x00010778c794();
    lVar11 = 0x1048;
    goto code_r0x00010778a788;
  case 0x1c:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      lVar11 = *(long *)(param_3 + 8);
      lVar12 = 0x10b8;
      goto code_r0x00010778aa88;
    }
    func_0x00010778c794();
    lVar11 = 0x10b8;
    goto code_r0x00010778a788;
  case 0x1d:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_128);
      *(undefined8 *)(extraout_x8_64 + 0x1128) = in_register_00005008;
      *(undefined8 *)(extraout_x8_64 + 0x1120) = param_1;
      *(undefined8 *)(extraout_x8_64 + 0x1138) = in_register_00005028;
      *(undefined8 *)(extraout_x8_64 + 0x1130) = param_2;
      lVar11 = extraout_x9_05;
code_r0x00010778a75c:
      *(undefined1 *)(lVar11 + 0x20) = uStack_b8;
      goto code_r0x00010778a79c;
    }
    func_0x00010778c6c8(*(undefined8 *)(param_3 + 8));
    *(undefined8 *)(extraout_x8_71 + 0x1128) = in_register_00005008;
    *(undefined8 *)(extraout_x8_71 + 0x1120) = param_1;
    *(undefined8 *)(extraout_x8_71 + 0x1138) = in_register_00005028;
    *(undefined8 *)(extraout_x8_71 + 0x1130) = param_2;
    lVar11 = extraout_x9_12;
    goto code_r0x00010778aa74;
  case 0x1e:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_128);
      *(undefined8 *)(extraout_x8_62 + 0x11a8) = in_register_00005008;
      *(undefined8 *)(extraout_x8_62 + 0x11a0) = param_1;
      *(undefined8 *)(extraout_x8_62 + 0x11b8) = in_register_00005028;
      *(undefined8 *)(extraout_x8_62 + 0x11b0) = param_2;
      lVar11 = extraout_x9_02;
      goto code_r0x00010778a75c;
    }
    func_0x00010778c6c8(*(undefined8 *)(param_3 + 8));
    *(undefined8 *)(extraout_x8_69 + 0x11a8) = in_register_00005008;
    *(undefined8 *)(extraout_x8_69 + 0x11a0) = param_1;
    *(undefined8 *)(extraout_x8_69 + 0x11b8) = in_register_00005028;
    *(undefined8 *)(extraout_x8_69 + 0x11b0) = param_2;
    lVar11 = extraout_x9_09;
    goto code_r0x00010778aa74;
  case 0x1f:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_128);
      *(undefined8 *)(extraout_x8_61 + 0x1208) = in_register_00005008;
      *(undefined8 *)(extraout_x8_61 + 0x1200) = param_1;
      *(undefined8 *)(extraout_x8_61 + 0x1218) = in_register_00005028;
      *(undefined8 *)(extraout_x8_61 + 0x1210) = param_2;
      lVar11 = extraout_x9_01;
      goto code_r0x00010778a75c;
    }
    func_0x00010778c6c8(*(undefined8 *)(param_3 + 8));
    *(undefined8 *)(extraout_x8_68 + 0x1208) = in_register_00005008;
    *(undefined8 *)(extraout_x8_68 + 0x1200) = param_1;
    *(undefined8 *)(extraout_x8_68 + 0x1218) = in_register_00005028;
    *(undefined8 *)(extraout_x8_68 + 0x1210) = param_2;
    lVar11 = extraout_x9_08;
    goto code_r0x00010778aa74;
  case 0x20:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_128);
      *(undefined8 *)(extraout_x8_63 + 0x1268) = in_register_00005008;
      *(undefined8 *)(extraout_x8_63 + 0x1260) = param_1;
      *(undefined8 *)(extraout_x8_63 + 0x1278) = in_register_00005028;
      *(undefined8 *)(extraout_x8_63 + 0x1270) = param_2;
      lVar11 = extraout_x9_03;
      goto code_r0x00010778a75c;
    }
    func_0x00010778c6c8(*(undefined8 *)(param_3 + 8));
    *(undefined8 *)(extraout_x8_70 + 0x1268) = in_register_00005008;
    *(undefined8 *)(extraout_x8_70 + 0x1260) = param_1;
    *(undefined8 *)(extraout_x8_70 + 0x1278) = in_register_00005028;
    *(undefined8 *)(extraout_x8_70 + 0x1270) = param_2;
    lVar11 = extraout_x9_10;
    goto code_r0x00010778aa74;
  case 0x21:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_128);
      *(undefined8 *)(extraout_x8_60 + 0x12d8) = in_register_00005008;
      *(undefined8 *)(extraout_x8_60 + 0x12d0) = param_1;
      *(undefined8 *)(extraout_x8_60 + 0x12e8) = in_register_00005028;
      *(undefined8 *)(extraout_x8_60 + 0x12e0) = param_2;
      lVar11 = extraout_x9_00;
      goto code_r0x00010778a75c;
    }
    func_0x00010778c6c8(*(undefined8 *)(param_3 + 8));
    *(undefined8 *)(extraout_x8_67 + 0x12d8) = in_register_00005008;
    *(undefined8 *)(extraout_x8_67 + 0x12d0) = param_1;
    *(undefined8 *)(extraout_x8_67 + 0x12e8) = in_register_00005028;
    *(undefined8 *)(extraout_x8_67 + 0x12e0) = param_2;
    lVar11 = extraout_x9_07;
    goto code_r0x00010778aa74;
  case 0x22:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_128);
      *(undefined8 *)(extraout_x8_59 + 0x1358) = in_register_00005008;
      *(undefined8 *)(extraout_x8_59 + 0x1350) = param_1;
      *(undefined8 *)(extraout_x8_59 + 0x1368) = in_register_00005028;
      *(undefined8 *)(extraout_x8_59 + 0x1360) = param_2;
      lVar11 = extraout_x9;
      goto code_r0x00010778a75c;
    }
    func_0x00010778c6c8(*(undefined8 *)(param_3 + 8));
    *(undefined8 *)(extraout_x8_66 + 0x1358) = in_register_00005008;
    *(undefined8 *)(extraout_x8_66 + 0x1350) = param_1;
    *(undefined8 *)(extraout_x8_66 + 0x1368) = in_register_00005028;
    *(undefined8 *)(extraout_x8_66 + 0x1360) = param_2;
    lVar11 = extraout_x9_06;
code_r0x00010778aa74:
    *(undefined1 *)(lVar11 + 0x20) = uStack_b8;
    goto LAB_10778a7b0;
  case 0x23:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      lVar11 = *(long *)(param_3 + 8);
      lVar12 = 0x13b8;
      goto code_r0x00010778aa88;
    }
    func_0x00010778c794();
    lVar11 = 0x13b8;
    goto code_r0x00010778a788;
  case 0x24:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      lVar11 = *(long *)(param_3 + 8);
      lVar12 = 0x1438;
      goto code_r0x00010778aa88;
    }
    func_0x00010778c794();
    lVar11 = 0x1438;
    goto code_r0x00010778a788;
  case 0x25:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      lVar11 = *(long *)(param_3 + 8);
      lVar12 = 0x1498;
      goto code_r0x00010778aa88;
    }
    func_0x00010778c794();
    lVar11 = 0x1498;
    goto code_r0x00010778a788;
  case 0x26:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      lVar11 = *(long *)(param_3 + 8);
      lVar12 = 0x1508;
      goto code_r0x00010778aa88;
    }
    func_0x00010778c794();
    lVar11 = 0x1508;
code_r0x00010778a788:
    puVar15 = puStack_128 + lVar11;
code_r0x00010778a78c:
    func_0x00010778c7b0(puVar15);
    extraout_x8_65[1] = in_register_00005008;
    *extraout_x8_65 = param_1;
    extraout_x8_65[3] = in_register_00005028;
    extraout_x8_65[2] = param_2;
    *(undefined1 *)(extraout_x8_65 + 4) = uStack_b8;
code_r0x00010778a79c:
    ppuVar6 = &puStack_128;
    func_0x00010778be38(param_3 + 8,ppuVar6);
    func_0x00010778ada4(&puStack_128);
  default:
    goto LAB_10778a7b0;
  }
  func_0x00010778c7b0();
  extraout_x9_11[1] = in_register_00005008;
  *extraout_x9_11 = param_1;
  extraout_x9_11[3] = in_register_00005028;
  extraout_x9_11[2] = param_2;
LAB_10778a7b0:
  func_0x00010778c888();
  uVar10 = extraout_w8;
LAB_10778a7b4:
  *(undefined1 *)(unaff_x19 + 3) = uVar10;
  ppuVar4 = &puStack_100;
  ppuVar7 = param_7;
LAB_10778a0f8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar4);
LAB_10778a0fc:
  func_0x00010778c57c(uStack_58);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010778c6e4();
  func_0x00010754e888(apuStack_d8);
  ppuVar5 = &puStack_128;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar5);
  puVar15 = &UNK_10778ac78;
  func_0x00010778c858();
code_r0x00010778ac78:
  puStack_150 = &stack0xfffffffffffffff0;
  puStack_148 = puVar15;
  func_0x00010755ac94(&uStack_151,ppuVar5,ppuVar6,ppuVar7,*puVar8,*(undefined1 *)ppuVar9);
  return;
}



/* Entry: 10778b150; end: 10778b19b;  */

/* WARNING: Possible PIC construction at 0x00010778b170: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778b174) */
/* WARNING: Removing unreachable block (ram,0x00010778b194) */
/* WARNING: Removing unreachable block (ram,0x00010778b18c) */
/* WARNING: Removing unreachable block (ram,0x00010778c70c) */

undefined1 *
FUN_10778b150(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_d0 [56];
  undefined8 uStack_98;
  undefined1 auStack_68 [72];
  
  func_0x00010778c620();
  uVar2 = *param_2 == '\0';
  puVar1 = &DAT_10f42a7a5;
  if ((bool)uVar2) {
    puVar1 = &DAT_10f42a7a1;
  }
  uVar4 = SUB81(auStack_d0,0);
  puVar3 = auStack_d0;
  func_0x00010724cc70(auStack_68,puVar1);
  uStack_98 = extraout_x8;
  func_0x000100060964(auStack_d0);
  func_0x000104c33004(auStack_68);
  func_0x000104c2f714();
  func_0x00010724cc40(uStack_98);
  if ((bool)uVar2) {
    return auStack_68;
  }
  ___stack_chk_fail();
  *puVar3 = uVar4;
  puVar3[1] = param_5;
  *(undefined2 *)(puVar3 + 2) = 0;
  func_0x000104c2fe00(puVar3 + 8,param_3);
  puVar3[0x40] = 0;
  puVar3[0x78] = 0;
  func_0x00010724af54(puVar3 + 0x80,param_4);
  func_0x00010724afdc(puVar3 + 0xd0,param_6);
  puVar3[0x110] = 0;
  puVar3[0x118] = 0;
  puVar3[0x120] = 0;
  puVar3[0x128] = 0;
  puVar3[0x130] = 0;
  puVar3[0x148] = 0;
  puVar3[0x170] = 0;
  puVar3[0x1a8] = 0;
  *(undefined2 *)(puVar3 + 0x1b0) = 0;
  *(undefined8 *)(puVar3 + 0x158) = 0;
  *(undefined8 *)(puVar3 + 0x160) = 0;
  *(undefined8 *)(puVar3 + 0x150) = 0;
  puVar3[0x168] = 0;
  *(undefined8 *)(puVar3 + 0x1c0) = 0;
  *(undefined8 *)(puVar3 + 0x1b8) = 0;
  *(undefined8 *)(puVar3 + 0x1d0) = 0;
  *(undefined8 *)(puVar3 + 0x1c8) = 0;
  *(undefined8 *)(puVar3 + 0x1e0) = 0;
  *(undefined8 *)(puVar3 + 0x1d8) = 0;
  *(undefined8 *)(puVar3 + 0x1e8) = 0;
  *(undefined4 *)(puVar3 + 0x1f0) = 0x3f800000;
  return puVar3;
}



/* Entry: 10778b39c; end: 10778b3e7;  */

/* WARNING: Possible PIC construction at 0x00010778b3bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778b3c0) */
/* WARNING: Removing unreachable block (ram,0x00010778b3e0) */
/* WARNING: Removing unreachable block (ram,0x00010778b3d8) */

undefined1 * FUN_10778b39c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined8 uStack_f8;
  undefined1 auStack_d0 [56];
  undefined8 uStack_98;
  undefined1 auStack_68 [72];
  
  func_0x00010778c620(param_2);
  puVar1 = auStack_d0;
  func_0x00010778c620(auStack_68);
  uStack_98 = extraout_x8;
  func_0x000104c2fe00(auStack_d0);
  func_0x000104c33004();
  func_0x000104c2f714();
  func_0x00010778c57c(uStack_98);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010778c620();
  func_0x00010778c7e0();
  func_0x00010778c980();
  func_0x00010778c758();
  func_0x00010778c738(2);
  func_0x00010778c57c(uStack_f8);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (puVar1[0x38] == '\x01') {
    func_0x00010748aaa4(puVar1);
  }
  return puVar1;
}



/* Entry: 10778b608; end: 10778b64b;  */

undefined8 * FUN_10778b608(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d7e58;
  func_0x00010778b674(param_1 + 3);
  return param_1;
}



/* Entry: 10778b854; end: 10778bbf7;  */

void FUN_10778b854(undefined8 *param_1)

{
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  undefined1 extraout_w8_05;
  undefined1 extraout_w8_06;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x26) = 1;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x32) = 1;
  param_1[0x3f] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 1;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  *(undefined1 *)(param_1 + 0x58) = 1;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  *(undefined1 *)(param_1 + 100) = 1;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  param_1[0x89] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  *(undefined1 *)(param_1 + 0x89) = 1;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  *(undefined1 *)(param_1 + 0x95) = 1;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  *(undefined1 *)(param_1 + 0xad) = 1;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  *(undefined1 *)(param_1 + 0xb9) = 1;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  *(undefined1 *)(param_1 + 199) = 1;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  *(undefined1 *)(param_1 + 0xd4) = 1;
  param_1[0xde] = 0;
  param_1[0xdd] = 0;
  param_1[0xe0] = 0;
  param_1[0xdf] = 0;
  param_1[0xda] = 0;
  param_1[0xd9] = 0;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  param_1[0xd6] = 0;
  param_1[0xd5] = 0;
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  *(undefined1 *)(param_1 + 0xe0) = 1;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  param_1[0xe6] = 0;
  param_1[0xe5] = 0;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  param_1[0xe4] = 0;
  param_1[0xe3] = 0;
  *(undefined1 *)(param_1 + 0xec) = 1;
  func_0x00010778cb34();
  *(undefined1 *)(param_1 + 0xfa) = extraout_w8;
  param_1[0x104] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x103] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x106] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x105] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x100] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0xff] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x102] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x101] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0xfc] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0xfb] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0xfe] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0xfd] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined1 *)(param_1 + 0x106) = extraout_w8;
  func_0x00010778cb34();
  *(undefined1 *)(param_1 + 0x114) = extraout_w8_00;
  func_0x00010778cb34();
  *(undefined1 *)(param_1 + 0x122) = extraout_w8_01;
  func_0x00010778cb34();
  *(undefined1 *)(param_1 + 0x130) = extraout_w8_02;
  func_0x00010778cb34();
  *(undefined1 *)(param_1 + 0x13e) = extraout_w8_03;
  func_0x00010778cb34();
  *(undefined1 *)(param_1 + 0x14c) = extraout_w8_04;
  param_1[0x156] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x155] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x158] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x157] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x152] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x151] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x154] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x153] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x14e] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x14d] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x150] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x14f] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined1 *)(param_1 + 0x158) = extraout_w8_04;
  param_1[0x162] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x161] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x164] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x163] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x15e] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x15d] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x160] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x15f] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x15a] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x159] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x15c] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x15b] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined1 *)(param_1 + 0x164) = extraout_w8_04;
  func_0x00010778cb34();
  *(undefined1 *)(param_1 + 0x172) = extraout_w8_05;
  param_1[0x17f] = 0;
  param_1[0x17c] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x17b] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x17e] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x17d] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x178] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x177] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x17a] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x179] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x174] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x173] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x176] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x175] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined1 *)(param_1 + 0x17f) = extraout_w8_05;
  param_1[399] = CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,
                                                  CONCAT12(uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x18e] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x18d] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x18c] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x18b] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x18a] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x189] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x188] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x187] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x186] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x185] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x184] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x183] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x182] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x181] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x180] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined1 *)(param_1 + 399) = extraout_w8_05;
  param_1[0x19b] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x19a] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x199] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x198] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x197] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x196] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x195] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x194] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x193] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x192] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x191] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[400] = CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12
                                                  (uVar3,CONCAT11(uVar2,uVar1)))))));
  *(undefined1 *)(param_1 + 0x19b) = extraout_w8_05;
  param_1[0x1a7] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1a6] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1a5] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1a4] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1a3] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1a2] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1a1] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1a0] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x19f] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x19e] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x19d] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x19c] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined1 *)(param_1 + 0x1a7) = extraout_w8_05;
  param_1[0x1b5] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1b4] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1b3] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1b2] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1b1] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1b0] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1af] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1ae] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1ad] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1ac] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1ab] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1aa] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1a9] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1a8] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined1 *)(param_1 + 0x1b5) = extraout_w8_05;
  param_1[0x1c5] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1c4] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1c3] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1c2] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1c1] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1c0] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1bf] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1be] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1bd] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1bc] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1bb] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1ba] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1b9] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1b8] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1b7] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1b6] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined1 *)(param_1 + 0x1c5) = extraout_w8_05;
  param_1[0x1d2] = 0;
  param_1[0x1d1] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1d0] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1cf] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1ce] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1cd] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1cc] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1cb] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1ca] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1e0] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1df] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1e2] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1e1] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1dc] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1db] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1de] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1dd] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1d8] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1d7] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1da] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1d9] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1d4] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1d3] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1d6] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1d5] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1ec] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1eb] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1ee] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1ed] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1e8] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1e7] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1ea] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1e9] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1e4] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1e3] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1e6] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1e5] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  func_0x00010778cb34();
  param_1[0x1c9] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1c8] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  param_1[0x1c7] =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0x1c6] =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined1 *)(param_1 + 0x1d2) = extraout_w8_06;
  *(undefined1 *)(param_1 + 0x1e2) = extraout_w8_06;
  *(undefined1 *)(param_1 + 0x1ee) = extraout_w8_06;
  *(undefined1 *)(param_1 + 0x1fc) = extraout_w8_06;
  return;
}



/* Entry: 10778bd6c; end: 10778bd8f;  */

void FUN_10778bd6c(void)

{
  func_0x00010778ca60();
  func_0x00010778c970();
  return;
}



/* Entry: 10778bfac; end: 10778bfbf;  */

void FUN_10778bfac(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x30) != 0) {
    uStack_18 = param_3;
    func_0x00010778bfec(&lStack_20);
  }
  return;
}



/* Entry: 10778c094; end: 10778c0cb;  */

void FUN_10778c094(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x30) == 2) {
    func_0x00010778c87c(param_2,param_3);
    func_0x0001072f6188();
    *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
    return;
  }
  func_0x00010778c0f4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10778c200; end: 10778c26f;  */

bool FUN_10778c200(int param_1)

{
  _memcmp();
  return param_1 == 0;
}



/* Entry: 10778c480; end: 10778c4f7;  */

void FUN_10778c480(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x50) != 0) {
    func_0x00010748a890(lVar1);
    *(undefined4 *)(lVar1 + 0x50) = 0;
  }
  return;
}



/* Entry: 10778cfe0; end: 10778d1eb;  */

long FUN_10778cfe0(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = &PTR_DAT_1109d7fb0;
  func_0x00010778ae7c(param_1 + 0xa9);
  func_0x00010778b7c0(param_1 + 0x2d);
  func_0x0001077866dc(param_1);
  *unaff_x20 = extraout_x8;
  func_0x000107284db4(param_1 + 0x28);
  func_0x000107284d8c(unaff_x19 + 0xd0);
  func_0x000107283194(unaff_x19 + 0xc0);
  func_0x0001072c9b9c(unaff_x19 + 0xb0);
  func_0x000104c2f714(unaff_x19 + 0x78);
  func_0x000104c2f714(unaff_x19 + 0x40);
  func_0x000104c2f714(unaff_x20 + 1);
  return unaff_x19;
}



/* Entry: 10778d3b4; end: 10778d47b;  */

byte FUN_10778d3b4(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  
  bVar6 = *(int *)(param_1 + 0x58) == 0;
  bVar1 = 2;
  if (bVar6) {
    bVar1 = 3;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    bVar1 = bVar6;
  }
  bVar2 = bVar1 | 4;
  if (*(int *)(param_1 + 0xe0) != 0) {
    bVar2 = bVar1;
  }
  bVar1 = bVar2 | 8;
  if (*(int *)(param_1 + 0x128) != 0) {
    bVar1 = bVar2;
  }
  bVar2 = 0x10;
  if (*(int *)(param_1 + 0x160) != 0) {
    bVar2 = 0;
  }
  bVar3 = 0x20;
  if (*(int *)(param_1 + 0x1b8) != 0) {
    bVar3 = 0;
  }
  bVar4 = 0x40;
  if (*(int *)(param_1 + 0x200) != 0) {
    bVar4 = 0;
  }
  bVar5 = 0x80;
  if (*(int *)(param_1 + 600) != 0) {
    bVar5 = 0;
  }
  return bVar3 | bVar2 | bVar4 | bVar5 | bVar1;
}



/* Entry: 10778daa4; end: 10778db9f;  */

long FUN_10778daa4(long param_1)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  long lVar3;
  long *plStack_48;
  long lStack_40;
  long **pplStack_38;
  
  lVar3 = -0x61c8864680b583eb;
  lVar1 = param_1 + 0x168;
  func_0x0001077859c4(lVar1);
  lStack_40 = 0;
  if (*(int *)(param_1 + 0x1d0) != 0) {
    plStack_48 = &lStack_40;
    func_0x0001073dd72c(param_1 + 0x1a0);
    pplStack_38 = &plStack_48;
    func_0x00010778fa48(*(undefined4 *)(param_1 + 0x1d0));
    (*(code *)(&PTR_FUN_1109d83b8)[extraout_x8])(&pplStack_38,param_1 + 0x1a0);
    lVar3 = lStack_40 + -0x61c8864680b583eb;
  }
  uVar2 = lVar1 + 0x9e3779b97f4a7c15;
  uVar2 = (uVar2 >> 4) + uVar2 * 0x1000 + lVar3 ^ uVar2;
  func_0x0001077859c4(param_1 + 0x1d8);
  func_0x00010778f808();
  func_0x00010778f398(param_1 + 0x210);
  func_0x00010778f808();
  func_0x00010778bd00(param_1 + 0x248);
  func_0x00010778f808();
  func_0x00010778bd00(param_1 + 0x2c0);
  func_0x00010778f808();
  param_1 = param_1 + 0x338;
  func_0x00010778bd00(param_1);
  return (param_1 + -0x61c8864680b583eb + uVar2 * 0x1000 + (uVar2 >> 4) ^ uVar2) +
         0x9e3779b97f4a7c15;
}



/* Entry: 10778ee44; end: 10778eedb;  */

/* WARNING: Possible PIC construction at 0x00010778ee74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778ee78) */
/* WARNING: Removing unreachable block (ram,0x00010778eec0) */
/* WARNING: Removing unreachable block (ram,0x00010778eed8) */
/* WARNING: Removing unreachable block (ram,0x00010778eeac) */

undefined1 * FUN_10778ee44(void)

{
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x00010778f7e4();
  uStack_48 = 1;
  func_0x00010778ef04();
  return auStack_50;
}



/* Entry: 10778efe0; end: 10778efff;  */

void FUN_10778efe0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d8330;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10778f1f8; end: 10778f25b;  */

long * FUN_10778f1f8(undefined8 param_1,ulong *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong extraout_x8;
  long extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  byte *pbVar7;
  undefined1 *puVar8;
  char *pcVar9;
  long unaff_x20;
  ulong uVar10;
  undefined1 auStack_68 [72];
  
  func_0x00010778f7e4();
  plVar4 = (long *)*param_2;
  (**(code **)(*plVar4 + 0x28))(auStack_68);
  func_0x00010778f9ac();
  func_0x00010778f930();
  func_0x00010778f6dc();
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  plVar5 = plVar4;
  func_0x00010778f930();
  func_0x00010778f8f8();
  uVar10 = *param_2;
  uVar6 = uVar10;
  _strlen();
  func_0x00010734ac28(plVar5,uVar10,uVar6,0);
  func_0x000107349544();
  func_0x00010734ac10();
  func_0x000107349658();
  func_0x00010734ab28(0);
  *(undefined8 *)(extraout_x9 + 0x18) = extraout_x11;
  *extraout_x10 = 0x22;
  for (uVar10 = extraout_x8; uVar10 < (uVar6 & 0xffffffff); uVar10 = uVar10 + 1) {
    bVar1 = *(byte *)(unaff_x20 + uVar10);
    cVar2 = (&UNK_10de4e441)[bVar1];
    pbVar7 = *(byte **)(*plVar4 + 0x18);
    *(byte **)(*plVar4 + 0x18) = pbVar7 + 1;
    if (cVar2 == '\0') {
      *pbVar7 = bVar1;
    }
    else {
      *pbVar7 = 0x5c;
      pcVar9 = *(char **)(*plVar4 + 0x18);
      *(char **)(*plVar4 + 0x18) = pcVar9 + 1;
      *pcVar9 = cVar2;
      if (cVar2 == 'u') {
        puVar8 = *(undefined1 **)(*plVar4 + 0x18);
        *(undefined1 **)(*plVar4 + 0x18) = puVar8 + 1;
        *puVar8 = 0x30;
        puVar8 = *(undefined1 **)(*plVar4 + 0x18);
        *(undefined1 **)(*plVar4 + 0x18) = puVar8 + 1;
        *puVar8 = 0x30;
        uVar3 = (&UNK_10de4e431)[bVar1 >> 4];
        puVar8 = *(undefined1 **)(*plVar4 + 0x18);
        *(undefined1 **)(*plVar4 + 0x18) = puVar8 + 1;
        *puVar8 = uVar3;
        uVar3 = (&UNK_10de4e431)[(ulong)bVar1 & 0xf];
        puVar8 = *(undefined1 **)(*plVar4 + 0x18);
        *(undefined1 **)(*plVar4 + 0x18) = puVar8 + 1;
        *puVar8 = uVar3;
      }
    }
  }
  func_0x00010734aa78();
  *extraout_x9_00 = 0x22;
  return (long *)0x1;
}



/* Entry: 10778f3dc; end: 10778f417;  */

void FUN_10778f3dc(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 10778f614; end: 10778f6db;  */

void FUN_10778f614(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x30) != 0) {
    func_0x00010778fa18();
    *(undefined4 *)(lVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10778fd54; end: 10778fdc7;  */

undefined8 *
FUN_10778fd54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_60 [32];
  
  func_0x00010778ff64();
  func_0x0001073dcd34(auStack_60);
  *param_4 = &PTR_DAT_1109d84b0;
  *(undefined4 *)((long)param_4 + 0x1c) = param_1;
  *(undefined4 *)(param_4 + 4) = param_2;
  *(undefined4 *)((long)param_4 + 0x24) = param_3;
  func_0x000107493f00(param_4 + 5,param_6);
  return param_4;
}



/* Entry: 10778ff24; end: 10778ff3b;  */

void FUN_10778ff24(long param_1)

{
  func_0x00010778ff3c();
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}



/* Entry: 1077902d4; end: 10779040f;  */

void FUN_1077902d4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lStack_100;
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
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010779191c(param_2,*(undefined8 *)(param_2 + 8));
  lVar1 = lStack_60;
  func_0x000107262f3c(lStack_60 + 8,param_3);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  lStack_100 = 0;
  uStack_d0 = 1;
  uStack_78 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 1;
  func_0x0001077914cc(lVar1 + 0x440,&lStack_100);
  func_0x000107784a7c(lVar1 + 0x478,&uStack_c8);
  func_0x000107791500(&lStack_100);
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  uStack_f8 = uStack_58;
  lStack_100 = lStack_60;
  lStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_107781b94();
  func_0x0001073ad4c4(&lStack_100);
  func_0x0001073e2454(&uStack_40);
  *puVar2 = &PTR_DAT_1109d8510;
  func_0x0001073e2454(&uStack_50);
  *param_1 = puVar2;
  func_0x0001077918f8();
  return;
}



/* Entry: 107790acc; end: 107791373;  */

void FUN_107790acc(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6)

{
  char cVar1;
  int iVar2;
  undefined **ppuVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 uVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  byte bStack_b8;
  byte bStack_a8;
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_60 [4];
  
  iVar2 = (int)&uStack_e0;
  uVar4 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uStack_70 = param_3;
  uStack_68 = param_4;
  func_0x00010772d2fc(&uStack_e0,&uStack_70);
  ppuVar3 = &PTR_DAT_1109d8588;
  func_0x000107785358(&PTR_DAT_1109d8588,&UNK_1109d8720,&uStack_e0);
  if ((ppuVar3 == (undefined **)&UNK_1109d8720) ||
     (func_0x000107785400(&uStack_e0,ppuVar3), iVar2 != 0)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
  cVar1 = *(char *)(ppuVar3 + 1);
  switch(cVar1) {
  case '\0':
    alStack_60[0] = 0;
    alStack_60[1] = 0;
    alStack_60[2] = 0;
    uStack_e0 = 0;
    auStack_a0[0] = 0;
    func_0x000107791374(&lStack_88,param_5,alStack_60,param_6,&uStack_e0,auStack_a0);
    if ((uStack_78 & 1) == 0) {
      func_0x00010779193c();
      if (extraout_x8_03 != 0) {
        func_0x000105988308(&uStack_e0,param_6 + 8,alStack_60);
        func_0x000107791984();
        func_0x0001003a9204(auStack_a0);
        func_0x000100066230(alStack_60,auStack_a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
      }
      func_0x0001077919a0();
      uVar19 = extraout_w8;
    }
    else {
      func_0x000107791954();
      plVar5 = &lStack_88;
      func_0x0001077908b8(plVar5,extraout_x8_01 + 0x440);
      if (((ulong)plVar5 & 1) == 0) {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x000107790054(&uStack_e0,*param_6);
          func_0x000107791a7c(CONCAT71(uStack_df,uStack_e0));
          func_0x000107791858(param_6,&uStack_e0);
          func_0x000107791990();
        }
        else {
          func_0x000107791a7c(*param_6);
        }
        func_0x0001077918cc();
        func_0x000107791914();
      }
      uVar19 = 0;
      *(undefined1 *)param_1 = 0;
    }
    *(undefined1 *)(param_1 + 3) = uVar19;
    func_0x000107791528(&lStack_88);
    break;
  case '\x01':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case '\x0e':
  case '\x0f':
    lStack_88 = 0;
    lStack_80 = 0;
    uStack_78 = 0;
    alStack_60[0] = (ulong)alStack_60[0]._1_7_ << 8;
    auStack_a0[0] = 0;
    func_0x000107791960();
    if ((bStack_a8 & 1) == 0) {
      func_0x00010779193c();
      if (extraout_x8_00 != 0) {
        func_0x0001077919ec();
        func_0x000107791984();
        func_0x0001077919c0();
code_r0x000107790bfc:
        func_0x000100066230(&lStack_88,auStack_a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
      }
      goto code_r0x000107790c10;
    }
    switch(cVar1) {
    case '\x01':
      func_0x000107791954();
      func_0x000107786038(&uStack_e0,extraout_x8 + 0x478);
      if ((uVar4 & 1) == 0) {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x00010779191c();
          func_0x000107791a48(alStack_60[0]);
          func_0x0001077918c0();
          func_0x0001077918f8();
        }
        else {
          func_0x000107791a48(*param_6);
        }
        func_0x0001077918cc();
        func_0x000107791914();
      }
      break;
    default:
      func_0x000107791a54();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_88);
      goto LAB_107790f18;
    case '\x04':
      func_0x000107791954();
      func_0x000107786038(&uStack_e0,extraout_x8_12 + 0x168);
      if ((uVar14 & 1) == 0) {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x00010779191c();
          func_0x0001077918f0(alStack_60[0] + 0x168);
          func_0x0001077918c0();
          func_0x0001077918f8();
        }
        else {
          func_0x0001077918f0(*param_6 + 0x168);
        }
        func_0x0001077918cc();
        func_0x000107791914();
      }
      break;
    case '\x05':
      func_0x000107791954();
      func_0x000107786038(&uStack_e0,extraout_x8_11 + 0x1a0);
      if ((uVar13 & 1) == 0) {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x00010779191c();
          func_0x0001077918f0(alStack_60[0] + 0x1a0);
          func_0x0001077918c0();
          func_0x0001077918f8();
        }
        else {
          func_0x0001077918f0(*param_6 + 0x1a0);
        }
        func_0x0001077918cc();
        func_0x000107791914();
      }
      break;
    case '\x06':
      func_0x000107791954();
      func_0x000107786038(&uStack_e0,extraout_x8_10 + 0x1d8);
      if ((uVar12 & 1) == 0) {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x00010779191c();
          func_0x0001077918f0(alStack_60[0] + 0x1d8);
          func_0x0001077918c0();
          func_0x0001077918f8();
        }
        else {
          func_0x0001077918f0(*param_6 + 0x1d8);
        }
        func_0x0001077918cc();
        func_0x000107791914();
      }
      break;
    case '\a':
      func_0x000107791954();
      func_0x000107786038(&uStack_e0,extraout_x8_06 + 0x210);
      if ((uVar8 & 1) == 0) {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x00010779191c();
          func_0x0001077918f0(alStack_60[0] + 0x210);
          func_0x0001077918c0();
          func_0x0001077918f8();
        }
        else {
          func_0x0001077918f0(*param_6 + 0x210);
        }
        func_0x0001077918cc();
        func_0x000107791914();
      }
      break;
    case '\b':
      func_0x000107791954();
      func_0x000107786038(&uStack_e0,extraout_x8_08 + 0x248);
      if ((uVar10 & 1) == 0) {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x00010779191c();
          func_0x0001077918f0(alStack_60[0] + 0x248);
          func_0x0001077918c0();
          func_0x0001077918f8();
        }
        else {
          func_0x0001077918f0(*param_6 + 0x248);
        }
        func_0x0001077918cc();
        func_0x000107791914();
      }
      break;
    case '\t':
      func_0x000107791954();
      func_0x000107786038(&uStack_e0,extraout_x8_13 + 0x280);
      if ((uVar15 & 1) == 0) {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x00010779191c();
          func_0x0001077918f0(alStack_60[0] + 0x280);
          func_0x0001077918c0();
          func_0x0001077918f8();
        }
        else {
          func_0x0001077918f0(*param_6 + 0x280);
        }
        func_0x0001077918cc();
        func_0x000107791914();
      }
      break;
    case '\n':
      func_0x000107791954();
      func_0x000107786038(&uStack_e0,extraout_x8_14 + 0x2b8);
      if ((uVar16 & 1) == 0) {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x00010779191c();
          func_0x0001077918f0(alStack_60[0] + 0x2b8);
          func_0x0001077918c0();
          func_0x0001077918f8();
        }
        else {
          func_0x0001077918f0(*param_6 + 0x2b8);
        }
        func_0x0001077918cc();
        func_0x000107791914();
      }
      break;
    case '\v':
      func_0x000107791954();
      func_0x000107786038(&uStack_e0,extraout_x8_16 + 0x2f0);
      if ((uVar18 & 1) == 0) {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x00010779191c();
          func_0x0001077918f0(alStack_60[0] + 0x2f0);
          func_0x0001077918c0();
          func_0x0001077918f8();
        }
        else {
          func_0x0001077918f0(*param_6 + 0x2f0);
        }
        func_0x0001077918cc();
        func_0x000107791914();
      }
      break;
    case '\f':
      func_0x000107791954();
      func_0x000107786038(&uStack_e0,extraout_x8_15 + 0x328);
      if ((uVar17 & 1) == 0) {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x00010779191c();
          func_0x0001077918f0(alStack_60[0] + 0x328);
          func_0x0001077918c0();
          func_0x0001077918f8();
        }
        else {
          func_0x0001077918f0(*param_6 + 0x328);
        }
        func_0x0001077918cc();
        func_0x000107791914();
      }
      break;
    case '\r':
      func_0x000107791954();
      func_0x000107786038(&uStack_e0,extraout_x8_05 + 0x360);
      if ((uVar7 & 1) == 0) {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x00010779191c();
          func_0x0001077918f0(alStack_60[0] + 0x360);
          func_0x0001077918c0();
          func_0x0001077918f8();
        }
        else {
          func_0x0001077918f0(*param_6 + 0x360);
        }
        func_0x0001077918cc();
        func_0x000107791914();
      }
      break;
    case '\x0e':
      func_0x000107791954();
      func_0x000107786038(&uStack_e0,extraout_x8_09 + 0x398);
      if ((uVar11 & 1) == 0) {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x00010779191c();
          func_0x0001077918f0(alStack_60[0] + 0x398);
          func_0x0001077918c0();
          func_0x0001077918f8();
        }
        else {
          func_0x0001077918f0(*param_6 + 0x398);
        }
        func_0x0001077918cc();
        func_0x000107791914();
      }
      break;
    case '\x0f':
      func_0x000107791954();
      func_0x000107786038(&uStack_e0,extraout_x8_07 + 0x3d0);
      if ((uVar9 & 1) == 0) {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x00010779191c();
          func_0x0001077918f0(alStack_60[0] + 0x3d0);
          func_0x0001077918c0();
          func_0x0001077918f8();
        }
        else {
          func_0x0001077918f0(*param_6 + 0x3d0);
        }
        func_0x0001077918cc();
        func_0x000107791914();
      }
    }
code_r0x0001077912e8:
    uVar19 = 0;
    *(undefined1 *)param_1 = 0;
    goto code_r0x0001077912f0;
  default:
LAB_107790f18:
    alStack_60[0] = 0;
    alStack_60[1] = 0;
    alStack_60[2] = 0;
    func_0x00010754bb48(&uStack_e0,param_5,alStack_60,param_6);
    if ((bStack_b8 & 1) == 0) {
      func_0x0001077919a0();
      uVar19 = extraout_w8_00;
    }
    else {
      if (cVar1 == '\x03') {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x000107790054(&lStack_88,*(undefined8 *)(param_2 + 8));
          func_0x000107791a1c(lStack_88);
LAB_107791138:
          func_0x000107791858(param_2 + 8,&lStack_88);
          func_0x0001077914a4(&lStack_88);
        }
        else {
          func_0x000107791a1c(*(undefined8 *)(param_2 + 8));
        }
      }
      else if (cVar1 == '\x02') {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x000107790054(&lStack_88,*(undefined8 *)(param_2 + 8));
          func_0x000107791a04(lStack_88);
          goto LAB_107791138;
        }
        func_0x000107791a04(*(undefined8 *)(param_2 + 8));
      }
      uVar19 = 0;
      *(undefined1 *)param_1 = 0;
    }
    *(undefined1 *)(param_1 + 3) = uVar19;
    break;
  case '\x10':
    lStack_88 = 0;
    lStack_80 = 0;
    uStack_78 = 0;
    alStack_60[0] = CONCAT71(alStack_60[0]._1_7_,1);
    auStack_a0[0] = 0;
    func_0x000107791960();
    if ((bStack_a8 & 1) != 0) {
      func_0x000107791954();
      func_0x000107786038(&uStack_e0,extraout_x8_02 + 0x408);
      if ((uVar6 & 1) == 0) {
        if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
          func_0x00010779191c();
          func_0x0001077918f0(alStack_60[0] + 0x408);
          func_0x0001077918c0();
          func_0x0001077918f8();
        }
        else {
          func_0x0001077918f0(*param_6 + 0x408);
        }
        func_0x0001077918cc();
        func_0x000107791914();
      }
      goto code_r0x0001077912e8;
    }
    func_0x00010779193c();
    if (extraout_x8_04 != 0) {
      func_0x0001077919ec();
      func_0x000107791984();
      func_0x0001077919c0();
      goto code_r0x000107790bfc;
    }
code_r0x000107790c10:
    param_1[1] = lStack_80;
    *param_1 = lStack_88;
    param_1[2] = uStack_78;
    lStack_80 = 0;
    uStack_78 = 0;
    lStack_88 = 0;
    uVar19 = 1;
code_r0x0001077912f0:
    *(undefined1 *)(param_1 + 3) = uVar19;
    func_0x000107791a54();
    plVar5 = &lStack_88;
    goto LAB_1077912fc;
  }
  plVar5 = alStack_60;
LAB_1077912fc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar5);
  return;
}



/* Entry: 107791658; end: 10779167f;  */

long FUN_107791658(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000107791680();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107791794; end: 10779189b;  */

undefined8 * FUN_107791794(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001073e2454(&uStack_30);
  return param_1;
}



/* Entry: 107791bf4; end: 107791c07;  */

void FUN_107791bf4(void)

{
  func_0x0001073ad750();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107792290; end: 1077923eb;  */

undefined8 FUN_107792290(long param_1,undefined8 *param_2)

{
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puStack_30;
  undefined1 *puStack_28;
  
  func_0x00010734936c(param_2);
  if (*(int *)(param_1 + 0x198) != 0) {
    func_0x0001077947ac(&DAT_10f4288d6);
    puStack_30 = param_2;
    func_0x0001073e43f4(param_1 + 0x168);
    puStack_28 = (undefined1 *)&puStack_30;
    func_0x000107794bb0(*(undefined4 *)(param_1 + 0x198));
    (*(code *)(&PTR_DAT_1109d8c48)[extraout_x8])(&puStack_28,param_1 + 0x168);
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    func_0x0001077947ac(&DAT_10f428a31);
    puStack_30 = param_2;
    func_0x0001073e4550(param_1 + 0x1a0);
    puStack_28 = (undefined1 *)&puStack_30;
    func_0x000107794bb0(*(undefined4 *)(param_1 + 0x1d0));
    (*(code *)(&PTR_DAT_1109d8c60)[extraout_x8_00])(&puStack_28,param_1 + 0x1a0);
  }
  if (*(int *)(param_1 + 0x208) != 0) {
    func_0x0001077947ac(&DAT_10f42899a);
    func_0x0001077858cc(param_2,param_1 + 0x1d8);
  }
  if (*(int *)(param_1 + 0x240) != 0) {
    func_0x0001077947ac(&DAT_10f42897c);
    func_0x000107794b74();
  }
  if (*(int *)(param_1 + 0x278) != 0) {
    func_0x0001077947ac(&DAT_10f428aad);
    func_0x000107794b74();
  }
  if (*(int *)(param_1 + 0x2b0) != 0) {
    func_0x0001077947ac(&DAT_10f4288a8);
    func_0x0001077858cc(param_2,param_1 + 0x280);
  }
  if (*(int *)(param_1 + 0x2e8) != 0) {
    func_0x0001077947ac(&DAT_10f4289f4);
    func_0x000107794b74();
  }
  param_2[4] = param_2[4] + -0x10;
  func_0x000107349610(*param_2,0x7d);
  return 1;
}



/* Entry: 107793ba0; end: 107793bbb;  */

void FUN_107793ba0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x000107793bbc(param_1,&uStack_11);
  return;
}



/* Entry: 107793ec4; end: 107793eeb;  */

long FUN_107793ec4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000107793eec();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107793fec; end: 107794023;  */

undefined8 * FUN_107793fec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001073e3e04(&uStack_30);
  return param_1;
}



/* Entry: 1077941f4; end: 107794227;  */

void FUN_1077941f4(void)

{
  func_0x0001077f2518();
  func_0x000107794940();
  func_0x00010778f25c();
  return;
}



/* Entry: 107794340; end: 10779435f;  */

void FUN_107794340(void)

{
  func_0x0001077949e4();
  func_0x000107785b28();
  func_0x000107794968();
  return;
}



/* Entry: 107794558; end: 1077945ab;  */

void FUN_107794558(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107794bbc();
  if (!(bool)in_ZR || (int)extraout_x8 != -1) {
    if ((int)extraout_x8 == -1) {
      func_0x000107794b6c();
    }
    else {
      func_0x000107794ae8((&PTR_DAT_1109d8cf0)[extraout_x8]);
    }
  }
  return;
}



/* Entry: 107794d98; end: 107794dab;  */

void FUN_107794d98(void)

{
  func_0x000107794dd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107794fbc; end: 107794fd3;  */

void FUN_107794fbc(void)

{
  func_0x000107794fd4();
  return;
}



/* Entry: 1077951d4; end: 1077951d7;  */

undefined8 * FUN_1077951d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d6e58;
  func_0x00010778350c(param_1 + 6);
  func_0x000107783268(param_1 + 3);
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 107796374; end: 107797a57;  */

/* WARNING: Possible PIC construction at 0x00010779657c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107796580) */
/* WARNING: Removing unreachable block (ram,0x00010779667c) */
/* WARNING: Removing unreachable block (ram,0x000107796684) */
/* WARNING: Removing unreachable block (ram,0x000107796698) */
/* WARNING: Removing unreachable block (ram,0x000107796588) */
/* WARNING: Removing unreachable block (ram,0x000107796594) */
/* WARNING: Removing unreachable block (ram,0x000107796bf8) */
/* WARNING: Removing unreachable block (ram,0x000107796c0c) */
/* WARNING: Removing unreachable block (ram,0x000107796c14) */
/* WARNING: Removing unreachable block (ram,0x000107797200) */
/* WARNING: Removing unreachable block (ram,0x000107796c1c) */
/* WARNING: Removing unreachable block (ram,0x00010779720c) */
/* WARNING: Removing unreachable block (ram,0x000107796b70) */
/* WARNING: Removing unreachable block (ram,0x000107796b84) */
/* WARNING: Removing unreachable block (ram,0x000107796b8c) */
/* WARNING: Removing unreachable block (ram,0x0001077971b8) */
/* WARNING: Removing unreachable block (ram,0x000107796b94) */
/* WARNING: Removing unreachable block (ram,0x0001077971c4) */
/* WARNING: Removing unreachable block (ram,0x000107796bb4) */
/* WARNING: Removing unreachable block (ram,0x000107796bc8) */
/* WARNING: Removing unreachable block (ram,0x000107796bd0) */
/* WARNING: Removing unreachable block (ram,0x0001077971e8) */
/* WARNING: Removing unreachable block (ram,0x000107796bd8) */
/* WARNING: Removing unreachable block (ram,0x0001077971f4) */
/* WARNING: Removing unreachable block (ram,0x000107796c3c) */
/* WARNING: Removing unreachable block (ram,0x0001077965ac) */
/* WARNING: Removing unreachable block (ram,0x0001077965c0) */
/* WARNING: Removing unreachable block (ram,0x0001077965c8) */
/* WARNING: Removing unreachable block (ram,0x0001077971d0) */
/* WARNING: Removing unreachable block (ram,0x0001077965d0) */
/* WARNING: Removing unreachable block (ram,0x0001077971dc) */
/* WARNING: Removing unreachable block (ram,0x000107797214) */
/* WARNING: Removing unreachable block (ram,0x000107797218) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_107796374(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined **param_6,undefined **param_7)

{
  byte bVar1;
  undefined1 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined1 extraout_w8;
  undefined1 uVar9;
  undefined1 extraout_w8_00;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  long extraout_x8_37;
  long extraout_x8_38;
  long extraout_x8_39;
  long extraout_x8_40;
  long extraout_x8_41;
  long extraout_x8_42;
  long extraout_x8_43;
  long extraout_x8_44;
  long extraout_x8_45;
  long extraout_x8_46;
  long extraout_x8_47;
  long extraout_x8_48;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  ulong *unaff_x19;
  uint uVar10;
  ulong uVar12;
  undefined *puVar13;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined1 uStack_151;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined1 uStack_140;
  undefined *apuStack_128 [3];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined *apuStack_d8 [4];
  undefined1 uStack_b8;
  byte bStack_b0;
  byte bStack_a0;
  byte bStack_90;
  byte bStack_60;
  undefined8 uStack_58;
  uint uVar11;
  
  ppuVar7 = param_6;
  ppuVar8 = param_7;
  func_0x0001077991a8();
  uStack_110 = param_4;
  uStack_108 = param_5;
  uStack_58 = extraout_x8;
  func_0x00010772d2fc(apuStack_d8,&uStack_110);
  ppuVar3 = &PTR_DAT_1109d8e90;
  ppuVar6 = (undefined **)&UNK_1109d9328;
  ppuVar5 = apuStack_d8;
  func_0x000107785358(&PTR_DAT_1109d8e90,&UNK_1109d9328,ppuVar5);
  uVar2 = ppuVar3 == (undefined **)&UNK_1109d9328;
  if ((bool)uVar2) {
LAB_1077963e8:
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)(unaff_x19 + 3) = 0;
    goto LAB_1077972a8;
  }
  ppuVar4 = apuStack_d8;
  ppuVar6 = ppuVar3;
  func_0x000107785400(ppuVar4,ppuVar3);
  if ((int)ppuVar4 != 0) goto LAB_1077963e8;
  bVar1 = *(byte *)(ppuVar3 + 1);
  uVar12 = (ulong)bVar1;
  uVar10 = (uint)bVar1;
  uVar11 = (uint)bVar1;
  if (bVar1 < 0x2e) {
    uVar2 = false;
    if ((1L << (uVar12 & 0x3f) & 0x380724001eaaU) == 0) {
      uVar2 = (1L << (uVar12 & 0x3f) & 0x210c0000001U) == 0;
      if ((bool)uVar2) {
LAB_107796568:
        if ((1L << (uVar12 & 0x3f) & 0x154U) == 0) goto LAB_1077968a4;
LAB_107796574:
        func_0x000107799258();
        func_0x0001077990ec();
        puVar13 = (undefined *)0x107796580;
        goto code_r0x000107797a58;
      }
      func_0x0001077993a4();
      puStack_100 = (undefined *)CONCAT71(puStack_100._1_7_,extraout_w8);
      uStack_140 = 0;
      func_0x0001077990ec();
      func_0x000107323db4();
      if ((bStack_60 & 1) != 0) {
        uVar2 = uVar11 == 0x29;
        if ((bool)uVar2) {
          func_0x00010779929c();
          ppuVar3 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_29 + 0x5c0);
          func_0x00010778be7c(ppuVar3,ppuVar6);
          if (((ulong)ppuVar3 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x000107799278();
              func_0x0001077994cc();
              func_0x000107799344(extraout_x8_30 + 0x5c8);
              func_0x000107799160();
              func_0x000107799270();
            }
            else {
              func_0x000107799458();
              func_0x000107799344(extraout_x8_40 + 0x5c8);
            }
            func_0x00010779916c();
            func_0x000107799280();
          }
        }
        else {
          uVar2 = uVar11 == 0x1e;
          if ((bool)uVar2) {
            func_0x00010779929c();
            ppuVar3 = apuStack_d8;
            ppuVar6 = (undefined **)(extraout_x8_23 + 0x248);
            func_0x00010778be7c(ppuVar3,ppuVar6);
            if (((ulong)ppuVar3 & 1) == 0) {
              if ((*(long *)(param_3 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                ppuVar6 = (undefined **)*param_7;
                func_0x000107799278();
                func_0x0001077994cc();
                func_0x000107799344(extraout_x8_24 + 0x250);
                func_0x000107799160();
                func_0x000107799270();
              }
              else {
                func_0x000107799458();
                func_0x000107799344(extraout_x8_37 + 0x250);
              }
              func_0x00010779916c();
              func_0x000107799280();
            }
          }
          else {
            uVar2 = uVar11 == 0x1f;
            if ((bool)uVar2) {
              func_0x00010779929c();
              ppuVar3 = apuStack_d8;
              ppuVar6 = (undefined **)(extraout_x8_27 + 0x2c0);
              func_0x00010778be7c(ppuVar3,ppuVar6);
              if (((ulong)ppuVar3 & 1) == 0) {
                if ((*(long *)(param_3 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                  ppuVar6 = (undefined **)*param_7;
                  func_0x000107799278();
                  func_0x0001077994cc();
                  func_0x000107799344(extraout_x8_28 + 0x2c8);
                  func_0x000107799160();
                  func_0x000107799270();
                }
                else {
                  func_0x000107799458();
                  func_0x000107799344(extraout_x8_39 + 0x2c8);
                }
                func_0x00010779916c();
                func_0x000107799280();
              }
            }
            else {
              uVar2 = uVar11 == 0x24;
              if ((bool)uVar2) {
                func_0x00010779929c();
                ppuVar3 = apuStack_d8;
                ppuVar6 = (undefined **)(extraout_x8_25 + 0x458);
                func_0x00010778be7c(ppuVar3,ppuVar6);
                if (((ulong)ppuVar3 & 1) == 0) {
                  if ((*(long *)(param_3 + 0x10) == 0) ||
                     (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                    ppuVar6 = (undefined **)*param_7;
                    func_0x000107799278();
                    func_0x0001077994cc();
                    func_0x000107799344(extraout_x8_26 + 0x460);
                    func_0x000107799160();
                    func_0x000107799270();
                  }
                  else {
                    func_0x000107799458();
                    func_0x000107799344(extraout_x8_38 + 0x460);
                  }
                  func_0x00010779916c();
                  func_0x000107799280();
                }
              }
              else {
                if (uVar11 != 0) {
                  ppuVar4 = apuStack_d8;
                  func_0x00010732493c(ppuVar4);
                  func_0x0001077994ac();
                  if (0x22 < uVar11) goto LAB_1077968a4;
                  uVar2 = (1L << (uVar12 & 0x3f) & 0x724001eaaU) == 0;
                  if (!(bool)uVar2) goto LAB_10779641c;
                  goto LAB_107796568;
                }
                func_0x00010779929c();
                ppuVar3 = apuStack_d8;
                ppuVar6 = (undefined **)(extraout_x8_01 + 0x7f0);
                func_0x00010778be7c(ppuVar3,ppuVar6);
                if (((ulong)ppuVar3 & 1) == 0) {
                  if ((*(long *)(param_3 + 0x10) == 0) ||
                     (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
                    ppuVar6 = (undefined **)*param_7;
                    func_0x000107799278();
                    func_0x0001077994cc();
                    func_0x000107799524();
                    func_0x000107799160();
                    func_0x000107799270();
                  }
                  else {
                    func_0x000107799458();
                    func_0x000107799524();
                  }
                  func_0x00010779916c();
                  func_0x000107799280();
                }
              }
            }
          }
        }
        goto LAB_107797294;
      }
      func_0x000107799128();
      if (extraout_x8_04 != 0) {
        func_0x000107799140();
        func_0x000107799224();
        func_0x000107799150();
        goto code_r0x00010779666c;
      }
LAB_107796674:
      func_0x000107799108();
      param_7 = ppuVar5;
LAB_107797298:
      func_0x000107799444();
      func_0x00010732493c();
      goto LAB_1077972a0;
    }
LAB_10779641c:
    func_0x0001077993a4();
    puStack_100 = (undefined *)CONCAT71(puStack_100._1_7_,1);
    uStack_140 = 0;
    func_0x0001077990ec();
    func_0x00010733b904();
    if ((bStack_a0 & 1) == 0) {
      func_0x000107799128();
      if (extraout_x8_02 != 0) {
        func_0x000107799140();
        func_0x000107799224();
        func_0x000107799150();
        goto LAB_107796550;
      }
      goto LAB_107796558;
    }
    uVar2 = uVar11 - 1 == 0xb;
    switch(uVar11 - 1) {
    case 0:
      func_0x00010779929c();
      ppuVar3 = apuStack_d8;
      ppuVar6 = (undefined **)(extraout_x8_00 + 0x890);
      func_0x000107786038(ppuVar3,ppuVar6);
      if (((ulong)ppuVar3 & 1) == 0) {
        if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
          ppuVar6 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_100 + 0x890);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0x890);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 1:
    case 3:
    case 5:
    case 7:
LAB_10779687c:
      ppuVar4 = apuStack_d8;
      func_0x00010727e950(ppuVar4);
      func_0x0001077994ac();
      if ((uVar11 < 9) && ((1 << (ulong)(uVar10 & 0x1f) & 0x154U) != 0)) goto LAB_107796574;
      goto LAB_1077968a4;
    case 2:
      func_0x00010779929c();
      ppuVar3 = apuStack_d8;
      ppuVar6 = (undefined **)(extraout_x8_08 + 0x958);
      func_0x000107786038(ppuVar3,ppuVar6);
      if (((ulong)ppuVar3 & 1) == 0) {
        if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
          ppuVar6 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_100 + 0x958);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0x958);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 4:
      func_0x00010779929c();
      ppuVar3 = apuStack_d8;
      ppuVar6 = (undefined **)(extraout_x8_10 + 0xa20);
      func_0x000107786038(ppuVar3,ppuVar6);
      if (((ulong)ppuVar3 & 1) == 0) {
        if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
          ppuVar6 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_100 + 0xa20);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xa20);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 6:
      func_0x00010779929c();
      ppuVar3 = apuStack_d8;
      ppuVar6 = (undefined **)(extraout_x8_06 + 0xae8);
      func_0x000107786038(ppuVar3,ppuVar6);
      if (((ulong)ppuVar3 & 1) == 0) {
        if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
          ppuVar6 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_100 + 0xae8);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xae8);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 8:
      func_0x00010779929c();
      ppuVar3 = apuStack_d8;
      ppuVar6 = (undefined **)(extraout_x8_07 + 0xbb0);
      func_0x000107786038(ppuVar3,ppuVar6);
      if (((ulong)ppuVar3 & 1) == 0) {
        if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
          ppuVar6 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_100 + 0xbb0);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xbb0);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 9:
      func_0x00010779929c();
      ppuVar3 = apuStack_d8;
      ppuVar6 = (undefined **)(extraout_x8_09 + 0xc10);
      func_0x000107786038(ppuVar3,ppuVar6);
      if (((ulong)ppuVar3 & 1) == 0) {
        if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
          ppuVar6 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_100 + 0xc10);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xc10);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 10:
      func_0x00010779929c();
      ppuVar3 = apuStack_d8;
      ppuVar6 = (undefined **)(extraout_x8_05 + 0xc70);
      func_0x000107786038(ppuVar3,ppuVar6);
      if (((ulong)ppuVar3 & 1) == 0) {
        if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
          ppuVar6 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_100 + 0xc70);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xc70);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 0xb:
      func_0x00010779929c();
      ppuVar3 = apuStack_d8;
      ppuVar6 = (undefined **)(extraout_x8_11 + 0xcd0);
      func_0x000107786038(ppuVar3,ppuVar6);
      if (((ulong)ppuVar3 & 1) == 0) {
        if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
          ppuVar6 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_100 + 0xcd0);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xcd0);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    default:
      uVar2 = uVar11 - 0x1a == 0x13;
      switch(uVar11 - 0x1a) {
      case 0:
        func_0x00010779929c();
        ppuVar3 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_03 + 0x168);
        func_0x000107786038(ppuVar3,ppuVar6);
        if (((ulong)ppuVar3 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_100 + 0x168);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x168);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      default:
        goto LAB_10779687c;
      case 3:
        func_0x00010779929c();
        ppuVar3 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_18 + 0x210);
        func_0x000107786038(ppuVar3,ppuVar6);
        if (((ulong)ppuVar3 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_100 + 0x210);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x210);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 6:
        func_0x00010779929c();
        ppuVar3 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_20 + 0x338);
        func_0x000107786038(ppuVar3,ppuVar6);
        if (((ulong)ppuVar3 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_100 + 0x338);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x338);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 7:
        func_0x00010779929c();
        ppuVar3 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_16 + 0x370);
        func_0x000107786038(ppuVar3,ppuVar6);
        if (((ulong)ppuVar3 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_100 + 0x370);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x370);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 8:
        func_0x00010779929c();
        ppuVar3 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_17 + 0x3a8);
        func_0x000107786038(ppuVar3,ppuVar6);
        if (((ulong)ppuVar3 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_100 + 0x3a8);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x3a8);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 0x11:
        func_0x00010779929c();
        ppuVar3 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_19 + 0x680);
        func_0x000107786038(ppuVar3,ppuVar6);
        if (((ulong)ppuVar3 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_100 + 0x680);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x680);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 0x12:
        func_0x00010779929c();
        ppuVar3 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_15 + 0x6b8);
        func_0x000107786038(ppuVar3,ppuVar6);
        if (((ulong)ppuVar3 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_100 + 0x6b8);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x6b8);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 0x13:
        func_0x00010779929c();
        ppuVar3 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_21 + 0x6f0);
        func_0x000107786038(ppuVar3,ppuVar6);
        if (((ulong)ppuVar3 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_100 + 0x6f0);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x6f0);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
      }
    }
    goto LAB_1077971a8;
  }
LAB_1077968a4:
  uVar2 = uVar10 - 0x1b == 1;
  if (uVar10 - 0x1b < 2) {
    func_0x000107799258();
    func_0x0001077990ec();
    func_0x00010733e5bc();
    if ((bStack_a0 & 1) == 0) {
      func_0x000107799128();
      if (extraout_x8_31 != 0) {
        func_0x000107799140();
        func_0x000107799224();
        func_0x000107799150();
        goto LAB_107796e10;
      }
      goto LAB_107796e18;
    }
    func_0x00010779929c();
    uVar2 = uVar10 == 0x1b;
    if ((bool)uVar2) {
      ppuVar3 = apuStack_d8;
      ppuVar6 = (undefined **)(extraout_x8_12 + 0x1a0);
      func_0x000107785b50(ppuVar3,ppuVar6);
      if (((ulong)ppuVar3 & 1) == 0) {
        if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
          ppuVar6 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x000107799364(puStack_100 + 0x1a0);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x000107799364(*param_7 + 0x1a0);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
    }
    else {
      ppuVar3 = apuStack_d8;
      ppuVar6 = (undefined **)(extraout_x8_12 + 0x1d8);
      func_0x000107785b50(ppuVar3,ppuVar6);
      if (((ulong)ppuVar3 & 1) == 0) {
        if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
          ppuVar6 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x000107799364(puStack_100 + 0x1d8);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x000107799364(*param_7 + 0x1d8);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
    }
    goto LAB_1077974cc;
  }
  uVar2 = uVar11 - 0x23 == 7;
  switch(uVar11 - 0x23) {
  case 0:
    func_0x0001077993a4();
    puStack_100 = (undefined *)((ulong)puStack_100 & 0xffffffffffffff00);
    uStack_140 = 0;
    func_0x0001077990ec();
    func_0x000107323db4();
    if ((bStack_60 & 1) == 0) {
      func_0x000107799128();
      if (extraout_x8_41 != 0) {
        func_0x000107799140();
        func_0x000107799224();
        func_0x000107799150();
code_r0x00010779666c:
        func_0x00010779923c();
        func_0x000107799390();
      }
      goto LAB_107796674;
    }
    func_0x00010779929c();
    ppuVar3 = apuStack_d8;
    ppuVar6 = (undefined **)(extraout_x8_13 + 0x3e0);
    func_0x00010778be7c(ppuVar3,ppuVar6);
    if (((ulong)ppuVar3 & 1) == 0) {
      if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
        ppuVar6 = (undefined **)*param_7;
        func_0x000107799278();
        func_0x0001077994cc();
        func_0x000107799344(extraout_x8_14 + 1000);
        func_0x000107799160();
        func_0x000107799270();
      }
      else {
        func_0x000107799458();
        func_0x000107799344(extraout_x8_48 + 1000);
      }
      func_0x00010779916c();
      func_0x000107799280();
    }
LAB_107797294:
    func_0x000107799428();
    param_7 = ppuVar5;
    goto LAB_107797298;
  case 1:
  case 4:
  case 5:
  case 6:
    goto LAB_1077973f0;
  case 2:
  case 7:
code_r0x000107796efc:
    func_0x000107799258();
    func_0x0001077990ec();
    func_0x00010733d400();
    if ((bStack_90 & 1) == 0) {
      func_0x000107799128();
      if (extraout_x8_34 != 0) {
        func_0x000107799140();
        func_0x000107799224();
        func_0x000107799150();
        func_0x00010779923c();
        func_0x000107799390();
      }
      func_0x000107799108();
    }
    else {
      uVar2 = uVar11 == 0x2f;
      if ((bool)uVar2) {
        func_0x00010779929c();
        ppuVar3 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_43 + 0x770);
        func_0x000107798a18(ppuVar3,ppuVar6);
        if (((ulong)ppuVar3 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x000107799408(puStack_100 + 0x770);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x000107799408(*param_7 + 0x770);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
      }
      else {
        uVar2 = uVar11 == 0x2a;
        if ((bool)uVar2) {
          func_0x00010779929c();
          ppuVar3 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_42 + 0x638);
          func_0x000107798a18(ppuVar3,ppuVar6);
          if (((ulong)ppuVar3 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x000107799278();
              func_0x000107799408(puStack_100 + 0x638);
              func_0x000107799160();
              func_0x000107799270();
            }
            else {
              func_0x000107799408(*param_7 + 0x638);
            }
            func_0x00010779916c();
            func_0x000107799280();
          }
        }
        else {
          uVar2 = uVar11 == 0x25;
          if (!(bool)uVar2) {
            func_0x00010733d41c(apuStack_d8);
            func_0x0001077994ac();
            uVar2 = true;
            if (uVar11 == 0x26) goto code_r0x000107797384;
            goto LAB_1077973f0;
          }
          func_0x00010779929c();
          ppuVar3 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_33 + 0x4d0);
          func_0x000107798a18(ppuVar3,ppuVar6);
          if (((ulong)ppuVar3 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x000107799278();
              func_0x000107799408(puStack_100 + 0x4d0);
              func_0x000107799160();
              func_0x000107799270();
            }
            else {
              func_0x000107799408(*param_7 + 0x4d0);
            }
            func_0x00010779916c();
            func_0x000107799280();
          }
        }
      }
      func_0x000107799428();
    }
    func_0x000107799444();
    func_0x00010733d41c();
    param_7 = ppuVar5;
    goto LAB_1077972a0;
  case 3:
code_r0x000107797384:
    func_0x0001077993a4();
    ppuVar3 = apuStack_128;
    ppuVar8 = (undefined **)0x0;
    ppuVar7 = param_7;
    func_0x0001075587c8(apuStack_d8,&puStack_100,param_6,ppuVar3,param_7,0,0);
    if ((bStack_a0 & 1) == 0) {
      func_0x000107799128();
      ppuVar6 = param_6;
      if (extraout_x8_46 != 0) {
        func_0x000107799140();
        func_0x000107799224();
        func_0x000107799150();
        func_0x00010779923c();
        func_0x000107799390();
        ppuVar6 = param_6;
      }
      func_0x000107799108();
    }
    else {
      func_0x00010779929c();
      ppuVar5 = apuStack_d8;
      ppuVar6 = (undefined **)(extraout_x8_44 + 0x518);
      func_0x000107798bfc(ppuVar5,ppuVar6);
      if (((ulong)ppuVar5 & 1) == 0) {
        if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
          ppuVar6 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077994f0(puStack_100);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077994f0(*param_7);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      func_0x000107799428();
    }
    func_0x000107799444();
    func_0x000107797f6c();
    param_7 = ppuVar3;
LAB_1077972a0:
    ppuVar3 = apuStack_128;
    goto LAB_1077972a4;
  default:
    uVar2 = true;
    if (uVar11 == 0x2f) goto code_r0x000107796efc;
LAB_1077973f0:
    uVar2 = uVar11 - 0x27 == 1;
    if (uVar11 - 0x27 < 2) {
      func_0x0001077993a4();
      puStack_100 = (undefined *)((ulong)puStack_100 & 0xffffffffffffff00);
      uStack_140 = 0;
      func_0x0001077990ec();
      func_0x00010733e5bc();
      if ((bStack_a0 & 1) == 0) {
        func_0x000107799128();
        if (extraout_x8_47 != 0) {
          func_0x000107799140();
          func_0x000107799224();
          func_0x000107799150();
LAB_107796e10:
          func_0x00010779923c();
          func_0x000107799390();
        }
LAB_107796e18:
        func_0x000107799108();
      }
      else {
        func_0x00010779929c();
        uVar2 = uVar10 == 0x27;
        if ((bool)uVar2) {
          ppuVar3 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_45 + 0x550);
          func_0x000107785b50(ppuVar3,ppuVar6);
          if (((ulong)ppuVar3 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x000107799278();
              func_0x000107799364(puStack_100 + 0x550);
              func_0x000107799160();
              func_0x000107799270();
            }
            else {
              func_0x000107799364(*param_7 + 0x550);
            }
            func_0x00010779916c();
            func_0x000107799280();
          }
        }
        else {
          ppuVar3 = apuStack_d8;
          ppuVar6 = (undefined **)(extraout_x8_45 + 0x588);
          func_0x000107785b50(ppuVar3,ppuVar6);
          if (((ulong)ppuVar3 & 1) == 0) {
            if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0))
            {
              ppuVar6 = (undefined **)*param_7;
              func_0x000107799278();
              func_0x000107799364(puStack_100 + 0x588);
              func_0x000107799160();
              func_0x000107799270();
            }
            else {
              func_0x000107799364(*param_7 + 0x588);
            }
            func_0x00010779916c();
            func_0x000107799280();
          }
        }
LAB_1077974cc:
        func_0x000107799428();
      }
      func_0x000107799444();
      func_0x00010733e5d8();
      param_7 = ppuVar5;
      goto LAB_1077972a0;
    }
    uVar2 = uVar11 == 0x30;
    if ((bool)uVar2) {
      func_0x0001077993a4();
      puStack_100 = (undefined *)((ulong)puStack_100 & 0xffffffffffffff00);
      uStack_140 = 0;
      func_0x0001077990ec();
      func_0x00010733b904();
      if ((bStack_a0 & 1) == 0) {
        func_0x000107799128();
        if (extraout_x8_36 != 0) {
          func_0x000107799140();
          func_0x000107799224();
          func_0x000107799150();
LAB_107796550:
          func_0x00010779923c();
          func_0x000107799390();
        }
LAB_107796558:
        func_0x000107799108();
        param_7 = ppuVar5;
      }
      else {
        func_0x00010779929c();
        ppuVar3 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_32 + 0x7b8);
        func_0x000107786038(ppuVar3,ppuVar6);
        if (((ulong)ppuVar3 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_100 + 0x7b8);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x7b8);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
LAB_1077971a8:
        func_0x000107799428();
        param_7 = ppuVar5;
      }
      func_0x000107799444();
      func_0x00010727e950();
      goto LAB_1077972a0;
    }
    uVar2 = uVar10 == 0x2e;
    if ((bool)uVar2) {
      func_0x000107799258();
      func_0x0001077990ec();
      func_0x0001077939c8();
      if ((bStack_90 & 1) == 0) {
        func_0x000107799128();
        if (extraout_x8_35 != 0) {
          func_0x000107799140();
          func_0x000107799224();
          func_0x000107799150();
          func_0x00010779923c();
          func_0x000107799390();
        }
        func_0x000107799108();
      }
      else {
        func_0x00010779929c();
        ppuVar3 = apuStack_d8;
        ppuVar6 = (undefined **)(extraout_x8_22 + 0x728);
        func_0x00010779465c(ppuVar3,ppuVar6);
        if (((ulong)ppuVar3 & 1) == 0) {
          if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
            ppuVar6 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x000107799560(puStack_100);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x000107799560(*param_7);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        func_0x000107799428();
      }
      func_0x000107799444();
      func_0x000107793d90();
      param_7 = ppuVar5;
      goto LAB_1077972a0;
    }
    puStack_100 = (undefined *)0x0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    ppuVar6 = &puStack_100;
    func_0x00010754bb48(apuStack_d8,param_6,ppuVar6,param_7);
    if ((bStack_b0 & 1) == 0) {
      unaff_x19[1] = uStack_f8;
      *unaff_x19 = (ulong)puStack_100;
      unaff_x19[2] = uStack_f0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      puStack_100 = (undefined *)0x0;
      uVar9 = 1;
      goto LAB_107797790;
    }
  }
  uVar2 = uVar10 - 0xd == 0xc;
  switch(uVar10 - 0xd) {
  case 0:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x0001077992ec();
      apuStack_128[0][0x888] = uStack_b8;
      break;
    }
    *(undefined1 *)(*(long *)(param_3 + 8) + 0x888) = uStack_b8;
code_r0x000107797928:
    func_0x000107799398();
    extraout_x9_00[1] = in_register_00005008;
    *extraout_x9_00 = param_1;
    extraout_x9_00[3] = in_register_00005028;
    extraout_x9_00[2] = param_2;
    goto LAB_10779778c;
  case 1:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)(param_3 + 8) + 0x8e8) = uStack_b8;
      goto code_r0x000107797928;
    }
    func_0x0001077992ec();
    apuStack_128[0][0x8e8] = uStack_b8;
    break;
  case 2:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      func_0x000107799398(*(undefined8 *)(param_3 + 8));
      func_0x000107799594();
      goto LAB_10779778c;
    }
    func_0x0001077992ec();
    func_0x000107799398(apuStack_128[0]);
    func_0x000107799594();
    goto code_r0x000107797778;
  case 3:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x0001077992ec();
      func_0x000107799398(apuStack_128[0]);
      func_0x0001077995f0();
      goto code_r0x000107797778;
    }
    func_0x000107799398(*(undefined8 *)(param_3 + 8));
    func_0x0001077995f0();
    goto LAB_10779778c;
  case 4:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)(param_3 + 8) + 0xa18) = uStack_b8;
      goto code_r0x000107797928;
    }
    func_0x0001077992ec();
    apuStack_128[0][0xa18] = uStack_b8;
    break;
  case 5:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)(param_3 + 8) + 0xa78) = uStack_b8;
      goto code_r0x000107797928;
    }
    func_0x0001077992ec();
    apuStack_128[0][0xa78] = uStack_b8;
    break;
  case 6:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x0001077992ec();
      func_0x000107799398(apuStack_128[0]);
      func_0x0001077995bc();
      goto code_r0x000107797778;
    }
    func_0x000107799398(*(undefined8 *)(param_3 + 8));
    func_0x0001077995bc();
    goto LAB_10779778c;
  case 7:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 8) != 0)) {
      func_0x0001077992ec();
      func_0x000107799398(apuStack_128[0]);
      func_0x0001077995dc();
      goto code_r0x000107797778;
    }
    func_0x000107799398(*(undefined8 *)(param_3 + 8));
    func_0x0001077995dc();
    goto LAB_10779778c;
  case 8:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)(param_3 + 8) + 0xba8) = uStack_b8;
      goto code_r0x000107797928;
    }
    func_0x0001077992ec();
    apuStack_128[0][0xba8] = uStack_b8;
    break;
  case 9:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)(param_3 + 8) + 0xc08) = uStack_b8;
      goto code_r0x000107797928;
    }
    func_0x0001077992ec();
    apuStack_128[0][0xc08] = uStack_b8;
    break;
  case 10:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)(param_3 + 8) + 0xc68) = uStack_b8;
      goto code_r0x000107797928;
    }
    func_0x0001077992ec();
    apuStack_128[0][0xc68] = uStack_b8;
    break;
  case 0xb:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)(param_3 + 8) + 0xcc8) = uStack_b8;
      goto code_r0x000107797928;
    }
    func_0x0001077992ec();
    apuStack_128[0][0xcc8] = uStack_b8;
    break;
  case 0xc:
    if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)(param_3 + 8) + 0xd28) = uStack_b8;
      goto code_r0x000107797928;
    }
    func_0x0001077992ec();
    apuStack_128[0][0xd28] = uStack_b8;
    break;
  default:
    goto LAB_10779778c;
  }
  func_0x000107799398();
  extraout_x9[1] = in_register_00005008;
  *extraout_x9 = param_1;
  extraout_x9[3] = in_register_00005028;
  extraout_x9[2] = param_2;
code_r0x000107797778:
  ppuVar6 = apuStack_128;
  func_0x0001077989d4(param_3 + 8,ppuVar6);
  func_0x000107797b84(apuStack_128);
LAB_10779778c:
  func_0x000107799428();
  uVar9 = extraout_w8_00;
LAB_107797790:
  *(undefined1 *)(unaff_x19 + 3) = uVar9;
  ppuVar3 = &puStack_100;
LAB_1077972a4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar3);
  ppuVar5 = param_7;
LAB_1077972a8:
  func_0x0001077990c8(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077995d0();
  func_0x00010733e5d8();
  ppuVar4 = apuStack_128;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar4);
  puVar13 = &SUB_107797a58;
  func_0x00010779934c();
code_r0x000107797a58:
  puStack_150 = &stack0xfffffffffffffff0;
  puStack_148 = puVar13;
  func_0x000107555700(&uStack_151,ppuVar4,ppuVar6,ppuVar5,*(undefined1 *)ppuVar7,
                      *(undefined1 *)ppuVar8);
  return;
}



/* Entry: 107797db8; end: 107797dfb;  */

/* WARNING: Possible PIC construction at 0x000107797e4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107797e50) */
/* WARNING: Removing unreachable block (ram,0x000107797e70) */
/* WARNING: Removing unreachable block (ram,0x000107797e68) */

undefined8 * FUN_107797db8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 ****ppppuVar4;
  undefined *puVar5;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [64];
  undefined8 uStack_118;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_d8 [72];
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [80];
  
  puVar1 = auStack_70;
  ppppuVar4 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x0001077991a8();
  func_0x0001077992bc();
  func_0x000107799434();
  func_0x0001077992a8();
  func_0x000104c32a18();
  func_0x0001077992f4(2);
  func_0x0001077990b0();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar5 = &UNK_107797dfc;
    __Unwind_Resume();
    if (*(int *)(param_1 + 8) == 0) {
      extraout_x8[8] = 0;
      extraout_x8[5] = 0;
      extraout_x8[4] = 0;
      extraout_x8[7] = 0;
      extraout_x8[6] = 0;
      extraout_x8[1] = 0;
      *extraout_x8 = 0;
      extraout_x8[3] = 0;
      extraout_x8[2] = 0;
      *(undefined4 *)extraout_x8 = 7;
      return param_1;
    }
    uVar2 = 0;
    if (*(int *)(param_1 + 8) == 1) {
      puStack_78 = &UNK_107797dfc;
      pppuStack_80 = ppppuVar4;
      func_0x0001077991a8();
      puVar1 = auStack_180;
      puStack_e8 = &UNK_107797e50;
      ppppuVar4 = &pppuStack_f0;
      puVar3 = param_1;
      pppuStack_f0 = &pppuStack_80;
      func_0x0001077991a8(auStack_d8);
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_170 = 0;
      unaff_x19 = &uStack_170;
      uStack_118 = extraout_x8_00;
      func_0x0001072ac134(unaff_x19,(((long *)*puVar3)[1] - *(long *)*puVar3) / 0x38);
      puVar3 = (undefined8 *)((undefined8 *)*param_1)[1];
      for (unaff_x20 = *(undefined8 **)*param_1; uVar2 = unaff_x20 == puVar3, !(bool)uVar2;
          unaff_x20 = unaff_x20 + 7) {
        unaff_x19 = unaff_x20;
        func_0x00010778b3e8(auStack_158);
        func_0x000107799574();
        func_0x000107799450();
      }
      func_0x000107799530();
      func_0x0001077993b0();
      func_0x0001077994c4();
      func_0x0001077990c8(uStack_118);
      if ((bool)uVar2) {
        return unaff_x19;
      }
      ___stack_chk_fail();
      param_2 = unaff_x19;
      func_0x0001077994c4();
      puVar5 = &UNK_107797f28;
      func_0x00010779934c();
    }
    *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 *****)(puVar1 + -0x10) = ppppuVar4;
    *(undefined **)(puVar1 + -8) = puVar5;
    func_0x0001077991a8();
    func_0x0001077992bc();
    func_0x000107799434();
    func_0x0001077992a8();
    func_0x000104c32a18();
    func_0x0001077992f4(2);
    func_0x0001077990b0();
    param_1 = param_2;
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      __Unwind_Resume();
      *(undefined8 **)(puVar1 + -0x90) = unaff_x20;
      *(undefined8 **)(puVar1 + -0x88) = unaff_x19;
      *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
      *(undefined **)(puVar1 + -0x78) = &SUB_107797f6c;
      if (*(char *)(param_2 + 7) == '\x01') {
        func_0x00010779954c();
      }
      return param_2;
    }
  }
  return param_1;
}



/* Entry: 107798044; end: 10779806b;  */

long FUN_107798044(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x00010779806c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107798168; end: 10779819f;  */

undefined8 * FUN_107798168(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001073e5fe0(&uStack_30);
  return param_1;
}



/* Entry: 1077984b8; end: 1077984d7;  */

undefined8 FUN_1077984b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 10779863c; end: 10779865f;  */

void FUN_10779863c(void)

{
  func_0x000107799334();
  func_0x0001073f1eb8();
  func_0x00010779941c();
  func_0x0001077992d0();
  func_0x000107799328();
  return;
}



/* Entry: 1077987e8; end: 10779880b;  */

void FUN_1077987e8(void)

{
  func_0x0001077992d0();
  func_0x000107799328();
  return;
}



/* Entry: 1077989a8; end: 1077989b7;  */

void FUN_1077989a8(undefined8 *param_1)

{
  func_0x000107799588(*(undefined8 *)*param_1);
  func_0x00010779917c();
  return;
}



/* Entry: 107798b40; end: 107798b63;  */

void FUN_107798b40(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x0001072ca648(lVar1);
  *(undefined4 *)(lVar1 + 0x40) = 0;
  return;
}



/* Entry: 107798c68; end: 107798ccf;  */

long FUN_107798c68(long param_1,long param_2)

{
  uint uVar1;
  long lStack_28;
  
  uVar1 = *(uint *)(param_2 + 0x30);
  if (*(int *)(param_1 + 0x30) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      func_0x00010779954c();
    }
    else {
      lStack_28 = param_1;
      (*(code *)(&PTR_DAT_1109d9468)[uVar1])(&lStack_28,param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 107798fcc; end: 10779904f;  */

void FUN_107798fcc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x38) != 0) {
    func_0x0001073e64d8(lVar1);
    *(undefined4 *)(lVar1 + 0x38) = 0;
  }
  return;
}



/* Entry: 1077999a4; end: 107799adf;  */

long FUN_1077999a4(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = &PTR_DAT_1109d94f0;
  func_0x000107797be0(param_1 + 0xfe);
  func_0x00010779824c(param_1 + 0x2d);
  func_0x0001077866dc(param_1);
  *unaff_x20 = extraout_x8;
  func_0x000107284db4(param_1 + 0x28);
  func_0x000107284d8c(unaff_x19 + 0xd0);
  func_0x000107283194(unaff_x19 + 0xc0);
  func_0x0001072c9b9c(unaff_x19 + 0xb0);
  func_0x000104c2f714(unaff_x19 + 0x78);
  func_0x000104c2f714(unaff_x19 + 0x40);
  func_0x000104c2f714(unaff_x20 + 1);
  return unaff_x19;
}



/* Entry: 10779a738; end: 10779a747;  */

undefined8 FUN_10779a738(void)

{
  return 0;
}



/* Entry: 10779ac1c; end: 10779b13f;  */

void FUN_10779ac1c(undefined8 *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x9;
  long unaff_x21;
  undefined *unaff_x22;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined1 **ppuStack_2d0;
  undefined *puStack_2c8;
  undefined8 auStack_2c0 [3];
  undefined1 auStack_2a8 [56];
  undefined1 auStack_270 [72];
  undefined8 uStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined1 *puStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 auStack_138 [2];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_f8 [56];
  long alStack_c0 [8];
  undefined8 uStack_80;
  
  func_0x00010779b9e8();
  puVar5 = extraout_x9;
  uStack_80 = extraout_x8;
  func_0x000100152bb8(extraout_x9,&DAT_10f41019d);
  if (((ulong)puVar5 & 1) == 0) {
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)param_1 = 7;
  }
  else {
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    puStack_1e8 = param_1;
    func_0x0001072ac134(&uStack_150,
                        (*(long *)(*(long *)(param_2 + 8) + 0x170) -
                        *(long *)(*(long *)(param_2 + 8) + 0x168)) / 0x1b0);
    param_1 = (undefined8 *)&DAT_10f6389e8;
    lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x170);
    unaff_x22 = &DAT_10f68f148;
    for (unaff_x21 = *(long *)(*(long *)(param_2 + 8) + 0x168); in_ZR = unaff_x21 == lVar1,
        !(bool)in_ZR; unaff_x21 = unaff_x21 + 0x1b0) {
      puStack_170 = &UNK_10e52b660;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_168 = 0;
      if (*(char *)(unaff_x21 + 0x17) < '\0') {
        if (*(long *)(unaff_x21 + 8) != 0) goto LAB_10779acf8;
      }
      else if (*(char *)(unaff_x21 + 0x17) != '\0') {
LAB_10779acf8:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_188,unaff_x21);
        func_0x000107268798(alStack_c0,auStack_188);
        func_0x000100060964(auStack_f8,&DAT_10f68f148);
        func_0x00010779b994();
        func_0x00010779b9e0();
        func_0x00010779b9d8();
        func_0x00010779b9d0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_1a0,unaff_x21 + 0x18);
      func_0x000107268798(alStack_c0,auStack_1a0);
      func_0x000100060964(auStack_f8,&DAT_10f6389e8);
      func_0x00010779b994();
      func_0x00010779b9e0();
      func_0x00010779b9d8();
      func_0x00010779b9d0();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a0);
      if (*(char *)(unaff_x21 + 0x47) < '\0') {
        if (*(long *)(unaff_x21 + 0x38) != 0) goto LAB_10779ad88;
      }
      else if (*(char *)(unaff_x21 + 0x47) != '\0') {
LAB_10779ad88:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_1b8,unaff_x21 + 0x30);
        func_0x000107268798(alStack_c0,auStack_1b8);
        func_0x000100060964(auStack_f8,&DAT_10f311774);
        func_0x00010779b994();
        func_0x00010779b9e0();
        func_0x00010779b9d8();
        func_0x00010779b9d0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
      }
      if (*(char *)(unaff_x21 + 0x5f) < '\0') {
        if (*(long *)(unaff_x21 + 0x50) != 0) goto LAB_10779addc;
      }
      else if (*(char *)(unaff_x21 + 0x5f) != '\0') {
LAB_10779addc:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_1d0,unaff_x21 + 0x48);
        func_0x000107268798(alStack_c0,auStack_1d0);
        func_0x000100060964(auStack_f8,&DAT_10f3b93c3);
        func_0x00010779b994();
        func_0x00010779b9e0();
        func_0x00010779b9d8();
        func_0x00010779b9d0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d0);
      }
      if (*(float *)(unaff_x21 + 0x198) != -INFINITY) {
        func_0x00010779b9c0();
        func_0x000100060964(auStack_f8,&UNK_10f40a408);
        func_0x00010779b994();
        func_0x00010779b9e0();
        func_0x00010779b9d8();
        func_0x00010779b9d0();
      }
      if (*(float *)(unaff_x21 + 0x19c) != INFINITY) {
        func_0x00010779b9c0();
        func_0x000100060964(auStack_f8,&UNK_10f40a400);
        func_0x00010779b994();
        func_0x00010779b9e0();
        func_0x00010779b9d8();
        func_0x00010779b9d0();
      }
      if (*(float *)(unaff_x21 + 0x1a0) != 1.0) {
        func_0x00010779b9c0();
        func_0x000100060964(auStack_f8,&DAT_10f2ca5f5);
        func_0x00010779b994();
        func_0x00010779b9e0();
        func_0x00010779b9d8();
        func_0x00010779b9d0();
      }
      if (*(float *)(unaff_x21 + 0x1a4) != 1.0) {
        func_0x00010779b9c0();
        func_0x000100060964(auStack_f8,&UNK_10f42901a);
        func_0x00010779b994();
        func_0x00010779b9e0();
        func_0x00010779b9d8();
        func_0x00010779b9d0();
      }
      if (*(float *)(unaff_x21 + 0x1a8) != 1.0) {
        func_0x00010779b9c0();
        func_0x000100060964(auStack_f8,&UNK_10f429025);
        func_0x00010779b994();
        func_0x00010779b9e0();
        func_0x00010779b9d8();
        func_0x00010779b9d0();
      }
      if (*(float *)(unaff_x21 + 0x1ac) != 0.0) {
        func_0x00010779b9c0();
        func_0x000100060964(auStack_f8,&DAT_10f42902e);
        func_0x00010779b994();
        func_0x00010779b9e0();
        func_0x00010779b9d8();
        func_0x00010779b9d0();
      }
      if (*(int *)(unaff_x21 + 400) != 0) {
        func_0x0001077b08e8(alStack_c0,unaff_x21 + 0x60);
        plVar6 = alStack_c0;
        func_0x000107782568();
        if ((plVar6 != (long *)0x0) && (*(long *)(*plVar6 + 0x18) != 0)) {
          func_0x000100060964(auStack_f8,&DAT_10f2d99b4);
          func_0x00010779b994();
          func_0x00010779b9e0();
          func_0x00010779b9d8();
        }
        func_0x00010779b9d0();
      }
      func_0x000104c33260(alStack_c0,&puStack_170);
      func_0x0001075726d4(&uStack_150,alStack_c0);
      func_0x000104c335c0(alStack_c0);
      func_0x000104c33548(&puStack_170);
    }
    func_0x000107327958(&uStack_1e0,&uStack_150);
    auStack_138[0] = 0;
    uStack_128 = uStack_1d8;
    uStack_130 = uStack_1e0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    puVar5 = puStack_1e8;
    func_0x000104c32a18(puStack_1e8,auStack_138);
    *(undefined1 *)(puVar5 + 8) = 1;
    func_0x000104c3323c(auStack_138);
    func_0x000104c33108(&uStack_1e0);
    puVar5 = &uStack_150;
    func_0x000107269124();
  }
  func_0x00010779b9a0(uStack_80);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_150;
  func_0x000107269124();
  func_0x00010779ba6c();
  puVar9 = auStack_2c0;
  puStack_1f8 = &DAT_10779b140;
  puVar8 = puVar7;
  puStack_220 = unaff_x22;
  lStack_218 = unaff_x21;
  puStack_210 = param_1;
  puStack_208 = puVar5;
  puStack_200 = &stack0xfffffffffffffff0;
  func_0x00010779b9e8();
  uStack_228 = extraout_x8_01;
  func_0x000107781de4(extraout_x8_00);
  uVar4 = *(long *)(puVar7[1] + 0x168) == *(long *)(puVar7[1] + 0x170);
  if (!(bool)uVar4) {
    puVar5 = extraout_x8_00;
    func_0x000107782568(extraout_x8_00);
    func_0x000107267ef0();
    func_0x00010002b838(auStack_2c0,&DAT_10f41019d);
    FUN_10779ac1c(auStack_270,puVar7,auStack_2c0);
    func_0x000100060964(auStack_2a8,&DAT_10f41019d);
    func_0x000107267f10(puVar5,auStack_2a8);
    func_0x0001072d80fc();
    func_0x000104c2f714(auStack_2a8);
    func_0x000104c3323c(auStack_270);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    puVar8 = puVar9;
  }
  func_0x00010779b9a0(uStack_228);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x000104c3323c(auStack_270);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2c0);
    func_0x000104c3323c(extraout_x8_00);
    func_0x00010779baa0();
    puStack_2c8 = &DAT_10779b250;
    puStack_2e0 = puVar8;
    ppuStack_2d0 = &puStack_200;
    func_0x00010779baa8();
    if (lStack_2f8 != 0) {
      plVar6 = (long *)(lStack_2f8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    extraout_x8_00[1] = lStack_2f8;
    *extraout_x8_00 = uStack_300;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x0001077832b8(&uStack_2f0);
    func_0x00010779ba64();
    return;
  }
  return;
}



/* Entry: 10779b3d4; end: 10779b407;  */

void FUN_10779b3d4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x128) != 3) {
    func_0x0001073e63b0(lVar1);
    *(undefined4 *)(lVar1 + 0x128) = 3;
  }
  return;
}



/* Entry: 10779b55c; end: 10779b59b;  */

void FUN_10779b55c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_20;
  undefined8 *puStack_18;
  
  if (*(int *)(param_1 + 0x50) == 1) {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    uVar4 = param_3[3];
    uVar3 = param_3[2];
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
    param_2[1] = uVar2;
    *param_2 = uVar1;
    param_2[3] = uVar4;
    param_2[2] = uVar3;
    return;
  }
  lStack_20 = param_1;
  puStack_18 = param_3;
  func_0x00010779b59c(&lStack_20);
  return;
}



/* Entry: 10779b704; end: 10779b79b;  */

/* WARNING: Possible PIC construction at 0x00010779b734: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010779b738) */
/* WARNING: Removing unreachable block (ram,0x00010779b780) */
/* WARNING: Removing unreachable block (ram,0x00010779b798) */
/* WARNING: Removing unreachable block (ram,0x00010779b76c) */

undefined1 * FUN_10779b704(void)

{
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x00010779b9e8();
  uStack_48 = 1;
  func_0x00010779b7c4();
  return auStack_50;
}



/* Entry: 10779b8e4; end: 10779b903;  */

void FUN_10779b8e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d9710;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10779bdf0; end: 10779bf63;  */

void FUN_10779bdf0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lStack_360;
  undefined8 uStack_358;
  undefined1 auStack_300 [96];
  undefined1 auStack_2a0 [96];
  undefined1 auStack_240 [96];
  undefined1 auStack_1e0 [96];
  undefined1 auStack_180 [96];
  undefined1 auStack_120 [56];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_c0 [96];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010779d0a4(param_2,*(undefined8 *)(param_2 + 8));
  func_0x000107262f3c(lStack_60 + 8,param_3);
  func_0x00010779cdb8(&lStack_360);
  lVar1 = lStack_60;
  func_0x000107784a7c(lStack_60 + 0x168,&lStack_360);
  func_0x000107784a7c(lVar1 + 0x1c8,auStack_300);
  func_0x000107784a7c(lVar1 + 0x228,auStack_2a0);
  func_0x000107784a7c(lVar1 + 0x288,auStack_240);
  func_0x000107784a7c(lVar1 + 0x2e8,auStack_1e0);
  func_0x000107784a7c(lVar1 + 0x348,auStack_180);
  func_0x0001074b8f58(lVar1 + 0x3a8,auStack_120);
  *(undefined8 *)(lVar1 + 1000) = uStack_e0;
  *(undefined8 *)(lVar1 + 0x3e0) = uStack_e8;
  *(undefined8 *)(lVar1 + 0x3f8) = uStack_d0;
  *(undefined8 *)(lVar1 + 0x3f0) = uStack_d8;
  *(undefined1 *)(lVar1 + 0x400) = uStack_c8;
  func_0x000107784a7c(lVar1 + 0x408,auStack_c0);
  func_0x00010779cb30(&lStack_360);
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  uStack_358 = uStack_58;
  lStack_360 = lStack_60;
  lStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_107781b94();
  func_0x0001073ad4c4(&lStack_360);
  func_0x0001073e6950(&uStack_40);
  *puVar2 = &PTR_DAT_1109d9780;
  func_0x0001073e6950(&uStack_50);
  *param_1 = puVar2;
  func_0x00010779d09c();
  return;
}



/* Entry: 10779cbe4; end: 10779cc5f;  */

long FUN_10779cbe4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  long lStack_40;
  
  func_0x00010779d0bc();
  func_0x00010779d1ac();
  lVar1 = lStack_40;
  func_0x00010779ccb8(lStack_40,param_3,param_4);
  *param_1 = lStack_40 + 0x18;
  param_1[1] = lStack_40;
  func_0x00010779d108();
  func_0x00010779d028(extraout_x8);
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x00010779d108();
  func_0x00010779d12c();
  *(undefined8 *)(lVar1 + 8) = param_3;
  lVar2 = lVar1;
  func_0x00010779cc88();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 10779cd58; end: 10779cd77;  */

void FUN_10779cd58(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d9988;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10779cfac; end: 10779d00f;  */

void FUN_10779cfac(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x30) == 2) {
    func_0x0001072f6188(param_2,param_3);
    *(undefined2 *)(param_2 + 0x28) = *(undefined2 *)(param_3 + 0x28);
  }
  else {
    func_0x0001074b8cd4(lVar1);
    func_0x0001074b9400(lVar1,param_3);
    *(undefined4 *)(lVar1 + 0x30) = 2;
  }
  return;
}



/* Entry: 10779d358; end: 10779d3cb;  */

undefined8 * FUN_10779d358(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x00010779d3cc(auStack_40,param_2,param_3);
  func_0x0001077a0fd0(auStack_30,auStack_40);
  FUN_107781b94(param_1,auStack_30);
  func_0x0001073ad4c4(auStack_30);
  func_0x0001077a2fe4();
  *param_1 = &PTR_DAT_1109d9af0;
  return param_1;
}



/* Entry: 10779daa4; end: 10779db5b;  */

ulong FUN_10779daa4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = (*(long *)(param_1 + 0xfd0) - *(long *)(param_1 + 0xfc8)) / 0xe98;
  lVar2 = -0x61c8864680b583eb;
  uVar3 = uVar4 + 0x9e3779b97f4a7c15;
  lVar5 = 0x38;
  for (uVar4 = uVar4 & 0xffff; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar3 = lVar2 + (uVar3 >> 4) + uVar3 * 0x1000 ^ uVar3;
    lVar1 = *(long *)(param_1 + 0xfc8) + lVar5;
    func_0x00010779db5c(lVar1);
    uVar3 = uVar3 * 0x1000 + -0x61c8864680b583eb + (uVar3 >> 4) + lVar1 ^ uVar3;
    lVar2 = lVar2 + 1;
    lVar5 = lVar5 + 0xe98;
  }
  param_1 = param_1 + 0x168;
  func_0x00010779db5c(param_1);
  return uVar3 * 0x1000 + -0x61c8864680b583eb + (uVar3 >> 4) + param_1 ^ uVar3;
}



/* Entry: 10779e184; end: 10779e1ef;  */

void FUN_10779e184(void)

{
  long extraout_x8;
  long unaff_x19;
  ulong unaff_x20;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  
  func_0x0001077a3100();
  func_0x00010779e164();
  func_0x000107786038();
  if ((unaff_x20 & 1) == 0) {
    func_0x0001077a30f0();
    if ((extraout_x8 == 0) || (*(long *)(extraout_x8 + 8) != 0)) {
      func_0x0001077a2fd8();
      func_0x0001077a288c(auStack_48,uStack_30);
      func_0x0001077a2fcc();
      func_0x0001077a31c8();
    }
    else {
      func_0x0001077a288c(auStack_48,*(undefined8 *)(unaff_x19 + 8));
    }
    func_0x0001077a2d3c();
  }
  return;
}



/* Entry: 1077a0c4c; end: 1077a0ccf;  */

void FUN_1077a0c4c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010779d418(&uStack_40,*(undefined8 *)(param_2 + 8));
  if (lStack_38 != 0) {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = lStack_38;
  *param_1 = uStack_40;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077832b8(&uStack_30);
  func_0x0001077a2fe4();
  return;
}


