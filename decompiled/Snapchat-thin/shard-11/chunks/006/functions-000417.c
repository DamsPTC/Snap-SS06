/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10878bd80; end: 10878bdd7;  */

undefined8 * FUN_10878bd80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6f668;
  func_0x00010086ab34(param_1 + 0x27);
  func_0x000108763d40(param_1 + 0x26);
  FUN_1088f9cb4(param_1 + 0x1c);
  func_0x000107c27914(param_1 + 0x19);
  func_0x000107c27914(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10878bdd8; end: 10878bddf;  */

void FUN_10878bdd8(void)

{
  return;
}



/* Entry: 10878bde0; end: 10878be03;  */

void FUN_10878bde0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110a6f840;
  return;
}



/* Entry: 10878be04; end: 10878be2f;  */

void FUN_10878be04(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a6f840;
  return;
}



/* Entry: 10878be30; end: 10878be67;  */

long FUN_10878be30(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6f8a0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10878be68; end: 10878be73;  */

undefined ** FUN_10878be68(void)

{
  return &PTR_DAT_110a6f8a0;
}



/* Entry: 10878be74; end: 10878bec3;  */

long FUN_10878be74(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10878bec4; end: 10878bf53;  */

void FUN_10878bec4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10878bf54; end: 10878c0eb;  */

undefined8 *
FUN_10878bf54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 in_ZR;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 extraout_x8;
  undefined8 uVar9;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined4 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  code *pcStack_350;
  undefined **ppuStack_348;
  undefined8 uStack_340;
  long alStack_338 [40];
  undefined8 uStack_1f8;
  byte bStack_180;
  code *pcStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_148;
  code *pcStack_138;
  undefined **ppuStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_108;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined **appuStack_78 [3];
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  
  func_0x00010878cc68();
  uStack_58 = extraout_x8;
  func_0x000107c278b8(auStack_90,&UNK_10f4ba6e8);
  pppuStack_60 = appuStack_78;
  appuStack_78[0] = &PTR_FUN_110a6fab8;
  uStack_98 = *param_8;
  *param_8 = 0;
  FUN_10875e9fc(param_1,auStack_90,param_2,param_3,appuStack_78,param_10,&uStack_98,9);
  func_0x000107c29578(&uStack_98);
  func_0x00010865f8f8(appuStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  *param_1 = &PTR_FUN_110a6f8e0;
  func_0x000107c27994(param_1 + 0x16,param_4);
  FUN_1086a9cbc(param_1 + 0x19,param_5);
  func_0x000107c287dc(param_1 + 0x21,param_6);
  puVar6 = param_1 + 0x30;
  FUN_1086e76d4(puVar6,param_9);
  uVar9 = *param_7;
  *param_7 = 0;
  param_1[0x37] = uVar9;
  func_0x00010878cc04(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107c2a5a4(param_1 + 0x21);
  FUN_108929390(param_1 + 0x19);
  func_0x000107c27914(param_1 + 0x16);
  FUN_10875b664(param_1);
  __Unwind_Resume();
  func_0x00010878cc68();
  uStack_108 = extraout_x8_00;
  func_0x000107c297b4(&uStack_3d0,puVar6 + 1);
  puStack_3c0 = puVar6;
  func_0x000107c297b4(&puStack_3f0,puVar6 + 1);
  puStack_3a8 = puStack_3e8;
  puStack_3b0 = puStack_3f0;
  puStack_3f0 = (undefined8 *)0x0;
  puStack_3e8 = (undefined8 *)0x0;
  puStack_3e0 = puVar6;
  puStack_3a0 = puVar6;
  func_0x00010878cc18();
  lStack_390 = *(long *)(pcStack_350 + 600);
  uStack_398 = *(undefined8 *)(pcStack_350 + 0x250);
  if (*(long *)(pcStack_350 + 600) != 0) {
    do {
      func_0x00010878cbf4();
    } while (extraout_w10 != 0);
  }
  uStack_388 = *(undefined4 *)(puVar6[0xb] + 0xfc);
  func_0x00010878cc50();
  pcStack_138 = FUN_10878c9e4;
  ppuStack_130 = &PTR_FUN_110a6fa90;
  puVar7 = (undefined8 *)0x30;
  __Znwm();
  puVar7[1] = puStack_3a8;
  *puVar7 = puStack_3b0;
  if (puStack_3a8 != (undefined8 *)0x0) {
    do {
      func_0x00010878cbf4();
    } while (extraout_w10_00 != 0);
  }
  puVar7[3] = uStack_398;
  puVar7[2] = puStack_3a0;
  puVar7[4] = lStack_390;
  if (lStack_390 != 0) {
    do {
      func_0x00010878cbf4();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(puVar7 + 5) = uStack_388;
  uVar9 = puVar6[1];
  lVar1 = puVar6[2];
  uStack_360 = uVar9;
  lStack_358 = lVar1;
  puStack_128 = puVar7;
  if (lVar1 == 0) {
    uVar12 = puVar6[0xb];
  }
  else {
    do {
      func_0x00010878cbf4();
    } while (extraout_w10_02 != 0);
    uVar12 = puVar6[0xb];
    do {
      func_0x00010878cbf4();
    } while (extraout_w10_03 != 0);
  }
  puVar7 = (undefined8 *)0xb8;
  uStack_380 = uVar9;
  lStack_378 = lVar1;
  __Znwm();
  uVar5 = uStack_3c8;
  uVar4 = uStack_3d0;
  plVar10 = puVar7 + 1;
  *plVar10 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110a6f950;
  pcStack_350 = FUN_10878c6f0;
  ppuStack_348 = &PTR_FUN_110a6f990;
  uStack_380 = 0;
  lStack_378 = 0;
  puVar11 = puVar7 + 3;
  *puVar11 = &PTR_FUN_110a6fa58;
  pcStack_178 = FUN_10878c774;
  ppuStack_170 = &PTR_FUN_110a6f9a8;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  uStack_160 = 0;
  puStack_158 = puStack_3c0;
  puVar7[4] = FUN_10878c774;
  puVar7[5] = &PTR_FUN_110a6f9a8;
  puVar7[7] = uVar5;
  puVar7[6] = uVar4;
  uStack_168 = 0;
  puVar7[8] = puStack_3c0;
  puVar7[10] = FUN_10878c9e4;
  uStack_340 = uVar9;
  alStack_338[0] = lVar1;
  (*(code *)ppuStack_130[2])(puVar7 + 0xb,&ppuStack_130);
  *puVar11 = &PTR_DAT_110a6f9d0;
  puVar7[0x10] = pcStack_350;
  (*(code *)ppuStack_348[2])(puVar7 + 0x11,&ppuStack_348);
  puVar7[0x16] = uVar12;
  (*(code *)*ppuStack_170)(&ppuStack_170);
  (*(code *)*ppuStack_348)(&ppuStack_348);
  func_0x000107c297a8(&uStack_380);
  uStack_370 = 0;
  uStack_368 = 0;
  puStack_400 = puVar11;
  puStack_3f8 = puVar7;
  FUN_10878cba4(&uStack_370);
  func_0x000107c297a8(&uStack_360);
  func_0x00010878cc38();
  FUN_10878c6a0(&puStack_3b0);
  FUN_1086a9cbc(&pcStack_178,puVar6 + 0x19);
  func_0x00010878cc18();
  uVar9 = *(undefined8 *)(pcStack_350 + 0x60);
  FUN_10886ac2c(uVar9,puVar6 + 0x16);
  func_0x00010878cc50();
  if ((int)uVar9 == 0) {
    func_0x000107c29820(&puStack_3b0,puVar6);
    func_0x000107c29f64(&pcStack_350,puStack_3b0[0xc],puVar6 + 0x16,1);
    func_0x000107c297b0(&puStack_3b0);
    if ((bStack_180 & 1) == 0) {
      func_0x00010878cc58();
      (*extraout_x8_02)();
      FUN_10875edc8(puVar6,9);
    }
    else {
      uVar9 = puVar6[0xb];
      func_0x000107c278b8(&puStack_3b0,&DAT_10f4b36ec);
      plVar8 = alStack_338;
      func_0x000107c29e74();
      func_0x000107c278b8(&pcStack_138,(&PTR_DAT_110a6fb28)[(ulong)plVar8 & 0xffffffff]);
      func_0x000107c28b34(uVar9,&puStack_3b0,&pcStack_138);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_138);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_3b0);
      uStack_148 = uStack_1f8;
    }
    func_0x000107c288c8(&pcStack_350);
    if ((bStack_180 & 1) != 0) {
      func_0x00010878cc18();
      plVar8 = *(long **)(pcStack_350 + 0x50);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puStack_3b0 = puVar11;
      puStack_3a8 = puVar7;
      (**(code **)(*plVar8 + 0x28))(plVar8,&pcStack_178,&puStack_3b0,puVar6 + 0x30);
      func_0x00010878cbcc(&puStack_3b0);
      func_0x00010878cc50();
    }
  }
  else {
    func_0x00010878cc58();
    (*extraout_x8_01)();
    FUN_10875ebcc(puVar6,4);
  }
  FUN_108929390(&pcStack_178);
  FUN_10878cba4(&puStack_400);
  func_0x000107c297a4(&puStack_3f0);
  puVar6 = &uStack_3d0;
  func_0x000107c297a4(puVar6);
  func_0x00010878cc04(uStack_108);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010878cbcc(&puStack_3b0);
    func_0x00010878cc50();
    FUN_108929390(&pcStack_178);
    FUN_10878cba4(&puStack_400);
    func_0x000107c297a4(&puStack_3f0);
    do {
      func_0x000107c297a4(&uStack_3d0);
      __Unwind_Resume(puVar6);
    } while( true );
  }
  return puVar6;
}



/* Entry: 10878c0ec; end: 10878c60b;  */

void FUN_10878c0ec(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 in_ZR;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  long lStack_340;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined4 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  code *pcStack_2b0;
  undefined **ppuStack_2a8;
  undefined8 uStack_2a0;
  long alStack_298 [40];
  undefined8 uStack_158;
  byte bStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_a8;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_68;
  
  func_0x00010878cc68();
  uStack_68 = extraout_x8;
  func_0x000107c297b4(&uStack_330,param_1 + 8);
  lStack_320 = param_1;
  func_0x000107c297b4(&puStack_350,param_1 + 8);
  puStack_308 = puStack_348;
  puStack_310 = puStack_350;
  puStack_350 = (undefined8 *)0x0;
  puStack_348 = (undefined8 *)0x0;
  lStack_340 = param_1;
  lStack_300 = param_1;
  func_0x00010878cc18();
  lStack_2f0 = *(long *)(pcStack_2b0 + 600);
  uStack_2f8 = *(undefined8 *)(pcStack_2b0 + 0x250);
  if (*(long *)(pcStack_2b0 + 600) != 0) {
    do {
      func_0x00010878cbf4();
    } while (extraout_w10 != 0);
  }
  uStack_2e8 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
  func_0x00010878cc50();
  pcStack_98 = FUN_10878c9e4;
  ppuStack_90 = &PTR_FUN_110a6fa90;
  puVar6 = (undefined8 *)0x30;
  __Znwm();
  puVar6[1] = puStack_308;
  *puVar6 = puStack_310;
  if (puStack_308 != (undefined8 *)0x0) {
    do {
      func_0x00010878cbf4();
    } while (extraout_w10_00 != 0);
  }
  puVar6[3] = uStack_2f8;
  puVar6[2] = lStack_300;
  puVar6[4] = lStack_2f0;
  if (lStack_2f0 != 0) {
    do {
      func_0x00010878cbf4();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(puVar6 + 5) = uStack_2e8;
  uVar7 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_2c0 = uVar7;
  lStack_2b8 = lVar1;
  puStack_88 = puVar6;
  if (lVar1 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    do {
      func_0x00010878cbf4();
    } while (extraout_w10_02 != 0);
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x00010878cbf4();
    } while (extraout_w10_03 != 0);
  }
  puVar6 = (undefined8 *)0xb8;
  uStack_2e0 = uVar7;
  lStack_2d8 = lVar1;
  __Znwm();
  uVar5 = uStack_328;
  uVar4 = uStack_330;
  plVar9 = puVar6 + 1;
  *plVar9 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110a6f950;
  pcStack_2b0 = FUN_10878c6f0;
  ppuStack_2a8 = &PTR_FUN_110a6f990;
  uStack_2e0 = 0;
  lStack_2d8 = 0;
  puVar10 = puVar6 + 3;
  *puVar10 = &PTR_FUN_110a6fa58;
  pcStack_d8 = FUN_10878c774;
  ppuStack_d0 = &PTR_FUN_110a6f9a8;
  uStack_330 = 0;
  uStack_328 = 0;
  uStack_c0 = 0;
  lStack_b8 = lStack_320;
  puVar6[4] = FUN_10878c774;
  puVar6[5] = &PTR_FUN_110a6f9a8;
  puVar6[7] = uVar5;
  puVar6[6] = uVar4;
  uStack_c8 = 0;
  puVar6[8] = lStack_320;
  puVar6[10] = FUN_10878c9e4;
  uStack_2a0 = uVar7;
  alStack_298[0] = lVar1;
  (*(code *)ppuStack_90[2])(puVar6 + 0xb,&ppuStack_90);
  *puVar10 = &PTR_DAT_110a6f9d0;
  puVar6[0x10] = pcStack_2b0;
  (*(code *)ppuStack_2a8[2])(puVar6 + 0x11,&ppuStack_2a8);
  puVar6[0x16] = uVar11;
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  (*(code *)*ppuStack_2a8)(&ppuStack_2a8);
  func_0x000107c297a8(&uStack_2e0);
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  puStack_360 = puVar10;
  puStack_358 = puVar6;
  FUN_10878cba4(&uStack_2d0);
  func_0x000107c297a8(&uStack_2c0);
  func_0x00010878cc38();
  FUN_10878c6a0(&puStack_310);
  FUN_1086a9cbc(&pcStack_d8,param_1 + 200);
  func_0x00010878cc18();
  uVar7 = *(undefined8 *)(pcStack_2b0 + 0x60);
  FUN_10886ac2c(uVar7,param_1 + 0xb0);
  func_0x00010878cc50();
  if ((int)uVar7 == 0) {
    func_0x000107c29820(&puStack_310,param_1);
    func_0x000107c29f64(&pcStack_2b0,puStack_310[0xc],param_1 + 0xb0,1);
    func_0x000107c297b0(&puStack_310);
    if ((bStack_e0 & 1) == 0) {
      func_0x00010878cc58();
      (*extraout_x8_01)();
      FUN_10875edc8(param_1,9);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x58);
      func_0x000107c278b8(&puStack_310,&DAT_10f4b36ec);
      plVar8 = alStack_298;
      func_0x000107c29e74();
      func_0x000107c278b8(&pcStack_98,(&PTR_DAT_110a6fb28)[(ulong)plVar8 & 0xffffffff]);
      func_0x000107c28b34(uVar7,&puStack_310,&pcStack_98);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_98);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_310);
      uStack_a8 = uStack_158;
    }
    func_0x000107c288c8(&pcStack_2b0);
    if ((bStack_e0 & 1) != 0) {
      func_0x00010878cc18();
      plVar8 = *(long **)(pcStack_2b0 + 0x50);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puStack_310 = puVar10;
      puStack_308 = puVar6;
      (**(code **)(*plVar8 + 0x28))(plVar8,&pcStack_d8,&puStack_310,param_1 + 0x180);
      func_0x00010878cbcc(&puStack_310);
      func_0x00010878cc50();
    }
  }
  else {
    func_0x00010878cc58();
    (*extraout_x8_00)();
    FUN_10875ebcc(param_1,4);
  }
  FUN_108929390(&pcStack_d8);
  FUN_10878cba4(&puStack_360);
  func_0x000107c297a4(&puStack_350);
  puVar6 = &uStack_330;
  func_0x000107c297a4(puVar6);
  func_0x00010878cc04(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010878cbcc(&puStack_310);
    func_0x00010878cc50();
    FUN_108929390(&pcStack_d8);
    FUN_10878cba4(&puStack_360);
    func_0x000107c297a4(&puStack_350);
    do {
      func_0x000107c297a4(&uStack_330);
      __Unwind_Resume(puVar6);
    } while( true );
  }
  return;
}



