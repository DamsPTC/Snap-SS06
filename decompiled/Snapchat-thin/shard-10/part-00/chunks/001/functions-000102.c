/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107493bdc; end: 107493c03;  */

long FUN_107493bdc(long param_1)

{
  FUN_107493c04(param_1 + 8);
  return param_1;
}



/* Entry: 107493c04; end: 107493c1b;  */

void FUN_107493c04(long param_1)

{
  FUN_1073be024();
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}



/* Entry: 107493c1c; end: 107493c23;  */

void FUN_107493c1c(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_640 [208];
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_510 [56];
  undefined1 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 auStack_4c8 [232];
  undefined8 uStack_3e0;
  undefined1 auStack_338 [104];
  undefined1 auStack_2d0 [200];
  undefined8 uStack_208;
  undefined8 auStack_1c8 [50];
  undefined8 uStack_38;
  
  func_0x000107494060(*param_1);
  uStack_38 = extraout_x8;
  FUN_107493b7c(auStack_1c8);
  func_0x00010749448c();
  func_0x0001074940e0();
  func_0x000107494368();
  puVar2 = auStack_1c8;
  func_0x0001073bc804();
  func_0x000107494034(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar3 = (long *)*puVar2;
  lVar5 = param_2;
  func_0x000107494060();
  uVar1 = ((*(byte *)(lVar5 + 0x10) ^ 0xff) & 6) == 0;
  uStack_208 = extraout_x8_00;
  if ((bool)uVar1) {
    func_0x0001077512dc(auStack_4c8);
    uStack_3e0 = *(undefined8 *)(*plVar3 + 8);
    auStack_510[0] = 0;
    uStack_4d8 = 0;
    uStack_4d0 = *(undefined8 *)(*plVar3 + 0x40);
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    FUN_1073df1c8(&uStack_570);
    FUN_1073df0ac(auStack_338,param_2,auStack_4c8,auStack_510,&uStack_570);
    func_0x00010726b164(&uStack_570);
    func_0x00010724b3d8(auStack_510);
    func_0x000107267da8(auStack_4c8);
    FUN_107493b7c(auStack_4c8,plVar3,auStack_338,auStack_338,auStack_338);
    FUN_107493bdc(auStack_640,auStack_4c8);
    func_0x0001074940e0();
    func_0x000107494368();
    func_0x0001073bc804(auStack_4c8);
    func_0x00010726b164(auStack_338);
  }
  else {
    FUN_107493dec(auStack_2d0,param_2);
    func_0x0001074940e0();
    func_0x000107494368();
  }
  func_0x000107494034(uStack_208);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = auStack_338;
  func_0x00010726b164();
  func_0x0001074941f4();
  FUN_1073dee98();
  *(undefined4 *)(puVar4 + 0xc0) = 1;
  return;
}



/* Entry: 107493c24; end: 107493c7f;  */

void FUN_107493c24(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_640 [208];
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_510 [56];
  undefined1 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 auStack_4c8 [232];
  undefined8 uStack_3e0;
  undefined1 auStack_338 [104];
  undefined1 auStack_2d0 [200];
  undefined8 uStack_208;
  undefined8 auStack_1c8 [50];
  undefined8 uStack_38;
  
  func_0x000107494060();
  uStack_38 = extraout_x8;
  FUN_107493b7c(auStack_1c8);
  func_0x00010749448c();
  func_0x0001074940e0();
  func_0x000107494368();
  puVar2 = auStack_1c8;
  func_0x0001073bc804();
  func_0x000107494034(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar3 = (long *)*puVar2;
  lVar5 = param_2;
  func_0x000107494060();
  uVar1 = ((*(byte *)(lVar5 + 0x10) ^ 0xff) & 6) == 0;
  uStack_208 = extraout_x8_00;
  if ((bool)uVar1) {
    func_0x0001077512dc(auStack_4c8);
    uStack_3e0 = *(undefined8 *)(*plVar3 + 8);
    auStack_510[0] = 0;
    uStack_4d8 = 0;
    uStack_4d0 = *(undefined8 *)(*plVar3 + 0x40);
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    FUN_1073df1c8(&uStack_570);
    FUN_1073df0ac(auStack_338,param_2,auStack_4c8,auStack_510,&uStack_570);
    func_0x00010726b164(&uStack_570);
    func_0x00010724b3d8(auStack_510);
    func_0x000107267da8(auStack_4c8);
    FUN_107493b7c(auStack_4c8,plVar3,auStack_338,auStack_338,auStack_338);
    FUN_107493bdc(auStack_640,auStack_4c8);
    func_0x0001074940e0();
    func_0x000107494368();
    func_0x0001073bc804(auStack_4c8);
    func_0x00010726b164(auStack_338);
  }
  else {
    FUN_107493dec(auStack_2d0,param_2);
    func_0x0001074940e0();
    func_0x000107494368();
  }
  func_0x000107494034(uStack_208);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = auStack_338;
  func_0x00010726b164();
  func_0x0001074941f4();
  FUN_1073dee98();
  *(undefined4 *)(puVar4 + 0xc0) = 1;
  return;
}



/* Entry: 107493c80; end: 107493c87;  */

void FUN_107493c80(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined1 auStack_470 [208];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 auStack_340 [56];
  undefined1 uStack_308;
  undefined8 uStack_300;
  undefined1 auStack_2f8 [232];
  undefined8 uStack_210;
  undefined1 auStack_168 [104];
  undefined1 auStack_100 [200];
  undefined8 uStack_38;
  
  plVar2 = (long *)*param_1;
  lVar4 = param_2;
  func_0x000107494060();
  uVar1 = ((*(byte *)(lVar4 + 0x10) ^ 0xff) & 6) == 0;
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    func_0x0001077512dc(auStack_2f8);
    uStack_210 = *(undefined8 *)(*plVar2 + 8);
    auStack_340[0] = 0;
    uStack_308 = 0;
    uStack_300 = *(undefined8 *)(*plVar2 + 0x40);
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    FUN_1073df1c8(&uStack_3a0);
    FUN_1073df0ac(auStack_168,param_2,auStack_2f8,auStack_340,&uStack_3a0);
    func_0x00010726b164(&uStack_3a0);
    func_0x00010724b3d8(auStack_340);
    func_0x000107267da8(auStack_2f8);
    FUN_107493b7c(auStack_2f8,plVar2,auStack_168,auStack_168,auStack_168);
    FUN_107493bdc(auStack_470,auStack_2f8);
    func_0x0001074940e0();
    func_0x000107494368();
    func_0x0001073bc804(auStack_2f8);
    func_0x00010726b164(auStack_168);
  }
  else {
    FUN_107493dec(auStack_100,param_2);
    func_0x0001074940e0();
    func_0x000107494368();
  }
  func_0x000107494034(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = auStack_168;
  func_0x00010726b164();
  func_0x0001074941f4();
  FUN_1073dee98();
  *(undefined4 *)(puVar3 + 0xc0) = 1;
  return;
}



/* Entry: 107493c88; end: 107493deb;  */

void FUN_107493c88(long *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined1 auStack_470 [208];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 auStack_340 [56];
  undefined1 uStack_308;
  undefined8 uStack_300;
  undefined1 auStack_2f8 [232];
  undefined8 uStack_210;
  undefined1 auStack_168 [104];
  undefined1 auStack_100 [200];
  undefined8 uStack_38;
  
  lVar3 = param_2;
  func_0x000107494060();
  uVar1 = ((*(byte *)(lVar3 + 0x10) ^ 0xff) & 6) == 0;
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    func_0x0001077512dc(auStack_2f8);
    uStack_210 = *(undefined8 *)(*param_1 + 8);
    auStack_340[0] = 0;
    uStack_308 = 0;
    uStack_300 = *(undefined8 *)(*param_1 + 0x40);
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    FUN_1073df1c8(&uStack_3a0);
    FUN_1073df0ac(auStack_168,param_2,auStack_2f8,auStack_340,&uStack_3a0);
    func_0x00010726b164(&uStack_3a0);
    func_0x00010724b3d8(auStack_340);
    func_0x000107267da8(auStack_2f8);
    FUN_107493b7c(auStack_2f8,param_1,auStack_168,auStack_168,auStack_168);
    FUN_107493bdc(auStack_470,auStack_2f8);
    func_0x0001074940e0();
    func_0x000107494368();
    func_0x0001073bc804(auStack_2f8);
    func_0x00010726b164(auStack_168);
  }
  else {
    FUN_107493dec(auStack_100,param_2);
    func_0x0001074940e0();
    func_0x000107494368();
  }
  func_0x000107494034(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = auStack_168;
  func_0x00010726b164();
  func_0x0001074941f4();
  FUN_1073dee98();
  *(undefined4 *)(puVar2 + 0xc0) = 1;
  return;
}



/* Entry: 107493dec; end: 107493e07;  */

void FUN_107493dec(long param_1)

{
  FUN_1073dee98();
  *(undefined4 *)(param_1 + 0xc0) = 1;
  return;
}



/* Entry: 107493e08; end: 107493eff;  */

undefined1 * FUN_107493e08(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined4 extraout_w8;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_358 [200];
  undefined1 auStack_290 [200];
  undefined1 auStack_1c8 [192];
  undefined1 auStack_108 [208];
  undefined8 uStack_38;
  
  func_0x000107494060();
  if (*(int *)(param_2 + 200) == 0 && *(int *)(param_3 + 200) == 0) {
    uStack_38 = extraout_x8;
    FUN_1073bdf70(auStack_290,param_2);
    FUN_1073bdf70(auStack_358,param_3);
    FUN_1073bdfe8(auStack_1c8,auStack_290);
    unaff_x20 = auStack_108;
    param_2 = auStack_1c8;
    FUN_107493bdc(auStack_108);
    func_0x0001074940e0();
    func_0x000107494368();
    func_0x0001073bc804(auStack_1c8);
    FUN_1073be050(auStack_358);
    param_1 = auStack_290;
    FUN_1073be050();
    func_0x000107494034(uStack_38);
    if ((bool)in_ZR) {
      return param_1;
    }
  }
  else {
    func_0x000107494034(extraout_x8);
    if ((bool)in_ZR) {
      puVar1 = unaff_x19 + 8;
      func_0x0001073e15fc(puVar1,param_2 + 8);
      *(undefined4 *)(puVar1 + 0xc0) = extraout_w8;
      FUN_1073dede8();
      return unaff_x19;
    }
  }
  ___stack_chk_fail();
  FUN_1073be050(auStack_358);
  puVar1 = auStack_290;
  FUN_1073be050();
  func_0x0001074941f4();
  func_0x000107494560();
  *puVar1 = *param_2;
  FUN_107433134(puVar1 + 8,param_2 + 8);
  FUN_1073f5d44(unaff_x20 + 0x50,param_1 + 0x50);
  FUN_1073dd9b0(unaff_x20 + 0x90,param_1 + 0x90);
  FUN_107433134(unaff_x20 + 200,param_1 + 200);
  FUN_1073df4d8(unaff_x20 + 0x118,param_1 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x1e0) = *(undefined8 *)(param_1 + 0x1e0);
  unaff_x20[0x1e8] = param_1[0x1e8];
  return unaff_x20;
}



/* Entry: 107493f00; end: 107493f67;  */

void FUN_107493f00(undefined1 *param_1,undefined1 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107494560();
  *param_1 = *param_2;
  FUN_107433134(param_1 + 8,param_2 + 8);
  FUN_1073f5d44(unaff_x20 + 0x50,unaff_x19 + 0x50);
  FUN_1073dd9b0(unaff_x20 + 0x90,unaff_x19 + 0x90);
  FUN_107433134(unaff_x20 + 200,unaff_x19 + 200);
  FUN_1073df4d8(unaff_x20 + 0x118,unaff_x19 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x1e0) = *(undefined8 *)(unaff_x19 + 0x1e0);
  *(undefined1 *)(unaff_x20 + 0x1e8) = *(undefined1 *)(unaff_x19 + 0x1e8);
  return;
}



/* Entry: 107493f68; end: 107493fd7;  */

void FUN_107493f68(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auStack_48 [40];
  
  if ((ulong)((long)(param_1[2] - *param_1) >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      FUN_107493578();
      func_0x000107494524();
      func_0x0001074941f4();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return;
      }
      return;
    }
    FUN_10749358c(auStack_48,param_2,(long)(param_1[1] - *param_1) >> 4);
    func_0x0001074946ac();
    func_0x000107494524();
  }
  return;
}



/* Entry: 107493fd8; end: 107493fef;  */

void FUN_107493fd8(long *param_1,long param_2)

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



/* Entry: 107493ff0; end: 107494033;  */

long * FUN_107493ff0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107443834(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 107494034; end: 107494757;  */

void FUN_107494034(void)

{
  return;
}



/* Entry: 107494758; end: 107494b03;  */

void FUN_107494758(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x19;
  ulong *unaff_x20;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107499af0();
  lVar4 = 0x48;
  __Znwm();
  lVar5 = lVar4;
  func_0x000107499cc4();
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  func_0x000107791b60(lVar5 + 0x18,&uStack_f0);
  FUN_1073e2454(&uStack_f0);
  uStack_f0 = 0;
  uStack_e8 = 0;
  FUN_1074981c4(&uStack_f0);
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_138 = lVar5 + 0x18;
  lStack_130 = lVar4;
  FUN_107499304(&uStack_f0);
  func_0x0001074e3a1c();
  FUN_1073ad37c(&lStack_138);
  FUN_1074981c4(&uStack_128);
  unaff_x19[0xd] = 0;
  unaff_x19[0xc] = 0;
  *unaff_x19 = &PTR_FUN_1109b4140;
  unaff_x19[0xf] = 0;
  unaff_x19[0xe] = 0;
  unaff_x19[0x11] = 0;
  unaff_x19[0x10] = 0;
  lVar5 = unaff_x19[3];
  uStack_58 = *(undefined8 *)(lVar5 + 0x448);
  uStack_60 = *(undefined8 *)(lVar5 + 0x440);
  if (*(long *)(lVar5 + 0x448) != 0) {
    plVar1 = (long *)(*(long *)(lVar5 + 0x448) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  auStack_80[0] = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x00010727d614(&uStack_128,lVar5 + 0x478);
  func_0x00010743b0a8(&uStack_f0,&uStack_128);
  func_0x00010749932c(unaff_x19 + 0x12,auStack_80,&uStack_f0);
  func_0x000107410c2c(&uStack_f0);
  func_0x000107266a30(&uStack_128);
  func_0x000107499abc();
  func_0x0001072c9b9c(&uStack_90);
  *(undefined1 *)(unaff_x19 + 0x23) = 0;
  *(undefined1 *)(unaff_x19 + 0x25) = 0;
  *(undefined1 *)(unaff_x19 + 0x26) = 0;
  *(undefined1 *)(unaff_x19 + 0x29) = 0;
  *(undefined1 *)(unaff_x19 + 0x2a) = 0;
  *(undefined1 *)(unaff_x19 + 0x2c) = 0;
  *(undefined1 *)(unaff_x19 + 0x2d) = 0;
  *(undefined1 *)(unaff_x19 + 0x30) = 0;
  func_0x00010724e0f8(unaff_x19 + 0x31,0x100000080);
  *(undefined1 *)(unaff_x19 + 0x34) = 0;
  *(undefined1 *)(unaff_x19 + 0x37) = 0;
  *(undefined1 *)(unaff_x19 + 0x38) = 0;
  *(undefined1 *)(unaff_x19 + 0x3b) = 0;
  *(undefined1 *)(unaff_x19 + 0x3c) = 0;
  *(undefined1 *)(unaff_x19 + 0x3e) = 0;
  *(undefined1 *)(unaff_x19 + 0x3f) = 0;
  *(undefined1 *)(unaff_x19 + 0x42) = 0;
  *(undefined1 *)(unaff_x19 + 0x43) = 0;
  *(undefined1 *)(unaff_x19 + 0x49) = 0;
  *(undefined1 *)(unaff_x19 + 0x4a) = 0;
  *(undefined1 *)(unaff_x19 + 0x4d) = 0;
  unaff_x19[0x4f] = 0;
  unaff_x19[0x4e] = 0;
  unaff_x19[0x51] = 3;
  unaff_x19[0x50] = 3;
  *(undefined4 *)(unaff_x19 + 0x52) = 0;
  *(undefined1 *)(unaff_x19 + 0x53) = 0;
  *(undefined1 *)(unaff_x19 + 0x54) = 0;
  *(undefined1 *)(unaff_x19 + 0x55) = 0;
  *(undefined1 *)(unaff_x19 + 0x56) = 0;
  *(undefined1 *)(unaff_x19 + 0x57) = 0;
  *(undefined1 *)(unaff_x19 + 0x58) = 0;
  *(undefined1 *)(unaff_x19 + 0x59) = 0;
  *(undefined1 *)(unaff_x19 + 0x5a) = 0;
  *(undefined1 *)(unaff_x19 + 0x5b) = 0;
  *(undefined1 *)(unaff_x19 + 0x5c) = 0;
  *(undefined1 *)(unaff_x19 + 0x5d) = 0;
  *(undefined1 *)(unaff_x19 + 0x5e) = 0;
  *(undefined1 *)(unaff_x19 + 0x5f) = 0;
  *(undefined1 *)(unaff_x19 + 0x60) = 0;
  *(undefined1 *)(unaff_x19 + 0x61) = 0;
  *(undefined1 *)(unaff_x19 + 0x62) = 0;
  *(undefined1 *)(unaff_x19 + 99) = 0;
  *(undefined1 *)(unaff_x19 + 100) = 0;
  *(undefined1 *)(unaff_x19 + 0x65) = 0;
  *(undefined1 *)(unaff_x19 + 0x66) = 0;
  unaff_x19[0x69] = 0;
  unaff_x19[0x68] = 0;
  unaff_x19[0x67] = 0;
  *(undefined1 *)(unaff_x19 + 0x6a) = *(undefined1 *)(*(long *)(param_3 + 0x48) + 0x28);
  *(undefined8 *)((long)unaff_x19 + 0x35c) = 0x3ca3d70a3f800000;
  *(undefined8 *)((long)unaff_x19 + 0x354) = 0x3f8000003f800000;
  *(undefined8 *)((long)unaff_x19 + 0x364) = 0x3f40000041b00000;
  *(undefined4 *)((long)unaff_x19 + 0x36c) = 0;
  unaff_x19[0x6e] = 0x3030000;
  *(undefined1 *)(unaff_x19 + 0x6f) = 0;
  *(undefined4 *)((long)unaff_x19 + 0x37c) = 0x3f800000;
  unaff_x19[0x70] = 0x41b000003eeb851f;
  unaff_x19[0x71] = 0;
  unaff_x19[0x72] = *(undefined8 *)(param_3 + 0x38);
  *(undefined4 *)(unaff_x19 + 0x73) = 2;
  lVar5 = *(long *)(param_3 + 0x40);
  unaff_x19[0x74] = lVar5;
  unaff_x19[0x75] = 0;
  unaff_x19[0x78] = 0;
  unaff_x19[0x77] = 0;
  unaff_x19[0x7a] = 0;
  unaff_x19[0x79] = 0;
  unaff_x19[0x7b] = 0;
  unaff_x19[0x7e] = 0;
  unaff_x19[0x7d] = 0;
  unaff_x19[0x80] = 0;
  unaff_x19[0x7f] = 0;
  unaff_x19[0x82] = 0;
  unaff_x19[0x81] = 0;
  unaff_x19[0x84] = 0;
  unaff_x19[0x83] = 0;
  unaff_x19[0x85] = 0;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  lVar5 = lVar5 + 0x660;
  func_0x00010724e2c8(lVar5,&uStack_f0);
  *(char *)((long)unaff_x19 + 0x377) = (char)lVar5;
  *(uint *)(unaff_x19 + 0x73) = *(byte *)(unaff_x19 + 0x6a) ^ 1;
  return;
}



/* Entry: 107494b04; end: 107494bc3;  */

undefined8 * FUN_107494b04(undefined8 *param_1)

{
  func_0x00010730b284(param_1 + 0x84);
  func_0x0001074981ec(param_1 + 0x7f);
  func_0x00010730b284(param_1 + 0x7d);
  func_0x00010730b284(param_1 + 0x77);
  func_0x00010749935c(param_1 + 0x71);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x67);
  func_0x00010730b10c(param_1 + 0x4a);
  func_0x00010730b13c(param_1 + 0x43);
  FUN_107440dd8(param_1 + 0x3f);
  func_0x000107498248(param_1 + 0x3c);
  FUN_107440dd8(param_1 + 0x38);
  FUN_107440dd8(param_1 + 0x34);
  func_0x00010724e5f4(param_1 + 0x31);
  FUN_107440dd8(param_1 + 0x2d);
  func_0x000107498248(param_1 + 0x2a);
  FUN_107440dd8(param_1 + 0x26);
  func_0x000107498248(param_1 + 0x23);
  func_0x000107498278(param_1 + 0x12);
  FUN_107498340(param_1 + 0xf);
  func_0x00010749839c(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 107494bc4; end: 107494bc7;  */

undefined8 * FUN_107494bc4(undefined8 *param_1)

{
  func_0x00010730b284(param_1 + 0x84);
  func_0x0001074981ec(param_1 + 0x7f);
  func_0x00010730b284(param_1 + 0x7d);
  func_0x00010730b284(param_1 + 0x77);
  func_0x00010749935c(param_1 + 0x71);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x67);
  func_0x00010730b10c(param_1 + 0x4a);
  func_0x00010730b13c(param_1 + 0x43);
  FUN_107440dd8(param_1 + 0x3f);
  func_0x000107498248(param_1 + 0x3c);
  FUN_107440dd8(param_1 + 0x38);
  FUN_107440dd8(param_1 + 0x34);
  func_0x00010724e5f4(param_1 + 0x31);
  FUN_107440dd8(param_1 + 0x2d);
  func_0x000107498248(param_1 + 0x2a);
  FUN_107440dd8(param_1 + 0x26);
  func_0x000107498248(param_1 + 0x23);
  func_0x000107498278(param_1 + 0x12);
  FUN_107498340(param_1 + 0xf);
  func_0x00010749839c(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 107494bc8; end: 107494bdb;  */

void FUN_107494bc8(void)

{
  FUN_107494b04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107494bdc; end: 107494dcf;  */

void FUN_107494bdc(undefined8 param_1,float param_2,float param_3,float param_4,long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long unaff_x19;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  long lStack_1e8;
  long lStack_1e0;
  undefined1 auStack_1b8 [88];
  undefined1 auStack_160 [88];
  undefined1 auStack_108 [88];
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [48];
  
  func_0x000107499af0();
  lVar6 = *(long *)(param_5 + 0x18);
  func_0x000107498500(auStack_b0,unaff_x19 + 0x90);
  FUN_1074993b4(auStack_80,lVar6 + 0x440);
  func_0x000107432f04(auStack_160,unaff_x19 + 0xc0);
  FUN_1074380d4(auStack_108,lVar6 + 0x478);
  func_0x00010749932c(&lStack_1e8,auStack_80,auStack_108);
  func_0x000107410c2c(auStack_108);
  func_0x000107410c2c(auStack_160);
  func_0x000107499abc();
  func_0x0001074982a0(auStack_b0);
  FUN_1074983d8(unaff_x19 + 0x90,&lStack_1e8);
  func_0x0001074334a8(unaff_x19 + 0xc0,auStack_1b8);
  func_0x000107498278(&lStack_1e8);
  lStack_1e8 = *(long *)(unaff_x19 + 0xb0);
  lStack_1e0 = *(long *)(unaff_x19 + 0xb8);
  if (lStack_1e0 != 0) {
    plVar1 = (long *)(lStack_1e0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lStack_1e8 == 0) {
    func_0x000107790694(auStack_108);
    FUN_1073235e8(&lStack_1e8,auStack_108);
    func_0x0001072c9b9c(auStack_108);
  }
  uVar4 = (ulong)*(uint *)(unaff_x19 + 0x188) * (ulong)*(uint *)(unaff_x19 + 0x18c) * 4;
  for (uVar5 = 3; uVar7 = (ulong)(uVar5 - 3), uVar7 <= uVar4 && uVar4 - uVar7 != 0;
      uVar5 = uVar5 + 4) {
    fVar8 = SUB84((double)uVar7 / (double)uVar4,0);
    FUN_1074978a0(&lStack_1e8);
    *(char *)(*(long *)(unaff_x19 + 400) + uVar7) = (char)(int)(fVar8 * 255.0);
    *(char *)(*(long *)(unaff_x19 + 400) + (ulong)(uVar5 - 2)) = (char)(int)(param_2 * 255.0);
    *(char *)(*(long *)(unaff_x19 + 400) + (ulong)(uVar5 - 1)) = (char)(int)(param_3 * 255.0);
    *(char *)(*(long *)(unaff_x19 + 400) + (ulong)uVar5) = (char)(int)(param_4 * 255.0);
  }
  if ((*(byte *)(unaff_x19 + 0x1b8) & 1) != 0) {
    FUN_107456c98(unaff_x19 + 0x1a0);
  }
  func_0x0001072c9b9c(&lStack_1e8);
  return;
}



/* Entry: 107494dd0; end: 107494f97;  */

void FUN_107494dd0(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 extraout_s1;
  undefined1 auVar7 [16];
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  float fStack_dc;
  undefined1 auStack_d8 [56];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000107499af0();
  FUN_1073e2404(&uStack_90,param_5 + 0x18);
  lVar4 = *unaff_x20;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_108 = lVar4;
  FUN_107499564(unaff_x19 + 0x90,&uStack_108,*(undefined8 *)(lVar4 + 0x10));
  uStack_100 = 0x3f800000;
  uVar5 = param_1;
  uStack_108 = lVar4;
  FUN_107483e10(unaff_x19 + 0xc0,&uStack_108,*(undefined8 *)(lVar4 + 0x10));
  lVar2 = 0x48;
  __Znwm();
  lVar4 = lVar2;
  func_0x000107499cc4();
  lVar4 = lVar4 + 0x18;
  uStack_78 = uStack_88;
  uStack_80 = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_108 = CONCAT44(extraout_s1,param_1);
  uStack_100 = param_3;
  uStack_fc = param_4;
  uStack_f8 = uVar5;
  func_0x000107791ba4(lVar4,&uStack_80,&uStack_108);
  FUN_1073e2454(&uStack_80);
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  lStack_a0 = lVar4;
  lStack_98 = lVar2;
  FUN_1074981c4(&uStack_108);
  FUN_1073e2454(&uStack_90);
  fVar6 = *(float *)(lVar2 + 0x44);
  *(float *)(unaff_x19 + 0x354) = fVar6;
  uVar3 = 0x15;
  if (fVar6 <= 0.0) {
    uVar3 = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x38) = uVar3;
  FUN_1073ea26c(&uStack_108,*(long *)(unaff_x19 + 0x18) + 0x168,*unaff_x20);
  uVar1 = NEON_rev64(CONCAT44(uStack_f8,uStack_fc),4);
  *(undefined8 *)(unaff_x19 + 0x37c) = uVar1;
  auVar7._8_8_ = uStack_e4;
  auVar7._0_8_ = uStack_ec;
  auVar7 = NEON_rev64(auVar7,4);
  *(undefined8 *)(unaff_x19 + 0x360) = uStack_e4;
  *(long *)(unaff_x19 + 0x358) = auVar7._0_8_;
  *(undefined4 *)(unaff_x19 + 900) = uStack_f4;
  *(undefined4 *)(unaff_x19 + 0x368) = uStack_f0;
  *(char *)(unaff_x19 + 0x36c) = (char)(int)fStack_dc;
  *(undefined1 *)(lVar2 + 0x30) = *(undefined1 *)(unaff_x19 + 0x38);
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = *(undefined8 *)(unaff_x19 + 0x10);
  uStack_80 = *(undefined8 *)(unaff_x19 + 8);
  *(long *)(unaff_x19 + 8) = lVar4;
  *(long *)(unaff_x19 + 0x10) = lVar2;
  FUN_1073ad37c(&uStack_80);
  FUN_107499304(&uStack_90);
  FUN_1073dd4c4(auStack_d8);
  FUN_1074981c4(&lStack_a0);
  return;
}



/* Entry: 107494f98; end: 107494fab;  */

byte FUN_107494f98(long param_1)

{
  return *(byte *)(param_1 + 200) | *(byte *)(param_1 + 0x98);
}



/* Entry: 107494fac; end: 10749529b;  */

void FUN_107494fac(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined2 uStack_42;
  
  func_0x000107499af0();
  if ((*(byte *)(param_1 + 0x1b8) & 1) == 0) {
    func_0x000107499b4c(&ppuStack_78);
    FUN_107440a90(unaff_x19 + 0x1a0,&ppuStack_78);
    lVar3 = lStack_68;
    lStack_68 = 0;
    if (lVar3 != 0) {
      func_0x00010749976c();
    }
  }
  if ((*(byte *)(unaff_x19 + 0x248) & 1) == 0) {
    plVar2 = unaff_x20;
    (**(code **)(*unaff_x20 + 0x20))();
    lStack_88 = 0;
    uStack_80 = 0;
    lStack_90 = 0;
    if ((int)plVar2 == 0) {
      FUN_107498570(&lStack_90,0xffffffff);
      FUN_107498570(&lStack_90,0x2ffff0003);
      FUN_107498570(&lStack_90,0x200000003ffff);
    }
    else {
      FUN_107498570(&lStack_90,0x1ffff);
      FUN_107498570(&lStack_90,0x200010003);
      FUN_107498570(&lStack_90,0x20000fffdffff);
    }
    lVar1 = lStack_88;
    lVar3 = lStack_90;
    FUN_1073da3e8();
    FUN_1073da3e8();
    (**(code **)(*unaff_x20 + 0x40))(&uStack_48);
    ppuStack_78 = (undefined **)(lVar1 - lVar3 >> 3);
    uStack_70 = CONCAT71(uStack_70._1_7_,1);
    lStack_68 = 8;
    uStack_60 = CONCAT71(uStack_60._1_7_,1);
    lStack_50 = CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT14(uStack_44,uStack_48)));
    func_0x000107309708(unaff_x19 + 0x218,&ppuStack_78);
    lVar3 = lStack_50;
    lStack_50 = 0;
    if (lVar3 != 0) {
      func_0x00010749976c();
    }
    FUN_10749865c(&lStack_90);
  }
  if ((*(byte *)(unaff_x19 + 0x268) & 1) == 0) {
    ppuStack_78 = &PTR_DAT_11099ed40;
    uStack_70 = 0;
    lStack_68 = 0;
    uStack_60 = 0;
    uStack_48 = 0x10000;
    uStack_44 = 2;
    uStack_43 = 0;
    func_0x000107309760(&ppuStack_78,&uStack_48,3);
    FUN_1073da574(&lStack_90);
    lVar3 = unaff_x19 + 0x250;
    func_0x000107309778(lVar3,&lStack_90);
    func_0x000107499cf0();
    if (lVar3 != 0) {
      func_0x00010749976c();
    }
    func_0x00010730b05c(&uStack_70);
  }
  if ((*(byte *)(unaff_x19 + 0x1d8) & 1) == 0) {
    uStack_94 = 0xff0000ff;
    FUN_10743a370(&ppuStack_78,0x100000001,&uStack_94,4);
    uStack_44 = 0;
    uStack_48 = 0;
    func_0x000107499b4c(&lStack_90);
    lVar3 = unaff_x19 + 0x1c0;
    FUN_107440a90(lVar3,&lStack_90);
    func_0x000107499cf0();
    if (lVar3 != 0) {
      func_0x00010749976c();
    }
    func_0x00010724e5f4(&ppuStack_78);
  }
  return;
}



/* Entry: 10749529c; end: 10749554f;  */

uint FUN_10749529c(long param_1)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  uint uVar3;
  undefined8 ****ppppuVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 ****ppppuVar9;
  undefined8 ***pppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  undefined8 ***pppuStack_68;
  undefined8 ***pppuStack_60;
  undefined8 ***pppuStack_58;
  
  lVar11 = param_1;
  FUN_1074e3ad0();
  uVar3 = (uint)lVar11;
  pppuStack_88 = (undefined8 ****)0x0;
  pppuStack_80 = (undefined8 ****)0x0;
  pppuStack_90 = (undefined8 ****)0x0;
  FUN_107498044(&pppuStack_90,(*(long **)(param_1 + 0x28))[1] - **(long **)(param_1 + 0x28) >> 3);
  puVar1 = (undefined8 *)(*(undefined8 **)(param_1 + 0x28))[1];
  for (puVar8 = (undefined8 *)**(undefined8 **)(param_1 + 0x28); puVar8 != puVar1;
      puVar8 = puVar8 + 1) {
    lVar11 = param_1;
    FUN_1074e3c98(param_1,*puVar8,*(undefined1 *)(param_1 + 0x38));
    if (lVar11 != 0) {
      if (pppuStack_88 < pppuStack_80) {
        *pppuStack_88 = (undefined8 ***)*puVar8;
        pppuStack_88 = pppuStack_88 + 1;
      }
      else {
        ppppuVar4 = &pppuStack_90;
        FUN_1074988ec(ppppuVar4,((long)pppuStack_88 - (long)pppuStack_90 >> 3) + 1);
        pppuVar2 = pppuStack_88;
        pppuVar10 = pppuStack_90;
        pppuStack_58 = &pppuStack_80;
        if (ppppuVar4 == (undefined8 ****)0x0) {
          ppppuVar9 = (undefined8 ****)0x0;
        }
        else {
          ppppuVar9 = &pppuStack_80;
          FUN_10749885c();
        }
        pppuStack_70 = (undefined8 ***)((long)ppppuVar9 + ((long)pppuVar2 - (long)pppuVar10));
        pppuStack_60 = ppppuVar9 + (long)ppppuVar4;
        ppppuVar4 = (undefined8 ****)(pppuStack_70 + 1);
        pppuStack_78 = ppppuVar9;
        *pppuStack_70 = (undefined8 **)*puVar8;
        ppppuVar9 = (undefined8 ****)
                    ((long)pppuStack_70 - ((long)pppuStack_88 - (long)pppuStack_90));
        pppuStack_68 = ppppuVar4;
        _memcpy(ppppuVar9);
        pppuVar2 = pppuStack_68;
        pppuVar10 = pppuStack_80;
        pppuStack_80 = pppuStack_60;
        pppuStack_88 = pppuStack_68;
        pppuStack_68 = pppuStack_90;
        pppuStack_60 = pppuVar10;
        pppuStack_78 = pppuStack_90;
        pppuStack_70 = pppuStack_90;
        pppuStack_90 = ppppuVar9;
        FUN_10749889c(&pppuStack_78);
        pppuStack_88 = pppuVar2;
      }
    }
  }
  if (*(char *)(param_1 + 0x36c) == '\0') {
    lVar11 = *(long *)(param_1 + 0x60);
    if (lVar11 != 0) {
      *(long *)(param_1 + 0x68) = lVar11;
      __ZdlPv();
      *(long *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    *(undefined8 ****)(param_1 + 0x68) = pppuStack_88;
    *(undefined8 ****)(param_1 + 0x60) = pppuStack_90;
    *(undefined8 ****)(param_1 + 0x70) = pppuStack_80;
    pppuStack_88 = (undefined8 ****)0x0;
    pppuStack_80 = (undefined8 ****)0x0;
    pppuStack_90 = (undefined8 ****)0x0;
  }
  else {
    ppppuVar4 = (undefined8 ****)pppuStack_90;
    if (pppuStack_90 != pppuStack_88) {
      FUN_10749892c(pppuStack_90,pppuStack_88,
                    LZCOUNT((long)pppuStack_88 - (long)pppuStack_90 >> 3) << 1 ^ 0x7e,1);
      ppppuVar4 = (undefined8 ****)pppuStack_88;
    }
    puVar8 = (undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = *puVar8;
    FUN_107498044(puVar8,(long)ppppuVar4 - (long)pppuStack_90 >> 3);
    lVar11 = 0;
    lVar12 = (long)pppuStack_88 - (long)pppuStack_90 >> 3;
LAB_1074954d0:
    if (lVar11 != lVar12) {
      pppuVar10 = (undefined8 ***)pppuStack_90[lVar11];
      lVar11 = lVar11 + 1;
      for (lVar13 = lVar11; lVar12 != lVar13; lVar13 = lVar13 + 1) {
        if (((uint)*(byte *)((long)pppuStack_90[lVar13] + 4) < (uint)*(byte *)((long)pppuVar10 + 4))
           && ((uint)*(byte *)((long)pppuVar10 + 4) -
               (uint)*(byte *)((long)pppuStack_90[lVar13] + 4) <= (uint)*(byte *)(param_1 + 0x36c)))
        {
          uVar5 = (long)pppuVar10 + 4;
          FUN_1074980c0();
          if ((uVar5 & 1) != 0) goto LAB_1074954d0;
        }
      }
      FUN_107498108(puVar8,pppuVar10);
      goto LAB_1074954d0;
    }
  }
  func_0x00010749839c(&pppuStack_90);
  if (*(int *)(param_1 + 0x398) == 1) {
    uVar6 = uVar3 >> 8 & 1;
    uVar7 = (*(byte *)(param_1 + 0x378) ^ 0xffffffff) & 1;
    uVar3 = uVar3 & 1;
  }
  else {
    uVar6 = uVar3 >> 8 & 0xffff;
    uVar7 = uVar3 >> 0x10 & 0xff;
  }
  return (uVar6 & 0xff) << 8 | uVar7 << 0x10 | uVar3 & 0xff;
}



/* Entry: 107495550; end: 107497877;  */

void FUN_107495550(undefined8 *param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  undefined8 param_5,long **param_6,long *param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  code *pcVar14;
  bool bVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  long **pplVar19;
  undefined1 *puVar20;
  double *pdVar21;
  double *pdVar22;
  undefined8 uVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  ulong *puVar27;
  undefined1 *puVar28;
  long **pplVar29;
  undefined8 *puVar30;
  long **pplVar31;
  undefined2 extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  uint uVar32;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  undefined8 *puVar33;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  undefined8 extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  code *extraout_x8_17;
  long *plVar34;
  code *extraout_x8_18;
  code *extraout_x8_19;
  code *extraout_x8_20;
  code *extraout_x8_21;
  code *extraout_x8_22;
  code *extraout_x8_23;
  code *extraout_x8_24;
  code *extraout_x8_25;
  code *extraout_x8_26;
  code *extraout_x8_27;
  code *extraout_x8_28;
  uint uVar35;
  code *extraout_x9;
  long *plVar36;
  ulong uVar37;
  code *extraout_x9_00;
  uint uVar38;
  ulong uVar39;
  long *plVar40;
  ulong uVar41;
  ulong *puVar42;
  long *plVar43;
  undefined4 *puVar44;
  ulong uVar45;
  long lVar46;
  long *plVar47;
  long *plVar48;
  ulong uVar49;
  long lVar50;
  long lVar51;
  float fVar52;
  undefined4 uVar53;
  double dVar54;
  double dVar55;
  float fVar56;
  undefined8 uStack_398;
  long lStack_390;
  char cStack_381;
  long *plStack_380;
  undefined1 uStack_378;
  undefined4 uStack_377;
  undefined3 uStack_373;
  undefined5 uStack_370;
  undefined3 uStack_36b;
  long *plStack_368;
  undefined1 uStack_360;
  undefined1 uStack_35f;
  undefined1 uStack_35e;
  undefined1 uStack_35d;
  float fStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  long *plStack_350;
  undefined8 uStack_348;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  uint uStack_318;
  undefined4 uStack_314;
  long *plStack_2d8;
  long lStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  undefined2 uStack_2b8;
  undefined1 uStack_2b6;
  undefined5 uStack_2b5;
  undefined1 uStack_2b0;
  undefined1 uStack_2af;
  undefined1 uStack_2ae;
  undefined1 uStack_2ad;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined2 uStack_278;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined1 uStack_19e;
  undefined1 uStack_19d;
  float fStack_19c;
  float fStack_198;
  undefined4 uStack_194;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined2 uStack_168;
  undefined8 uStack_98;
  
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar16 = *(int *)(param_6 + 0x73) == 1;
  pplVar19 = param_6;
  if ((bool)uVar16) {
LAB_1074955bc:
    cVar3 = (char)param_7[0xc];
    uVar16 = cVar3 == '\x02';
    if (!(bool)uVar16) {
      plVar24 = param_6[0xc];
      plVar40 = param_6[0xd];
      uVar16 = plVar24 == plVar40;
      if (!(bool)uVar16) {
        uVar35 = (uint)*(float *)(param_7[7] + 8);
        if (uVar35 != 0) {
          fVar52 = *(float *)(param_7[7] + 0xc);
          dVar55 = (double)(ulong)(uint)fVar52;
          uVar38 = (uint)fVar52;
          if (uVar38 != 0) {
            if (cVar3 == '\x10') {
              func_0x000107499ae4();
              uVar41 = (ulong)*(byte *)(param_7[5] + 0xa94);
              uVar53 = 3;
              if (*(byte *)(param_7[5] + 0xa94) == 0) {
                uVar53 = 1;
              }
              iVar18 = extraout_w8_00 + 1;
              for (; uVar16 = plVar24 == plVar40, !(bool)uVar16; plVar24 = plVar24 + 1) {
                func_0x000107499b44();
                plVar26 = *pplVar19;
                lVar51 = *plVar24;
                uStack_1a0 = *(undefined1 *)(lVar51 + 4);
                uStack_190 = (ulong)*(uint *)(lVar51 + 8);
                uStack_180 = *(undefined4 *)(lVar51 + 0xc);
                plVar25 = (long *)param_7[3];
                fStack_198 = 0.0;
                uStack_194 = 0;
                uStack_19f = 0;
                uStack_19e = 0;
                uStack_19d = 0;
                fStack_19c = 0.0;
                uStack_188 = 0;
                uStack_178 = 0;
                uStack_174 = 0;
                uStack_17c = 0;
                func_0x0001003a91d4(&UNK_10f409262);
                func_0x0001003a9204(&uStack_2b0);
                puVar28 = (undefined1 *)
                          CONCAT44(fStack_2ac,
                                   CONCAT13(uStack_2ad,
                                            CONCAT12(uStack_2ae,CONCAT11(uStack_2af,uStack_2b0))));
                if (-1 < (long)uStack_2a0) {
                  puVar28 = &uStack_2b0;
                }
                puVar20 = puVar28;
                _strlen(puVar28);
                plStack_2d8 = plVar25;
                (**(code **)(*plVar25 + 0x10))(plVar25,puVar28,puVar20);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2b0);
                func_0x000107499bf8();
                fVar52 = (float)dVar55;
                func_0x0001074999f0(*plVar24);
                dVar54 = dVar55;
                if (((char)plVar26[0x32] == '\x01') && ((*(byte *)(plVar26 + 0x23) & 1) != 0)) {
                  if (*(char *)((long)param_7 + 0xad) == '\x01') {
                    uVar38 = *(uint *)(param_7 + 0x16) & 0x100;
                    uVar35 = uVar38 >> 8;
                    lVar51 = 0x2a0;
                    if (uVar38 == 0) {
                      lVar51 = 0x260;
                    }
                    uStack_1a0 = 9;
                    if (uVar38 == 0) {
                      uStack_1a0 = 5;
                    }
                  }
                  else {
                    uVar35 = 0;
                    uStack_1a0 = 5;
                    lVar51 = 0x260;
                  }
                  lVar46 = param_7[0x12];
                  uStack_19f = 0;
                  uStack_19e = 0;
                  uStack_19d = 0;
                  fStack_198 = 0.0;
                  uStack_194 = 0;
                  dVar54 = (double)(ulong)*(uint *)(param_7 + 0xf);
                  uStack_190 = CONCAT44(*(uint *)(param_7 + 0xf),uVar53);
                  uVar45 = (ulong)uStack_188 >> 0x30;
                  uVar38 = (uint)uStack_188;
                  uStack_188._0_6_ = CONCAT24(0x101,uVar38 & 0xff000000);
                  uStack_188 = CONCAT26((short)uVar45,(undefined6)uStack_188);
                  uStack_174 = 0;
                  uStack_170 = 0;
                  uStack_17c = 0;
                  uStack_178 = 0;
                  uStack_180 = 1;
                  uStack_16c = 0x1010101;
                  uStack_168 = 0xf01;
                  FUN_1073ca29c(&uStack_2b0,lVar46,(long)plVar26 + uVar41 * 0x10 + lVar51,
                                &uStack_1a0);
                  iVar17 = (int)lVar46;
                  if (CONCAT44(fStack_2ac,
                               CONCAT13(uStack_2ad,
                                        CONCAT12(uStack_2ae,CONCAT11(uStack_2af,uStack_2b0)))) != 0)
                  {
                    func_0x000107499890();
                    (*extraout_x8)();
                    uVar16 = iVar17 == 2;
                    if ((bool)uVar16) {
                      (**(code **)(*(long *)param_7[3] + 0x40))
                                ((long *)param_7[3],
                                 CONCAT44(fStack_2ac,
                                          CONCAT13(uStack_2ad,
                                                   CONCAT12(uStack_2ae,
                                                            CONCAT11(uStack_2af,uStack_2b0)))));
                      uStack_360 = 7;
                      uStack_35f = 0;
                      uStack_35e = 0;
                      uStack_35d = 0;
                      fStack_35c = 0.0;
                      uStack_358 = 0x3f800000;
                      fStack_19c = 9.80909e-45;
                      fStack_198 = 0.0;
                      uStack_194 = 0;
                      uStack_190 = CONCAT53(uStack_190._3_5_,0x10101);
                      (**(code **)(*(long *)param_7[3] + 0x80))
                                ((long *)param_7[3],&uStack_360,&uStack_1a0);
                      uStack_19e = (undefined1)((uint)iVar18 >> 0x10);
                      uStack_1a0 = (undefined1)iVar18;
                      uStack_19f = (undefined1)((uint)iVar18 >> 8);
                      func_0x000107499a90(param_7[3]);
                      (*extraout_x8_00)();
                      (**(code **)(*(long *)param_7[3] + 0x58))((long *)param_7[3],plVar26 + 0x2f);
                      func_0x0001074997fc(*(undefined8 *)(*(long *)param_7[3] + 0x60));
                      func_0x000107499a0c();
                      if (uVar35 == 0) {
                        plVar25 = (long *)param_7[3];
                        func_0x000107482794(&uStack_1a0,*plVar24 + 0x10);
                        func_0x0001074997fc(*(undefined8 *)(*plVar25 + 0xd0),plVar25);
                        func_0x0001074998a0(param_7[3]);
                        func_0x000107499bbc();
                        func_0x0001074998a0(param_7[3]);
                        func_0x000107499bb0();
                        dVar54 = (double)(ulong)*(uint *)((long)param_6 + 0x364);
                        func_0x0001074998a0(param_7[3]);
                        (*extraout_x8_01)();
                        func_0x0001074998a0(param_7[3]);
                        func_0x000107499b80();
                        if (uVar41 != 0) {
                          plVar25 = (long *)param_7[3];
                          func_0x000107415f50(param_7[5],*plVar24,0x2000);
                          uStack_1a0 = SUB81(dVar54,0);
                          uStack_19f = (undefined1)((ulong)dVar54 >> 8);
                          uStack_19e = (undefined1)((ulong)dVar54 >> 0x10);
                          uStack_19d = (undefined1)((ulong)dVar54 >> 0x18);
                          fStack_19c = (float)param_3;
                          uStack_194 = (undefined4)param_5;
                          fStack_198 = param_4;
                          (**(code **)(*plVar25 + 0xb8))(plVar25,5,&uStack_1a0);
                          plVar25 = (long *)param_7[3];
                          lVar51 = param_7[5];
                          FUN_107416bf8(lVar51);
                          func_0x000107482794(&uStack_1a0,lVar51 + 0xaa0);
                          (**(code **)(*plVar25 + 0xd0))(plVar25,6,&uStack_1a0);
                          func_0x000107499ca4();
                          if ((bool)uVar16) {
                            dVar54 = (double)(ulong)*(uint *)(extraout_x8_02 + 0xa90);
                          }
                          func_0x0001074998a0(param_7[3]);
                          (*extraout_x8_03)();
                        }
                      }
                      else {
                        uStack_1a0 = SUB81(dVar55,0);
                        uStack_19f = (undefined1)((ulong)dVar55 >> 8);
                        uStack_19e = (undefined1)((ulong)dVar55 >> 0x10);
                        uStack_19d = (undefined1)((ulong)dVar55 >> 0x18);
                        fStack_198 = *(float *)((long)param_6 + 0x364);
                        dVar54 = (double)CONCAT44(0x41000000,fStack_198);
                        uStack_194 = 0x41000000;
                        pdVar21 = (double *)(plVar26 + 0x5d);
                        fStack_19c = fVar52;
                        FUN_107497c00(pdVar21,param_6[3] + 1);
                        pdVar22 = pdVar21 + 2;
                        dVar55 = *pdVar22;
                        if (dVar55 == 0.0) {
                          func_0x0001074997ec();
                          (*extraout_x9)(&uStack_398);
                          uStack_378 = 0x10;
                          uStack_377 = 0;
                          uStack_373 = 0;
                          uStack_370 = SUB85(uStack_398,0);
                          uStack_36b = (undefined3)((ulong)uStack_398 >> 0x28);
                          func_0x000107308d88(&uStack_360,&uStack_378);
                          func_0x000107308dac(pdVar22,&uStack_360);
                          func_0x00010730b284(&uStack_360);
                          lVar51 = CONCAT35(uStack_36b,uStack_370);
                          uStack_370 = 0;
                          uStack_36b = 0;
                          if (lVar51 != 0) {
                            func_0x00010749976c();
                          }
                          dVar55 = *pdVar22;
LAB_107495b74:
                          func_0x000107499a9c(*(undefined8 *)((long)dVar55 + 8));
                          (*extraout_x8_04)();
                          dVar54 = (double)CONCAT44(fStack_19c,
                                                    CONCAT13(uStack_19d,
                                                             CONCAT12(uStack_19e,
                                                                      CONCAT11(uStack_19f,uStack_1a0
                                                                              ))));
                          pdVar21[1] = (double)CONCAT44(uStack_194,fStack_198);
                          *pdVar21 = dVar54;
                        }
                        else {
                          pdVar22 = pdVar21;
                          FUN_107497fb0(pdVar21,&uStack_1a0);
                          if ((int)pdVar22 != 0) goto LAB_107495b74;
                        }
                        func_0x00010749993c(param_7[3]);
                        func_0x000107499c38();
                        plVar25 = (long *)param_7[3];
                        func_0x000107499b38();
                        func_0x0001074999d4(*(undefined8 *)(*plVar25 + 0x90),plVar25);
                        if (uVar41 != 0) {
                          func_0x00010749993c(param_7[3]);
                          func_0x0001074999cc();
                        }
                      }
                      puVar2 = (undefined4 *)plVar26[0x2d];
                      for (puVar44 = (undefined4 *)plVar26[0x2c]; puVar44 != puVar2;
                          puVar44 = puVar44 + 10) {
                        (**(code **)(*(long *)param_7[3] + 0x68))((long *)param_7[3],*puVar44);
                        uStack_1a0 = 1;
                        fStack_19c = 1.0;
                        func_0x0001074998c4(*(undefined8 *)(*(long *)param_7[3] + 0x138),
                                            (long *)param_7[3],&uStack_1a0,puVar44[6]);
                      }
                    }
                  }
                  func_0x00010730b734(&uStack_2b0);
                }
                pplVar19 = &plStack_2d8;
                FUN_10748eeb8();
                dVar55 = dVar54;
              }
            }
            else {
              plVar40 = (long *)&UNK_110996710;
              uVar16 = cVar3 == '\x04';
              if ((bool)uVar16) {
                FUN_1073c89ec();
                uStack_378 = (undefined1)param_7[5];
                FUN_1074178c4();
                uStack_360 = 0xf5;
                uStack_35f = 0;
                uStack_35e = 0;
                uStack_35d = 0;
                uStack_348 = (long *)((ulong)uStack_348._4_4_ << 0x20);
                uStack_330 = 0;
                uStack_328 = 0;
                func_0x000107499788();
                func_0x00010729d56c(&uStack_360,"api",pplVar19);
                func_0x00010749964c(&uStack_360,&PTR_DAT_1109b4248,&uStack_378);
                func_0x00010749982c();
                func_0x0001074998b8();
                func_0x000107499b58();
                func_0x000107499ab4();
                FUN_107497a74(param_6[0x72],0xf8);
                if (((ulong)param_6[0x30] & 1) != 0) {
                  iVar18 = *(int *)(param_6 + 0x73);
                  fVar52 = 1.0;
                  if (iVar18 != 1) {
                    fVar52 = 0.0;
                  }
                  if (*(char *)((long)param_6 + 0x377) == '\x01') {
                    uVar53 = 0;
                    plVar24 = param_7;
                    FUN_1074d5bec(param_7,0,0);
                  }
                  else {
                    uVar53 = 0x3f800000;
                    plVar24 = (long *)0x7;
                  }
                  lStack_2d0 = CONCAT44(lStack_2d0._4_4_,uVar53);
                  uVar16 = ((uint)*(byte *)((long)param_7 + 0xad) &
                           (*(uint *)(param_7 + 0x16) & 0x100) >> 8) == 0;
                  uStack_2b0 = 10;
                  if ((bool)uVar16) {
                    uStack_2b0 = 6;
                  }
                  lVar46 = param_7[0x12];
                  uStack_2af = 0;
                  uStack_2ae = 0;
                  uStack_2ad = 0;
                  fStack_2a8 = 0.0;
                  fStack_2a4 = 0.0;
                  uVar35 = (uint)(iVar18 == 1);
                  uStack_2a0 = (long *)CONCAT44((int)param_7[0xf],uVar35);
                  uStack_298 = (long *)((ulong)uStack_298 & 0xffffffffff000000);
                  lVar51 = (ulong)uVar35 * 2 + 0x5f;
                  if ((bool)uVar16) {
                    lVar51 = (ulong)uVar35 * 2 + 0x55;
                  }
                  plStack_2d8 = plVar24;
                  FUN_1074d6810((long)&uStack_298 + 4,param_7);
                  uStack_278 = 0xf01;
                  FUN_1073ca29c(&uStack_360,lVar46,param_6 + lVar51,&uStack_2b0);
                  iVar17 = (int)lVar46;
                  if (CONCAT44(fStack_35c,
                               CONCAT13(uStack_35d,
                                        CONCAT12(uStack_35e,CONCAT11(uStack_35f,uStack_360)))) != 0)
                  {
                    func_0x000107499890();
                    (*extraout_x8_12)();
                    uVar16 = 0;
                    if (iVar17 == 2) {
                      (**(code **)(*(long *)param_7[3] + 0x40))
                                ((long *)param_7[3],
                                 CONCAT44(fStack_35c,
                                          CONCAT13(uStack_35d,
                                                   CONCAT12(uStack_35e,
                                                            CONCAT11(uStack_35f,uStack_360)))));
                      fStack_2ac = 9.80909e-45;
                      fStack_2a8 = 0.0;
                      func_0x0001074997a8(param_7[3]);
                      (*extraout_x8_13)();
                      lVar51 = param_7[3];
                      func_0x000107499ae4(lVar51);
                      uStack_2ae = (undefined1)((ulong)extraout_x8_14 >> 0x10);
                      uStack_2b0 = (undefined1)extraout_x8_14;
                      uStack_2af = (undefined1)((ulong)extraout_x8_14 >> 8);
                      func_0x000107499a90();
                      func_0x000107499b60();
                      plVar24 = (long *)param_7[3];
                      func_0x000107499adc();
                      (**(code **)(*plVar24 + 0x58))(plVar24,lVar51);
                      plVar24 = (long *)param_7[3];
                      func_0x000107499ad4();
                      func_0x0001074997c8(*(undefined8 *)(*plVar24 + 0x60));
                      func_0x000107499914(param_7[3]);
                      (*extraout_x8_15)();
                      uVar16 = *(char *)((long)param_7 + 0xad) == '\x01';
                      if (((bool)uVar16) && ((*(byte *)((long)param_7 + 0xb1) & 1) != 0)) {
                        fVar56 = *(float *)(param_6 + 0x6c);
                        uStack_2b0 = SUB41(fVar56,0);
                        uStack_2af = (undefined1)((uint)fVar56 >> 8);
                        uStack_2ae = (undefined1)((uint)fVar56 >> 0x10);
                        uStack_2ad = (undefined1)((uint)fVar56 >> 0x18);
                        fStack_2ac = 0.0;
                        fStack_2a8 = *(float *)(param_6 + 0x6b);
                        fStack_2a4 = *(float *)((long)param_6 + 0x35c);
                        uStack_2a0 = (long *)CONCAT44(fVar52,fVar52);
                        uStack_298 = (long *)(ulong)(uint)*(float *)((long)param_6 + 0x354);
                        plVar24 = param_6[0x7d];
                        if (plVar24 == (long *)0x0) {
                          func_0x0001074997ec();
                          (*extraout_x9_00)(&uStack_2b8);
                          lStack_390 = CONCAT53(uStack_2b5,CONCAT12(uStack_2b6,uStack_2b8));
                          uStack_398 = (undefined8 *)0x20;
                          func_0x000107308d88(&uStack_378,&uStack_398);
                          func_0x000107308dac(param_6 + 0x7d,&uStack_378);
                          func_0x00010730b284(&uStack_378);
                          lVar51 = lStack_390;
                          lStack_390 = 0;
                          if (lVar51 != 0) {
                            func_0x00010749976c();
                          }
                          plVar24 = param_6[0x7d];
LAB_107497304:
                          func_0x000107499a9c(plVar24[1]);
                          func_0x000107499b68();
                          param_6[0x7a] = (long *)CONCAT44(fStack_2a4,fStack_2a8);
                          param_6[0x79] =
                               (long *)CONCAT44(fStack_2ac,
                                                CONCAT13(uStack_2ad,
                                                         CONCAT12(uStack_2ae,
                                                                  CONCAT11(uStack_2af,uStack_2b0))))
                          ;
                          param_6[0x7c] = uStack_298;
                          param_6[0x7b] = uStack_2a0;
                        }
                        else {
                          if ((*(float *)(param_6 + 0x79) != fVar56) ||
                             (*(float *)((long)param_6 + 0x3cc) != 0.0)) goto LAB_107497304;
                          bVar15 = false;
                          if ((*(float *)(param_6 + 0x7a) == fStack_2a8) &&
                             (bVar15 = false,
                             !NAN(*(float *)((long)param_6 + 0x3d4)) && !NAN(fStack_2a4))) {
                            bVar15 = *(float *)((long)param_6 + 0x3d4) == fStack_2a4;
                          }
                          if (!bVar15) goto LAB_107497304;
                          bVar15 = false;
                          if ((*(float *)(param_6 + 0x7b) == fVar52) &&
                             (bVar15 = false,
                             !NAN(*(float *)((long)param_6 + 0x3dc)) && !NAN(fVar52))) {
                            bVar15 = *(float *)((long)param_6 + 0x3dc) == fVar52;
                          }
                          if (((!bVar15) ||
                              (*(float *)(param_6 + 0x7c) != *(float *)((long)param_6 + 0x354))) ||
                             (*(float *)((long)param_6 + 0x3e4) != 0.0)) goto LAB_107497304;
                        }
                        func_0x00010749993c(param_7[3]);
                        func_0x0001074997fc();
                        func_0x000107499a04();
                        func_0x000107499778();
                        func_0x0001074997c8();
                        uVar16 = iVar18 == 1;
                        if (!(bool)uVar16) {
                          lVar51 = param_7[3];
                          func_0x000107499c0c();
                          func_0x000107499778();
                          func_0x0001074999d4(lVar51);
                        }
                        lVar51 = param_7[3];
                        FUN_1073b9c0c(param_6 + 0x34);
                        func_0x000107499778();
                        func_0x0001074999cc(lVar51);
                      }
                      else {
                        func_0x0001074998a0(*(undefined4 *)((long)param_6 + 0x354),param_7[3]);
                        (*extraout_x8_16)();
                        uStack_2b0 = 0;
                        uStack_2af = 0;
                        uStack_2ae = (undefined1)((uint)fVar52 >> 0x10);
                        uStack_2ad = (undefined1)((uint)fVar52 >> 0x18);
                        fStack_2ac = fVar52;
                        func_0x000107499aa8(param_7[3]);
                        (*extraout_x8_17)();
                        plVar24 = param_6[0x6b];
                        uStack_2b0 = SUB81(plVar24,0);
                        uStack_2af = (undefined1)((ulong)plVar24 >> 8);
                        uStack_2ae = (undefined1)((ulong)plVar24 >> 0x10);
                        uStack_2ad = (undefined1)((ulong)plVar24 >> 0x18);
                        fStack_2ac = (float)((ulong)plVar24 >> 0x20);
                        func_0x000107499aa8(param_7[3]);
                        func_0x0001074999cc();
                        uVar53 = *(undefined4 *)(param_6 + 0x6c);
                        uStack_2b0 = (undefined1)uVar53;
                        uStack_2af = (undefined1)((uint)uVar53 >> 8);
                        uStack_2ae = (undefined1)((uint)uVar53 >> 0x10);
                        uStack_2ad = (undefined1)((uint)uVar53 >> 0x18);
                        fStack_2ac = 0.0;
                        func_0x000107499aa8(param_7[3]);
                        func_0x0001074999d4();
                        func_0x000107499a04();
                        func_0x000107499778();
                        func_0x0001074997c8();
                        lVar51 = param_7[3];
                        func_0x000107499c0c();
                        func_0x000107499778();
                        func_0x0001074999d4(lVar51);
                        lVar51 = param_7[3];
                        FUN_1073b9c0c(param_6 + 0x34);
                        func_0x000107499778();
                        func_0x0001074999cc(lVar51);
                      }
                      uStack_2b0 = 4;
                      fStack_2ac = 0.0;
                      func_0x000107499818(param_7[3]);
                      func_0x0001074998ac();
                    }
                  }
                  func_0x00010730b734(&uStack_360);
                }
              }
              else {
                uVar16 = cVar3 == '\x01';
                if (!(bool)uVar16) goto LAB_107497460;
                uVar35 = uVar35 >> 2;
                plVar43 = (long *)(ulong)(uVar38 >> 2);
                FUN_107497878();
                plVar26 = plVar43;
                FUN_107497878();
                uVar53 = SUB84(plVar26,0);
                plVar25 = plVar26;
                FUN_1073c89ec();
                uStack_378 = SUB81(plVar25,0);
                uStack_377 = (undefined4)((ulong)plVar25 >> 8);
                uStack_373 = (undefined3)((ulong)plVar25 >> 0x28);
                uStack_360 = 0xf2;
                uStack_35f = 0;
                uStack_35e = 0;
                uStack_35d = 0;
                uStack_348 = (long *)((ulong)uStack_348._4_4_ << 0x20);
                uStack_330 = 0;
                uStack_328 = 0;
                func_0x000107499788();
                FUN_107499640(&uStack_360,&PTR_s_api_1109b4240,&uStack_378);
                func_0x00010749982c();
                func_0x0001074998b8();
                func_0x000107499b58();
                func_0x000107499ab4();
                uVar12 = uStack_35d;
                uVar10 = uStack_35e;
                uVar8 = uStack_35f;
                uVar16 = uStack_360;
                bVar15 = false;
                uStack_2b8 = 0x100;
                uStack_2b6 = 0;
                if (*(int *)(param_6 + 0x73) == 1) {
LAB_107495db4:
                  if (param_6[0x71] == (long *)0x0) {
                    uVar23 = 8;
                    __Znwm(8);
                    func_0x000107872a4c(uVar23);
                    uStack_2b0 = 0;
                    uStack_2af = 0;
                    uStack_2ae = 0;
                    uStack_2ad = 0;
                    fStack_2ac = 0.0;
                    FUN_107499380(param_6 + 0x71,uVar23);
                    func_0x00010749935c(&uStack_2b0);
                    bVar15 = true;
                    if (*(int *)(param_6 + 0x73) != 1) goto LAB_107496664;
                  }
                  if (((ulong)param_6[0x42] & 1) == 0) {
                    uStack_360 = 0;
                    uStack_35f = 0;
                    uStack_35e = 0;
                    func_0x0001074999b4(&uStack_2b0,*param_7,0x100000001,(long)param_6 + 0x36d);
                    pplVar19 = param_6 + 0x3f;
                    func_0x0001074999bc();
                    func_0x000107499a64();
                    goto joined_r0x000107495e2c;
                  }
                }
                else {
                  plVar40 = (long *)((ulong)plVar26 & 0xffffffff);
                  uStack_360 = (undefined1)uVar35;
                  uVar7 = uStack_360;
                  uStack_35f = (undefined1)(uVar35 >> 8);
                  uVar9 = uStack_35f;
                  uStack_35e = (undefined1)(uVar35 >> 0x10);
                  uVar11 = uStack_35e;
                  uStack_35d = (undefined1)(uVar35 >> 0x18);
                  uVar13 = uStack_35d;
                  uStack_360 = uVar16;
                  uStack_35f = uVar8;
                  uStack_35e = uVar10;
                  uStack_35d = uVar12;
                  if (((*(char *)(param_6 + 0x25) == '\x01') &&
                      (uVar35 == (uint)param_6[0x23] &&
                       (long *)((ulong)param_6[0x23] >> 0x20) == plVar40)) &&
                     (((ulong)param_6[0x29] & 1) != 0)) {
                    bVar15 = false;
                  }
                  else {
                    FUN_107456c98(param_6 + 0x26);
                    FUN_1074979d4(param_6 + 0x23);
                    func_0x0001074999b4(&uStack_2b0,*param_7,CONCAT44(uVar53,uVar35),
                                        (long)param_6 + 0x36d);
                    pplVar19 = param_6 + 0x26;
                    func_0x0001074999bc();
                    func_0x000107499a64();
                    if (pplVar19 != (long **)0x0) {
                      func_0x00010749976c();
                    }
                    func_0x000107499a80();
                    func_0x000107499b30();
                    if (((ulong)uStack_2a0 & 1) == 0) {
                      func_0x000107499c44();
                    }
                    func_0x000107499a44();
                    func_0x000107499878();
                    pplVar19 = param_6 + 0x23;
                    uStack_360 = uVar7;
                    uStack_35f = uVar9;
                    uStack_35e = uVar11;
                    uStack_35d = uVar13;
                    fStack_35c = (float)uVar53;
                    func_0x000107499bdc();
                    func_0x000107499ce4();
                    if (pplVar19 != (long **)0x0) {
                      func_0x00010749976c();
                    }
                    bVar15 = true;
                  }
                  if (((*(char *)(param_6 + 0x2c) == '\x01') &&
                      (uVar35 == (uint)param_6[0x2a] &&
                       (long *)((ulong)param_6[0x2a] >> 0x20) == plVar40)) &&
                     (((ulong)param_6[0x30] & 1) != 0)) {
                    if (bVar15) goto LAB_107495d9c;
                    bVar15 = false;
                  }
                  else {
                    FUN_107456c98(param_6 + 0x2d);
                    FUN_1074979d4(param_6 + 0x2a);
                    func_0x0001074999b4(&uStack_2b0,*param_7,CONCAT44(uVar53,uVar35),
                                        (long)param_6 + 0x372);
                    pplVar19 = param_6 + 0x2d;
                    func_0x0001074999bc();
                    func_0x000107499a64();
                    if (pplVar19 != (long **)0x0) {
                      func_0x00010749976c();
                    }
                    func_0x000107499a80();
                    func_0x000107499a04();
                    if (((ulong)uStack_2a0 & 1) == 0) {
                      func_0x000107499c44();
                    }
                    func_0x000107499a44();
                    func_0x000107499878();
                    pplVar19 = param_6 + 0x2a;
                    uStack_360 = uVar7;
                    uStack_35f = uVar9;
                    uStack_35e = uVar11;
                    uStack_35d = uVar13;
                    fStack_35c = (float)uVar53;
                    func_0x000107499bdc();
                    func_0x000107499ce4();
                    if (pplVar19 != (long **)0x0) {
                      func_0x00010749976c();
                    }
                    fStack_35c = 0.0;
                    uStack_358 = 0;
                    uStack_354 = 0;
                    uStack_348 = (long *)0x0;
                    uStack_360 = uVar7;
                    uStack_35f = uVar9;
                    uStack_35e = uVar11;
                    uStack_35d = uVar13;
                    plStack_350 = plVar40;
                    func_0x0001003a91d4(&UNK_10f415a11);
                    func_0x0001003a9204(&uStack_378);
                    func_0x000100066230(param_6 + 0x67,&uStack_378);
                    func_0x000107499b78();
LAB_107495d9c:
                    FUN_107497a6c(param_6 + 0xf);
                    bVar15 = true;
                  }
                  if (*(int *)(param_6 + 0x73) == 1) goto LAB_107495db4;
LAB_107496664:
                  if ((*(char *)(param_6 + 0x3e) != '\x01') || (((ulong)param_6[0x42] & 1) == 0)) {
                    FUN_1074979d4(param_6 + 0x3c);
                    FUN_107456c98(param_6 + 0x3f);
                    uStack_398._0_3_ = CONCAT12(uStack_2b6,uStack_2b8);
                    func_0x0001074999b4(&uStack_2b0,*param_7,0x100000001,(long)param_6 + 0x36d);
                    pplVar19 = param_6 + 0x3f;
                    func_0x0001074999bc();
                    func_0x000107499a64();
                    if (pplVar19 != (long **)0x0) {
                      func_0x00010749976c();
                    }
                    func_0x000107499a80();
                    func_0x000107499c0c();
                    if (((ulong)uStack_2a0 & 1) == 0) {
                      func_0x000107499c44();
                    }
                    uStack_2b0 = SUB81(pplVar19,0);
                    uStack_2af = (undefined1)((ulong)pplVar19 >> 8);
                    uStack_2ae = (undefined1)((ulong)pplVar19 >> 0x10);
                    uStack_2ad = (undefined1)((ulong)pplVar19 >> 0x18);
                    fStack_2ac = (float)((ulong)pplVar19 >> 0x20);
                    fStack_2a8 = 0.0;
                    plVar40 = (long *)((long)&MACH_HEADER.magic + 1);
                    uStack_378 = 1;
                    uStack_377 = 0x1000000;
                    uStack_373 = 0;
                    func_0x000107499878(&uStack_360,*param_7,&UNK_10f415a1e);
                    uStack_360 = 1;
                    uStack_35f = 0;
                    uStack_35e = 0;
                    uStack_35d = 0;
                    fStack_35c = 1.4013e-45;
                    pplVar19 = param_6 + 0x3c;
                    func_0x000107499bdc();
                    func_0x000107499ce4();
joined_r0x000107495e2c:
                    if (pplVar19 != (long **)0x0) {
                      func_0x00010749976c();
                    }
                    bVar15 = true;
                  }
                }
                if ((*(int *)(param_6 + 0x73) == 0) && (param_6[0xf] == param_6[0x10])) {
                  func_0x000107499c70();
                  plVar25 = (long *)((ulong)plVar26 & 0xffffffff);
                  uVar38 = uVar35;
                  while (uVar32 = (uint)plVar25, 1 < uVar38 || 1 < uVar32) {
                    uVar5 = uVar38 >> 1;
                    if (uVar5 < 2) {
                      uVar5 = 1;
                    }
                    uVar6 = uVar32 >> 1;
                    if (uVar6 < 2) {
                      uVar6 = 1;
                    }
                    plVar25 = (long *)(ulong)uVar6;
                    if (uVar38 < 4 && uVar32 < 4) break;
                    plVar47 = (long *)CONCAT44(uVar6,uVar5);
                    func_0x0001074999b4(&uStack_378,*param_7,plVar47,(long)param_6 + 0x36d);
                    uStack_2b0 = (undefined1)uVar5;
                    uVar16 = uStack_2b0;
                    uStack_2af = (undefined1)(uVar5 >> 8);
                    uVar8 = uStack_2af;
                    uStack_2ae = (undefined1)(uVar5 >> 0x10);
                    uVar10 = uStack_2ae;
                    uStack_2ad = (undefined1)(uVar5 >> 0x18);
                    uVar12 = uStack_2ad;
                    fStack_2ac = 0.0;
                    fStack_2a8 = 0.0;
                    fStack_2a4 = 0.0;
                    uStack_298 = (long *)0x0;
                    uStack_2a0 = plVar25;
                    func_0x0001003a91d4(&UNK_10f415a40);
                    func_0x0001003a9204(&uStack_398);
                    func_0x000107499a80();
                    uStack_2b0 = SUB81(&uStack_378,0);
                    uStack_2af = (undefined1)((ulong)&uStack_378 >> 8);
                    uStack_2ae = (undefined1)((ulong)&uStack_378 >> 0x10);
                    uStack_2ad = (undefined1)((ulong)&uStack_378 >> 0x18);
                    fStack_2ac = (float)((ulong)&uStack_378 >> 0x20);
                    fStack_2a8 = 0.0;
                    if (((ulong)uStack_2a0 & 1) == 0) {
                      func_0x000107499c44();
                    }
                    puVar33 = uStack_398;
                    if (-1 < cStack_381) {
                      puVar33 = &uStack_398;
                    }
                    uStack_360 = uVar16;
                    uStack_35f = uVar8;
                    uStack_35e = uVar10;
                    uStack_35d = uVar12;
                    fStack_35c = (float)uVar6;
                    (**(code **)(*(long *)*param_7 + 0x70))
                              (plVar40 + 1,(long *)*param_7,puVar33,&uStack_360,&uStack_2b0);
                    lStack_340 = lStack_2d0;
                    plStack_350 = plStack_368;
                    plStack_368 = (long *)0x0;
                    uStack_360 = uStack_378;
                    uStack_35f = (undefined1)uStack_377;
                    uStack_35e = (undefined1)((uint)uStack_377 >> 8);
                    uStack_35d = (undefined1)((uint)uStack_377 >> 0x10);
                    fStack_35c = (float)CONCAT31(uStack_373,(char)((uint)uStack_377 >> 0x18));
                    uStack_358 = (undefined4)uStack_370;
                    uStack_354._0_1_ = (undefined1)((uint5)uStack_370 >> 0x20);
                    lStack_2d0 = 0;
                    uStack_348 = plVar47;
                    plStack_2d8 = plVar47;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                              (plVar43 + 5,&uStack_398);
                    lVar51 = lStack_340;
                    plVar48 = plStack_350;
                    uStack_320 = 0;
                    uStack_318 = uStack_318 & 0xffffff00;
                    plVar47 = param_6[0x10];
                    if (plVar47 < param_6[0x11]) {
                      *(ulong *)((long)plVar47 + 5) =
                           CONCAT17((undefined1)uStack_354,CONCAT43(uStack_358,fStack_35c._1_3_));
                      *plVar47 = CONCAT44(fStack_35c,
                                          CONCAT13(uStack_35d,
                                                   CONCAT12(uStack_35e,
                                                            CONCAT11(uStack_35f,uStack_360))));
                      plStack_350 = (long *)0x0;
                      plVar47[2] = (long)plVar48;
                      plVar47[3] = (long)uStack_348;
                      lStack_340 = 0;
                      plVar47[4] = lVar51;
                      lVar46 = plVar43[6];
                      lVar51 = plVar43[5];
                      plVar47[7] = plVar43[7];
                      plVar47[6] = lVar46;
                      plVar47[5] = lVar51;
                      plVar43[6] = 0;
                      plVar43[7] = 0;
                      plVar43[5] = 0;
                      lVar51 = plVar43[8];
                      plVar47[9] = plVar43[9];
                      plVar47[8] = lVar51;
                      plVar47 = plVar47 + 10;
                    }
                    else {
                      plVar48 = param_6[0xf];
                      lVar51 = (long)plVar47 - (long)plVar48;
                      plVar43 = (long *)(lVar51 / 0x50 + 1);
                      if (plVar24 < plVar43) goto LAB_1074974f8;
                      uVar41 = ((long)param_6[0x11] - (long)plVar48) / 0x50;
                      plVar40 = (long *)(uVar41 * 2);
                      if (plVar40 < plVar43 || (long)plVar40 - (long)plVar43 == 0) {
                        plVar40 = plVar43;
                      }
                      if (0x199999999999998 < uVar41) {
                        plVar40 = plVar24;
                      }
                      if (plVar40 == (long *)0x0) {
                        plVar24 = (long *)0x0;
                      }
                      else {
                        if (plVar24 < plVar40) {
                          func_0x000104bd35f4();
                          goto LAB_107497514;
                        }
                        plVar24 = (long *)((long)plVar40 * 0x50);
                        __Znwm();
                      }
                      lVar46 = lStack_340;
                      puVar33 = (undefined8 *)((long)plVar24 + lVar51);
                      *puVar33 = CONCAT44(fStack_35c,
                                          CONCAT13(uStack_35d,
                                                   CONCAT12(uStack_35e,
                                                            CONCAT11(uStack_35f,uStack_360))));
                      *(ulong *)((long)puVar33 + 5) =
                           CONCAT17((undefined1)uStack_354,CONCAT43(uStack_358,fStack_35c._1_3_));
                      puVar33[3] = uStack_348;
                      puVar33[2] = plStack_350;
                      plStack_350 = (long *)0x0;
                      lStack_340 = 0;
                      puVar33[4] = lVar46;
                      puVar33[6] = uStack_330;
                      puVar33[5] = uStack_338;
                      puVar33[7] = uStack_328;
                      uStack_330 = 0;
                      uStack_328 = 0;
                      uStack_338 = 0;
                      puVar33[9] = CONCAT44(uStack_314,uStack_318);
                      puVar33[8] = CONCAT71(uStack_31f,uStack_320);
                      plVar43 = puVar33 + (lVar51 / -0x50) * 10;
                      plVar34 = plVar43;
                      for (plVar36 = plVar48; plVar36 != plVar47; plVar36 = plVar36 + 10) {
                        lVar51 = *plVar36;
                        *(undefined8 *)((long)plVar34 + 5) = *(undefined8 *)((long)plVar36 + 5);
                        *plVar34 = lVar51;
                        lVar51 = plVar36[2];
                        plVar36[2] = 0;
                        plVar34[2] = lVar51;
                        plVar34[3] = plVar36[3];
                        lVar51 = plVar36[4];
                        plVar36[4] = 0;
                        plVar34[4] = lVar51;
                        lVar46 = plVar36[6];
                        lVar51 = plVar36[5];
                        plVar34[7] = plVar36[7];
                        plVar34[6] = lVar46;
                        plVar34[5] = lVar51;
                        plVar36[6] = 0;
                        plVar36[7] = 0;
                        plVar36[5] = 0;
                        lVar51 = plVar36[8];
                        plVar34[9] = plVar36[9];
                        plVar34[8] = lVar51;
                        plVar34 = plVar34 + 10;
                      }
                      for (; plVar48 != plVar47; plVar48 = plVar48 + 10) {
                        FUN_10749875c(plVar48);
                      }
                      plVar47 = puVar33 + 10;
                      plVar48 = param_6[0xf];
                      param_6[0xf] = plVar43;
                      param_6[0x10] = plVar47;
                      param_6[0x11] = plVar24 + (long)plVar40 * 10;
                      if (plVar48 != (long *)0x0) {
                        __ZdlPv();
                      }
                      func_0x000107499c70();
                    }
                    param_6[0x10] = plVar47;
                    puVar28 = &uStack_360;
                    FUN_10749875c();
                    func_0x000107499930();
                    if (puVar28 != (undefined1 *)0x0) {
                      func_0x00010749976c();
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                              (&uStack_398);
                    plVar47 = plStack_368;
                    plStack_368 = (long *)0x0;
                    uVar38 = uVar5;
                    if (plVar47 != (long *)0x0) {
                      func_0x00010749976c();
                    }
                  }
LAB_107495e50:
                  FUN_107497a74(param_6[0x72],0xf6);
                }
                else if (bVar15) goto LAB_107495e50;
                func_0x000107499b70();
                FUN_1073c89ec();
                plVar24 = param_6[0xf];
                plVar40 = param_6[0x10];
                uStack_360 = 0xf4;
                uStack_35f = 0;
                uStack_35e = 0;
                uStack_35d = 0;
                uStack_348 = (long *)((ulong)uStack_348 & 0xffffffff00000000);
                uStack_330 = 0;
                uStack_328 = 0;
                func_0x000107499788();
                func_0x00010729d56c(&uStack_360,"api");
                func_0x0001072bbe40(&uStack_360,&UNK_10f415a5a,0);
                func_0x00010002b838(&uStack_378,&DAT_10f415a66);
                FUN_107499658(&lStack_340,&uStack_378,((long)plVar40 - (long)plVar24) / 0x50 + 1);
                func_0x000107499b78();
                uStack_314 = CONCAT31(uStack_314._1_3_,1);
                func_0x00010749982c();
                func_0x0001074998b8();
                func_0x000107499b58();
                func_0x000107499ab4();
                plVar24 = (long *)param_7[2];
                plStack_380 = plVar24;
                (**(code **)*plVar24)(plVar24,&UNK_10f415a71,0xf);
                if (*(int *)(param_6 + 0x73) == 1) {
                  puVar33 = (undefined8 *)*param_6[0x71];
                  puVar33[1] = *puVar33;
                  puVar33[4] = puVar33[3];
                  uVar41 = *(ulong *)(param_7[4] + 0x1cc);
                  dVar55 = *(double *)(param_7[4] + 0x1f8);
                  _log2(dVar55);
                  plVar25 = (long *)param_7[1];
                  (**(code **)(*plVar25 + 0x10))();
                  plVar40 = param_6[0xd];
                  plVar26 = plVar25;
                  for (plVar24 = param_6[0xc]; uVar16 = plVar24 == plVar40, !(bool)uVar16;
                      plVar24 = plVar24 + 1) {
                    func_0x000107499b44();
                    lVar51 = *plVar26;
                    _memcpy(&uStack_2b0,*plVar24 + 0x10,0x80);
                    func_0x0001074999dc();
                    func_0x000107872a90(*(undefined4 *)((long)param_6 + 900),(float)dVar55,
                                        &UNK_10dd8d000,lVar51 + 0x68,&uStack_360,(int)plVar25 != 0);
                    func_0x0001074999dc();
                    plVar26 = (long *)&UNK_10dd8d000;
                    func_0x000107872bf0(&UNK_10dd8d000,lVar51 + 0x80,&uStack_360,(int)plVar25 != 0);
                  }
                  plVar24 = param_6[0x71];
                  func_0x000107872d40((float)(uVar41 >> 0x20) / (float)(uVar41 & 0xffffffff),
                                      (float)dVar55,*(undefined4 *)((long)param_6 + 900),
                                      *(undefined4 *)((long)param_6 + 0x37c),
                                      *(undefined4 *)(param_6 + 0x70));
                  if (((ulong)param_6[0x30] & 1) == 0) {
                    plVar40 = param_6[0x71];
LAB_10749690c:
                    uStack_360 = 0;
                    uStack_35f = 0;
                    uStack_35e = 0;
                    FUN_107497b0c(&uStack_2b0,*param_7,
                                  (ulong)(uint)(int)*(float *)(*plVar40 + 0x23c33c) << 0x20 | 0x10e,
                                  *plVar40 + 0xfe908,(long)param_6 + 0x372,9,&uStack_360);
                    pplVar19 = param_6 + 0x2d;
                    func_0x0001074999bc();
                    func_0x000107499a64();
                    if (pplVar19 != (long **)0x0) {
                      func_0x00010749976c();
                    }
                  }
                  else {
                    plVar40 = param_6[0x71];
                    uVar16 = *(int *)((long)param_6 + 0x16c) == 0x10e;
                    if ((!(bool)uVar16) ||
                       (uVar16 = *(int *)(param_6 + 0x2e) == (int)*(float *)(*plVar40 + 0x23c33c),
                       !(bool)uVar16)) goto LAB_10749690c;
                    puVar42 = (ulong *)*param_7;
                    func_0x000107499a04();
                    lVar51 = *param_6[0x71];
                    fVar52 = *(float *)(lVar51 + 0x23c33c);
                    puVar27 = puVar42;
                    (**(code **)*puVar42)();
                    uVar35 = (uint)fVar52;
                    uVar45 = (ulong)uVar35;
                    uVar41 = *puVar27;
                    uVar16 = 0x10d < uVar41 && uVar41 == uVar45;
                    if (0x10d < uVar41 && uVar45 <= uVar41) {
                      (**(code **)(*puVar42 + 0x80))
                                (puVar42,plVar24[2],uVar45 << 0x20 | 0x10e,lVar51 + 0xfe908,9);
                      *(undefined4 *)((long)plVar24 + 4) = 0x10e;
                      *(uint *)(plVar24 + 1) = uVar35;
                    }
                    else {
                      uStack_2b0 = 0;
                      uStack_2af = 0;
                      uStack_2ae = 0;
                      uStack_2ad = 0;
                      (**(code **)(*puVar42 + 0x80))(puVar42,plVar24[2],0x100000001,&uStack_2b0,2);
                      *(undefined8 *)((long)plVar24 + 4) = 0x100000001;
                      *(undefined1 *)((long)plVar24 + 0xc) = 2;
                    }
                  }
                  *(undefined1 *)(param_6 + 0x6f) = *(undefined1 *)(*param_6[0x71] + 0x23c344);
                }
                else {
                  bVar4 = *(byte *)(param_7[5] + 0xa94);
                  uVar41 = (ulong)bVar4;
                  pplVar19 = param_6 + 0x23;
                  uStack_360 = SUB81(pplVar19,0);
                  uStack_35f = (undefined1)((ulong)pplVar19 >> 8);
                  uStack_35e = (undefined1)((ulong)pplVar19 >> 0x10);
                  uStack_35d = (undefined1)((ulong)pplVar19 >> 0x18);
                  fStack_35c = (float)((ulong)pplVar19 >> 0x20);
                  dVar55 = 0.0;
                  func_0x000107499948();
                  func_0x000107499c64();
                  func_0x000107499bd0();
                  plVar40 = param_6[0xc];
                  plVar25 = param_6[0xd];
                  uVar53 = 2;
                  if (bVar4 == 0) {
                    uVar53 = 0;
                  }
                  for (; plVar40 != plVar25; plVar40 = plVar40 + 1) {
                    func_0x000107499b44();
                    lVar51 = *plVar24;
                    func_0x000107499bf8();
                    fVar52 = (float)dVar55;
                    func_0x0001074999f0(*plVar40);
                    dVar54 = dVar55;
                    if (((*(long *)(lVar51 + 0xd0) != *(long *)(lVar51 + 0xd8)) &&
                        (*(char *)(lVar51 + 0x138) == '\x01')) &&
                       ((*(byte *)(lVar51 + 0x118) & 1) != 0)) {
                      if (*(char *)((long)param_7 + 0xad) == '\x01') {
                        uVar32 = *(uint *)(param_7 + 0x16) & 0x100;
                        uVar38 = uVar32 >> 8;
                        lVar46 = 0x280;
                        if (uVar32 == 0) {
                          lVar46 = 0x240;
                        }
                        uStack_2b0 = 9;
                        if (uVar32 == 0) {
                          uStack_2b0 = 5;
                        }
                      }
                      else {
                        uVar38 = 0;
                        uStack_2b0 = 5;
                        lVar46 = 0x240;
                      }
                      plVar24 = (long *)param_7[0x12];
                      uStack_2af = 0;
                      uStack_2ae = 0;
                      uStack_2ad = 0;
                      fStack_2a8 = 0.0;
                      fStack_2a4 = 0.0;
                      dVar54 = (double)(ulong)*(uint *)(param_7 + 0xf);
                      uStack_2a0 = (long *)CONCAT44(*(uint *)(param_7 + 0xf),uVar53);
                      uVar45 = (ulong)uStack_298 >> 0x30;
                      uVar32 = (uint)uStack_298;
                      uStack_298._0_6_ = CONCAT24(0x101,uVar32 & 0xff000000);
                      uStack_298 = (long *)CONCAT26((short)uVar45,(undefined6)uStack_298);
                      uStack_284 = 0;
                      uStack_280 = 0;
                      uStack_28c = 0;
                      uStack_288 = 0;
                      uStack_290 = 1;
                      uStack_27c = 0x1010101;
                      uStack_278 = 10;
                      FUN_1073ca29c(&uStack_378,plVar24,lVar51 + lVar46 + uVar41 * 0x10,&uStack_2b0)
                      ;
                      if (CONCAT35(uStack_373,CONCAT41(uStack_377,uStack_378)) != 0) {
                        func_0x000107499890();
                        (*extraout_x8_05)();
                        uVar16 = (int)plVar24 == 2;
                        if ((bool)uVar16) {
                          func_0x0001074998f4(plStack_2c0);
                          (*extraout_x8_06)();
                          func_0x000107499804(plStack_2c0);
                          fStack_2ac = 9.80909e-45;
                          fStack_2a8 = 0.0;
                          func_0x0001074997a8();
                          func_0x000107499b98();
                          func_0x000107499ae4(plStack_2c0);
                          iVar18 = extraout_w8_01 + 1;
                          uStack_2ae = (undefined1)((uint)iVar18 >> 0x10);
                          uStack_2b0 = (undefined1)iVar18;
                          uStack_2af = (undefined1)((uint)iVar18 >> 8);
                          func_0x000107499a90();
                          func_0x000107499b60();
                          (**(code **)(*plStack_2c0 + 0x58))(plStack_2c0,lVar51 + 0x120);
                          func_0x0001074997fc(*(undefined8 *)(*plStack_2c0 + 0x60));
                          func_0x000107499a0c();
                          plVar24 = plStack_2c0;
                          if (uVar38 == 0) {
                            func_0x000107482794(&uStack_2b0,*plVar40 + 0x10);
                            func_0x0001074997fc(*(undefined8 *)(*plVar24 + 0xd0),plVar24);
                            func_0x0001074998a0(plStack_2c0);
                            func_0x000107499bbc();
                            func_0x0001074998a0(plStack_2c0);
                            func_0x000107499bb0();
                            dVar54 = (double)(ulong)*(uint *)((long)param_6 + 0x364);
                            func_0x0001074998a0(plStack_2c0);
                            (*extraout_x8_07)();
                            plVar24 = plStack_2c0;
                            func_0x0001074998a0();
                            func_0x000107499b80();
                            plVar43 = plStack_2c0;
                            if (uVar41 != 0) {
                              func_0x000107415f50(param_7[5],*plVar40,0x2000);
                              uStack_2b0 = SUB81(dVar54,0);
                              uStack_2af = (undefined1)((ulong)dVar54 >> 8);
                              uStack_2ae = (undefined1)((ulong)dVar54 >> 0x10);
                              uStack_2ad = (undefined1)((ulong)dVar54 >> 0x18);
                              fStack_2ac = (float)param_3;
                              fStack_2a4 = (float)param_5;
                              fStack_2a8 = param_4;
                              (**(code **)(*plVar43 + 0xb8))(plVar43,5,&uStack_2b0);
                              plVar24 = plStack_2c0;
                              lVar46 = param_7[5];
                              FUN_107416bf8(lVar46);
                              func_0x000107482794(&uStack_2b0,lVar46 + 0xaa0);
                              (**(code **)(*plVar24 + 0xd0))(plVar24,6,&uStack_2b0);
                              func_0x000107499ca4();
                              if ((bool)uVar16) {
                                dVar54 = (double)(ulong)*(uint *)(extraout_x8_08 + 0xa90);
                              }
                              plVar24 = plStack_2c0;
                              func_0x0001074998a0();
                              (*extraout_x8_09)();
                            }
                          }
                          else {
                            uStack_2b0 = SUB81(dVar55,0);
                            uStack_2af = (undefined1)((ulong)dVar55 >> 8);
                            uStack_2ae = (undefined1)((ulong)dVar55 >> 0x10);
                            uStack_2ad = (undefined1)((ulong)dVar55 >> 0x18);
                            fStack_2a8 = *(float *)((long)param_6 + 0x364);
                            dVar54 = (double)CONCAT44(0x41000000,fStack_2a8);
                            fStack_2a4 = 8.0;
                            pdVar21 = (double *)(lVar51 + 0x2c0);
                            fStack_2ac = fVar52;
                            FUN_107497c00(pdVar21,param_6[3] + 1);
                            dVar55 = pdVar21[2];
                            if (dVar55 == 0.0) {
                              pdVar22 = pdVar21;
                              func_0x0001074997ec();
                              func_0x00010749983c();
                              lStack_2d0 = CONCAT53(uStack_2b5,CONCAT12(uStack_2b6,uStack_2b8));
                              plStack_2d8 = (long *)0x10;
                              func_0x000107499848();
                              func_0x000107499b8c();
                              func_0x000107499a88();
                              func_0x000107499930();
                              if (pdVar22 != (double *)0x0) {
                                func_0x00010749976c();
                              }
                              dVar55 = pdVar21[2];
LAB_107496330:
                              func_0x000107499a9c(*(undefined8 *)((long)dVar55 + 8));
                              func_0x000107499b68();
                              dVar54 = (double)CONCAT44(fStack_2ac,
                                                        CONCAT13(uStack_2ad,
                                                                 CONCAT12(uStack_2ae,
                                                                          CONCAT11(uStack_2af,
                                                                                   uStack_2b0))));
                              pdVar21[1] = (double)CONCAT44(fStack_2a4,fStack_2a8);
                              *pdVar21 = dVar54;
                            }
                            else {
                              pdVar22 = pdVar21;
                              FUN_107497fb0(pdVar21,&uStack_2b0);
                              if ((int)pdVar22 != 0) goto LAB_107496330;
                            }
                            func_0x00010749993c(plStack_2c0);
                            func_0x000107499c2c();
                            plVar24 = plStack_2c0;
                            func_0x000107499b38();
                            func_0x0001074999d4(*(undefined8 *)(*plVar24 + 0x90));
                            if (uVar41 != 0) {
                              plVar24 = plStack_2c0;
                              func_0x00010749993c();
                              func_0x0001074999cc();
                            }
                          }
                          puVar2 = *(undefined4 **)(lVar51 + 0xd8);
                          for (puVar44 = *(undefined4 **)(lVar51 + 0xd0); puVar44 != puVar2;
                              puVar44 = puVar44 + 10) {
                            (**(code **)(*plStack_2c0 + 0x68))(plStack_2c0,*puVar44);
                            uStack_2b0 = 4;
                            fStack_2ac = 0.0;
                            plVar24 = plStack_2c0;
                            func_0x0001074998ac(*(undefined8 *)(*plStack_2c0 + 0x138));
                          }
                        }
                      }
                      func_0x0001074999c4();
                    }
                    dVar55 = dVar54;
                  }
                  func_0x000107499b1c();
                  if (plVar24 != (long *)0x0) {
                    func_0x00010749976c();
                    func_0x000107499b1c();
                    if (plVar24 != (long *)0x0) {
                      func_0x00010749976c();
                    }
                  }
                  pplVar19 = param_6 + 0x2a;
                  FUN_107497ff8();
                  uStack_360 = SUB81(pplVar19,0);
                  uStack_35f = (undefined1)((ulong)pplVar19 >> 8);
                  uStack_35e = (undefined1)((ulong)pplVar19 >> 0x10);
                  uStack_35d = (undefined1)((ulong)pplVar19 >> 0x18);
                  fStack_35c = (float)((ulong)pplVar19 >> 0x20);
                  func_0x000107499948(0);
                  func_0x000107499c64();
                  func_0x000107499bd0();
                  uVar38 = (uint)*(byte *)((long)param_7 + 0xad) &
                           (*(uint *)(param_7 + 0x16) & 0x100) >> 8;
                  uVar16 = uVar38 == 0;
                  plVar24 = (long *)param_7[0x12];
                  uStack_2b0 = 0xc;
                  if ((bool)uVar16) {
                    uStack_2b0 = 8;
                  }
                  uStack_2af = 0;
                  uStack_2ae = 0;
                  uStack_2ad = 0;
                  fStack_2a8 = 0.0;
                  fStack_2a4 = 0.0;
                  uStack_2a0 = (long *)0x3f80000000000000;
                  uStack_298 = (long *)((ulong)uStack_298 & 0xffffffffff000000);
                  uStack_290 = 0;
                  uStack_28c = 0;
                  uStack_288 = 0;
                  uStack_284 = 0;
                  uStack_280 = 0;
                  uStack_27c = 0x1010101;
                  uStack_278 = 10;
                  func_0x000107499ac4();
                  if (CONCAT35(uStack_373,CONCAT41(uStack_377,uStack_378)) != 0) {
                    func_0x000107499890();
                    (*extraout_x8_10)();
                    uVar16 = (int)plVar24 == 2;
                    if ((bool)uVar16) {
                      func_0x0001074998f4(plStack_2c0);
                      (*extraout_x8_11)();
                      func_0x000107499804(plStack_2c0);
                      fStack_2ac = 9.80909e-45;
                      fStack_2a8 = 0.0;
                      func_0x0001074997a8();
                      func_0x000107499b98();
                      uStack_2ae = 1;
                      plVar40 = plStack_2c0;
                      func_0x000107499ae4(plStack_2c0);
                      uStack_2b0 = (undefined1)extraout_w8;
                      uStack_2af = (undefined1)((ushort)extraout_w8 >> 8);
                      func_0x000107499a90();
                      func_0x000107499b60();
                      plVar24 = plStack_2c0;
                      func_0x000107499adc();
                      (**(code **)(*plVar24 + 0x58))(plVar24,plVar40);
                      plVar24 = plStack_2c0;
                      func_0x000107499ad4();
                      func_0x0001074997fc(*(undefined8 *)(*plVar24 + 0x60),plVar24);
                      fVar52 = (float)uVar35;
                      if (uVar38 == 0) {
                        fVar56 = (float)((ulong)plVar26 & 0xffffffff);
                        func_0x000107499afc(plStack_2c0);
                        fStack_2ac = fVar56;
                        uStack_2b0 = SUB41(fVar52,0);
                        uStack_2af = (undefined1)((uint)fVar52 >> 8);
                        uStack_2ae = (undefined1)((uint)fVar52 >> 0x10);
                        uStack_2ad = (undefined1)((uint)fVar52 >> 0x18);
                        func_0x000107499aa8();
                        func_0x0001074997fc();
                        func_0x0001074998a0(*(undefined4 *)(param_6 + 0x6d),plStack_2c0);
                        (*extraout_x8_18)();
                        func_0x000107499b30();
                        func_0x000107499778();
                        func_0x0001074997c8();
                      }
                      else {
                        fVar52 = 1.0 / fVar52;
                        fStack_2ac = 1.0 / (float)((ulong)plVar26 & 0xffffffff);
                        uStack_2b0 = SUB41(fVar52,0);
                        uStack_2af = (undefined1)((uint)fVar52 >> 8);
                        uStack_2ae = (undefined1)((uint)fVar52 >> 0x10);
                        uStack_2ad = (undefined1)((uint)fVar52 >> 0x18);
                        fStack_2a8 = *(float *)(param_6 + 0x6d);
                        fStack_2a4 = 0.0;
                        pplVar19 = param_6 + 0x77;
                        plVar24 = param_6[0x77];
                        if (plVar24 == (long *)0x0) {
                          func_0x0001074997ec();
                          func_0x00010749983c();
                          lStack_2d0 = CONCAT53(uStack_2b5,CONCAT12(uStack_2b6,uStack_2b8));
                          plStack_2d8 = (long *)0x10;
                          func_0x000107499848();
                          pplVar29 = pplVar19;
                          func_0x000107308dac(pplVar19,&uStack_398);
                          func_0x000107499a88();
                          func_0x000107499930();
                          if (pplVar29 != (long **)0x0) {
                            func_0x00010749976c();
                          }
                          plVar24 = *pplVar19;
LAB_107496dc8:
                          func_0x000107499a9c(plVar24[1]);
                          func_0x000107499b68();
                          param_6[0x76] = (long *)CONCAT44(fStack_2a4,fStack_2a8);
                          param_6[0x75] =
                               (long *)CONCAT44(fStack_2ac,
                                                CONCAT13(uStack_2ad,
                                                         CONCAT12(uStack_2ae,
                                                                  CONCAT11(uStack_2af,uStack_2b0))))
                          ;
                        }
                        else {
                          uVar16 = false;
                          if ((*(float *)(param_6 + 0x75) == fVar52) &&
                             (uVar16 = false,
                             !NAN(*(float *)((long)param_6 + 0x3ac)) && !NAN(fStack_2ac))) {
                            uVar16 = *(float *)((long)param_6 + 0x3ac) == fStack_2ac;
                          }
                          if (((!(bool)uVar16) ||
                              (uVar16 = *(float *)(param_6 + 0x76) == fStack_2a8, !(bool)uVar16)) ||
                             (uVar16 = *(float *)((long)param_6 + 0x3b4) == 0.0, !(bool)uVar16))
                          goto LAB_107496dc8;
                        }
                        func_0x00010749993c(plStack_2c0);
                        func_0x0001074997fc();
                        func_0x000107499b30();
                        func_0x000107499778();
                        func_0x0001074997c8();
                      }
                      func_0x000107499914(plStack_2c0);
                      (*extraout_x8_19)();
                      uStack_2b0 = 4;
                      fStack_2ac = 0.0;
                      plVar24 = plStack_2c0;
                      func_0x000107499818();
                      func_0x0001074998ac();
                      func_0x000107499b1c();
                      if (plVar24 != (long *)0x0) {
                        func_0x00010749976c();
                      }
                    }
                  }
                  func_0x0001074999c4();
                  func_0x000107499b1c();
                  if (plVar24 != (long *)0x0) {
                    func_0x00010749976c();
                  }
                  if (*(int *)(param_6 + 0x73) == 0) {
                    plStack_2c0 = (long *)param_7[2];
                    (**(code **)*plStack_2c0)(plStack_2c0,&UNK_10f415a86,10);
                    func_0x000107499a04();
                    plVar24 = param_6[0x23];
                    uVar35 = (uint)*(byte *)((long)param_7 + 0xad) &
                             (*(uint *)(param_7 + 0x16) & 0x100) >> 8;
                    uVar16 = uVar35 == 0;
                    uStack_2b0 = 0xb;
                    if ((bool)uVar16) {
                      uStack_2b0 = 7;
                    }
                    iVar18 = (int)param_7[0x12];
                    uStack_2af = 0;
                    uStack_2ae = 0;
                    uStack_2ad = 0;
                    fStack_2a8 = 0.0;
                    fStack_2a4 = 0.0;
                    uStack_2a0 = (long *)0x3f80000000000000;
                    uStack_298 = (long *)((ulong)uStack_298 & 0xffffffffff000000);
                    uStack_290 = 0;
                    uStack_28c = 0;
                    uStack_288 = 0;
                    uStack_284 = 0;
                    uStack_280 = 0;
                    uStack_27c = 0x1010101;
                    uStack_278 = 10;
                    func_0x000107499ac4();
                    if (CONCAT35(uStack_373,CONCAT41(uStack_377,uStack_378)) != 0) {
                      func_0x000107499890();
                      (*extraout_x8_20)();
                      uVar16 = 0;
                      if (iVar18 == 2) {
                        plVar26 = param_6[0x80];
                        plVar40 = param_6[0x7f];
                        uVar45 = ((long)param_6[0x10] - (long)param_6[0xf]) / 0x50;
                        uVar41 = (long)plVar26 - (long)plVar40 >> 5;
                        if (uVar45 != uVar41) {
                          uVar49 = uVar45 - uVar41;
                          if (uVar45 < uVar41 || uVar49 == 0) {
                            if (uVar45 < uVar41) {
                              FUN_10749879c(param_6 + 0x7f,plVar40 + uVar45 * 4);
                            }
                          }
                          else if ((ulong)((long)param_6[0x81] - (long)plVar26 >> 5) < uVar49) {
                            if (uVar45 >> 0x3b != 0) {
                              FUN_107498790();
                              goto LAB_107497514;
                            }
                            uVar37 = (long)param_6[0x81] - (long)plVar40;
                            uVar39 = (long)uVar37 >> 4;
                            if (uVar39 <= uVar45) {
                              uVar39 = uVar45;
                            }
                            if (0x7fffffffffffffdf < uVar37) {
                              uVar39 = 0x7ffffffffffffff;
                            }
                            if (uVar39 >> 0x3b != 0) {
                              func_0x000104bd35f4();
                              goto LAB_107497514;
                            }
                            lVar46 = uVar39 << 5;
                            __Znwm();
                            puVar33 = (undefined8 *)(lVar46 + ((long)plVar26 - (long)plVar40));
                            puVar1 = puVar33;
                            for (lVar51 = uVar45 * 0x20 + uVar41 * -0x20; lVar51 != 0;
                                lVar51 = lVar51 + -0x20) {
                              puVar1[1] = 0;
                              *puVar1 = 0;
                              puVar1[3] = 0;
                              puVar1[2] = 0;
                              puVar1 = puVar1 + 4;
                            }
                            plVar43 = puVar33 + uVar41 * -4;
                            for (plVar25 = plVar40; plVar25 != plVar26; plVar25 = plVar25 + 4) {
                              lVar51 = *plVar25;
                              plVar43[1] = plVar25[1];
                              *plVar43 = lVar51;
                              lVar51 = plVar25[2];
                              plVar43[3] = plVar25[3];
                              plVar43[2] = lVar51;
                              plVar25[2] = 0;
                              plVar25[3] = 0;
                              plVar43 = plVar43 + 4;
                            }
                            for (; plVar40 != plVar26; plVar40 = plVar40 + 4) {
                              func_0x00010730b284(plVar40 + 2);
                            }
                            plVar40 = param_6[0x7f];
                            param_6[0x7f] = puVar33 + uVar41 * -4;
                            param_6[0x80] = puVar33 + uVar49 * 4;
                            param_6[0x81] = (long *)(lVar46 + uVar39 * 0x20);
                            if (plVar40 != (long *)0x0) {
                              __ZdlPv();
                            }
                          }
                          else {
                            plVar40 = plVar26;
                            for (lVar51 = uVar45 * 0x20 + uVar41 * -0x20; lVar51 != 0;
                                lVar51 = lVar51 + -0x20) {
                              plVar40[1] = 0;
                              *plVar40 = 0;
                              plVar40[3] = 0;
                              plVar40[2] = 0;
                              plVar40 = plVar40 + 4;
                            }
                            param_6[0x80] = plVar26 + uVar49 * 4;
                          }
                        }
                        lVar46 = 0;
                        lVar51 = 0;
                        uVar41 = 0;
                        while( true ) {
                          uVar49 = (ulong)plVar24 >> 0x20;
                          plVar40 = param_6[0xf];
                          uVar45 = ((long)param_6[0x10] - (long)plVar40) / 0x50;
                          uVar16 = uVar41 == uVar45;
                          if (uVar45 <= uVar41) break;
                          puVar33 = (undefined8 *)((long)plVar40 + lVar46 + 0x18);
                          uStack_2b0 = SUB81(puVar33,0);
                          uStack_2af = (undefined1)((ulong)puVar33 >> 8);
                          uStack_2ae = (undefined1)((ulong)puVar33 >> 0x10);
                          uStack_2ad = (undefined1)((ulong)puVar33 >> 0x18);
                          fStack_2ac = (float)((ulong)puVar33 >> 0x20);
                          func_0x0001074998cc();
                          plVar26 = (long *)((long)plVar40 + lVar46 + 0x28);
                          if (*(char *)((long)plVar40 + lVar46 + 0x3f) < '\0') {
                            plVar26 = (long *)*plVar26;
                          }
                          func_0x000107499c64(param_7[2],plVar26);
                          func_0x000107499be4();
                          func_0x0001074998f4(plStack_2c8);
                          (*extraout_x8_21)();
                          plVar26 = plStack_2c8;
                          func_0x000107499804(plStack_2c8);
                          func_0x00010749996c();
                          func_0x000107499ba4();
                          func_0x000107499990();
                          (*extraout_x8_22)();
                          plVar40 = plStack_2c8;
                          func_0x000107499adc();
                          (**(code **)(*plVar40 + 0x58))(plVar40,plVar26);
                          plVar40 = plStack_2c8;
                          func_0x000107499ad4();
                          func_0x0001074997fc(*(undefined8 *)(*plVar40 + 0x60),plVar40);
                          plVar40 = plStack_2c8;
                          func_0x000107499914();
                          (*extraout_x8_23)();
                          if (uVar35 == 0) {
                            fVar52 = 1.0 / (float)((ulong)plVar24 & 0xffffffff);
                            fStack_35c = 1.0 / (float)uVar49;
                            uStack_360 = SUB41(fVar52,0);
                            uStack_35f = (undefined1)((uint)fVar52 >> 8);
                            uStack_35e = (undefined1)((uint)fVar52 >> 0x10);
                            uStack_35d = (undefined1)((uint)fVar52 >> 0x18);
                            func_0x000107499aa8(plStack_2c8);
                            func_0x0001074997fc();
                            func_0x000107499904();
                            func_0x00010749986c();
                          }
                          else {
                            puVar1 = (undefined8 *)((long)param_6[0x7f] + lVar51);
                            fVar52 = 1.0 / (float)((ulong)plVar24 & 0xffffffff);
                            fStack_35c = 1.0 / (float)uVar49;
                            uStack_360 = SUB41(fVar52,0);
                            uStack_35f = (undefined1)((uint)fVar52 >> 8);
                            uStack_35e = (undefined1)((uint)fVar52 >> 0x10);
                            uStack_35d = (undefined1)((uint)fVar52 >> 0x18);
                            uStack_358 = 0;
                            uStack_354 = 0;
                            lVar50 = puVar1[2];
                            if (lVar50 == 0) {
                              func_0x0001074997ec();
                              func_0x00010749983c();
                              lStack_2d0 = CONCAT53(uStack_2b5,CONCAT12(uStack_2b6,uStack_2b8));
                              plStack_2d8 = (long *)0x10;
                              func_0x000107499848();
                              func_0x000107499b8c();
                              func_0x000107499a88();
                              func_0x000107499930();
                              if (plVar40 != (long *)0x0) {
                                func_0x00010749976c();
                              }
                              lVar50 = puVar1[2];
LAB_107497088:
                              func_0x000107499a9c(*(undefined8 *)(lVar50 + 8));
                              (*extraout_x8_24)();
                              puVar1[1] = CONCAT44(uStack_354,uStack_358);
                              *puVar1 = CONCAT44(fStack_35c,
                                                 CONCAT13(uStack_35d,
                                                          CONCAT12(uStack_35e,
                                                                   CONCAT11(uStack_35f,uStack_360)))
                                                );
                            }
                            else {
                              puVar30 = puVar1;
                              FUN_107498010(puVar1,&uStack_360);
                              if ((int)puVar30 != 0) goto LAB_107497088;
                            }
                            func_0x00010749993c(plStack_2c8);
                            func_0x000107499c2c();
                            func_0x000107499904();
                            func_0x00010749986c();
                          }
                          uStack_360 = 4;
                          fStack_35c = 0.0;
                          plVar24 = plStack_2c8;
                          func_0x000107499818();
                          func_0x0001074998c4();
                          func_0x000107499c84();
                          if (plVar24 == (long *)0x0) {
                            plVar24 = (long *)*puVar33;
                          }
                          else {
                            func_0x00010749976c();
                            plVar40 = plStack_2c8;
                            plVar24 = (long *)*puVar33;
                            plStack_2c8 = (long *)0x0;
                            if (plVar40 != (long *)0x0) {
                              func_0x00010749976c();
                            }
                          }
                          uVar41 = uVar41 + 1;
                          lVar51 = lVar51 + 0x20;
                          lVar46 = lVar46 + 0x50;
                        }
                        pplVar19 = param_6 + 0x3c;
                        FUN_107497ff8();
                        uStack_2b0 = SUB81(pplVar19,0);
                        uStack_2af = (undefined1)((ulong)pplVar19 >> 8);
                        uStack_2ae = (undefined1)((ulong)pplVar19 >> 0x10);
                        uStack_2ad = (undefined1)((ulong)pplVar19 >> 0x18);
                        fStack_2ac = (float)((ulong)pplVar19 >> 0x20);
                        func_0x0001074998cc();
                        func_0x000107499c64(param_7[2]);
                        func_0x000107499be4();
                        func_0x0001074998f4(plStack_2c8);
                        (*extraout_x8_25)();
                        plVar26 = plStack_2c8;
                        func_0x000107499804(plStack_2c8);
                        func_0x00010749996c();
                        func_0x000107499ba4();
                        func_0x000107499990();
                        (*extraout_x8_26)();
                        plVar40 = plStack_2c8;
                        func_0x000107499adc();
                        (**(code **)(*plVar40 + 0x58))(plVar40,plVar26);
                        plVar40 = plStack_2c8;
                        func_0x000107499ad4();
                        func_0x0001074997fc(*(undefined8 *)(*plVar40 + 0x60),plVar40);
                        func_0x000107499914(plStack_2c8);
                        (*extraout_x8_27)();
                        fVar52 = (float)((ulong)plVar24 & 0xffffffff);
                        if (uVar35 == 0) {
                          fVar56 = (float)uVar49;
                          func_0x000107499afc(plStack_2c8);
                          fStack_35c = fVar56;
                          uStack_360 = SUB41(fVar52,0);
                          uStack_35f = (undefined1)((uint)fVar52 >> 8);
                          uStack_35e = (undefined1)((uint)fVar52 >> 0x10);
                          uStack_35d = (undefined1)((uint)fVar52 >> 0x18);
                          func_0x000107499aa8();
                          func_0x0001074997fc();
                          func_0x000107499904();
                          func_0x00010749986c();
                        }
                        else {
                          fVar56 = (float)uVar49;
                          func_0x000107499afc();
                          fStack_35c = fVar56;
                          uStack_360 = SUB41(fVar52,0);
                          uStack_35f = (undefined1)((uint)fVar52 >> 8);
                          uStack_35e = (undefined1)((uint)fVar52 >> 0x10);
                          uStack_35d = (undefined1)((uint)fVar52 >> 0x18);
                          uStack_358 = 0;
                          uStack_354 = 0;
                          pplVar19 = param_6 + 0x82;
                          pplVar29 = param_6 + 0x84;
                          plVar24 = param_6[0x84];
                          if (plVar24 == (long *)0x0) {
                            func_0x0001074997ec();
                            func_0x00010749983c();
                            lStack_2d0 = CONCAT53(uStack_2b5,CONCAT12(uStack_2b6,uStack_2b8));
                            plStack_2d8 = (long *)0x10;
                            func_0x000107499848();
                            pplVar31 = pplVar29;
                            func_0x000107308dac(pplVar29,&uStack_398);
                            func_0x000107499a88();
                            func_0x000107499930();
                            if (pplVar31 != (long **)0x0) {
                              func_0x00010749976c();
                            }
                            plVar24 = *pplVar29;
LAB_1074973e4:
                            func_0x000107499a9c(plVar24[1]);
                            (*extraout_x8_28)();
                            param_6[0x83] = (long *)CONCAT44(uStack_354,uStack_358);
                            *pplVar19 = (long *)CONCAT44(fStack_35c,
                                                         CONCAT13(uStack_35d,
                                                                  CONCAT12(uStack_35e,
                                                                           CONCAT11(uStack_35f,
                                                                                    uStack_360))));
                          }
                          else {
                            pplVar29 = pplVar19;
                            FUN_107498010(pplVar19,&uStack_360);
                            if ((int)pplVar29 != 0) goto LAB_1074973e4;
                          }
                          func_0x00010749993c(plStack_2c8);
                          func_0x000107499c38();
                          func_0x000107499904();
                          func_0x00010749986c();
                        }
                        uStack_360 = 4;
                        fStack_35c = 0.0;
                        plVar24 = plStack_2c8;
                        func_0x000107499818();
                        func_0x0001074998c4();
                        func_0x000107499c84();
                        if (plVar24 != (long *)0x0) {
                          func_0x00010749976c();
                          func_0x000107499c84();
                          if (plVar24 != (long *)0x0) {
                            func_0x00010749976c();
                          }
                        }
                      }
                    }
                    func_0x0001074999c4();
                    FUN_1074996e0(&plStack_2c0);
                  }
                }
                FUN_1074996e0(&plStack_380);
              }
              func_0x000107499b70();
            }
          }
        }
      }
    }
  }
  else {
    pplVar19 = (long **)*param_7;
    (*(code *)(*pplVar19)[0xb])();
    if ((int)pplVar19 != 0) goto LAB_1074955bc;
  }
LAB_107497460:
  func_0x000107499c50(uStack_98);
  if ((bool)uVar16) {
    return;
  }
  ___stack_chk_fail();
LAB_1074974f8:
  FUN_107498750();
LAB_107497514:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x107497518);
  (*pcVar14)();
}



/* Entry: 107497878; end: 10749789f;  */

int FUN_107497878(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = param_1 - 1U | param_1 - 1U >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    return (uVar1 | uVar1 >> 0x10) + 1;
  }
  return 1;
}



/* Entry: 1074978a0; end: 1074979d3;  */

ulong FUN_1074978a0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong auStack_3b0 [9];
  undefined1 auStack_368 [8];
  undefined1 auStack_360 [72];
  undefined8 uStack_318;
  undefined1 uStack_310;
  undefined1 auStack_1d8 [400];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107751284(auStack_368);
  uStack_310 = 1;
  uStack_318 = param_1;
  func_0x000107751334(auStack_1d8,auStack_368);
  func_0x000107267da8(auStack_368);
  auStack_3b0[8] = 0;
  uVar2 = 0;
  auStack_3b0[5] = 0;
  auStack_3b0[4] = 0;
  auStack_3b0[7] = 0;
  auStack_3b0[6] = 0;
  auStack_3b0[1] = 0;
  auStack_3b0[0] = 0;
  auStack_3b0[3] = 0;
  auStack_3b0[2] = 0;
  func_0x000107753050(auStack_368,*param_2,auStack_1d8,auStack_3b0);
  func_0x00010724b3d8(auStack_3b0);
  func_0x00010727f7dc(auStack_368);
  FUN_1074389c8(auStack_3b0);
  uVar3 = auStack_3b0[0] & 0xffffffff;
  func_0x00010727f7f8(auStack_360);
  func_0x000107267da8();
  func_0x000107499c50(uStack_48);
  if ((bool)in_ZR) {
    return uVar3;
  }
  ___stack_chk_fail();
  func_0x00010727f7f8(auStack_360);
  puVar1 = auStack_1d8;
  func_0x000107267da8();
  func_0x000107499888();
  if (puVar1[0x10] == '\x01') {
    func_0x00010724faa8(puVar1 + 8);
    puVar1[0x10] = 0;
  }
  return uVar2;
}



/* Entry: 1074979d4; end: 107497a07;  */

void FUN_1074979d4(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010724faa8(param_1 + 8);
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 107497a08; end: 107497a1b;  */

void FUN_107497a08(undefined1 *param_1,ulong *param_2,ulong param_3,undefined4 *param_4,
                  undefined8 param_5,uint3 *param_6)

{
  ulong *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_54;
  
  puVar1 = param_2;
  (**(code **)*param_2)();
  if (*puVar1 < (param_3 & 0xffffffff) || *puVar1 < param_3 >> 0x20) {
    uStack_54 = 0;
    uStack_64 = 0;
    uStack_68 = 0;
    pcVar4 = *(code **)(*param_2 + 0x78);
    param_3 = 0x100000001;
    param_5 = 2;
    puVar2 = &uStack_54;
    param_4 = &uStack_68;
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)*param_6;
    pcVar4 = *(code **)(*param_2 + 0x78);
    puVar2 = (undefined4 *)0x0;
  }
  (*pcVar4)(&uStack_60,param_2,param_3,puVar2,param_4,param_5,uVar3);
  *param_1 = 0;
  *(ulong *)(param_1 + 4) = param_3;
  param_1[0xc] = (char)param_5;
  *(undefined8 *)(param_1 + 0x10) = uStack_60;
  return;
}



/* Entry: 107497a1c; end: 107497a6b;  */

undefined8 * FUN_107497a1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    FUN_1074986c0(param_1);
  }
  else {
    *param_1 = *param_2;
    uVar1 = param_2[1];
    param_2[1] = 0;
    param_1[1] = uVar1;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}



/* Entry: 107497a6c; end: 107497a73;  */

void FUN_107497a6c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107499a2c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x50;
    FUN_10749875c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107497a74; end: 107497b0b;  */

void FUN_107497a74(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined4 uStack_98;
  undefined4 auStack_90 [6];
  undefined4 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_DAT_110996720;
  uStack_68 = 0;
  uStack_48 = 0;
  uStack_44 = 1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  auStack_a0[0] = 1;
  uStack_98 = 0;
  uStack_b0 = *param_1;
  uStack_a8 = 3;
  auStack_90[0] = param_2;
  uStack_50 = param_2;
  FUN_10743fa9c(param_1,auStack_90,auStack_a0,&uStack_b0,7);
  func_0x000107262330(auStack_90);
  return;
}



/* Entry: 107497b0c; end: 107497bff;  */

void FUN_107497b0c(undefined1 *param_1,ulong *param_2,ulong param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined8 param_6,uint3 *param_7)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_54;
  
  puVar1 = param_2;
  (**(code **)*param_2)();
  if (*puVar1 < (param_3 & 0xffffffff) || *puVar1 < param_3 >> 0x20) {
    uStack_54 = 0;
    uStack_64 = 0;
    uStack_68 = 0;
    pcVar3 = *(code **)(*param_2 + 0x78);
    param_3 = 0x100000001;
    param_6 = 2;
    param_4 = &uStack_54;
    param_5 = &uStack_68;
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)*param_7;
    pcVar3 = *(code **)(*param_2 + 0x78);
  }
  (*pcVar3)(&uStack_60,param_2,param_3,param_4,param_5,param_6,uVar2);
  *param_1 = 0;
  *(ulong *)(param_1 + 4) = param_3;
  param_1[0xc] = (char)param_6;
  *(undefined8 *)(param_1 + 0x10) = uStack_60;
  return;
}



/* Entry: 107497c00; end: 107497faf;  */

long * FUN_107497c00(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *unaff_x25;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar6 = param_1 + 3;
  func_0x00010726364c();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar12 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar12) == 0) {
      unaff_x25 = (long *)(uVar12 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar13 <= plVar6) {
        uVar5 = 0;
        if (plVar13 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar13);
      }
    }
    plVar11 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_107497cc0;
          plVar3 = (long *)plVar11[1];
          if (plVar3 != plVar6) break;
          plVar3 = plVar11 + 2;
          func_0x000104c32db4(plVar3,param_2);
          if (((ulong)plVar3 & 1) != 0) goto LAB_107497f7c;
        }
        if (((ulong)plVar13 & uVar12) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar12);
        }
        else if (plVar13 <= plVar3) {
          uVar5 = 0;
          if (plVar13 != (long *)0x0) {
            uVar5 = (ulong)plVar3 / (ulong)plVar13;
          }
          plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar13);
        }
      } while (plVar3 == unaff_x25);
    }
  }