/* Entry: 10878c60c; end: 10878c60f;  */

undefined8 * FUN_10878c60c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a6f8e0;
  plVar1 = (long *)param_1[0x37];
  param_1[0x37] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010086ab34(param_1 + 0x30);
  func_0x000107c2a5a4(param_1 + 0x21);
  FUN_108929390(param_1 + 0x19);
  func_0x000107c27914(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10878c610; end: 10878c623;  */

void FUN_10878c610(void)

{
  FUN_10878caa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10878c624; end: 10878c69f;  */

undefined1 * FUN_10878c624(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  puVar2 = auStack_40;
  func_0x00010878cc68();
  uStack_28 = extraout_x8;
  func_0x000107c27994(auStack_40,extraout_x9 + 0xb0);
  func_0x00010868c9c4(param_1,auStack_40,1);
  func_0x000107c27914();
  func_0x00010878cc04(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107c27914();
  func_0x00010878cc48();
  func_0x000107c297ac(puVar2 + 0x18);
  func_0x000100562400();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return puVar1;
}



/* Entry: 10878c6a0; end: 10878c6c7;  */

undefined8 FUN_10878c6a0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10878c6c8; end: 10878c6cb;  */

void FUN_10878c6c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6f950;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10878c6cc; end: 10878c6df;  */

void FUN_10878c6cc(void)

{
  FUN_10878c9d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10878c6e0; end: 10878c6ef;  */

void FUN_10878c6e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010878c6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10878c6f0; end: 10878c74f;  */

long FUN_10878c6f0(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    func_0x00010084fb0c();
  }
  func_0x000107c297a4(alStack_30);
  return alStack_30[0];
}



/* Entry: 10878c750; end: 10878c773;  */

void FUN_10878c750(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10878c774; end: 10878c7c3;  */

void FUN_10878c774(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x20);
  (**(code **)(*(long *)plVar1[0x37] + 0x18))((long *)plVar1[0x37],param_1);
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) {
    FUN_108681988(plVar1[0xb],*(undefined8 *)(param_1 + 0x20),1);
  }
  *(undefined1 *)(plVar1 + 0x11) = 1;
  FUN_10867a27c(plVar1 + 0xd,0);
  func_0x000107c28b24(plVar1[0xb]);
  FUN_10875ec6c(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010875ec68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1);
  return;
}



/* Entry: 10878c7c4; end: 10878c7f3;  */

void FUN_10878c7c4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10878c7f4; end: 10878c807;  */

void FUN_10878c7f4(void)

{
  func_0x00010878c9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10878c808; end: 10878c81f;  */

void FUN_10878c808(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x0001005529b4(lVar2 + 0x20);
  lVar1 = lVar2 + 0x40;
  if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
    func_0x0001004b4e98();
    *(long *)(lVar2 + 0x48) = lVar1;
    *(undefined1 *)(lVar2 + 0x50) = 1;
  }
  return;
}



/* Entry: 10878c820; end: 10878c863;  */

void FUN_10878c820(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010878cc80();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010878c854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 10878c864; end: 10878c90f;  */

void FUN_10878c864(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x00010878cc80();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(unaff_x20 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c29564(auStack_80);
  }
  return;
}



/* Entry: 10878c910; end: 10878c913;  */

undefined8 * FUN_10878c910(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6fa58;
  func_0x00010878cc78(param_1[8]);
  func_0x00010878cc78(param_1[2]);
  return param_1;
}



/* Entry: 10878c914; end: 10878c927;  */

void FUN_10878c914(void)

{
  FUN_10878c964();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10878c928; end: 10878c963;  */

void FUN_10878c928(void)

{
  return;
}



/* Entry: 10878c964; end: 10878c9d3;  */

undefined8 * FUN_10878c964(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6fa58;
  func_0x00010878cc78(param_1[8]);
  func_0x00010878cc78(param_1[2]);
  return param_1;
}



/* Entry: 10878c9d4; end: 10878c9e3;  */

void FUN_10878c9d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6f950;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10878c9e4; end: 10878ca6b;  */

void FUN_10878c9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_68 [72];
  
  lVar2 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_68,param_3);
  FUN_10875bbdc(auStack_68,*(undefined4 *)(lVar2 + 0x28),lVar2 + 0x18);
  lVar2 = *(long *)(lVar2 + 0x10);
  plVar1 = *(long **)(lVar2 + 0x1b8);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  FUN_108770c94(param_1);
  FUN_10875ebcc(lVar2,param_1);
  func_0x000107c29564(auStack_68);
  return;
}



/* Entry: 10878ca6c; end: 10878ca8b;  */

void FUN_10878ca6c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10878c6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10878ca8c; end: 10878caa3;  */

void FUN_10878ca8c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10878caa4; end: 10878cb07;  */

undefined8 * FUN_10878caa4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a6f8e0;
  plVar1 = (long *)param_1[0x37];
  param_1[0x37] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010086ab34(param_1 + 0x30);
  func_0x000107c2a5a4(param_1 + 0x21);
  FUN_108929390(param_1 + 0x19);
  func_0x000107c27914(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10878cb08; end: 10878cb0f;  */

void FUN_10878cb08(void)

{
  return;
}



/* Entry: 10878cb10; end: 10878cb33;  */

void FUN_10878cb10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110a6fab8;
  return;
}



/* Entry: 10878cb34; end: 10878cb5f;  */

void FUN_10878cb34(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a6fab8;
  return;
}



/* Entry: 10878cb60; end: 10878cb97;  */

long FUN_10878cb60(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6fb18);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10878cb98; end: 10878cba3;  */

undefined ** FUN_10878cb98(void)

{
  return &PTR_DAT_110a6fb18;
}



/* Entry: 10878cba4; end: 10878cbf3;  */

long FUN_10878cba4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10878cbf4; end: 10878cc8b;  */

void FUN_10878cbf4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10878cc8c; end: 10878cf83;  */

void FUN_10878cc8c(undefined8 param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *****pppppuVar6;
  ulong uVar7;
  undefined8 *****pppppuVar8;
  long lVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuStack_468;
  undefined8 ****ppppuStack_460;
  long lStack_458;
  undefined1 auStack_450 [448];
  ulong uStack_290;
  ulong uStack_288;
  undefined1 auStack_278 [24];
  undefined8 ***pppuStack_260;
  long alStack_1d0 [22];
  byte bStack_120;
  long alStack_118 [22];
  byte bStack_68;
  
  uVar4 = param_2;
  uVar7 = param_2;
  FUN_10878eb98(param_2);
  if ((uVar7 & 1) != 0) {
    FUN_1088631dc(auStack_450,param_4,param_1,uVar4);
    FUN_10867b070(&uStack_290,auStack_450);
    func_0x000107c28948(auStack_450);
    if (uStack_290 != uStack_288) {
      ppppuStack_460 = (undefined8 *****)0x0;
      lStack_458 = 0;
      func_0x000107c29fb4(auStack_450,param_4,param_1);
      func_0x000107c28ef4(alStack_118,auStack_450);
      _bzero(alStack_1d0,0xb8);
      ppppuStack_468 = &ppppuStack_460;
      while ((((bStack_68 & 1) != 0 || ((bStack_120 & 1) != 0)) &&
             (alStack_118[0] != alStack_1d0[0]))) {
        plVar5 = alStack_118;
        FUN_1086a1330(plVar5);
        FUN_1086a9c58(auStack_278,plVar5);
        pppuVar3 = pppuStack_260;
        pppppuVar10 = &ppppuStack_460;
        pppppuVar8 = (undefined8 *****)ppppuStack_460;
        while (pppppuVar11 = pppppuVar10, pppppuVar8 != (undefined8 *****)0x0) {
          while (pppppuVar6 = pppppuVar8, (long)pppppuVar6[4] <= (long)pppuStack_260) {
            if ((long)pppuStack_260 <= (long)pppppuVar6[4]) goto LAB_10878ce00;
            pppppuVar8 = (undefined8 *****)pppppuVar6[1];
            if ((undefined8 *****)pppppuVar6[1] == (undefined8 *****)0x0) {
              pppppuVar10 = pppppuVar6 + 1;
              pppppuVar11 = pppppuVar6;
              goto LAB_10878cdb0;
            }
          }
          pppppuVar10 = pppppuVar6;
          pppppuVar8 = (undefined8 *****)*pppppuVar6;
        }
LAB_10878cdb0:
        pppppuVar6 = (undefined8 *****)0x40;
        __Znwm();
        pppppuVar6[4] = (undefined8 ****)pppuVar3;
        pppppuVar6[5] = (undefined8 ****)0x0;
        pppppuVar6[6] = (undefined8 ****)0x0;
        pppppuVar6[7] = (undefined8 ****)0x0;
        *pppppuVar6 = (undefined8 ****)0x0;
        pppppuVar6[1] = (undefined8 ****)0x0;
        pppppuVar6[2] = pppppuVar11;
        *pppppuVar10 = pppppuVar6;
        if ((undefined8 *****)*ppppuStack_468 != (undefined8 *****)0x0) {
          ppppuStack_468 = (undefined8 ****)*ppppuStack_468;
        }
        func_0x000107c27be4(ppppuStack_460,pppppuVar6);
        lStack_458 = lStack_458 + 1;
LAB_10878ce00:
        func_0x0001086a9430(pppppuVar6 + 5,auStack_278);
        func_0x0001086a9714(auStack_278);
        func_0x000107c28ff0(alStack_118);
      }
      func_0x00010878e944(alStack_1d0);
      func_0x00010878e944(alStack_118);
      func_0x000107c28fe8(auStack_450);
      for (uVar4 = uStack_290; uVar4 != uStack_288; uVar4 = uVar4 + 0x1a8) {
        uVar7 = param_2;
        FUN_10878eb7c(param_2,uVar4);
        *(ulong *)(uVar4 + 0xe8) = uVar7;
        lVar9 = uVar4 + 0x50;
        FUN_1086a2754();
        *(ulong *)(lVar9 + 0x128) = uVar7;
        (**(code **)(*param_4 + 0x10))(param_4,uVar4);
        uVar7 = uVar4;
        func_0x000107c28e64();
        if ((uVar7 & 1) == 0) {
          lVar9 = *(long *)(uVar4 + 0x18);
          pppppuVar8 = &ppppuStack_460;
          pppppuVar10 = &ppppuStack_460;
          while (pppppuVar11 = (undefined8 *****)*pppppuVar10, pppppuVar11 != (undefined8 *****)0x0)
          {
            lVar1 = 8;
            if (lVar9 <= (long)pppppuVar11[4]) {
              lVar1 = 0;
            }
            pppppuVar10 = (undefined8 *****)((long)pppppuVar11 + lVar1);
            if (lVar9 <= (long)pppppuVar11[4]) {
              pppppuVar8 = pppppuVar11;
            }
          }
          if ((&ppppuStack_460 != pppppuVar8) && ((long)pppppuVar8[4] <= lVar9)) {
            ppppuVar2 = pppppuVar8[6];
            for (ppppuVar12 = pppppuVar8[5]; ppppuVar12 != ppppuVar2; ppppuVar12 = ppppuVar12 + 0x15
                ) {
              FUN_1086a0710(ppppuVar12,uVar4);
            }
          }
          FUN_10867b444(param_3,uVar4);
        }
      }
      func_0x00010878e674(ppppuStack_460);
    }
    func_0x00010867b9fc(&uStack_290);
  }
  return;
}



/* Entry: 10878cf84; end: 10878d05b;  */

void FUN_10878cf84(long *param_1)

{
  long *plVar1;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x19;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if (*param_1 != param_1[1]) {
    func_0x00010878e9ac();
    lStack_48 = 0;
    lStack_40 = 0;
    uStack_38 = 0;
    FUN_10878d05c(&lStack_48,(extraout_x9 - extraout_x8) / 0x160);
    lVar2 = param_1[1];
    for (lVar3 = *param_1; lVar3 != lVar2; lVar3 = lVar3 + 0x160) {
      FUN_10878d0e8(&lStack_48,lVar3);
    }
    plVar1 = (long *)*unaff_x20;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,&lStack_48);
    }
    lVar3 = lStack_40;
    lVar2 = lStack_48;
    if (*unaff_x19 != 0) {
      for (; lVar2 != lVar3; lVar2 = lVar2 + 0x120) {
        FUN_1088421bc(lVar2,*unaff_x19);
      }
    }
    FUN_10878e52c(&lStack_48);
  }
  return;
}