LAB_107497cc0:
  plVar3 = param_1 + 2;
  plVar11 = (long *)0x68;
  __Znwm();
  uStack_58 = 1;
  *plVar11 = 0;
  plVar11[1] = (long)plVar6;
  plStack_68 = plVar11;
  plStack_60 = plVar3;
  func_0x000104c2fe00(plVar11 + 2,param_2);
  plVar11[0xc] = 0;
  plVar11[0xb] = 0;
  plVar11[10] = 0;
  plVar11[9] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_107497f04;
  uVar12 = 1;
  if ((long *)0x2 < plVar13) {
    uVar12 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar4 = (long *)(uVar12 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar4 <= plVar13) {
    plVar4 = plVar13;
  }
  if ((long)plVar4 - 1U == 0) {
    plVar4 = (long *)0x2;
  }
  else if (((ulong)plVar4 & (long)plVar4 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar4) {
LAB_107497d78:
    if ((ulong)plVar4 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x107497fa4);
      (*pcVar1)();
    }
    lVar2 = (long)plVar4 << 3;
    __Znwm(lVar2);
    FUN_107499710(param_1,lVar2);
    param_1[1] = (long)plVar4;
    lVar2 = *param_1;
    for (plVar13 = (long *)0x0; plVar4 != plVar13; plVar13 = (long *)((long)plVar13 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar13 * 8) = 0;
    }
    plVar7 = (long *)*plVar3;
    plVar13 = plVar4;
    if (plVar7 != (long *)0x0) {
      plVar8 = (long *)plVar7[1];
      uVar5 = (long)plVar4 - 1;
      uVar12 = 0;
      if (plVar4 != (long *)0x0) {
        uVar12 = (ulong)plVar8 / (ulong)plVar4;
      }
      plVar9 = plVar8;
      if (plVar4 <= plVar8) {
        plVar9 = (long *)((long)plVar8 - uVar12 * (long)plVar4);
      }
      if (((ulong)plVar4 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar8 & uVar5);
      }
      *(long **)(lVar2 + (long)plVar9 * 8) = plVar3;
      while (plVar8 = plVar7, plVar7 = (long *)*plVar8, plVar7 != (long *)0x0) {
        plVar10 = (long *)plVar7[1];
        if (((ulong)plVar4 & uVar5) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar5);
        }
        else if (plVar4 <= plVar10) {
          uVar12 = 0;
          if (plVar4 != (long *)0x0) {
            uVar12 = (ulong)plVar10 / (ulong)plVar4;
          }
          plVar10 = (long *)((long)plVar10 - uVar12 * (long)plVar4);
        }
        if (plVar10 != plVar9) {
          if (*(long *)(lVar2 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar10 * 8) = plVar8;
            plVar9 = plVar10;
          }
          else {
            *plVar8 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + (long)plVar10 * 8);
            **(long **)(lVar2 + (long)plVar10 * 8) = (long)plVar7;
            plVar7 = plVar8;
          }
        }
      }
    }
  }
  else if (plVar4 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 - 1) & 0x3fU));
    }
    if (plVar4 <= plVar7) {
      plVar4 = plVar7;
    }
    if (plVar4 < plVar13) {
      if (plVar4 != (long *)0x0) goto LAB_107497d78;
      FUN_107499710(param_1,0);
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar6);
  }
  else {
    unaff_x25 = plVar6;
    if (plVar13 <= plVar6) {
      uVar12 = 0;
      if (plVar13 != (long *)0x0) {
        uVar12 = (ulong)plVar6 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar6 - uVar12 * (long)plVar13);
    }
  }