/* Entry: 10878d05c; end: 10878d0e7;  */

long * FUN_10878d05c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long alStack_48 [5];
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3) / 0x120) < param_2) {
    if (0xe38e38e38e38e3 < param_2) {
      FUN_10878e0c8();
      func_0x00010878e93c();
      func_0x00010878e8f8();
      uVar1 = param_1[1];
      if (uVar1 < (ulong)param_1[2]) {
        FUN_10878e344();
        plVar2 = (long *)(uVar1 + 0x120);
      }
      else {
        plVar2 = param_1;
        FUN_10878e378();
      }
      param_1[1] = (long)plVar2;
      return plVar2 + -0x24;
    }
    plVar2 = param_1 + 1;
    param_1 = alStack_48;
    FUN_10878e160(param_1,param_2,(*plVar2 - lVar3) / 0x120);
    func_0x00010878e978();
    func_0x00010878e93c();
  }
  return param_1;
}



/* Entry: 10878d0e8; end: 10878d123;  */

long FUN_10878d0e8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10878e344();
    lVar2 = uVar1 + 0x120;
  }
  else {
    lVar2 = param_1;
    FUN_10878e378();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x120;
}



/* Entry: 10878d124; end: 10878d153;  */

void FUN_10878d124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [32];
  
  FUN_1086a3e64(auStack_30,param_2,param_3);
  func_0x000107c279dc(auStack_30);
  return;
}



/* Entry: 10878d154; end: 10878d2bb;  */

void FUN_10878d154(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  undefined1 auStack_130 [216];
  long lStack_58;
  long lStack_50;
  
  FUN_10885ec54(*param_2,param_1);
  FUN_108864d08(auStack_130,*param_2,param_1);
  FUN_1086a1ec8(&lStack_58,auStack_130);
  FUN_1086add20(auStack_130);
  for (; lStack_58 != lStack_50; lStack_58 = lStack_58 + 0xc0) {
  }
  func_0x00010878e954(*param_3);
  (*extraout_x8)();
  func_0x00010878e954(*param_3);
  (*extraout_x8_00)();
  func_0x00010878e954(*param_3);
  (*extraout_x8_01)();
  func_0x00010878e954(*param_3);
  (*extraout_x8_02)();
  func_0x00010878e954(*param_3);
  (*extraout_x8_03)();
  func_0x0001086a9ba8(&lStack_58);
  return;
}



/* Entry: 10878d2bc; end: 10878d4b3;  */

void FUN_10878d2bc(undefined1 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [280];
  undefined1 auStack_2e0 [24];
  undefined1 uStack_2c8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  undefined1 uStack_2a0;
  undefined1 uStack_298;
  undefined1 uStack_290;
  undefined1 uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  undefined1 uStack_250;
  uint uStack_248;
  undefined1 uStack_244;
  undefined1 auStack_240 [368];
  char cStack_d0;
  byte bStack_70;
  undefined1 auStack_68 [24];
  ulong uStack_50;
  undefined1 uStack_48;
  uint uStack_40;
  undefined1 uStack_3c;
  char cStack_38;
  
  auStack_68[0] = 0;
  cStack_38 = '\0';
  FUN_10885edd8(auStack_240,*param_3,param_2);
  FUN_108663a10(auStack_410,auStack_240);
  FUN_1086568ac(auStack_68,auStack_410);
  FUN_1086569a0(auStack_410);
  FUN_108656820(auStack_240);
  func_0x000107c29f64(auStack_240,*param_3,param_2,0);
  if ((bStack_70 & 1) == 0) {
    func_0x000107c27994(auStack_410,param_2);
    func_0x000107c28dcc(auStack_3f8);
    func_0x000107c278b8(auStack_2e0,&DAT_10f4bdfd4);
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_288 = 1;
    uStack_284 = 7;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_260 = 0;
    if (cStack_38 == '\x01') {
      uStack_258 = uStack_50;
      uStack_250 = uStack_48;
      uStack_248 = uStack_40;
      uStack_244 = uStack_3c;
    }
    else {
      uStack_258 = uStack_258 & 0xffffffffffffff00;
      uStack_250 = 0;
      uStack_248 = uStack_248 & 0xffffff00;
      uStack_244 = 0;
    }
    func_0x00010878e990();
    func_0x000107c298c8(param_1 + 0x38,auStack_410);
    func_0x000107c287e4(auStack_410);
  }
  else if (cStack_d0 == '\x01') {
    *param_1 = 0;
    param_1[0x30] = 0;
    param_1[0x38] = 0;
    param_1[0x208] = 0;
  }
  else {
    func_0x00010878e990();
    FUN_1086ce950(param_1 + 0x38,auStack_240);
  }
  func_0x000107c288c8(auStack_240);
  FUN_1086569a0(auStack_68);
  return;
}



/* Entry: 10878d4b4; end: 10878d54b;  */

undefined1  [16]
FUN_10878d4b4(undefined8 param_1,long param_2,long param_3,undefined4 param_4,int *param_5)