LAB_107497f04:
  lVar2 = *param_1;
  plVar6 = *(long **)(lVar2 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar11 = *plVar3;
    *plVar3 = (long)plVar11;
    *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar3;
    if (*plVar11 != 0) {
      plVar6 = *(long **)(*plVar11 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar6) {
        uVar12 = 0;
        if (plVar13 != (long *)0x0) {
          uVar12 = (ulong)plVar6 / (ulong)plVar13;
        }
        plVar6 = (long *)((long)plVar6 - uVar12 * (long)plVar13);
      }
      *(long **)(lVar2 + (long)plVar6 * 8) = plVar11;
    }
  }
  else {
    *plVar11 = *plVar6;
    *plVar6 = (long)plVar11;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_107499728(&plStack_68);
LAB_107497f7c:
  return plVar11 + 9;
}



/* Entry: 107497fb0; end: 107497ff7;  */

bool FUN_107497fb0(float *param_1,float *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return param_1[3] != param_2[3];
  }
  return true;
}



/* Entry: 107497ff8; end: 10749800f;  */

float * FUN_107497ff8(float *param_1,float *param_2)

{
  bool bVar1;
  uint uVar2;
  
  if (((uint)param_1[4] & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  bVar1 = false;
  if ((*param_1 == *param_2) && (bVar1 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
    bVar1 = param_1[1] == param_2[1];
  }
  if (!bVar1) {
    return (float *)0x1;
  }
  uVar2 = (uint)(param_1[2] != param_2[2]);
  if (param_1[3] != param_2[3]) {
    uVar2 = 1;
  }
  return (float *)(ulong)uVar2;
}



/* Entry: 107498010; end: 107498043;  */

bool FUN_107498010(float *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*param_1 == *param_2) && (bVar1 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
    bVar1 = param_1[1] == param_2[1];
  }
  if (!bVar1) {
    return true;
  }
  return param_1[3] != param_2[3] || param_1[2] != param_2[2];
}



/* Entry: 107498044; end: 1074980bf;  */

byte **** FUN_107498044(long *param_1,byte *param_2)

{
  uint uVar1;
  byte ****ppppbVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  byte ***pppbStack_48;
  byte *pbStack_40;
  byte *pbStack_38;
  byte ***pppbStack_30;
  byte ***pppbStack_28;
  
  ppppbVar2 = (byte ****)(param_1 + 2);
  lVar4 = *param_1;
  if ((byte *)((long)*ppppbVar2 - lVar4 >> 3) < param_2) {
    if ((ulong)param_2 >> 0x3d != 0) {
      FUN_1074987dc();
      func_0x000107499a38();
      FUN_10749889c();
      func_0x000107499888();
      uVar3 = (uint)*param_2;
      if (uVar3 == 0) {
        return (byte ****)0x1;
      }
      uVar1 = *(byte *)ppppbVar2 - uVar3;
      if ((uVar3 <= *(byte *)ppppbVar2 && uVar1 != 0) &&
         (*(uint *)(param_2 + 4) == *(uint *)((long)ppppbVar2 + 4) >> (ulong)(uVar1 & 0x1f))) {
        return (byte ****)
               (ulong)(*(uint *)(param_2 + 8) == *(uint *)(ppppbVar2 + 1) >> (ulong)(uVar1 & 0x1f));
      }
      return (byte ****)0x0;
    }
    lVar5 = param_1[1];
    pppbStack_28 = (byte ***)ppppbVar2;
    FUN_10749885c();
    pbStack_40 = (byte *)((long)ppppbVar2 + (lVar5 - lVar4));
    pppbStack_30 = (byte ***)(ppppbVar2 + (long)param_2);
    pppbStack_48 = (byte ***)ppppbVar2;
    pbStack_38 = pbStack_40;
    func_0x000107499c20();
    ppppbVar2 = &pppbStack_48;
    FUN_10749889c(ppppbVar2);
  }
  return ppppbVar2;
}



/* Entry: 1074980c0; end: 107498107;  */

bool FUN_1074980c0(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_2;
  if (uVar2 == 0) {
    return true;
  }
  uVar1 = *param_1 - uVar2;
  if ((uVar2 <= *param_1 && uVar1 != 0) &&
     (*(uint *)(param_2 + 4) == *(uint *)(param_1 + 4) >> (ulong)(uVar1 & 0x1f))) {
    return *(uint *)(param_2 + 8) == *(uint *)(param_1 + 8) >> (ulong)(uVar1 & 0x1f);
  }
  return false;
}



/* Entry: 107498108; end: 107498147;  */

undefined8 * FUN_107498108(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = param_2;
  }
  else {
    puVar2 = param_1;
    FUN_107499238();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 107498148; end: 10749814b;  */

undefined8 FUN_107498148(void)

{
  return 0;
}



/* Entry: 10749814c; end: 10749819f;  */

void FUN_10749814c(long param_1)

{
  func_0x000107499c04(param_1 + 0x3b8);
  func_0x000107499bf0();
  func_0x000107499c04(param_1 + 1000);
  func_0x000107499bf0();
  FUN_1074981a0(param_1 + 0x3f8);
  func_0x000107499c04(param_1 + 0x420);
  func_0x000107499bf0();
  return;
}



/* Entry: 1074981a0; end: 1074981c3;  */

void FUN_1074981a0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107499a2c(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x20) {
    func_0x00010730b284(lVar1 + -0x10);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074981c4; end: 1074982c7;  */

long FUN_1074981c4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1074982c8; end: 1074982e7;  */

void FUN_1074982c8(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_1074982e8();
  }
  return;
}



/* Entry: 1074982e8; end: 10749830b;  */

undefined8 FUN_1074982e8(undefined8 param_1)

{
  FUN_10749830c(param_1,0);
  return param_1;
}



/* Entry: 10749830c; end: 107498323;  */

void FUN_10749830c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001074982a0(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107498324; end: 10749833f;  */

void FUN_107498324(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001074982a0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107498340; end: 1074983bf;  */

void FUN_107498340(void)

{
  func_0x000107499b0c();
  func_0x000107498364();
  return;
}



/* Entry: 1074983c0; end: 1074983d7;  */

void FUN_1074983c0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074983d8; end: 10749840b;  */

void FUN_1074983d8(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107499a2c();
  FUN_10749840c();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  FUN_1073235e8(unaff_x20 + 0x20,unaff_x19 + 0x20);
  return;
}



/* Entry: 10749840c; end: 10749842f;  */

undefined8 FUN_10749840c(undefined8 param_1)

{
  FUN_107498430();
  return param_1;
}



/* Entry: 107498430; end: 107498463;  */

void FUN_107498430(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
    }
    return;
  }
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      FUN_1074982e8();
      *(undefined1 *)(param_1 + 1) = 0;
    }
    return;
  }
  FUN_1074984a4();
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 107498464; end: 1074984a3;  */

void FUN_107498464(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_1074982e8();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 1074984a4; end: 1074984cf;  */

undefined8 FUN_1074984a4(undefined8 param_1,undefined8 *param_2)

{
  FUN_1074984d0(param_1,*param_2);
  return param_1;
}



/* Entry: 1074984d0; end: 10749852f;  */

void FUN_1074984d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  __Znwm();
  func_0x000107498500();
  *param_1 = uVar1;
  return;
}



/* Entry: 107498530; end: 10749855b;  */

undefined1 * FUN_107498530(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[8] = 0;
  FUN_10749855c();
  return param_1;
}



/* Entry: 10749855c; end: 10749856f;  */

void FUN_10749855c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_1074984a4();
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  return;
}



/* Entry: 107498570; end: 10749864f;  */

undefined8 * FUN_107498570(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    puVar9 = puVar3 + 1;
    *puVar3 = param_2;
    puVar3 = param_1;
  }
  else {
    puVar6 = (undefined8 *)*param_1;
    lVar7 = (long)puVar3 - (long)puVar6;
    uVar1 = (lVar7 >> 3) + 1;
    puVar3 = param_1;
    if (uVar1 >> 0x3d != 0) {
      FUN_107498650();
LAB_10749864c:
      func_0x000104bd35f4();
      func_0x000107499854();
      func_0x000107499cd8();
      if (puVar3 != (undefined8 *)0x0) {
        param_1[1] = puVar3;
        __ZdlPv();
      }
      return param_1;
    }
    uVar4 = (long)param_1[2] - (long)puVar6;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      lVar2 = 0;
    }
    else {
      if (uVar5 >> 0x3d != 0) goto LAB_10749864c;
      lVar2 = uVar5 << 3;
      __Znwm();
    }
    puVar3 = (undefined8 *)(lVar2 + lVar7);
    puVar8 = puVar3 + -(lVar7 >> 3);
    puVar9 = puVar3 + 1;
    *puVar3 = param_2;
    puVar3 = puVar8;
    _memcpy(puVar8,puVar6,lVar7);
    *param_1 = puVar8;
    param_1[1] = puVar9;
    param_1[2] = lVar2 + uVar5 * 8;
    if (puVar6 != (undefined8 *)0x0) {
      __ZdlPv(puVar6);
      puVar3 = puVar6;
    }
  }
  param_1[1] = puVar9;
  return puVar3;
}