{
  long lVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  undefined4 uStack_34;
  
  puVar2 = &uStack_34;
  uStack_34 = param_4;
  FUN_1086a3d00(param_2,puVar2,param_1);
  if (((ulong)puVar2 & 1) == 0) {
    param_2 = 0;
  }
  puVar2 = &uStack_34;
  FUN_1086a3d00(param_3,puVar2,param_1);
  if (((ulong)puVar2 & 1) == 0) {
    param_3 = 0;
  }
  lVar1 = 0;
  if (param_2 < param_3) {
    *param_5 = *param_5 + 1;
    lVar1 = param_3;
  }
  auVar3[8] = param_2 < param_3;
  auVar3._0_8_ = lVar1;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 10878d54c; end: 10878dc3f;  */

uint FUN_10878d54c(undefined8 param_1,float param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  ulong *puVar18;
  long *unaff_x28;
  long lStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long lStack_1e8;
  undefined4 uStack_1e0;
  undefined1 auStack_1d8 [8];
  ulong uStack_1d0;
  ulong uStack_1c8;
  int iStack_1c0;
  undefined8 uStack_1b0;
  undefined1 auStack_1a0 [8];
  undefined1 *puStack_198;
  uint uStack_190;
  undefined1 *puStack_c8;
  long lStack_b8;
  char cStack_88;
  long *plStack_80;
  long **pplStack_78;
  undefined8 uStack_70;
  
  FUN_108789f2c(auStack_1a0,param_3,param_4 + 0x18);
  if (cStack_88 != '\x01') {
    uVar8 = 0;
    uVar16 = 0;
    goto LAB_10878dbbc;
  }
  if ((((byte)uStack_190 >> 3 & 1) == 0) && ((*(byte *)(param_4 + 0x28) >> 3 & 1) != 0)) {
    func_0x0001086a507c(auStack_1a0);
    FUN_1088f6b10();
  }
  if (((*(byte *)(param_4 + 0x150) & 1) == 0) && (lStack_b8 != 0)) {
    *(undefined1 *)(param_4 + 0x150) = 1;
    *(long *)(param_4 + 0x148) = lStack_b8;
  }
  uVar8 = *(uint *)(param_4 + 0x28) & 0x1000;
  if ((*(uint *)(param_4 + 0x28) >> 0xc & 1) == 0) {
    uVar10 = (uint)(*(int *)(param_4 + 0x11c) != 8);
  }
  else {
    uVar10 = 0;
  }
  uVar16 = (uint)((uStack_190 & 0x1000) == 0);
  if ((uStack_190 >> 0xc & 1) == 0) {
    uVar2 = uVar10;
    if (uVar8 == 0) {
      uVar2 = 1;
    }
    if (uVar2 == 0) {
      FUN_108713a94(auStack_1a0);
      FUN_1088bc234();
      if ((uStack_190 >> 0xc & 1) != 0) {
        uVar8 = *(uint *)(param_4 + 0x28) & 0x1000;
        goto LAB_10878d648;
      }
      uVar16 = 1;
    }
    else {
      uVar16 = uVar10 ^ 1;
    }
  }
  else {
LAB_10878d648:
    if (uVar8 != 0) {
      puVar5 = auStack_1a0;
      FUN_108713a94(puVar5);
      FUN_10879c138(param_4 + 0x18,puVar5,param_5,auStack_1a0);
    }
  }
  puVar5 = puStack_c8;
  if (((uStack_190 >> 0xe & 1) != 0) && ((*(byte *)(param_4 + 0x29) >> 6 & 1) != 0)) {
    FUN_1088f6fb4(auStack_1d8,0,*(undefined8 *)(param_4 + 0xf0));
    uStack_1b0 = *(undefined8 *)(puVar5 + 0x28);
    plStack_1f8 = (long *)0x0;
    lStack_200 = 0;
    lStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    uStack_1e0 = 0x3f800000;
    uVar7 = (ulong)(uint)(float)(ulong)(long)iStack_1c0;
    plVar13 = &lStack_200;
    func_0x00010878e99c();
    for (lVar17 = 0; plVar14 = plStack_1f8, lVar17 < iStack_1c0; lVar17 = lVar17 + 1) {
      puVar18 = &uStack_1c8;
      if ((uStack_1c8 & 1) != 0) {
        puVar18 = (ulong *)(uStack_1c8 + lVar17 * 8 + 7);
      }
      plVar13 = (long *)*puVar18;
      uVar8 = *(uint *)(plVar13 + 10);
      plVar15 = (long *)(ulong)uVar8;
      if (plStack_1f8 != (long *)0x0) {
        uVar6 = (long)plStack_1f8 - 1;
        uVar10 = (uint)plStack_1f8;
        if (((ulong)plStack_1f8 & uVar6) == 0) {
          unaff_x28 = (long *)(ulong)(uVar10 - 1 & uVar8);
        }
        else {
          unaff_x28 = plVar15;
          if (plStack_1f8 <= plVar15) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            unaff_x28 = (long *)(ulong)(uVar8 - uVar2 * uVar10);
          }
        }
        plVar9 = *(long **)(lStack_200 + (long)unaff_x28 * 8);
        if (plVar9 != (long *)0x0) {
          do {
            while( true ) {
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) goto LAB_10878d788;
              plVar11 = (long *)plVar9[1];
              if (plVar11 != plVar15) break;
              if (*(uint *)(plVar9 + 2) == uVar8) goto LAB_10878d878;
            }
            if (((ulong)plStack_1f8 & uVar6) == 0) {
              plVar11 = (long *)((ulong)plVar11 & uVar6);
            }
            else if (plStack_1f8 <= plVar11) {
              uVar3 = 0;
              if (plStack_1f8 != (long *)0x0) {
                uVar3 = (ulong)plVar11 / (ulong)plStack_1f8;
              }
              plVar11 = (long *)((long)plVar11 - uVar3 * (long)plStack_1f8);
            }
          } while (plVar11 == unaff_x28);
        }
      }
LAB_10878d788:
      plVar9 = (long *)0x20;
      __Znwm();
      uStack_70 = 1;
      *plVar9 = 0;
      plVar9[1] = (long)plVar15;
      *(uint *)(plVar9 + 2) = uVar8;
      plVar9[3] = (long)plVar13;
      plStack_80 = plVar9;
      pplStack_78 = &plStack_1f0;
      func_0x00010878e9b8();
      if ((plVar14 == (long *)0x0) || (param_2 * (float)plVar14 < (float)uVar7)) {
        func_0x00010878e960((long)plVar14 << 1);
        func_0x00010878e99c();
        plVar14 = plStack_1f8;
        if (((ulong)plStack_1f8 & (long)plStack_1f8 - 1U) == 0) {
          unaff_x28 = (long *)(ulong)((int)plStack_1f8 - 1U & uVar8);
        }
        else {
          unaff_x28 = plVar15;
          if (plStack_1f8 <= plVar15) {
            uVar6 = 0;
            if (plStack_1f8 != (long *)0x0) {
              uVar6 = (ulong)plVar15 / (ulong)plStack_1f8;
            }
            unaff_x28 = (long *)((long)plVar15 - uVar6 * (long)plStack_1f8);
          }
        }
      }
      plVar15 = *(long **)(lStack_200 + (long)unaff_x28 * 8);
      if (plVar15 == (long *)0x0) {
        *plVar9 = (long)plStack_1f0;
        *(long ***)(lStack_200 + (long)unaff_x28 * 8) = &plStack_1f0;
        plStack_1f0 = plVar9;
        if (*plVar9 != 0) {
          plVar15 = *(long **)(*plVar9 + 8);
          if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
            plVar15 = (long *)((ulong)plVar15 & (long)plVar14 - 1U);
          }
          else if (plVar14 <= plVar15) {
            uVar6 = 0;
            if (plVar14 != (long *)0x0) {
              uVar6 = (ulong)plVar15 / (ulong)plVar14;
            }
            plVar15 = (long *)((long)plVar15 - uVar6 * (long)plVar14);
          }
          *(long **)(lStack_200 + (long)plVar15 * 8) = plVar9;
        }
      }
      else {
        *plVar9 = *plVar15;
        *plVar15 = (long)plVar9;
      }
      func_0x00010878e900();
LAB_10878d878:
    }
    uVar6 = *(ulong *)(puVar5 + 0x10);
    puVar18 = (ulong *)(puVar5 + 0x10);
    if ((uVar6 & 1) != 0) {
      puVar18 = (ulong *)(uVar6 + 7);
    }
    puVar1 = puVar18 + *(int *)(puVar5 + 0x18);
    for (; puVar18 != puVar1; puVar18 = puVar18 + 1) {
      plVar14 = (long *)*puVar18;
      uVar8 = *(uint *)(plVar14 + 10);
      plVar15 = (long *)(ulong)uVar8;
      if ((plStack_1f8 != (long *)0x0) && (lStack_1e8 != 0)) {
        uVar6 = (long)plStack_1f8 - 1;
        uVar10 = (uint)plStack_1f8;
        if (((ulong)plStack_1f8 & uVar6) == 0) {
          plVar9 = (long *)(ulong)(uVar10 - 1 & uVar8);
        }
        else {
          plVar9 = plVar15;
          if (plStack_1f8 <= plVar15) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            plVar9 = (long *)(ulong)(uVar8 - uVar2 * uVar10);
          }
        }
        plVar11 = *(long **)(lStack_200 + (long)plVar9 * 8);
        if (plVar11 != (long *)0x0) {
          do {
            while( true ) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_10878d940;
              plVar12 = (long *)plVar11[1];
              if (plVar12 != plVar15) break;
              if (*(uint *)(plVar11 + 2) == uVar8) {
                plVar13 = (long *)plVar11[3];
                if ((int)plVar14[3] != 0) {
                  func_0x0001086ebac4(plVar13 + 2,plVar14 + 2);
                }
                if ((((int)plVar14[6] != 0) && (plVar14 != plVar13)) &&
                   (func_0x00010878e8dc(plVar13 + 5), (int)plVar14[6] != 0)) {
                  func_0x000107c303c4(plVar13 + 5,plVar14 + 5);
                }
                goto LAB_10878db18;
              }
            }
            if (((ulong)plStack_1f8 & uVar6) == 0) {
              plVar12 = (long *)((ulong)plVar12 & uVar6);
            }
            else if (plStack_1f8 <= plVar12) {
              uVar3 = 0;
              if (plStack_1f8 != (long *)0x0) {
                uVar3 = (ulong)plVar12 / (ulong)plStack_1f8;
              }
              plVar12 = (long *)((long)plVar12 - uVar3 * (long)plStack_1f8);
            }
          } while (plVar12 == plVar9);
        }
      }
LAB_10878d940:
      puVar4 = &uStack_1c8;
      FUN_1086d03d8();
      FUN_1088f75d4();
      plVar14 = plStack_1f8;
      if (plStack_1f8 != (long *)0x0) {
        uVar6 = (long)plStack_1f8 - 1;
        uVar10 = (uint)plStack_1f8;
        if (((ulong)plStack_1f8 & uVar6) == 0) {
          plVar13 = (long *)(ulong)(uVar10 - 1 & uVar8);
        }
        else {
          plVar13 = plVar15;
          if (plStack_1f8 <= plVar15) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            plVar13 = (long *)(ulong)(uVar8 - uVar2 * uVar10);
          }
        }
        plVar9 = *(long **)(lStack_200 + (long)plVar13 * 8);
        if (plVar9 != (long *)0x0) {
          do {
            while( true ) {
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) goto LAB_10878d9e0;
              plVar11 = (long *)plVar9[1];
              if (plVar11 != plVar15) break;
              if (*(uint *)(plVar9 + 2) == uVar8) goto LAB_10878db18;
            }
            if (((ulong)plStack_1f8 & uVar6) == 0) {
              plVar11 = (long *)((ulong)plVar11 & uVar6);
            }
            else if (plStack_1f8 <= plVar11) {
              uVar3 = 0;
              if (plStack_1f8 != (long *)0x0) {
                uVar3 = (ulong)plVar11 / (ulong)plStack_1f8;
              }
              plVar11 = (long *)((long)plVar11 - uVar3 * (long)plStack_1f8);
            }
          } while (plVar11 == plVar13);
        }
      }
LAB_10878d9e0:
      plVar9 = (long *)0x20;
      __Znwm();
      uStack_70 = 1;
      *plVar9 = 0;
      plVar9[1] = (long)plVar15;
      *(uint *)(plVar9 + 2) = uVar8;
      plVar9[3] = (long)puVar4;
      plStack_80 = plVar9;
      pplStack_78 = &plStack_1f0;
      func_0x00010878e9b8();
      if ((plVar14 == (long *)0x0) || (param_2 * (float)plVar14 < (float)uVar7)) {
        func_0x00010878e960((long)plVar14 << 1);
        func_0x00010878e99c();
        plVar14 = plStack_1f8;
        if (((ulong)plStack_1f8 & (long)plStack_1f8 - 1U) == 0) {
          plVar13 = (long *)(ulong)((int)plStack_1f8 - 1U & uVar8);
        }
        else {
          plVar13 = plVar15;
          if (plStack_1f8 <= plVar15) {
            uVar6 = 0;
            if (plStack_1f8 != (long *)0x0) {
              uVar6 = (ulong)plVar15 / (ulong)plStack_1f8;
            }
            plVar13 = (long *)((long)plVar15 - uVar6 * (long)plStack_1f8);
          }
        }
      }
      plVar15 = *(long **)(lStack_200 + (long)plVar13 * 8);
      if (plVar15 == (long *)0x0) {
        *plVar9 = (long)plStack_1f0;
        *(long ***)(lStack_200 + (long)plVar13 * 8) = &plStack_1f0;
        plStack_1f0 = plVar9;
        if (*plVar9 != 0) {
          plVar15 = *(long **)(*plVar9 + 8);
          if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
            plVar15 = (long *)((ulong)plVar15 & (long)plVar14 - 1U);
          }
          else if (plVar14 <= plVar15) {
            uVar6 = 0;
            if (plVar14 != (long *)0x0) {
              uVar6 = (ulong)plVar15 / (ulong)plVar14;
            }
            plVar15 = (long *)((long)plVar15 - uVar6 * (long)plVar14);
          }
          *(long **)(lStack_200 + (long)plVar15 * 8) = plVar9;
        }
      }
      else {
        *plVar9 = *plVar15;
        *plVar15 = (long)plVar9;
      }
      func_0x00010878e900();
LAB_10878db18:
    }
    uStack_190 = uStack_190 | 0x4000;
    if (puStack_c8 == (undefined1 *)0x0) {
      puVar5 = puStack_198;
      if (((ulong)puStack_198 & 1) != 0) {
        puVar5 = *(undefined1 **)((ulong)puStack_198 & 0xfffffffffffffffe);
      }
      FUN_10878e624();
      puStack_c8 = puVar5;
    }
    if (puStack_c8 != auStack_1d8) {
      uVar7 = *(ulong *)(puStack_c8 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      if ((uStack_1d0 & 1) != 0) {
        uStack_1d0 = *(ulong *)(uStack_1d0 & 0xfffffffffffffffe);
      }
      if (uVar7 == uStack_1d0) {
        func_0x0001088f71fc();
      }
      else {
        FUN_1088f71cc();
      }
    }
    func_0x00010878e6b4(&lStack_200);
    FUN_1088f7004(auStack_1d8);
  }
  func_0x000107c28df0(param_4 + 0x18,auStack_1a0);
  uVar8 = 1;
LAB_10878dbbc:
  FUN_10872cd14(auStack_1a0);
  return uVar8 | uVar16 << 8;
}



/* Entry: 10878dc40; end: 10878debb;  */

void FUN_10878dc40(ulong *param_1,long param_2,long param_3,undefined8 param_4,ulong param_5,
                  long param_6,undefined8 param_7,ulong param_8)

{
  undefined **ppuVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  bool bVar6;
  undefined **ppuVar7;
  ulong uStack_238;
  undefined1 auStack_230 [48];
  undefined1 auStack_200 [120];
  ulong uStack_188;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 auStack_178 [24];
  undefined **ppuStack_160;
  char cStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined1 auStack_120 [48];
  undefined1 auStack_f0 [120];
  ulong uStack_78;
  undefined8 uStack_70;
  char cStack_68;
  
  uStack_128 = uStack_128 & 0xffffffffffffff00;
  cStack_68 = '\0';
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  if (*(char *)(param_3 + 0x1a8) == '\x01') {
    ppuVar1 = &PTR_PTR_113286e08;
    if (*(undefined ***)(param_3 + 0x80) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_3 + 0x80);
    }
    FUN_108786f58(&uStack_140,ppuVar1 + 0x18);
  }
  ppuVar7 = *(undefined ***)(param_2 + 0x30);
  func_0x000107c29ee4(&uStack_238,param_5);
  ppuVar1 = &PTR_PTR_113286e08;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar1 = ppuVar7;
  }
  FUN_1086a570c(auStack_178,&uStack_140,ppuVar1 + 0x18,param_4,&uStack_238,
                *(undefined8 *)(param_2 + 0x60));
  func_0x000107c2a2e0(&uStack_238);
  if (cStack_148 == '\x01') {
    ppuVar1 = &PTR_PTR_113284480;
    if (ppuStack_160 != (undefined **)0x0) {
      ppuVar1 = ppuStack_160;
    }
    if (*(int *)(ppuVar1 + 8) == 0x10) {
      uVar3 = *(ulong *)(ppuVar1[7] + 0x20);
      bVar2 = param_8 != 0;
      bVar6 = param_6 < (long)uVar3;
      uVar5 = uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU);
      param_5 = uVar5 >> 8;
      uVar4 = 0;
      if (param_6 < (long)uVar3) {
        uVar4 = (uint)uVar5;
      }
      uVar5 = (ulong)uVar4;
      if ((long)uVar3 <= param_6 || (uVar5 & 0xff | param_5 << 8) != uVar3) goto LAB_10878de30;
      uVar3 = param_8 & 0xffffffffffffff00;
      bVar6 = true;
    }
    else {
      bVar2 = false;
      param_8 = 0;
      uVar3 = 0;
      bVar6 = false;
      uVar5 = 0;
    }
    uStack_238 = *(ulong *)(param_3 + 0x18);
    if (*(char *)(param_3 + 0x1a8) == '\0') {
      uStack_238 = 0;
    }
    FUN_108787fd0(auStack_230,auStack_178);
    func_0x000107c287dc(auStack_200,param_2);
    uStack_188 = uVar3 | param_8 & 0xff;
    uStack_128 = uStack_238;
    uStack_180 = bVar2;
    if (cStack_68 == '\x01') {
      FUN_10867f324();
      func_0x000107c2895c(auStack_f0,auStack_200);
      uStack_70 = CONCAT71(uStack_70._1_7_,uStack_180);
    }
    else {
      FUN_10867f2dc(auStack_120,auStack_230);
      func_0x000107c28974(auStack_f0,auStack_200);
      uStack_70 = CONCAT71(uStack_17f,uStack_180);
      cStack_68 = '\x01';
    }
    uStack_78 = uStack_188;
    FUN_108787f44(&uStack_238);
  }
  else {
    bVar6 = false;
    uVar5 = 0;
  }
LAB_10878de30:
  *param_1 = uVar5 & 0xff | param_5 << 8;
  *(bool *)(param_1 + 1) = bVar6;
  FUN_108788118(param_1 + 2,&uStack_128);
  FUN_1086ab7bc(auStack_178);
  func_0x000107c29034(&uStack_140);
  FUN_108788160(&uStack_128);
  return;
}



/* Entry: 10878debc; end: 10878dff3;  */

undefined8 FUN_10878debc(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  uint uVar9;
  ulong unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_2 + 0x70) != 3) {
    return 0;
  }
  func_0x00010878e9ac();
  if (*(int *)(*(long *)(param_2 + 0x60) + 0x104) != 8) {
    return 0;
  }
  uVar6 = unaff_x19;
  FUN_10878d4b4();
  if ((uVar6 & 1) == 0) {
    ppuVar1 = *(undefined ***)(unaff_x20 + 0x60);
    if (*(int *)(unaff_x20 + 0x70) != 3) {
      ppuVar1 = &PTR_PTR_11327ad30;
    }
    uVar3 = *(uint *)(ppuVar1 + 2);
    if ((uVar3 >> 3 & 1) != 0) {
      iVar4 = (int)ppuVar1[0x10];
      ppuVar2 = &PTR_PTR_11327ab60;
      if (*(undefined ***)(unaff_x19 + 0x80) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(unaff_x19 + 0x80);
      }
      iVar5 = (int)ppuVar2;
      FUN_10878dff4();
      FUN_10878dff4();
      if (iVar4 != iVar5) {
        return 1;
      }
    }
    if ((uVar3 >> 0xc & 1) == 0) {
      return 0;
    }
    if ((*(byte *)(unaff_x19 + 0x11) >> 4 & 1) != 0) {
      puVar7 = ppuVar1[0x19];
      lVar8 = *(long *)(unaff_x19 + 200);
      uVar3 = *(uint *)(puVar7 + 0x10);
      if ((uVar3 & 1) == 0) {
        if ((uVar3 >> 1 & 1) == 0) {
          return 0;
        }
        uVar9 = *(uint *)(lVar8 + 0x10);
      }
      else {
        uVar9 = *(uint *)(lVar8 + 0x10);
        if ((uVar9 & 1) == 0) {
          return 1;
        }
        if (*(char *)(*(long *)(lVar8 + 0x28) + 0x10) != *(char *)(*(long *)(puVar7 + 0x28) + 0x10))
        {
          return 1;
        }
        if ((uVar3 >> 1 & 1) == 0) {
          return 0;
        }
      }
      if (((uVar9 >> 1 & 1) != 0) &&
         (*(long *)(*(long *)(lVar8 + 0x30) + 0x10) == *(long *)(*(long *)(puVar7 + 0x30) + 0x10)))
      {
        return 0;
      }
    }
  }
  return 1;
}



/* Entry: 10878dff4; end: 10878e01f;  */

undefined4 FUN_10878dff4(long param_1)

{
  undefined4 *puVar1;
  
  if (((*(byte *)(param_1 + 0x10) & 1) == 0) ||
     ((*(byte *)(*(long *)(param_1 + 0x48) + 0x10) & 1) == 0)) {
    puVar1 = (undefined4 *)(param_1 + 0x54);
  }
  else {
    puVar1 = (undefined4 *)(*(long *)(*(long *)(param_1 + 0x48) + 0x18) + 0x18);
  }
  return *puVar1;
}



/* Entry: 10878e020; end: 10878e077;  */