/* Entry: 107498650; end: 10749865b;  */

void FUN_107498650(long param_1)

{
  long unaff_x19;
  
  func_0x000107499854();
  func_0x000107499cd8();
  if (param_1 != 0) {
    *(long *)(unaff_x19 + 8) = param_1;
    __ZdlPv();
  }
  return;
}



/* Entry: 10749865c; end: 107498683;  */

void FUN_10749865c(long param_1)

{
  long unaff_x19;
  
  func_0x000107499cd8();
  if (param_1 != 0) {
    *(long *)(unaff_x19 + 8) = param_1;
    __ZdlPv();
  }
  return;
}



/* Entry: 107498684; end: 10749869f;  */

void FUN_107498684(long param_1)

{
  FUN_1074986a0();
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}



/* Entry: 1074986a0; end: 1074986bf;  */

void FUN_1074986a0(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(undefined1 *)(param_1 + lVar1) = 0;
    ((undefined1 *)(param_1 + lVar1))[0x10] = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x60);
  return;
}



/* Entry: 1074986c0; end: 10749874f;  */

undefined8 * FUN_1074986c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x0001074986e8(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 107498750; end: 10749875b;  */

long FUN_107498750(long param_1)

{
  func_0x000107499854();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  func_0x00010724faa8(param_1 + 0x20);
  func_0x00010730b0e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10749875c; end: 10749878f;  */

long FUN_10749875c(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  func_0x00010724faa8(param_1 + 0x20);
  func_0x00010730b0e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 107498790; end: 10749879b;  */

void FUN_107498790(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107499854();
  func_0x000107499a2c();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x20) {
    func_0x00010730b284(lVar1 + -0x10);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10749879c; end: 1074987db;  */

void FUN_10749879c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107499a2c();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x20) {
    func_0x00010730b284(lVar1 + -0x10);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074987dc; end: 1074987e7;  */

void FUN_1074987dc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000107499854();
  func_0x000107499a2c();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1074987e8; end: 10749885b;  */

void FUN_1074987e8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000107499a2c();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10749885c; end: 10749887f;  */

void FUN_10749885c(void)

{
  FUN_107498880();
  return;
}



/* Entry: 107498880; end: 10749889b;  */

long * FUN_107498880(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1074988c8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10749889c; end: 1074988c7;  */

long * FUN_10749889c(long *param_1)

{
  FUN_1074988c8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074988c8; end: 1074988eb;  */

void FUN_1074988c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1074988ec; end: 10749892b;  */

code * FUN_1074988ec(long *param_1,code *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  code *pcVar14;
  long extraout_x9;
  code *extraout_x9_00;
  ulong uVar15;
  code *extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  code *extraout_x10;
  code *extraout_x10_00;
  code *extraout_x10_01;
  long extraout_x10_02;
  ulong uVar16;
  long extraout_x10_03;
  long extraout_x11;
  long extraout_x11_00;
  long lVar17;
  long lVar18;
  long extraout_x12;
  code *extraout_x12_00;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  code *unaff_x19;
  code *unaff_x20;
  code *pcStack_18;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    pcVar14 = (code *)(param_1[2] - *param_1 >> 2);
    if (pcVar14 <= param_2) {
      pcVar14 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      pcVar14 = (code *)0x1fffffffffffffff;
    }
    return pcVar14;
  }
  FUN_1074987dc();
  pcStack_18 = FUN_10749892c;
  func_0x000107499a2c();
  do {
    pcVar11 = unaff_x19 + -8;
    pcVar14 = unaff_x20;
LAB_107498964:
    unaff_x20 = pcVar14;
    uVar12 = (long)unaff_x19 - (long)unaff_x20 >> 3;
    uVar4 = 4 < uVar12;
    uVar6 = uVar12 == 5;
    switch(uVar12) {
    case 0:
    case 1:
      goto LAB_107498f2c;
    case 2:
      func_0x0001074997d4(*(long *)(unaff_x19 + -8));
      if ((bool)uVar4 && !(bool)uVar6) {
        *(long *)unaff_x20 = extraout_x8_02;
        *(long *)(unaff_x19 + -8) = extraout_x9;
      }
      goto LAB_107498f2c;
    case 3:
      pcVar14 = unaff_x20 + 8;
      func_0x000107499cfc();
      lVar19 = *(long *)pcVar14;
      lVar13 = *(long *)unaff_x20;
      bVar2 = *(byte *)(lVar19 + 4);
      lVar17 = *(long *)pcVar11;
      bVar3 = *(byte *)(lVar17 + 4);
      if (*(byte *)(lVar13 + 4) < bVar2) {
        if (bVar2 < bVar3) {
          *(long *)unaff_x20 = lVar17;
        }
        else {
          *(long *)unaff_x20 = lVar19;
          *(long *)pcVar14 = lVar13;
          if (*(byte *)(*(long *)pcVar11 + 4) <= *(byte *)(lVar13 + 4)) {
            return unaff_x20;
          }
          *(long *)pcVar14 = *(long *)pcVar11;
        }
        *(long *)pcVar11 = lVar13;
      }
      else {
        bVar5 = bVar2 <= bVar3;
        bVar7 = bVar3 == bVar2;
        if (bVar5 && !bVar7) {
          *(long *)pcVar14 = lVar17;
          *(long *)pcVar11 = lVar19;
          func_0x0001074997d4(*(long *)pcVar14);
          if (bVar5 && !bVar7) {
            *(long *)unaff_x20 = extraout_x8_05;
            *(long *)pcVar14 = extraout_x9_02;
            return unaff_x20;
          }
        }
      }
      return unaff_x20;
    case 4:
      pcVar14 = unaff_x20 + 0x10;
      pcVar10 = unaff_x20;
      func_0x000107499cfc(unaff_x20,unaff_x20 + 8);
      func_0x000107499a2c();
      FUN_107498f40();
      func_0x0001074997d4(*(long *)pcVar11);
      if ((bool)uVar4 && !(bool)uVar6) {
        *(long *)pcVar14 = extraout_x8_06;
        *(long *)pcVar11 = extraout_x9_03;
        func_0x0001074997d4(*(long *)pcVar14);
        if ((bool)uVar4 && !(bool)uVar6) {
          *(long *)unaff_x19 = extraout_x8_07;
          *(long *)pcVar14 = extraout_x9_04;
          func_0x0001074997d4(*(long *)unaff_x19);
          if ((bool)uVar4 && !(bool)uVar6) {
            *(long *)unaff_x20 = extraout_x8_08;
            *(long *)unaff_x19 = extraout_x9_05;
          }
        }
      }
      return pcVar10;
    case 5:
      pcVar14 = unaff_x20 + 0x10;
      pcVar10 = unaff_x20 + 0x18;
      pcVar9 = unaff_x20;
      func_0x000107499cfc(unaff_x20,unaff_x20 + 8);
      func_0x000107499a2c();
      FUN_107498fcc();
      func_0x0001074997d4(*(long *)pcVar11);
      if ((bool)uVar4 && !(bool)uVar6) {
        *(long *)pcVar10 = extraout_x8_09;
        *(long *)pcVar11 = extraout_x9_06;
        func_0x0001074997d4(*(long *)pcVar10);
        if ((bool)uVar4 && !(bool)uVar6) {
          *(long *)pcVar14 = extraout_x8_10;
          *(long *)pcVar10 = extraout_x9_07;
          func_0x0001074997d4(*(long *)pcVar14);
          if ((bool)uVar4 && !(bool)uVar6) {
            *(long *)unaff_x19 = extraout_x8_11;
            *(long *)pcVar14 = extraout_x9_08;
            func_0x0001074997d4(*(long *)unaff_x19);
            if ((bool)uVar4 && !(bool)uVar6) {
              *(long *)unaff_x20 = extraout_x8_12;
              *(long *)unaff_x19 = extraout_x9_09;
            }
          }
        }
      }
      return pcVar9;
    }
    if ((long)uVar12 < 0x18) {
      if ((param_4 & 1) == 0) {
        pcVar14 = unaff_x20;
        if (unaff_x20 != unaff_x19) {
          while( true ) {
            unaff_x20 = unaff_x20 + 8;
            if (pcVar14 + 8 == unaff_x19) break;
            lVar13 = *(long *)pcVar14;
            uVar4 = *(byte *)(lVar13 + 4) <= *(byte *)(*(long *)(pcVar14 + 8) + 4);
            uVar6 = *(byte *)(*(long *)(pcVar14 + 8) + 4) == *(byte *)(lVar13 + 4);
            pcVar14 = pcVar14 + 8;
            if ((bool)uVar4 && !(bool)uVar6) {
              do {
                *(long *)unaff_x20 = lVar13;
                func_0x000107499c90();
                lVar13 = extraout_x11_00;
                unaff_x20 = extraout_x12_00;
              } while ((bool)uVar4 && !(bool)uVar6);
              *(long *)extraout_x12_00 = extraout_x10_03;
              pcVar14 = extraout_x9_01;
              unaff_x20 = extraout_x8_04;
            }
          }
        }
        break;
      }
      if (unaff_x20 == unaff_x19) break;
      lVar13 = 0;
      pcVar14 = unaff_x20;
      goto LAB_107498c98;
    }
    if (param_3 == 0) {
      if (unaff_x20 == unaff_x19) break;
      uVar15 = uVar12 - 2 >> 1;
      uVar16 = uVar15;
      goto LAB_107498d0c;
    }
    pcVar14 = unaff_x20 + (uVar12 >> 1) * 8;
    if (uVar12 < 0x81) {
      func_0x000107499b28(pcVar14,unaff_x20);
    }
    else {
      func_0x000107499b28(unaff_x20,pcVar14);
      FUN_107498f40(unaff_x20 + 8,pcVar14 + -8,unaff_x19 + -0x10);
      FUN_107498f40(unaff_x20 + 0x10,pcVar14 + 8,unaff_x19 + -0x18);
      FUN_107498f40(pcVar14 + -8,pcVar14,pcVar14 + 8);
      lVar13 = *(long *)unaff_x20;
      *(long *)unaff_x20 = *(long *)pcVar14;
      *(long *)pcVar14 = lVar13;
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      lVar13 = *(long *)unaff_x20;
      bVar2 = *(byte *)(lVar13 + 4);
      if (*(byte *)(*(long *)(unaff_x20 + -8) + 4) <= bVar2) {
        pcVar14 = unaff_x20;
        if (*(byte *)(*(long *)pcVar11 + 4) < bVar2) {
          do {
            pcVar14 = pcVar14 + 8;
          } while (bVar2 <= *(byte *)(*(long *)pcVar14 + 4));
        }
        else {
          pcVar10 = unaff_x20 + 8;
          do {
            pcVar14 = pcVar10;
            bVar5 = unaff_x19 <= pcVar14;
            bVar7 = pcVar14 == unaff_x19;
            if (bVar5) break;
            func_0x000107499cb8();
            lVar13 = extraout_x8;
            pcVar10 = extraout_x10;
          } while (!bVar5 || bVar7);
        }
        uVar4 = unaff_x19 <= pcVar14;
        uVar6 = pcVar14 == unaff_x19;
        pcVar10 = unaff_x19;
        if (!(bool)uVar4) {
          do {
            func_0x000107499cb8();
            lVar13 = extraout_x8_00;
            pcVar10 = extraout_x10_00;
          } while ((bool)uVar4 && !(bool)uVar6);
        }
        while (uVar6 = pcVar14 == pcVar10, pcVar14 < pcVar10) {
          lVar13 = *(long *)pcVar14;
          *(long *)pcVar14 = *(long *)pcVar10;
          *(long *)pcVar10 = lVar13;
          uVar4 = 0;
          do {
            pcVar14 = pcVar14 + 8;
            func_0x000107499cb8();
          } while (!(bool)uVar4 || (bool)uVar6);
          do {
            func_0x000107499cb8();
            lVar13 = extraout_x8_01;
            pcVar10 = extraout_x10_01;
          } while ((bool)uVar4 && !(bool)uVar6);
        }
        pcVar10 = pcVar14 + -8;
        if (unaff_x20 != pcVar10) {
          *(long *)unaff_x20 = *(long *)pcVar10;
        }
        param_4 = 0;
        *(long *)pcVar10 = lVar13;
        goto LAB_107498964;
      }
    }
    else {
      lVar13 = *(long *)unaff_x20;
      bVar2 = *(byte *)(lVar13 + 4);
    }
    lVar19 = 0;
    do {
      lVar17 = *(long *)(unaff_x20 + lVar19 + 8);
      lVar19 = lVar19 + 8;
    } while (bVar2 < *(byte *)(lVar17 + 4));
    pcVar10 = unaff_x20 + lVar19;
    pcVar9 = unaff_x19;
    pcVar14 = pcVar10;
    if (lVar19 == 8) {
      do {
        pcVar8 = pcVar9;
        if (pcVar9 <= pcVar10) break;
        pcVar9 = pcVar9 + -8;
        pcVar8 = pcVar9;
      } while (*(byte *)(*(long *)pcVar9 + 4) <= bVar2);
    }
    else {
      do {
        pcVar9 = pcVar9 + -8;
        pcVar8 = pcVar9;
      } while (*(byte *)(*(long *)pcVar9 + 4) <= bVar2);
    }
    while (pcVar14 < pcVar9) {
      *(long *)pcVar14 = *(long *)pcVar9;
      *(long *)pcVar9 = lVar17;
      do {
        pcVar14 = pcVar14 + 8;
        lVar17 = *(long *)pcVar14;
      } while (*(byte *)(lVar13 + 4) < *(byte *)(lVar17 + 4));
      do {
        pcVar9 = pcVar9 + -8;
      } while (*(byte *)(*(long *)pcVar9 + 4) <= *(byte *)(lVar13 + 4));
    }
    pcVar9 = pcVar14 + -8;
    if (unaff_x20 != pcVar9) {
      *(long *)unaff_x20 = *(long *)pcVar9;
    }
    *(long *)pcVar9 = lVar13;
    if (pcVar10 < pcVar8) goto LAB_107498b00;
    pcVar10 = unaff_x20;
    FUN_1074990d8(unaff_x20,pcVar9);
    pcVar8 = pcVar14;
    FUN_1074990d8(pcVar14,unaff_x19);
    if ((int)pcVar8 == 0) goto code_r0x000107498afc;
    unaff_x19 = pcVar9;
  } while (((ulong)pcVar10 & 1) == 0);
  goto LAB_107498f2c;
LAB_107498c98:
  pcVar11 = pcVar14 + 8;
  if (pcVar11 == unaff_x19) goto LAB_107498f2c;
  lVar19 = *(long *)pcVar14;
  lVar17 = *(long *)(pcVar14 + 8);
  uVar4 = *(byte *)(lVar19 + 4) <= *(byte *)(lVar17 + 4);
  uVar6 = *(byte *)(lVar17 + 4) == *(byte *)(lVar19 + 4);
  lVar18 = lVar13;
  if ((bool)uVar4 && !(bool)uVar6) {
    do {
      *(long *)(unaff_x20 + lVar18 + 8) = lVar19;
      pcVar14 = unaff_x20;
      if (lVar18 == 0) goto LAB_107498ce4;
      func_0x000107499c90();
      lVar13 = extraout_x8_03;
      pcVar11 = extraout_x9_00;
      lVar17 = extraout_x10_02;
      lVar19 = extraout_x11;
      lVar18 = extraout_x12;
    } while ((bool)uVar4 && !(bool)uVar6);
    pcVar14 = unaff_x20 + extraout_x12 + 8;
LAB_107498ce4:
    *(long *)pcVar14 = lVar17;
  }
  lVar13 = lVar13 + 8;
  pcVar14 = pcVar11;
  goto LAB_107498c98;
code_r0x000107498afc:
  if (((ulong)pcVar10 & 1) == 0) {
LAB_107498b00:
    FUN_10749892c(unaff_x20,pcVar9,param_3,(uint)param_4 & 1);
    param_4 = 0;
  }
  goto LAB_107498964;
LAB_107498d0c:
  do {
    if ((long)uVar16 <= (long)uVar15) {
      uVar20 = (uVar16 & 0x3fffffffffffffff) << 1 | 1;
      pcVar14 = unaff_x20 + uVar20 * 8;
      uVar1 = uVar16 * 2 + 2;
      lVar19 = *(long *)pcVar14;
      pcVar11 = pcVar14;
      uVar21 = uVar20;
      lVar13 = lVar19;
      if ((long)uVar1 < (long)uVar12) {
        lVar13 = *(long *)(pcVar14 + 8);
        pcVar11 = pcVar14 + 8;
        uVar21 = uVar1;
        if (*(byte *)(lVar19 + 4) <= *(byte *)(lVar13 + 4)) {
          pcVar11 = pcVar14;
          uVar21 = uVar20;
          lVar13 = lVar19;
        }
      }
      lVar19 = *(long *)(unaff_x20 + uVar16 * 8);
      if (*(byte *)(lVar13 + 4) <= *(byte *)(lVar19 + 4)) {
        lVar13 = *(long *)pcVar11;
        pcVar14 = unaff_x20 + uVar16 * 8;
        do {
          pcVar10 = pcVar11;
          *(long *)pcVar14 = lVar13;
          if ((long)uVar15 < (long)uVar21) break;
          uVar20 = uVar21 << 1 | 1;
          pcVar14 = unaff_x20 + uVar20 * 8;
          uVar1 = uVar21 * 2 + 2;
          lVar17 = *(long *)pcVar14;
          pcVar11 = pcVar14;
          lVar13 = lVar17;
          uVar21 = uVar20;
          if ((long)uVar1 < (long)uVar12) {
            lVar13 = *(long *)(pcVar14 + 8);
            pcVar11 = pcVar14 + 8;
            uVar21 = uVar1;
            if (*(byte *)(lVar17 + 4) <= *(byte *)(lVar13 + 4)) {
              pcVar11 = pcVar14;
              lVar13 = lVar17;
              uVar21 = uVar20;
            }
          }
          pcVar14 = pcVar10;
        } while (*(byte *)(lVar13 + 4) <= *(byte *)(lVar19 + 4));
        *(long *)pcVar10 = lVar19;
      }
    }
    uVar16 = uVar16 - 1;
  } while (-1 < (long)uVar16);
  for (; 1 < (long)uVar12; uVar12 = uVar12 - 1) {
    lVar13 = *(long *)unaff_x20;
    pcVar14 = unaff_x20;
    uVar16 = 0;
    do {
      uVar1 = uVar16 << 1 | 1;
      uVar15 = uVar16 * 2 + 2;
      pcVar11 = pcVar14 + (uVar16 + 1) * 8;
      uVar20 = uVar1;
      if (((long)uVar15 < (long)uVar12) &&
         (pcVar11 = pcVar14 + (uVar16 + 2) * 8, uVar20 = uVar15,
         *(byte *)(*(long *)(pcVar14 + (uVar16 + 1) * 8) + 4) <=
         *(byte *)(*(long *)(pcVar14 + (uVar16 + 2) * 8) + 4))) {
        pcVar11 = pcVar14 + (uVar16 + 1) * 8;
        uVar20 = uVar1;
      }
      *(long *)pcVar14 = *(long *)pcVar11;
      pcVar14 = pcVar11;
      uVar16 = uVar20;
    } while ((long)uVar20 <= (long)(uVar12 - 2 >> 1));
    unaff_x19 = unaff_x19 + -8;
    if (pcVar11 == unaff_x19) {
      *(long *)pcVar11 = lVar13;
    }
    else {
      *(long *)pcVar11 = *(long *)unaff_x19;
      *(long *)unaff_x19 = lVar13;
      if (1 < (long)(pcVar11 + (8 - (long)unaff_x20)) >> 3) {
        uVar16 = ((long)(pcVar11 + (8 - (long)unaff_x20)) >> 3) - 2U >> 1;
        lVar19 = *(long *)(unaff_x20 + uVar16 * 8);
        lVar13 = *(long *)pcVar11;
        pcVar14 = unaff_x20 + uVar16 * 8;
        if (*(byte *)(lVar13 + 4) < *(byte *)(lVar19 + 4)) {
          do {
            pcVar10 = pcVar14;
            *(long *)pcVar11 = lVar19;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            lVar19 = *(long *)(unaff_x20 + uVar16 * 8);
            pcVar11 = pcVar10;
            pcVar14 = unaff_x20 + uVar16 * 8;
          } while (*(byte *)(lVar13 + 4) < *(byte *)(lVar19 + 4));
          *(long *)pcVar10 = lVar13;
        }
      }
    }
  }
LAB_107498f2c:
  func_0x000107499cfc(FUN_10749892c);
  return pcStack_18;
}



/* Entry: 10749892c; end: 107498f3f;  */

void FUN_10749892c(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long *plVar14;
  long extraout_x9;
  long *extraout_x9_00;
  ulong uVar15;
  long *extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long extraout_x10_02;
  ulong uVar16;
  long extraout_x10_03;
  long extraout_x11;
  long extraout_x11_00;
  long lVar17;
  long lVar18;
  long extraout_x12;
  long *extraout_x12_00;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x30;
  
  func_0x000107499a2c();
  do {
    plVar11 = unaff_x19 + -1;
    plVar10 = unaff_x20;
LAB_107498964:
    unaff_x20 = plVar10;
    uVar12 = (long)unaff_x19 - (long)unaff_x20 >> 3;
    uVar4 = 4 < uVar12;
    uVar6 = uVar12 == 5;
    switch(uVar12) {
    case 0:
    case 1:
      goto LAB_107498f2c;
    case 2:
      func_0x0001074997d4(unaff_x19[-1]);
      if ((bool)uVar4 && !(bool)uVar6) {
        *unaff_x20 = extraout_x8_02;
        unaff_x19[-1] = extraout_x9;
      }
      goto LAB_107498f2c;
    case 3:
      plVar10 = unaff_x20 + 1;
      func_0x000107499cfc();
      lVar19 = *plVar10;
      lVar13 = *unaff_x20;
      bVar2 = *(byte *)(lVar19 + 4);
      lVar17 = *plVar11;
      bVar3 = *(byte *)(lVar17 + 4);
      if (*(byte *)(lVar13 + 4) < bVar2) {
        if (bVar2 < bVar3) {
          *unaff_x20 = lVar17;
        }
        else {
          *unaff_x20 = lVar19;
          *plVar10 = lVar13;
          if (*(byte *)(*plVar11 + 4) <= *(byte *)(lVar13 + 4)) {
            return;
          }
          *plVar10 = *plVar11;
        }
        *plVar11 = lVar13;
      }
      else {
        bVar5 = bVar2 <= bVar3;
        bVar7 = bVar3 == bVar2;
        if (bVar5 && !bVar7) {
          *plVar10 = lVar17;
          *plVar11 = lVar19;
          func_0x0001074997d4(*plVar10);
          if (bVar5 && !bVar7) {
            *unaff_x20 = extraout_x8_05;
            *plVar10 = extraout_x9_02;
            return;
          }
        }
      }
      return;
    case 4:
      plVar10 = unaff_x20 + 2;
      func_0x000107499cfc(unaff_x20,unaff_x20 + 1);
      func_0x000107499a2c();
      FUN_107498f40();
      func_0x0001074997d4(*plVar11);
      if ((bool)uVar4 && !(bool)uVar6) {
        *plVar10 = extraout_x8_06;
        *plVar11 = extraout_x9_03;
        func_0x0001074997d4(*plVar10);
        if ((bool)uVar4 && !(bool)uVar6) {
          *unaff_x19 = extraout_x8_07;
          *plVar10 = extraout_x9_04;
          func_0x0001074997d4(*unaff_x19);
          if ((bool)uVar4 && !(bool)uVar6) {
            *unaff_x20 = extraout_x8_08;
            *unaff_x19 = extraout_x9_05;
          }
        }
      }
      return;
    case 5:
      plVar10 = unaff_x20 + 2;
      plVar8 = unaff_x20 + 3;
      func_0x000107499cfc(unaff_x20,unaff_x20 + 1);
      func_0x000107499a2c();
      FUN_107498fcc();
      func_0x0001074997d4(*plVar11);
      if ((bool)uVar4 && !(bool)uVar6) {
        *plVar8 = extraout_x8_09;
        *plVar11 = extraout_x9_06;
        func_0x0001074997d4(*plVar8);
        if ((bool)uVar4 && !(bool)uVar6) {
          *plVar10 = extraout_x8_10;
          *plVar8 = extraout_x9_07;
          func_0x0001074997d4(*plVar10);
          if ((bool)uVar4 && !(bool)uVar6) {
            *unaff_x19 = extraout_x8_11;
            *plVar10 = extraout_x9_08;
            func_0x0001074997d4(*unaff_x19);
            if ((bool)uVar4 && !(bool)uVar6) {
              *unaff_x20 = extraout_x8_12;
              *unaff_x19 = extraout_x9_09;
            }
          }
        }
      }
      return;
    }
    if ((long)uVar12 < 0x18) {
      if ((param_4 & 1) == 0) {
        plVar10 = unaff_x20;
        if (unaff_x20 != unaff_x19) {
          while( true ) {
            unaff_x20 = unaff_x20 + 1;
            if (plVar10 + 1 == unaff_x19) break;
            lVar13 = *plVar10;
            uVar4 = *(byte *)(lVar13 + 4) <= *(byte *)(plVar10[1] + 4);
            uVar6 = *(byte *)(plVar10[1] + 4) == *(byte *)(lVar13 + 4);
            plVar10 = plVar10 + 1;
            if ((bool)uVar4 && !(bool)uVar6) {
              do {
                *unaff_x20 = lVar13;
                func_0x000107499c90();
                lVar13 = extraout_x11_00;
                unaff_x20 = extraout_x12_00;
              } while ((bool)uVar4 && !(bool)uVar6);
              *extraout_x12_00 = extraout_x10_03;
              plVar10 = extraout_x9_01;
              unaff_x20 = extraout_x8_04;
            }
          }
        }
        break;
      }
      if (unaff_x20 == unaff_x19) break;
      lVar13 = 0;
      plVar10 = unaff_x20;
      goto LAB_107498c98;
    }
    if (param_3 == 0) {
      if (unaff_x20 == unaff_x19) break;
      uVar15 = uVar12 - 2 >> 1;
      uVar16 = uVar15;
      goto LAB_107498d0c;
    }
    plVar10 = unaff_x20 + (uVar12 >> 1);
    if (uVar12 < 0x81) {
      func_0x000107499b28(plVar10,unaff_x20);
    }
    else {
      func_0x000107499b28(unaff_x20,plVar10);
      FUN_107498f40(unaff_x20 + 1,plVar10 + -1,unaff_x19 + -2);
      FUN_107498f40(unaff_x20 + 2,plVar10 + 1,unaff_x19 + -3);
      FUN_107498f40(plVar10 + -1,plVar10,plVar10 + 1);
      lVar13 = *unaff_x20;
      *unaff_x20 = *plVar10;
      *plVar10 = lVar13;
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      lVar13 = *unaff_x20;
      bVar2 = *(byte *)(lVar13 + 4);
      if (*(byte *)(unaff_x20[-1] + 4) <= bVar2) {
        plVar10 = unaff_x20;
        if (*(byte *)(*plVar11 + 4) < bVar2) {
          do {
            plVar10 = plVar10 + 1;
          } while (bVar2 <= *(byte *)(*plVar10 + 4));
        }
        else {
          plVar8 = unaff_x20 + 1;
          do {
            plVar10 = plVar8;
            bVar5 = unaff_x19 <= plVar10;
            bVar7 = plVar10 == unaff_x19;
            if (bVar5) break;
            func_0x000107499cb8();
            lVar13 = extraout_x8;
            plVar8 = extraout_x10;
          } while (!bVar5 || bVar7);
        }
        uVar4 = unaff_x19 <= plVar10;
        uVar6 = plVar10 == unaff_x19;
        plVar8 = unaff_x19;
        if (!(bool)uVar4) {
          do {
            func_0x000107499cb8();
            lVar13 = extraout_x8_00;
            plVar8 = extraout_x10_00;
          } while ((bool)uVar4 && !(bool)uVar6);
        }
        while (uVar6 = plVar10 == plVar8, plVar10 < plVar8) {
          lVar13 = *plVar10;
          *plVar10 = *plVar8;
          *plVar8 = lVar13;
          uVar4 = 0;
          do {
            plVar10 = plVar10 + 1;
            func_0x000107499cb8();
          } while (!(bool)uVar4 || (bool)uVar6);
          do {
            func_0x000107499cb8();
            lVar13 = extraout_x8_01;
            plVar8 = extraout_x10_01;
          } while ((bool)uVar4 && !(bool)uVar6);
        }
        plVar8 = plVar10 + -1;
        if (unaff_x20 != plVar8) {
          *unaff_x20 = *plVar8;
        }
        param_4 = 0;
        *plVar8 = lVar13;
        goto LAB_107498964;
      }
    }
    else {
      lVar13 = *unaff_x20;
      bVar2 = *(byte *)(lVar13 + 4);
    }
    lVar19 = 0;
    do {
      lVar17 = *(long *)((long)unaff_x20 + lVar19 + 8);
      lVar19 = lVar19 + 8;
    } while (bVar2 < *(byte *)(lVar17 + 4));
    plVar8 = (long *)((long)unaff_x20 + lVar19);
    plVar14 = unaff_x19;
    plVar10 = plVar8;
    if (lVar19 == 8) {
      do {
        plVar9 = plVar14;
        if (plVar14 <= plVar8) break;
        plVar14 = plVar14 + -1;
        plVar9 = plVar14;
      } while (*(byte *)(*plVar14 + 4) <= bVar2);
    }
    else {
      do {
        plVar14 = plVar14 + -1;
        plVar9 = plVar14;
      } while (*(byte *)(*plVar14 + 4) <= bVar2);
    }
    while (plVar10 < plVar14) {
      *plVar10 = *plVar14;
      *plVar14 = lVar17;
      do {
        plVar10 = plVar10 + 1;
        lVar17 = *plVar10;
      } while (*(byte *)(lVar13 + 4) < *(byte *)(lVar17 + 4));
      do {
        plVar14 = plVar14 + -1;
      } while (*(byte *)(*plVar14 + 4) <= *(byte *)(lVar13 + 4));
    }
    plVar14 = plVar10 + -1;
    if (unaff_x20 != plVar14) {
      *unaff_x20 = *plVar14;
    }
    *plVar14 = lVar13;
    if (plVar8 < plVar9) goto LAB_107498b00;
    plVar8 = unaff_x20;
    FUN_1074990d8(unaff_x20,plVar14);
    plVar9 = plVar10;
    FUN_1074990d8(plVar10,unaff_x19);
    if ((int)plVar9 == 0) goto code_r0x000107498afc;
    unaff_x19 = plVar14;
  } while (((ulong)plVar8 & 1) == 0);
  goto LAB_107498f2c;
LAB_107498c98:
  plVar11 = plVar10 + 1;
  if (plVar11 == unaff_x19) goto LAB_107498f2c;
  lVar19 = *plVar10;
  lVar17 = plVar10[1];
  uVar4 = *(byte *)(lVar19 + 4) <= *(byte *)(lVar17 + 4);
  uVar6 = *(byte *)(lVar17 + 4) == *(byte *)(lVar19 + 4);
  lVar18 = lVar13;
  if ((bool)uVar4 && !(bool)uVar6) {
    do {
      *(long *)((long)unaff_x20 + lVar18 + 8) = lVar19;
      plVar10 = unaff_x20;
      if (lVar18 == 0) goto LAB_107498ce4;
      func_0x000107499c90();
      lVar13 = extraout_x8_03;
      plVar11 = extraout_x9_00;
      lVar17 = extraout_x10_02;
      lVar19 = extraout_x11;
      lVar18 = extraout_x12;
    } while ((bool)uVar4 && !(bool)uVar6);
    plVar10 = (long *)((long)unaff_x20 + extraout_x12 + 8);
LAB_107498ce4:
    *plVar10 = lVar17;
  }
  lVar13 = lVar13 + 8;
  plVar10 = plVar11;
  goto LAB_107498c98;
code_r0x000107498afc:
  if (((ulong)plVar8 & 1) == 0) {
LAB_107498b00:
    FUN_10749892c(unaff_x20,plVar14,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_107498964;
LAB_107498d0c:
  do {
    if ((long)uVar16 <= (long)uVar15) {
      uVar20 = (uVar16 & 0x3fffffffffffffff) << 1 | 1;
      plVar10 = unaff_x20 + uVar20;
      uVar1 = uVar16 * 2 + 2;
      lVar19 = *plVar10;
      plVar11 = plVar10;
      uVar21 = uVar20;
      lVar13 = lVar19;
      if ((long)uVar1 < (long)uVar12) {
        lVar13 = plVar10[1];
        plVar11 = plVar10 + 1;
        uVar21 = uVar1;
        if (*(byte *)(lVar19 + 4) <= *(byte *)(lVar13 + 4)) {
          plVar11 = plVar10;
          uVar21 = uVar20;
          lVar13 = lVar19;
        }
      }
      lVar19 = unaff_x20[uVar16];
      if (*(byte *)(lVar13 + 4) <= *(byte *)(lVar19 + 4)) {
        lVar13 = *plVar11;
        plVar10 = unaff_x20 + uVar16;
        do {
          plVar8 = plVar11;
          *plVar10 = lVar13;
          if ((long)uVar15 < (long)uVar21) break;
          uVar20 = uVar21 << 1 | 1;
          plVar10 = unaff_x20 + uVar20;
          uVar1 = uVar21 * 2 + 2;
          lVar17 = *plVar10;
          plVar11 = plVar10;
          lVar13 = lVar17;
          uVar21 = uVar20;
          if ((long)uVar1 < (long)uVar12) {
            lVar13 = plVar10[1];
            plVar11 = plVar10 + 1;
            uVar21 = uVar1;
            if (*(byte *)(lVar17 + 4) <= *(byte *)(lVar13 + 4)) {
              plVar11 = plVar10;
              lVar13 = lVar17;
              uVar21 = uVar20;
            }
          }
          plVar10 = plVar8;
        } while (*(byte *)(lVar13 + 4) <= *(byte *)(lVar19 + 4));
        *plVar8 = lVar19;
      }
    }
    uVar16 = uVar16 - 1;
  } while (-1 < (long)uVar16);
  for (; 1 < (long)uVar12; uVar12 = uVar12 - 1) {
    lVar13 = *unaff_x20;
    plVar10 = unaff_x20;
    uVar16 = 0;
    do {
      uVar1 = uVar16 << 1 | 1;
      uVar15 = uVar16 * 2 + 2;
      plVar11 = plVar10 + uVar16 + 1;
      uVar20 = uVar1;
      if (((long)uVar15 < (long)uVar12) &&
         (plVar11 = plVar10 + uVar16 + 2, uVar20 = uVar15,
         *(byte *)(plVar10[uVar16 + 1] + 4) <= *(byte *)(plVar10[uVar16 + 2] + 4))) {
        plVar11 = plVar10 + uVar16 + 1;
        uVar20 = uVar1;
      }
      *plVar10 = *plVar11;
      plVar10 = plVar11;
      uVar16 = uVar20;
    } while ((long)uVar20 <= (long)(uVar12 - 2 >> 1));
    unaff_x19 = unaff_x19 + -1;
    if (plVar11 == unaff_x19) {
      *plVar11 = lVar13;
    }
    else {
      *plVar11 = *unaff_x19;
      *unaff_x19 = lVar13;
      lVar13 = (long)plVar11 + (8 - (long)unaff_x20) >> 3;
      if (1 < lVar13) {
        uVar16 = lVar13 - 2U >> 1;
        lVar19 = unaff_x20[uVar16];
        lVar13 = *plVar11;
        plVar10 = unaff_x20 + uVar16;
        if (*(byte *)(lVar13 + 4) < *(byte *)(lVar19 + 4)) {
          do {
            plVar8 = plVar10;
            *plVar11 = lVar19;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            lVar19 = unaff_x20[uVar16];
            plVar11 = plVar8;
            plVar10 = unaff_x20 + uVar16;
          } while (*(byte *)(lVar13 + 4) < *(byte *)(lVar19 + 4));
          *plVar8 = lVar13;
        }
      }
    }
  }
LAB_107498f2c:
  func_0x000107499cfc(unaff_x30);
  return;
}



/* Entry: 107498f40; end: 107498fcb;  */

void FUN_107498f40(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x9;
  long lVar7;
  
  lVar6 = *param_2;
  lVar5 = *param_1;
  bVar1 = *(byte *)(lVar6 + 4);
  lVar7 = *param_3;
  bVar2 = *(byte *)(lVar7 + 4);
  if (*(byte *)(lVar5 + 4) < bVar1) {
    if (bVar1 < bVar2) {
      *param_1 = lVar7;
    }
    else {
      *param_1 = lVar6;
      *param_2 = lVar5;
      if (*(byte *)(*param_3 + 4) <= *(byte *)(lVar5 + 4)) {
        return;
      }
      *param_2 = *param_3;
    }
    *param_3 = lVar5;
  }
  else {
    bVar3 = bVar1 <= bVar2;
    bVar4 = bVar2 == bVar1;
    if (bVar3 && !bVar4) {
      *param_2 = lVar7;
      *param_3 = lVar6;
      func_0x0001074997d4(*param_2);
      if (bVar3 && !bVar4) {
        *param_1 = extraout_x8;
        *param_2 = extraout_x9;
        return;
      }
    }
  }
  return;
}



/* Entry: 107498fcc; end: 10749903b;  */

void FUN_107498fcc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107499a2c();
  FUN_107498f40();
  func_0x0001074997d4(*param_4);
  if ((bool)in_CY && !(bool)in_ZR) {
    *param_3 = extraout_x8;
    *param_4 = extraout_x9;
    func_0x0001074997d4(*param_3);
    if ((bool)in_CY && !(bool)in_ZR) {
      *unaff_x19 = extraout_x8_00;
      *param_3 = extraout_x9_00;
      func_0x0001074997d4(*unaff_x19);
      if ((bool)in_CY && !(bool)in_ZR) {
        *unaff_x20 = extraout_x8_01;
        *unaff_x19 = extraout_x9_01;
      }
    }
  }
  return;
}



/* Entry: 10749903c; end: 1074990d7;  */

void FUN_10749903c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107499a2c();
  FUN_107498fcc();
  func_0x0001074997d4(*param_5);
  if ((bool)in_CY && !(bool)in_ZR) {
    *param_4 = extraout_x8;
    *param_5 = extraout_x9;
    func_0x0001074997d4(*param_4);
    if ((bool)in_CY && !(bool)in_ZR) {
      *param_3 = extraout_x8_00;
      *param_4 = extraout_x9_00;
      func_0x0001074997d4(*param_3);
      if ((bool)in_CY && !(bool)in_ZR) {
        *unaff_x19 = extraout_x8_01;
        *param_3 = extraout_x9_01;
        func_0x0001074997d4(*unaff_x19);
        if ((bool)in_CY && !(bool)in_ZR) {
          *unaff_x20 = extraout_x8_02;
          *unaff_x19 = extraout_x9_02;
        }
      }
    }
  }
  return;
}



/* Entry: 1074990d8; end: 107499237;  */

void FUN_1074990d8(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  int iVar6;
  long extraout_x9;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar12;
  
  func_0x000107499af0();
  uVar4 = param_2 - param_1 >> 3;
  bVar2 = 4 < uVar4;
  bVar3 = uVar4 == 5;
  switch(uVar4) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x0001074997d4(unaff_x20[-1],1);
    if (bVar2 && !bVar3) {
      *unaff_x19 = extraout_x8;
      unaff_x20[-1] = extraout_x9;
    }
    break;
  case 3:
    FUN_107498f40();
    break;
  case 4:
    FUN_107498fcc();
    break;
  case 5:
    FUN_10749903c();
    break;
  default:
    func_0x000107499b28();
    lVar5 = 0;
    iVar6 = 0;
    plVar10 = unaff_x19 + 3;
    plVar12 = unaff_x19 + 2;
    while (plVar7 = plVar10, plVar7 != unaff_x20) {
      lVar8 = *plVar7;
      lVar9 = *plVar12;
      lVar1 = lVar5;
      if (*(byte *)(lVar9 + 4) < *(byte *)(lVar8 + 4)) {
        do {
          lVar11 = lVar1;
          *(long *)((long)unaff_x19 + lVar11 + 0x18) = lVar9;
          plVar10 = unaff_x19;
          if (lVar11 == -0x10) goto LAB_1074991e0;
          lVar9 = *(long *)((long)unaff_x19 + lVar11 + 8);
          lVar1 = lVar11 + -8;
        } while (*(byte *)(lVar9 + 4) < *(byte *)(lVar8 + 4));
        plVar10 = (long *)((long)unaff_x19 + lVar11 + 0x10);
LAB_1074991e0:
        *plVar10 = lVar8;
        iVar6 = iVar6 + 1;
        if (iVar6 == 8) {
          return;
        }
      }
      lVar5 = lVar5 + 8;
      plVar12 = plVar7;
      plVar10 = plVar7 + 1;
    }
  }
  return;
}



/* Entry: 107499238; end: 1074992cf;  */

long FUN_107499238(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 unaff_x20;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  func_0x000107499af0();
  FUN_1074988ec();
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_58 = unaff_x19 + 2;
  plStack_38 = plStack_58;
  if (param_1 == 0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_10749885c();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar2));
  plStack_40 = plStack_58 + param_1;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = unaff_x20;
  func_0x000107499c20();
  lVar2 = unaff_x19[1];
  FUN_10749889c(&plStack_58);
  return lVar2;
}



/* Entry: 1074992d0; end: 1074992d3;  */

void FUN_1074992d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b4278;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074992d4; end: 1074992e7;  */

void FUN_1074992d4(void)

{
  func_0x0001074992f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074992e8; end: 107499303;  */

undefined8 * FUN_1074992e8(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 107499304; end: 10749937f;  */

long FUN_107499304(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107499380; end: 107499397;  */

void FUN_107499380(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001078730a8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107499398; end: 1074993b3;  */

void FUN_107499398(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001078730a8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074993b4; end: 107499487;  */

void FUN_1074993b4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_70 [48];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x000107498500(auStack_70,param_4);
  puVar2 = param_2 + 2;
  if (*(char *)(param_2 + 3) == '\0') {
    puVar2 = param_3 + 1;
  }
  puVar3 = param_2 + 2;
  if (*(char *)(param_2 + 5) == '\0') {
    puVar3 = param_3 + 1;
  }
  uStack_80 = *(undefined1 *)(param_2 + 6);
  uStack_98 = puVar2[1];
  uStack_a0 = *puVar2;
  uStack_88 = puVar3[3];
  uStack_90 = puVar3[2];
  FUN_107499488(param_1,&uStack_40,auStack_70,&uStack_a0,*param_3);
  func_0x0001074982a0(auStack_70);
  func_0x0001072c9b9c(&uStack_40);
  return;
}



/* Entry: 107499488; end: 10749951b;  */

undefined1 *
FUN_107499488(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,long *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [16];
  
  *param_1 = 0;
  param_1[8] = 0;
  lVar1 = param_4[2];
  if ((char)param_4[3] == '\0') {
    lVar1 = 0;
  }
  *(long *)(param_1 + 0x10) = lVar1 + param_5;
  lVar2 = *param_4;
  if ((char)param_4[1] == '\0') {
    lVar2 = 0;
  }
  *(long *)(param_1 + 0x18) = lVar2 + lVar1 + param_5;
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x28) = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *param_2 = 0;
  param_2[1] = 0;
  if (((*(byte *)(param_4 + 1) & 1) != 0) || ((*(byte *)(param_4 + 3) & 1) != 0)) {
    FUN_10749951c(auStack_30,param_3);
    FUN_10749840c(param_1,auStack_30);
    FUN_1074982c8(auStack_30);
  }
  return param_1;
}



/* Entry: 10749951c; end: 107499537;  */

void FUN_10749951c(long param_1)

{
  FUN_107499538();
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 107499538; end: 107499563;  */

undefined8 FUN_107499538(undefined8 param_1,undefined8 param_2)

{
  FUN_1074984d0(param_1,param_2);
  return param_1;
}



/* Entry: 107499564; end: 10749963f;  */

double FUN_107499564(double param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                    undefined8 *param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  double dVar2;
  float fVar3;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  dVar2 = 0.0;
  if (*(char *)(param_5 + 1) == '\x01') {
    if (param_7 < (long)param_5[3]) {
      lVar1 = param_5[2];
      if (param_7 < lVar1) {
        FUN_107499564(*param_5);
        dVar2 = param_1;
      }
      else {
        fStack_40 = ((float)(param_7 - lVar1) / 1e+09) * 1e+09;
        fStack_3c = (float)(param_5[3] - lVar1);
        fVar3 = fStack_40 / fStack_3c;
        FUN_107499564(*param_5);
        dVar2 = (double)fVar3;
        uStack_38 = param_3;
        uStack_34 = param_4;
        FUN_1073b426c(dVar2,0x3f50624dd2f1a9fc,&UNK_10de73040);
        FUN_107438adc(&fStack_40,&uStack_30);
      }
    }
    else {
      fStack_40 = (float)((uint)fStack_40 & 0xffffff00);
      uStack_38 = uStack_38 & 0xffffff00;
      FUN_10749840c(param_5,&fStack_40);
      FUN_1074982c8(&fStack_40);
    }
  }
  return dVar2;
}



/* Entry: 107499640; end: 107499657;  */

void FUN_107499640(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_3;
  func_0x00010729e6ec(param_1,*param_2);
  func_0x00010002b838();
  func_0x00010729d5c0(unaff_x19 + 0x20,auStack_38,uVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  *(undefined1 *)(unaff_x19 + 0x4c) = 1;
  return;
}



/* Entry: 107499658; end: 1074996df;  */

undefined8 FUN_107499658(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  __ZNSt3__19to_stringEx(auStack_58,param_3);
  func_0x00010726e37c(param_1,&uStack_40,auStack_58);
  func_0x000107499a38();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_40);
  return param_1;
}



/* Entry: 1074996e0; end: 10749970f;  */

void FUN_1074996e0(long *param_1)

{
  func_0x000107499cd8();
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}



/* Entry: 107499710; end: 107499727;  */

void FUN_107499710(long *param_1,long param_2)

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



/* Entry: 107499728; end: 10749976b;  */

long * FUN_107499728(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001073eb0b0(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10749976c; end: 107499d13;  */

void FUN_10749976c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107499774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 107499d14; end: 107499e1f;  */

undefined8 * FUN_107499d14(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  FUN_107499e20(auStack_50,param_2);
  FUN_10749eedc(auStack_40,auStack_50);
  func_0x0001074e3a1c(param_1,auStack_40);
  FUN_1073ad37c(auStack_40);
  FUN_10749decc(auStack_50);
  *param_1 = &PTR_FUN_1109b42c8;
  FUN_107499e60(param_1 + 0xc,param_1[3] + 0x2f0);
  func_0x0001073db558(param_1 + 0xa9,param_3 + 3);
  param_1[0xb3] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  param_1[0xb8] = *param_3;
  func_0x00010724e0f8(param_1 + 0xb9,&section_100000100);
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xbf) = 0;
  return param_1;
}



/* Entry: 107499e20; end: 107499e5f;  */

void FUN_107499e20(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10749ed1c(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10749decc(&uStack_30);
  return;
}



/* Entry: 107499e60; end: 10749a2ab;  */

void FUN_107499e60(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  undefined1 auStack_868 [56];
  undefined1 auStack_830 [88];
  undefined1 auStack_7d8 [56];
  undefined1 auStack_7a0 [88];
  undefined1 auStack_748 [56];
  undefined1 auStack_710 [88];
  undefined1 auStack_6b8 [56];
  undefined1 auStack_680 [88];
  undefined8 uStack_628;
  long lStack_620;
  undefined1 auStack_618 [8];
  undefined1 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long lStack_5f0;
  undefined1 auStack_5e8 [56];
  undefined1 auStack_5b0 [88];
  undefined1 auStack_558 [56];
  undefined1 auStack_520 [88];
  undefined1 auStack_4c8 [72];
  undefined1 auStack_480 [8];
  undefined1 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined1 auStack_460 [72];
  undefined1 auStack_418 [56];
  undefined1 auStack_3e0 [88];
  undefined1 auStack_388 [64];
  undefined1 auStack_348 [96];
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [152];
  undefined1 auStack_248 [192];
  undefined1 auStack_188 [64];
  undefined1 auStack_148 [96];
  undefined1 auStack_e8 [72];
  undefined1 auStack_a0 [104];
  undefined8 uStack_38;
  
  func_0x00010749fcf4();
  uStack_38 = extraout_x8;
  func_0x00010727d614(auStack_418,param_2);
  func_0x00010743b0a8(auStack_3e0,auStack_418);
  FUN_107438188(auStack_e8,param_2 + 0x60);
  func_0x00010743b05c(auStack_a0,auStack_e8);
  func_0x0001072f67c4(auStack_4c8,param_2 + 0xd0);
  auStack_480[0] = 0;
  uStack_478 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  func_0x0001072f5e80(auStack_460,auStack_4c8);
  func_0x00010727d614(auStack_558,param_2 + 0x140);
  func_0x00010743b0a8(auStack_520,auStack_558);
  func_0x00010727d614(auStack_5e8,param_2 + 0x1a0);
  func_0x00010743b0a8(auStack_5b0,auStack_5e8);
  uStack_5f8 = *(undefined8 *)(param_2 + 0x200);
  lStack_620 = *(long *)(param_2 + 0x208);
  lStack_5f0 = lStack_620;
  uStack_628 = uStack_5f8;
  if (lStack_620 != 0) {
    do {
      func_0x00010749fea0();
      uStack_5f8 = extraout_x8_00;
      lStack_5f0 = lStack_620;
    } while (extraout_w11 != 0);
  }
  auStack_618[0] = 0;
  uStack_610 = 0;
  uStack_600 = 0;
  uStack_608 = 0;
  lStack_620 = 0;
  uStack_628 = 0;
  FUN_1073398d4(auStack_188,param_2 + 0x238);
  func_0x000107483538(auStack_148,auStack_188);
  func_0x00010727d614(auStack_6b8,param_2 + 0x2a0);
  func_0x00010743b0a8(auStack_680,auStack_6b8);
  func_0x00010727d614(auStack_748,param_2 + 0x300);
  func_0x00010743b0a8(auStack_710,auStack_748);
  FUN_107483560(auStack_2e0,param_2 + 0x368);
  FUN_1074835f0(auStack_248,auStack_2e8);
  FUN_1073398d4(auStack_388,param_2 + 0x428);
  func_0x000107483538(auStack_348,auStack_388);
  FUN_10748d6fc(auStack_7d8,param_2 + 0x490);
  func_0x00010748d7a0(auStack_7a0,auStack_7d8);
  func_0x00010727d614(auStack_868,param_2 + 0x4f0);
  func_0x00010743b0a8(auStack_830,auStack_868);
  FUN_10749ef14(param_1,auStack_3e0,auStack_a0,auStack_480,auStack_520,auStack_5b0,auStack_618,
                auStack_148,auStack_680,auStack_710,auStack_248,auStack_348,auStack_7a0,auStack_830)
  ;
  func_0x000107410c2c(auStack_830);
  func_0x000107266a30(auStack_868);
  FUN_10748aa80(auStack_7a0);
  FUN_10748aaa4(auStack_7d8);
  FUN_107482af4(auStack_348);
  func_0x0001072ca524(auStack_388);
  func_0x000107482a54(auStack_248);
  func_0x0001072ca37c(auStack_2e0);
  func_0x0001074a00b4();
  func_0x000107266a30(auStack_748);
  func_0x000107410c2c(auStack_680);
  func_0x000107266a30(auStack_6b8);
  FUN_107482af4(auStack_148);
  func_0x0001072ca524(auStack_188);
  func_0x0001074982a0(auStack_618);
  func_0x0001072c9b9c(&uStack_628);
  func_0x000107410c2c(auStack_5b0);
  func_0x000107266a30(auStack_5e8);
  func_0x000107410c2c(auStack_520);
  func_0x000107266a30(auStack_558);
  func_0x00010749df9c(auStack_480);
  func_0x0001072dbce8(auStack_4c8);
  FUN_1074335c8(auStack_a0);
  FUN_107432d98(auStack_e8);
  func_0x000107410c2c(auStack_3e0);
  func_0x000107266a30(auStack_418);
  func_0x00010749fc74(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107266a30(auStack_868);
    FUN_10748aa80(auStack_7a0);
    FUN_10748aaa4(auStack_7d8);
    FUN_107482af4(auStack_348);
    func_0x0001072ca524(auStack_388);
    do {
      func_0x000107482a54(auStack_248);
      func_0x0001072ca37c(auStack_2e0);
      func_0x0001074a00b4();
      func_0x000107266a30(auStack_748);
      func_0x000107410c2c(auStack_680);
      func_0x000107266a30(auStack_6b8);
      FUN_107482af4(auStack_148);
      func_0x0001072ca524(auStack_188);
      func_0x0001074982a0(auStack_618);
      func_0x0001072c9b9c(&uStack_628);
      func_0x000107410c2c(auStack_5b0);
      func_0x000107266a30(auStack_5e8);
      func_0x000107410c2c(auStack_520);
      func_0x000107266a30(auStack_558);
      func_0x00010749df9c(auStack_480);
      func_0x0001072dbce8(auStack_4c8);
      FUN_1074335c8(auStack_a0);
      FUN_107432d98(auStack_e8);
      func_0x000107410c2c(auStack_3e0);
      func_0x000107266a30(auStack_418);
      func_0x00010749fd90();
    } while( true );
  }
  return;
}



/* Entry: 10749a2ac; end: 10749a2f3;  */

undefined8 * FUN_10749a2ac(undefined8 *param_1)

{
  FUN_107440dd8(param_1 + 0xbc);
  func_0x00010724e5f4(param_1 + 0xb9);
  func_0x00010749def4(param_1 + 0xad);
  func_0x0001073db5b8(param_1 + 0xa9);
  func_0x00010749df1c(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}