uint FUN_10878e020(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uStack_14;
  
  if ((*(int *)(param_2 + 0x70) == 3) && (*(int *)(*(long *)(param_2 + 0x60) + 0x104) == 5)) {
    uStack_14 = 0;
    FUN_10878d4b4(param_1,param_3,*(long *)(param_2 + 0x60),0,&uStack_14);
    uVar1 = (uint)param_3;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 10878e078; end: 10878e0c7;  */

uint FUN_10878e078(ulong param_1)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x20;
  
  func_0x00010878e9ac();
  uVar1 = param_1;
  FUN_10878debc();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  if ((*(int *)(unaff_x20 + 0x70) == 3) && (*(int *)(*(long *)(unaff_x20 + 0x60) + 0x104) == 5)) {
    FUN_10878d4b4(param_1);
  }
  else {
    unaff_w19 = 0;
  }
  return unaff_w19 & 1;
}



/* Entry: 10878e0c8; end: 10878e0db;  */

void FUN_10878e0c8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f4ba6f6;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x120) * 0x120;
  FUN_10878e200(plVar1 + 2,*plVar1,plVar1[1],lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10878e0dc; end: 10878e15f;  */

void FUN_10878e0dc(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x120) * 0x120;
  FUN_10878e200(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10878e160; end: 10878e1cf;  */

long * FUN_10878e160(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010878e1ac();
  }
  lVar1 = param_4 + param_3 * 0x120;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x120;
  return param_1;
}



/* Entry: 10878e1d0; end: 10878e1ff;  */

void FUN_10878e1d0(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x19;
  ulong unaff_x20;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0xe38e38e38e38e4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x120);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010878e9ac();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (; lStack_48 = param_4, param_2 != unaff_x19; param_2 = param_2 + 0x120) {
    FUN_108787490(param_4,param_2);
    param_4 = lStack_48 + 0x120;
  }
  uStack_58 = 1;
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x120) {
    func_0x0001086d04e0(unaff_x20);
  }
  FUN_10878e294(&uStack_70);
  return;
}



/* Entry: 10878e200; end: 10878e293;  */

void FUN_10878e200(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x00010878e9ac();
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != unaff_x19; param_2 = param_2 + 0x120) {
    FUN_108787490(param_4,param_2);
    param_4 = lStack_38 + 0x120;
  }
  uStack_48 = 1;
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x120) {
    func_0x0001086d04e0(unaff_x20);
  }
  FUN_10878e294(&uStack_60);
  return;
}



/* Entry: 10878e294; end: 10878e303;  */

long FUN_10878e294(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x120;
      func_0x0001086d04e0();
    }
  }
  return param_1;
}



/* Entry: 10878e304; end: 10878e30b;  */

void FUN_10878e304(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x120;
    func_0x0001086d04e0();
  }
  return;
}



/* Entry: 10878e30c; end: 10878e343;  */

void FUN_10878e30c(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x120;
    func_0x0001086d04e0();
  }
  return;
}



/* Entry: 10878e344; end: 10878e377;  */

void FUN_10878e344(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10878e410(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x120;
  return;
}



/* Entry: 10878e378; end: 10878e40f;  */

long FUN_10878e378(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10878e4cc(param_1,(param_1[1] - *param_1) / 0x120 + 1);
  FUN_10878e160(auStack_58,plVar1,(param_1[1] - *param_1) / 0x120,param_1 + 2);
  FUN_10878e410(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x120;
  func_0x00010878e978();
  lVar2 = param_1[1];
  func_0x00010878e93c();
  return lVar2;
}



/* Entry: 10878e410; end: 10878e4cb;  */

long FUN_10878e410(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000107c27994(lVar1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  func_0x000108685d50(param_1 + 0x38,param_2 + 0x38);
  func_0x000104be0ccc(param_1 + 0x58,param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  FUN_108636e20(param_1 + 0x90,param_2 + 0x90);
  _memcpy(param_1 + 0xb8,param_2 + 0xb8,0x61);
  return param_1;
}



/* Entry: 10878e4cc; end: 10878e52b;  */

long * FUN_10878e4cc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plStack_38;
  
  if ((long *)0xe38e38e38e38e3 < param_2) {
    FUN_10878e0c8();
    plStack_38 = param_1;
    func_0x00010878e560(&plStack_38);
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x120;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x71c71c71c71c70 < uVar1) {
    plVar2 = (long *)0xe38e38e38e38e3;
  }
  return plVar2;
}



/* Entry: 10878e52c; end: 10878e59b;  */

undefined8 FUN_10878e52c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010878e560(&uStack_28);
  return param_1;
}



/* Entry: 10878e59c; end: 10878e5a3;  */

void FUN_10878e59c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x120;
    func_0x0001086d04e0();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10878e5a4; end: 10878e5db;  */

void FUN_10878e5a4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x120;
    func_0x0001086d04e0();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10878e5dc; end: 10878e623;  */

undefined1 * FUN_10878e5dc(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    func_0x000108656b70(param_1);
    param_1[0x30] = 1;
  }
  return param_1;
}



/* Entry: 10878e624; end: 10878e6f7;  */

void FUN_10878e624(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110a8d5a8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  return;
}



/* Entry: 10878e6f8; end: 10878e897;  */

void FUN_10878e6f8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 - 1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_10878e898(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_10878e898(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar5;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10878e898; end: 10878e8af;  */

void FUN_10878e898(long *param_1,long param_2)

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



/* Entry: 10878e8b0; end: 10878e8db;  */

long * FUN_10878e8b0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10878e8dc; end: 10878e9cb;  */

void FUN_10878e8dc(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10878e9cc; end: 10878eabb;  */

undefined8 * FUN_10878e9cc(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  undefined **ppuVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  uVar5 = *(ulong *)(param_2 + 0x18);
  puVar1 = (ulong *)(param_2 + 0x18);
  if ((uVar5 & 1) != 0) {
    puVar1 = (ulong *)(uVar5 + 7);
  }
  for (lVar6 = (long)*(int *)(param_2 + 0x20) << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    uVar5 = *puVar1;
    if ((*(byte *)(uVar5 + 0x10) >> 2 & 1) == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(int *)(*(long *)(uVar5 + 0x28) + 0xa8) == 0;
    }
    iVar4 = *(int *)(uVar5 + 0x68);
    func_0x000108842b30(iVar4,bVar3);
    if (iVar4 != 0) {
      ppuVar2 = &PTR_PTR_113286e08;
      if (*(undefined ***)(uVar5 + 0x30) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(uVar5 + 0x30);
      }
      puStack_48 = ppuVar2[0x25];
      if (0 < (long)puStack_48) {
        uStack_50 = *(undefined8 *)(uVar5 + 0x60);
        FUN_10878eabc(param_1,&uStack_50,&puStack_48);
      }
    }
    puVar1 = puVar1 + 1;
  }
  return param_1;
}



/* Entry: 10878eabc; end: 10878ead3;  */

void FUN_10878eabc(void)

{
  func_0x00010878ebcc();
  return;
}



/* Entry: 10878ead4; end: 10878eb7b;  */

undefined * FUN_10878ead4(long param_1,long param_2)

{
  undefined **ppuVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_38;
  
  ppuVar1 = &PTR_PTR_113286e08;
  if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x30);
  }
  puVar5 = ppuVar1[0x25];
  iVar3 = *(int *)(param_2 + 0x68);
  if ((*(byte *)(param_2 + 0x10) >> 2 & 1) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(*(long *)(param_2 + 0x28) + 0xa8) == 0;
  }
  func_0x000108842b30(iVar3,bVar2);
  if ((puVar5 == (undefined *)0x0) && (iVar3 != 0)) {
    uStack_38 = *(undefined8 *)(param_2 + 0x60);
    lVar4 = param_1;
    FUN_10878ecb0(param_1,&uStack_38);
    if (param_1 + 8 == lVar4) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = *(undefined **)(lVar4 + 0x28);
    }
  }
  return puVar5;
}



/* Entry: 10878eb7c; end: 10878eb97;  */

undefined * FUN_10878eb7c(long param_1,long param_2)

{
  undefined **ppuVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_38;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    ppuVar1 = &PTR_PTR_113286e08;
    if (*(undefined ***)(param_2 + 0x80) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0x80);
    }
    puVar5 = ppuVar1[0x25];
    iVar3 = *(int *)(param_2 + 0xb8);
    if ((*(byte *)(param_2 + 0x60) >> 2 & 1) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(int *)(*(long *)(param_2 + 0x78) + 0xa8) == 0;
    }
    func_0x000108842b30(iVar3,bVar2);
    if ((puVar5 == (undefined *)0x0) && (iVar3 != 0)) {
      uStack_38 = *(undefined8 *)(param_2 + 0xb0);
      lVar4 = param_1;
      FUN_10878ecb0(param_1,&uStack_38);
      if (param_1 + 8 == lVar4) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar5 = *(undefined **)(lVar4 + 0x28);
      }
    }
    return puVar5;
  }
  return (undefined *)0x0;
}



/* Entry: 10878eb98; end: 10878ebe3;  */

undefined1  [16] FUN_10878eb98(long *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  
  plVar1 = param_1 + 1;
  if (plVar1 != (long *)*param_1) {
    func_0x000107c27bdc();
    auVar2._0_8_ = plVar1[4];
    auVar2._8_8_ = 1;
    return auVar2;
  }
  return ZEXT816(0);
}



/* Entry: 10878ebe4; end: 10878ecaf;  */

undefined1  [16] FUN_10878ebe4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  long *plStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  lVar7 = *param_2;
  lVar5 = *param_3;
  plVar1 = (long *)0x30;
  __Znwm();
  plStack_40 = (long *)(param_1 + 8);
  plVar3 = (long *)*plStack_40;
  uStack_38 = 1;
  plVar1[4] = lVar7;
  plVar1[5] = lVar5;
  plVar2 = plStack_40;
  do {
    plVar6 = plVar2;
    plStack_48 = plVar1;
    if (plVar3 == (long *)0x0) {
LAB_10878ec68:
      FUN_108748718(param_1,plVar6,plVar2,plVar1);
      plStack_48 = (long *)0x0;
      uVar4 = 1;
      plVar6 = plVar1;
LAB_10878ec8c:
      FUN_1087488b8(&plStack_48);
      auVar8._8_8_ = uVar4;
      auVar8._0_8_ = plVar6;
      return auVar8;
    }
    while (plVar6 = plVar3, plVar6[4] <= lVar7) {
      if (lVar7 <= plVar6[4]) {
        uVar4 = 0;
        goto LAB_10878ec8c;
      }
      plVar3 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar2 = plVar6 + 1;
        goto LAB_10878ec68;
      }
    }
    plVar3 = (long *)*plVar6;
    plVar2 = plVar6;
  } while( true );
}



/* Entry: 10878ecb0; end: 10878ece7;  */

long * FUN_10878ecb0(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 8);
  for (plVar2 = (long *)*plVar3; plVar2 != (long *)0x0; plVar2 = *(long **)((long)plVar2 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= plVar2[4]) {
      lVar1 = 0;
      plVar3 = plVar2;
    }
  }
  return plVar3;
}



/* Entry: 10878ece8; end: 10878ee77;  */

void FUN_10878ece8(long param_1,long param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined1 auStack_124 [28];
  undefined1 auStack_108 [120];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  if (*(int *)(param_2 + 0x30) == 4) {
    ppuVar1 = &PTR_PTR_11326cb58;
    if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
    }
    func_0x000107c29ee0(auStack_58,ppuVar1);
    plVar2 = *(long **)(param_1 + 0x18);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_1086cf200(&uStack_90);
    ppuVar1 = *(undefined ***)(param_2 + 0x28);
    if (*(int *)(param_2 + 0x30) != 4) {
      ppuVar1 = &PTR_PTR_11327f548;
    }
    FUN_10868cc20(auStack_108,ppuVar1);
    (**(code **)(*plVar2 + 0x28))
              (auStack_124,plVar2,auStack_58,1,0x1200a8,&uStack_90,auStack_108,0,0);
    FUN_1089058f8(auStack_108);
    func_0x0001086cf230(&uStack_90);
    FUN_1086733b0(param_1 + 8,0);
    func_0x000107c27914(auStack_58);
    return;
  }
  if ((*(int *)(param_2 + 0x30) == 3) &&
     ((*(byte *)(*(long *)(param_2 + 0x28) + 0x10) >> 2 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x10))
              (*(long **)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x28),3);
    func_0x000108770be8();
  }
  FUN_1086733d8(param_1 + 0x10,&stack0xffffffffffffffe8);
  return;
}



/* Entry: 10878ee78; end: 10878eea7;  */

void FUN_10878ee78(long param_1)

{
  FUN_108770c94();
  FUN_1086733d8(param_1 + 0x10,&stack0xffffffffffffffe8);
  return;
}



/* Entry: 10878eea8; end: 10878eeab;  */

undefined8 * FUN_10878eea8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6fb58;
  func_0x000107c297ac(param_1 + 5);
  func_0x000107c2917c(param_1 + 3);
  func_0x000108673390(param_1 + 1);
  return param_1;
}



/* Entry: 10878eeac; end: 10878eebf;  */

void FUN_10878eeac(void)

{
  FUN_10878eec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10878eec0; end: 10878ef07;  */

undefined8 * FUN_10878eec0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6fb58;
  func_0x000107c297ac(param_1 + 5);
  func_0x000107c2917c(param_1 + 3);
  func_0x000108673390(param_1 + 1);
  return param_1;
}



/* Entry: 10878ef08; end: 10878f2df;  */

void FUN_10878ef08(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_5e0 [36];
  undefined4 uStack_5bc;
  undefined1 auStack_5b8 [72];
  undefined1 auStack_570 [48];
  undefined1 auStack_540 [24];
  undefined1 uStack_528;
  undefined1 auStack_520 [56];
  undefined1 uStack_4e8;
  undefined1 auStack_4e0 [32];
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  undefined1 auStack_490 [352];
  undefined1 uStack_330;
  undefined1 auStack_328 [32];
  undefined1 auStack_308 [32];
  undefined1 auStack_2e8 [464];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [64];
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_80;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [40];
  undefined1 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  func_0x0001087967ac();
  func_0x0001087960cc();
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  if (*(char *)(param_2 + 0x38) == '\x01') {
    func_0x00010528d190(&uStack_20,
                        (*(long *)(unaff_x20 + 0x28) - *(long *)(unaff_x20 + 0x20)) / 0x18);
    lVar1 = *(long *)(unaff_x20 + 0x28);
    for (lVar4 = *(long *)(unaff_x20 + 0x20); lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
      FUN_1086c2e14(&uStack_20,lVar4);
    }
  }
  auStack_50[0] = 0;
  uStack_28 = 0;
  if (*(char *)(unaff_x20 + 0x248) == '\x01') {
    func_0x000107c27994(&uStack_70,unaff_x20 + 0x230);
    uStack_b0 = uStack_60;
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x270);
    if (*(char *)(unaff_x20 + 0x278) == '\0') {
      uStack_a8 = 0;
    }
    uStack_a0 = *(undefined8 *)(unaff_x20 + 0x280);
    if (*(char *)(unaff_x20 + 0x288) == '\0') {
      uStack_a0 = 0;
    }
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    func_0x0001087946ac(auStack_50,&uStack_c0);
    func_0x000107c27914(&uStack_c0);
    func_0x000107c27914(&uStack_70);
  }
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  uStack_80 = 0;
  if ((*(byte *)(unaff_x20 + 0x170) >> 5 & 1) != 0) {
    func_0x0001087946e0(auStack_100);
    func_0x000108794734(&uStack_c0,auStack_100);
    func_0x000104bee430(auStack_100);
  }
  func_0x000107c27994(auStack_118,unaff_x20 + 8);
  func_0x000104be0ccc(auStack_308,unaff_x20 + 0x48);
  uVar2 = *(undefined4 *)(unaff_x20 + 0x40);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x68);
  func_0x000107c279d4(auStack_328,unaff_x20 + 0x140);
  auStack_490[0] = 0;
  uStack_330 = 0;
  func_0x00010529669c(auStack_2e8,auStack_308,uVar2,uVar3,0,0,auStack_328);
  func_0x000108687044(auStack_4a8,&uStack_20);
  FUN_10867be90(auStack_4c0,unaff_x20 + 0xa8);
  func_0x000104be0ccc(auStack_4e0,unaff_x20 + 0xd8);
  auStack_520[0] = 0;
  uStack_4e8 = 0;
  auStack_540[0] = 0;
  uStack_528 = 0;
  func_0x000107c28bf4(auStack_570,auStack_50);
  func_0x00010528d108(auStack_5b8,&uStack_c0);
  uStack_5bc = *(undefined4 *)(unaff_x20 + 0x210);
  FUN_1088484f4();
  func_0x000107c29eb4(auStack_100,unaff_x20 + 0x160);
  func_0x000104be0ccc(auStack_5e0,unaff_x20 + 0x250);
  func_0x00010528ce14();
  func_0x000107c279c4(auStack_5e0);
  func_0x000104bee410(auStack_5b8);
  func_0x000107c27a1c(auStack_570);
  func_0x000107c27a40(auStack_540);
  func_0x000107c27a2c(auStack_520);
  func_0x000107c279c4(auStack_4e0);
  func_0x000104bee630(auStack_4c0);
  func_0x000104be1594(auStack_4a8);
  func_0x000104bee6b8(auStack_2e8);
  func_0x000104bee6e8(auStack_490);
  func_0x000107c279dc(auStack_328);
  func_0x000107c279c4(auStack_308);
  func_0x000107c27914(auStack_118);
  func_0x000104bee410(&uStack_c0);
  func_0x000107c27a1c(auStack_50);
  func_0x000104be1594(&uStack_20);
  return;
}



/* Entry: 10878f2e0; end: 10878f643;  */

void FUN_10878f2e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_13b8 [24];
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined4 uStack_1388;
  undefined8 uStack_1380;
  undefined4 uStack_1378;
  undefined4 uStack_1374;
  undefined4 uStack_1370;
  undefined8 uStack_c18;
  undefined1 uStack_c10;
  undefined1 auStack_9e0 [96];
  undefined1 auStack_980 [40];
  undefined4 uStack_958;
  undefined4 uStack_940;
  byte bStack_930;
  undefined1 auStack_928 [48];
  undefined1 uStack_8f8;
  undefined1 auStack_8f0 [96];
  undefined1 auStack_890 [200];
  undefined1 auStack_7c8 [904];
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 auStack_420 [904];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [24];
  char cStack_38;
  undefined1 auStack_30 [48];
  
  func_0x0001087967ac();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = *param_3;
  func_0x0001087962b4();
  (*extraout_x8)();
  param_4[0x13] = uVar1;
  FUN_108860310(auStack_13b8,*param_2,param_4 + 0xe);
  FUN_10878f644(auStack_980,auStack_13b8);
  func_0x000107c298ec(auStack_13b8);
  if ((bStack_930 & 1) == 0) {
    func_0x000108796530(auStack_13b8);
    uStack_13a0 = 0;
    uVar1 = *param_3;
    func_0x0001087962b4();
    (*extraout_x8_00)();
    uStack_1390 = 0x100000000;
    uStack_1388 = 10;
    if (*(int *)(param_4 + 0xd) != 0) {
      uStack_1388 = 0x1e;
    }
    uStack_1380 = 0;
    uStack_1374 = *(undefined4 *)(param_4 + 0x11);
    uStack_1378 = 0;
    uStack_1370 = 0;
    uStack_1398 = uVar1;
    FUN_10878f6d0(auStack_980,auStack_13b8);
    func_0x000108796328();
  }
  else {
    uStack_958 = 0;
    uStack_940 = 0;
  }
  FUN_10879d0a0(auStack_9e0,*param_2,*param_4);
  FUN_1088627a0(auStack_98,*param_2,auStack_9e0);
  FUN_10878ef08(auStack_420,param_4);
  uStack_438 = param_4[0xf];
  uStack_440 = param_4[0xe];
  uStack_430 = param_4[0x10];
  param_4[0xf] = 0;
  param_4[0x10] = 0;
  param_4[0xe] = 0;
  FUN_108639eb0(auStack_7c8,auStack_420);
  FUN_1086ac390(auStack_890,param_4 + 0x2c);
  uVar1 = param_4[0x13];
  FUN_1086858d8(auStack_8f0,auStack_9e0);
  uVar3 = param_4[0x12];
  uVar4 = *param_4;
  puVar2 = auStack_98;
  FUN_1086a4c6c(puVar2,auStack_9e0);
  func_0x000104be0ccc(auStack_30,param_4 + 0x1f);
  func_0x000104be0ccc(auStack_50,param_4 + 0x23);
  if (cStack_38 == '\x01') {
    FUN_108791694(auStack_80,auStack_30,auStack_50);
    FUN_1087916cc(auStack_928,auStack_80);
    FUN_10866434c(auStack_80);
    func_0x000107c279c4(auStack_50);
    func_0x0001087965e8();
  }
  else {
    func_0x000107c279c4();
    func_0x0001087965e8();
    auStack_928[0] = 0;
    uStack_8f8 = 0;
  }
  FUN_1087916e8(auStack_13b8,&uStack_440,auStack_7c8,auStack_890,uVar1,auStack_8f0,uVar3,uVar4,
                (int)puVar2);
  FUN_10866432c(auStack_928);
  func_0x000104bee768(auStack_8f0);
  func_0x000107c2a500(auStack_890);
  func_0x000104bee3a8(auStack_7c8);
  func_0x000107c27914(&uStack_440);
  uVar1 = *param_3;
  func_0x0001087962b4();
  (*extraout_x8_01)();
  uStack_c10 = 1;
  uStack_c18 = uVar1;
  func_0x000104bee3a8(auStack_420);
  func_0x0001086aaf34(auStack_98);
  FUN_10878f704(param_1,param_3,auStack_980,auStack_13b8);
  func_0x000108796528();
  func_0x000104bee768(auStack_9e0);
  func_0x000107c298e0(auStack_980);
  return;
}



/* Entry: 10878f644; end: 10878f6cf;  */

void FUN_10878f644(undefined1 *param_1)

{
  long *plVar1;
  long lStack_80;
  undefined1 auStack_78 [80];
  char cStack_28;
  
  func_0x000107c298f0(&lStack_80);
  func_0x000107c334ec();
  if (cStack_28 == '\x01') {
    func_0x0001087965c0();
    if (lStack_80 != 0) {
      plVar1 = &lStack_80;
      FUN_108794924(plVar1);
      FUN_108794a20(param_1,plVar1);
      goto LAB_10878f6a4;
    }
  }
  else {
    func_0x0001087965c0();
  }
  *param_1 = 0;
  param_1[0x50] = 0;
LAB_10878f6a4:
  func_0x000107c298e0(auStack_78);
  return;
}



/* Entry: 10878f6d0; end: 10878f703;  */

long FUN_10878f6d0(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_108791988();
  }
  else {
    FUN_1087919c8();
  }
  return param_1;
}



/* Entry: 10878f704; end: 10878f773;  */

void FUN_10878f704(void)

{
  undefined8 extraout_x8;
  undefined1 auStack_48 [24];
  
  func_0x000108795fb0();
  func_0x000107c27994(auStack_48);
  FUN_1086abfd0(extraout_x8);
  func_0x000108796328();
  return;
}



/* Entry: 10878f774; end: 10878f7cb;  */

void FUN_10878f774(undefined8 param_1,long *param_2)

{
  int extraout_w10;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = *param_2;
  if (lStack_30 != 0) {
    lStack_28 = param_2[1];
    if (lStack_28 != 0) {
      do {
        func_0x000108796160();
      } while (extraout_w10 != 0);
    }
    FUN_108794a3c();
    func_0x000104be3970(&lStack_30);
  }
  return;
}



/* Entry: 10878f7cc; end: 10878f92f;  */

void FUN_10878f7cc(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long unaff_x20;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x0001087960cc();
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_FUN_110a6f328;
  uStack_68 = 0;
  uStack_50 = 0xb;
  func_0x000107c278b8(auStack_48,PTR_s_success_113268a18);
  FUN_108791610(&ppuStack_70,auStack_48,(&PTR_s_true_113268a60)[param_3 ^ 1]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  FUN_108791a34();
  FUN_108788618(&ppuStack_70);
  if (*(char *)(unaff_x20 + 0x440) == '\x01') {
    func_0x000107c278b8(auStack_88,&DAT_10f4ba77f);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_a0,unaff_x20 + 0x360);
    FUN_108791664();
    func_0x000108796170();
    func_0x000108796548();
    func_0x000107c278b8(&ppuStack_70,PTR_DAT_113268a28);
    FUN_108791610();
    func_0x000108796550();
  }
  return;
}



/* Entry: 10878f930; end: 10878f97b;  */

int FUN_10878f930(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_108790a38(param_1,*param_2);
  FUN_1087911d8(param_1,param_2,param_4);
  return (int)param_1 + (int)uVar1;
}



/* Entry: 10878f97c; end: 10878f99f;  */

void FUN_10878f97c(undefined8 param_1,int param_2,int param_3,long *param_4,undefined8 param_5)

{
  undefined4 uVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  if (param_2 != 0) {
    return;
  }
  if (param_3 == 0) {
    uVar1 = (undefined4)param_5;
    lStack_38 = *param_4;
    if (lStack_38 != 0) {
      lStack_30 = param_4[1];
      if (lStack_30 != 0) {
        do {
          func_0x000108796160();
          uVar1 = (undefined4)param_5;
        } while (extraout_w10_00 != 0);
      }
      lStack_28 = CONCAT44(lStack_28._4_4_,uVar1);
      FUN_108794b90();
      func_0x000104be3970(&lStack_38);
    }
    return;
  }
  lStack_30 = *param_4;
  if (lStack_30 != 0) {
    lStack_28 = param_4[1];
    if (lStack_28 != 0) {
      do {
        func_0x000108796160();
      } while (extraout_w10 != 0);
    }
    FUN_108794a3c();
    func_0x000104be3970(&lStack_30);
  }
  return;
}



/* Entry: 10878f9a0; end: 10878fa03;  */

undefined8 FUN_10878f9a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(auStack_38,PTR_DAT_113268a20);
  FUN_108791610(param_1,auStack_38,(&PTR_s_true_113268a60)[(uint)param_2 & 7]);
  func_0x000108796154();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  return param_2;
}



/* Entry: 10878fa04; end: 1087900b7;  */

void FUN_10878fa04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 **ppuVar11;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  ulong *unaff_x19;
  long *plVar12;
  undefined8 *puVar13;
  undefined1 auStack_958 [40];
  undefined1 auStack_930 [24];
  undefined1 auStack_918 [40];
  undefined1 auStack_8f0 [40];
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  long lStack_8b0;
  long lStack_8a8;
  undefined8 uStack_8a0;
  undefined8 *puStack_898;
  undefined8 *puStack_890;
  undefined1 auStack_7d0 [224];
  byte bStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  undefined1 uStack_458;
  undefined1 auStack_450 [432];
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  char cStack_10;
  undefined8 uStack_8;
  
  func_0x0001087967ac();
  func_0x00010879630c();
  func_0x000108796038();
  lStack_8b0 = 0;
  lStack_8a8 = 0;
  uStack_8a0 = 0;
  uStack_8c8 = 0;
  uStack_8c0 = 0;
  uStack_8b8 = 0;
  uStack_8 = extraout_x8;
  FUN_108862cf0(&puStack_2a0,**(undefined8 **)(param_1 + 0x10));
  func_0x000107c28998(&puStack_898,&puStack_2a0);
  func_0x000107c28948(&puStack_2a0);
  if ((bStack_6f0 & 1) == 0) {
LAB_10878fb38:
    bVar2 = false;
  }
  else {
    func_0x000107c278b8(&uStack_6e8,&DAT_10f4bdfd4);
    puVar6 = auStack_7d0;
    func_0x000107c278d0(puVar6,&uStack_6e8);
    func_0x0001087965fc();
    if ((int)puVar6 == 0) {
      func_0x0001087962cc();
      FUN_10886929c(&uStack_6e8);
      FUN_1086c2d80(&puStack_2a0,&uStack_6e8);
      FUN_1086d4da0(&uStack_6e8);
      if (cStack_10 == '\x01') {
        FUN_1086d5190(&uStack_6e8,&puStack_2a0);
        func_0x000107c28970(auStack_450,&puStack_898);
        func_0x0001087961fc();
      }
      else {
        uStack_6e8 = uStack_6e8 & 0xffffffffffffff00;
        uStack_458 = 0;
        func_0x000107c28a9c(auStack_450,&puStack_898);
        func_0x0001087961fc();
      }
      func_0x000108796474();
      FUN_1086cf6a4(&puStack_2a0);
      goto LAB_10878fb38;
    }
    uStack_6e8 = uStack_6e8 & 0xffffffffffffff00;
    uStack_458 = 0;
    func_0x000107c28970(auStack_450,&puStack_898);
    func_0x0001087961fc();
    func_0x000108796474();
    bVar2 = true;
  }
  func_0x000107c288dc(&puStack_898);
  lVar3 = lStack_8b0;
  if (bVar2) {
    lVar7 = *(long *)(unaff_x19[2] + 0x30);
    func_0x000107c287d8();
    lVar7 = lVar7 - *(long *)(lVar3 + 0x378);
    uVar5 = lVar7 == 5000;
    if (lVar7 < 0x1389) {
      (**(code **)(**(long **)(unaff_x19[2] + 0x90) + 0x18))();
      func_0x00010879677c();
      FUN_10878f7cc(&puStack_2a0,&uStack_6e8,1);
      func_0x0001087962ac();
      plVar12 = *(long **)(unaff_x19[2] + 0xa0);
      func_0x0001087965e0(auStack_8f0);
      func_0x000108796540(*(undefined8 *)(*plVar12 + 0x60));
      puVar6 = auStack_8f0;
    }
    else {
      FUN_1087900b8(unaff_x19[2] + 0x10,param_4,4);
      func_0x00010879677c();
      func_0x0001087962a0(&puStack_898);
      ppuVar11 = &puStack_898;
      func_0x000108796588(ppuVar11,7);
      FUN_108791a34(&puStack_2a0,ppuVar11);
      func_0x0001087965d8();
      func_0x0001087962ac();
      plVar12 = *(long **)(unaff_x19[2] + 0xa0);
      func_0x0001087965e0(auStack_918);
      func_0x000108796540(*(undefined8 *)(*plVar12 + 0x60));
      puVar6 = auStack_918;
    }
LAB_10878fe18:
    FUN_108788618(puVar6);
    FUN_108788618(&puStack_2a0);
LAB_10878fe24:
    func_0x000108791c84(&uStack_8c8);
    func_0x000108791d1c(&lStack_8b0);
    func_0x000108795f50(uStack_8);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uVar5 = lStack_8b0 == lStack_8a8;
    if ((bool)uVar5) {
      FUN_1087900b8(unaff_x19[2] + 0x10,param_4,7);
      func_0x00010879677c();
      func_0x0001087962a0(&puStack_898);
      ppuVar11 = &puStack_898;
      func_0x000108796588(ppuVar11,2);
      FUN_108791a34(&puStack_2a0,ppuVar11);
      func_0x0001087965d8();
      func_0x0001087962ac();
      plVar12 = *(long **)(unaff_x19[2] + 0xa0);
      func_0x0001087965e0(auStack_958);
      func_0x000108796540(*(undefined8 *)(*plVar12 + 0x60));
      puVar6 = auStack_958;
      goto LAB_10878fe18;
    }
    uStack_6e8 = *unaff_x19;
    uVar8 = unaff_x19[1];
    if (uVar8 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      uStack_6e0 = uVar8;
      if (uVar8 == 0) goto LAB_10878fe54;
      puStack_298 = (undefined8 *)0x1;
      puVar9 = (undefined8 *)0x498;
      __Znwm();
      plVar12 = puVar9 + 1;
      *plVar12 = 0;
      puVar9[2] = 0;
      puVar13 = puVar9 + 3;
      *puVar13 = &PTR_FUN_110a6fc40;
      *puVar9 = &PTR_FUN_110a6fbf0;
      uVar10 = *param_4;
      puVar9[5] = param_4[1];
      puVar9[4] = uVar10;
      puStack_290 = puVar9;
      if (param_4[1] != 0) {
        do {
          func_0x000108796160();
        } while (extraout_w10 != 0);
      }
      func_0x000107c27994(puVar9 + 6);
      FUN_108791b70(puVar9 + 9,lVar3);
      puVar9[0x91] = uStack_6e8;
      puVar9[0x92] = uStack_6e0;
      if (uStack_6e0 != 0) {
        do {
          func_0x000108796160();
        } while (extraout_w10_00 != 0);
      }
      puStack_290 = (undefined8 *)0x0;
      puStack_898 = puVar13;
      puStack_890 = puVar9;
      FUN_108794d40(&puStack_2a0);
      func_0x000107c298fc(&uStack_6e8);
      uVar5 = *(char *)(lStack_8b0 + 0x290) == '\x01';
      if ((bool)uVar5) {
        uVar10 = *(undefined8 *)(unaff_x19[2] + 0x60);
        FUN_108790114(uVar10,lStack_8b0 + 0x70);
        if ((int)uVar10 == 0) goto LAB_10878fd9c;
        uVar10 = *(undefined8 *)(unaff_x19[2] + 0x60);
        func_0x000107c27994(&uStack_6e8,lStack_8b0 + 0x70);
        func_0x00010868c9c4(auStack_930,&uStack_6e8,1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = *plVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puStack_2a0 = puVar13;
        puStack_298 = puVar9;
        func_0x000108790134(uVar10,auStack_930,&puStack_2a0,1);
        func_0x000104be3970(&puStack_2a0);
        func_0x000107c27a04(auStack_930);
        func_0x000107c27914(&uStack_6e8);
      }
      else {
LAB_10878fd9c:
        FUN_108791d40(puVar13,0);
      }
      FUN_1087901e4(&puStack_898);
      goto LAB_10878fe24;
    }
  }
  uStack_6e0 = 0;
LAB_10878fe54:
  func_0x00010527822c();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10878fe5c);
  (*pcVar4)();
}



/* Entry: 1087900b8; end: 108790113;  */

void FUN_1087900b8(undefined8 param_1,long *param_2,undefined4 param_3)

{
  int extraout_w10;
  long lStack_38;
  long lStack_30;
  undefined4 uStack_28;
  
  lStack_38 = *param_2;
  if (lStack_38 != 0) {
    lStack_30 = param_2[1];
    if (lStack_30 != 0) {
      do {
        func_0x000108796160();
      } while (extraout_w10 != 0);
    }
    uStack_28 = param_3;
    FUN_108794b90();
    func_0x000104be3970(&lStack_38);
  }
  return;
}


